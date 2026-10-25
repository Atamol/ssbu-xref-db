// addr:      710225b990
// offset:    0x225b990
// name:      FUN_710225b990
// mangled:   
// signature: undefined __cdecl FUN_710225b990(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


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
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_WIIFIT_STATUS_KIND_FINAL_END",(undefined **)0x1ee,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_WIIFIT_STATUS_KIND_NUM",(undefined **)0x1ef,param_4,
                 param_5,param_6,param_7,param_8);
  if ((local_78 != 0) && (local_70 != 0)) {
    FUN_71038f55d0(local_78,-3);
  }
  local_68 = 0xfffffffd;
  local_70 = 0;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PACMAN_STATUS_SPECIAL_N_WORK_FLAG_START",
                 (undefined **)0x2100000b,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PACMAN_STATUS_SPECIAL_N_WORK_FLAG_THROW",
                 (undefined **)0x2100000c,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PACMAN_STATUS_SPECIAL_N_WORK_FLAG_TERM",
                 (undefined **)0x2100000d,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PACMAN_STATUS_SPECIAL_N_WORK_INT_START",
                 (undefined **)0x11000004,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PACMAN_STATUS_SPECIAL_N_WORK_INT_CHARGE_FRAME",
                 (undefined **)0x11000005,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PACMAN_STATUS_SPECIAL_N_WORK_INT_TARGET_NUM",
                 (undefined **)0x11000006,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PACMAN_STATUS_SPECIAL_N_WORK_INT_MAX_HOLD_COUNT",
                 (undefined **)0x11000007,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PACMAN_STATUS_SPECIAL_N_WORK_INT_NEXT_STATUS",
                 (undefined **)0x11000008,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PACMAN_STATUS_SPECIAL_N_WORK_INT_TERM",
                 (undefined **)0x11000009,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PACMAN_STATUS_SPECIAL_N_WORK_FLOAT_START",
                 (undefined **)0x1000006,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PACMAN_STATUS_SPECIAL_N_WORK_FLOAT_TERM",
                 (undefined **)0x1000007,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"PACMAN_SPECIAL_N_ITEM_KIND_NUM",(undefined **)&DAT_00000008,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"PACMAN_SPECIAL_N_ITEM_MAX_NUM",(undefined **)0xa,param_4,param_5
                 ,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"PACMAN_SPECIAL_N_RANK_MIN",(undefined **)0x0,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"PACMAN_SPECIAL_N_RANK_MAX",(undefined **)&DAT_0000000c,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"PACMAN_SPECIAL_N_RANK_NUM",(undefined **)&DAT_0000000d,param_4,
                 param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PACMAN_STATUS_SPECIAL_HI_WORK_FLAG_START",
                 (undefined **)0x2100000b,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PACMAN_STATUS_SPECIAL_HI_WORK_FLAG_AIR",
                 (undefined **)0x2100000c,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PACMAN_STATUS_SPECIAL_HI_WORK_FLAG_TERM",
                 (undefined **)0x2100000d,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PACMAN_STATUS_SPECIAL_HI_WORK_INT_START",
                 (undefined **)0x11000004,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PACMAN_STATUS_SPECIAL_HI_WORK_INT_FRAME",
                 (undefined **)0x11000005,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PACMAN_STATUS_SPECIAL_HI_WORK_INT_TERM",
                 (undefined **)0x11000006,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PACMAN_STATUS_WORK_KEEP_SPECIAL_HI_FLAG",
                 (undefined **)&DAT_00001000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PACMAN_STATUS_WORK_KEEP_SPECIAL_HI_INT",
                 (undefined **)0x0,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PACMAN_STATUS_WORK_KEEP_SPECIAL_HI_FLOAT",
                 (undefined **)0x0,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"PACMAN_SPECIAL_S_PUT_ESA_NUM",(undefined **)0xa,param_4,param_5,
                 param_6,param_7,param_8);
  local_70 = 0;
  local_68 = -3;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PACMAN_STATUS_SPECIAL_S_WORK_FLAG_START",
                 (undefined **)0x2100000b,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PACMAN_STATUS_SPECIAL_S_WORK_FLAG_EAT_ESA_TOP",
                 (undefined **)0x2100000c,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PACMAN_STATUS_SPECIAL_S_WORK_FLAG_EAT_POWER_ESA",
                 (undefined **)0x2100000d,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PACMAN_STATUS_SPECIAL_S_WORK_FLAG_IS_POWER_ESA_GROUND",
                 (undefined **)0x2100000e,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PACMAN_STATUS_SPECIAL_S_WORK_FLAG_TERM",
                 (undefined **)0x2100000f,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PACMAN_STATUS_SPECIAL_S_WORK_INT_START",
                 (undefined **)0x11000004,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PACMAN_STATUS_SPECIAL_S_WORK_INT_CHARGE_FRAME",
                 (undefined **)0x11000005,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PACMAN_STATUS_SPECIAL_S_WORK_INT_ESA_INDEX",
                 (undefined **)0x11000006,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PACMAN_STATUS_SPECIAL_S_WORK_INT_EAT_ESA_INDEX",
                 (undefined **)0x11000007,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PACMAN_STATUS_SPECIAL_S_WORK_INT_DASH_FRAME",
                 (undefined **)0x11000008,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PACMAN_STATUS_SPECIAL_S_WORK_INT_DASH_MAX_FRAME",
                 (undefined **)0x11000009,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PACMAN_STATUS_SPECIAL_S_WORK_INT_ARMER_FRAME",
                 (undefined **)0x1100000a,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PACMAN_STATUS_SPECIAL_S_WORK_INT_TERM",
                 (undefined **)0x1100000b,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PACMAN_STATUS_SPECIAL_S_WORK_FLOAT_START",
                 (undefined **)0x1000006,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PACMAN_STATUS_SPECIAL_S_WORK_FLOAT_ROT",
                 (undefined **)0x1000007,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PACMAN_STATUS_SPECIAL_S_WORK_FLOAT_DASH_POWER",
                 (undefined **)0x1000008,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PACMAN_STATUS_SPECIAL_S_WORK_FLOAT_DASH_START_POS_Y",
                 (undefined **)0x1000009,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PACMAN_STATUS_SPECIAL_S_WORK_FLOAT_DASH_START_SPEED_Y",
                 (undefined **)0x100000a,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PACMAN_STATUS_SPECIAL_S_WORK_FLOAT_TOP_ESA_POS_X",
                 (undefined **)0x100000b,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PACMAN_STATUS_SPECIAL_S_WORK_FLOAT_TOP_ESA_POS_Y",
                 (undefined **)0x100000c,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PACMAN_STATUS_SPECIAL_S_WORK_FLOAT_MOVE_DISTANCE",
                 (undefined **)0x100000d,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PACMAN_STATUS_SPECIAL_S_WORK_FLOAT_DASH_FLASH_ALPHA",
                 (undefined **)0x100000e,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PACMAN_STATUS_SPECIAL_S_WORK_FLOAT_ESA_POS_X0",
                 (undefined **)&DAT_0100000f,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PACMAN_STATUS_SPECIAL_S_WORK_FLOAT_ESA_POS_X1",
                 (undefined **)0x1000010,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PACMAN_STATUS_SPECIAL_S_WORK_FLOAT_ESA_POS_X2",
                 (undefined **)0x1000011,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PACMAN_STATUS_SPECIAL_S_WORK_FLOAT_ESA_POS_X3",
                 (undefined **)0x1000012,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PACMAN_STATUS_SPECIAL_S_WORK_FLOAT_ESA_POS_X4",
                 (undefined **)0x1000013,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PACMAN_STATUS_SPECIAL_S_WORK_FLOAT_ESA_POS_X5",
                 (undefined **)0x1000014,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PACMAN_STATUS_SPECIAL_S_WORK_FLOAT_ESA_POS_X6",
                 (undefined **)0x1000015,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PACMAN_STATUS_SPECIAL_S_WORK_FLOAT_ESA_POS_X7",
                 (undefined **)0x1000016,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PACMAN_STATUS_SPECIAL_S_WORK_FLOAT_ESA_POS_X8",
                 (undefined **)&DAT_01000017,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PACMAN_STATUS_SPECIAL_S_WORK_FLOAT_ESA_POS_X9",
                 (undefined **)0x1000018,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PACMAN_STATUS_SPECIAL_S_WORK_FLOAT_ESA_POS_Y0",
                 (undefined **)0x1000019,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PACMAN_STATUS_SPECIAL_S_WORK_FLOAT_ESA_POS_Y1",
                 (undefined **)0x100001a,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PACMAN_STATUS_SPECIAL_S_WORK_FLOAT_ESA_POS_Y2",
                 (undefined **)0x100001b,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PACMAN_STATUS_SPECIAL_S_WORK_FLOAT_ESA_POS_Y3",
                 (undefined **)0x100001c,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PACMAN_STATUS_SPECIAL_S_WORK_FLOAT_ESA_POS_Y4",
                 (undefined **)0x100001d,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PACMAN_STATUS_SPECIAL_S_WORK_FLOAT_ESA_POS_Y5",
                 (undefined **)0x100001e,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PACMAN_STATUS_SPECIAL_S_WORK_FLOAT_ESA_POS_Y6",
                 (undefined **)0x100001f,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PACMAN_STATUS_SPECIAL_S_WORK_FLOAT_ESA_POS_Y7",
                 (undefined **)0x1000020,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PACMAN_STATUS_SPECIAL_S_WORK_FLOAT_ESA_POS_Y8",
                 (undefined **)0x1000021,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PACMAN_STATUS_SPECIAL_S_WORK_FLOAT_ESA_POS_Y9",
                 (undefined **)0x1000022,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PACMAN_STATUS_SPECIAL_S_WORK_FLOAT_TERM",
                 (undefined **)0x1000023,param_4,param_5,param_6,param_7,param_8);
  if ((local_78 != 0) && (local_70 != 0)) {
    FUN_71038f55d0(local_78,local_68);
  }
  local_68 = 0xfffffffd;
  local_70 = 0;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PACMAN_STATUS_SPECIAL_LW_FLAG_START",
                 (undefined **)0x2100000b,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PACMAN_STATUS_SPECIAL_LW_FLAG_FAILURE",
                 (undefined **)0x2100000c,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PACMAN_STATUS_SPECIAL_LW_FLAG_START_GROUND",
                 (undefined **)0x2100000d,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PACMAN_STATUS_SPECIAL_LW_FLAG_TERM",
                 (undefined **)0x2100000e,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PACMAN_STATUS_SPECIAL_LW_WORK_INT_START",
                 (undefined **)0x11000004,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PACMAN_STATUS_SPECIAL_LW_WORK_INT_TERM",
                 (undefined **)0x11000005,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PACMAN_STATUS_SPECIAL_LW_WORK_FLOAT_START",
                 (undefined **)0x1000006,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PACMAN_STATUS_SPECIAL_LW_WORK_FLOAT_TERM",
                 (undefined **)0x1000007,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PACMAN_STATUS_FINAL_FLAG_START",(undefined **)0x2100000b
                 ,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PACMAN_STATUS_FINAL_FLAG_CHANGE",
                 (undefined **)0x2100000c,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PACMAN_STATUS_FINAL_FLAG_START_MOVE",
                 (undefined **)0x2100000d,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PACMAN_STATUS_FINAL_FLAG_TERM",(undefined **)0x2100000e,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PACMAN_STATUS_FINAL_WORK_INT_START",
                 (undefined **)0x11000004,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PACMAN_STATUS_FINAL_WORK_INT_CAMERA_TYPE",
                 (undefined **)0x11000005,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PACMAN_STATUS_FINAL_WORK_INT_BIGPACMAN_ID",
                 (undefined **)0x11000006,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PACMAN_STATUS_FINAL_WORK_INT_TERM",
                 (undefined **)0x11000007,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PACMAN_STATUS_FINAL_WORK_FLOAT_START",
                 (undefined **)0x1000006,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PACMAN_STATUS_FINAL_WORK_FLOAT_START_POS_X",
                 (undefined **)0x1000007,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PACMAN_STATUS_FINAL_WORK_FLOAT_START_POS_Y",
                 (undefined **)0x1000008,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PACMAN_STATUS_FINAL_WORK_FLOAT_TERM",
                 (undefined **)0x1000009,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_STATUS_SPECIAL_N_FLAG_START",
                 (undefined **)0x2100000b,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_STATUS_SPECIAL_N_FLAG_START_ROTATION",
                 (undefined **)0x2100000c,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_STATUS_SPECIAL_N_FLAG_ROTATION",
                 (undefined **)0x2100000d,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_STATUS_SPECIAL_N_FLAG_END_ROTATION",
                 (undefined **)0x2100000e,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_STATUS_SPECIAL_N_FLAG_REQUEST_GRAVITY_DEFAULT",
                 (undefined **)0x2100000f,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_STATUS_SPECIAL_N_FLAG_GRAVITY_DEFAULT",
                 (undefined **)0x21000010,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_STATUS_SPECIAL_N_TERM",(undefined **)0x21000011,
                 param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = -3;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_STATUS_SPECIAL_S_FLAG_START",
                 (undefined **)0x2100000b,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_STATUS_SPECIAL_S_FLAG_MOVE_START",
                 (undefined **)0x2100000c,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_STATUS_SPECIAL_S_FLAG_MOVE",
                 (undefined **)0x2100000d,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_STATUS_SPECIAL_S_FLAG_MOVE_END",
                 (undefined **)0x2100000e,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_STATUS_SPECIAL_S_FLAG_CHECK_WALL_MOVE",
                 (undefined **)0x2100000f,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_STATUS_SPECIAL_S_FLAG_THROW_ROPE",
                 (undefined **)0x21000010,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_STATUS_SPECIAL_S_FLAG_THROW_ROPE_END",
                 (undefined **)0x21000011,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_STATUS_SPECIAL_S_FLAG_SHOULDER",
                 (undefined **)0x21000012,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_STATUS_SPECIAL_S_FLAG_LARIAT_AREA",
                 (undefined **)0x21000013,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_STATUS_SPECIAL_S_FLAG_LARIAT_END_AREA",
                 (undefined **)0x21000014,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_STATUS_SPECIAL_S_FLAG_FAILURE_AREA",
                 (undefined **)0x21000015,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_STATUS_SPECIAL_S_FLAG_HIT",
                 (undefined **)0x21000016,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_STATUS_SPECIAL_S_FLAG_SEND_HIT_EVENT",
                 (undefined **)0x21000017,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_STATUS_SPECIAL_S_FLAG_LARIAT_AREA_FIRST",
                 (undefined **)0x21000018,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_STATUS_SPECIAL_S_FLAG_DAMAGE_CUT",
                 (undefined **)0x21000019,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_STATUS_SPECIAL_S_FLAG_ENABLE_GRAVITY",
                 (undefined **)0x2100001a,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_STATUS_SPECIAL_S_WORK_ID_FLAG_AIR_CONTROL",
                 (undefined **)0x2100001b,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_STATUS_SPECIAL_S_CHECKED_FINISH_CAMERA",
                 (undefined **)0x2100001c,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_STATUS_SPECIAL_S_INT_START",
                 (undefined **)0x11000004,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_STATUS_SPECIAL_S_FLOAT_START",
                 (undefined **)0x1000006,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_STATUS_SPECIAL_S_FLOAT_ROPE_X",
                 (undefined **)0x1000007,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_STATUS_SPECIAL_S_FLOAT_ROPE_Y",
                 (undefined **)0x1000008,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_STATUS_SPECIAL_S_FLOAT_GAOGAEN_TARGET_X",
                 (undefined **)0x1000009,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_STATUS_SPECIAL_S_FLOAT_LARIAT_HIT_FRAME",
                 (undefined **)0x100000a,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_STATUS_SPECIAL_S_TERM",(undefined **)0x100000b,
                 param_4,param_5,param_6,param_7,param_8);
  if ((local_78 != 0) && (local_70 != 0)) {
    FUN_71038f55d0(local_78,local_68);
  }
  local_68 = 0xfffffffd;
  local_70 = 0;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_STATUS_SPECIAL_HI_FLAG_START",
                 (undefined **)0x21000011,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_STATUS_SPECIAL_HI_FLAG_START_AIR",
                 (undefined **)0x21000012,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_STATUS_SPECIAL_HI_FLAG_FALL_TYPE_CHECK",
                 (undefined **)0x21000013,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_STATUS_SPECIAL_HI_FLAG_FALL_TYPE_2",
                 (undefined **)0x21000014,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_STATUS_SPECIAL_HI_FLAG_BOUND_CLIFF_STOP",
                 (undefined **)0x21000015,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_STATUS_SPECIAL_HI_FLAG_DISABLE_OPPONENT_PASSIVE"
                 ,(undefined **)0x21000016,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_STATUS_SPECIAL_HI_FLAG_REVERSE_LR",
                 (undefined **)0x21000017,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_STATUS_SPECIAL_HI_INT_START",
                 (undefined **)0x11000008,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_STATUS_SPECIAL_HI_INT_FALL_HIT_COUNT",
                 (undefined **)0x11000009,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_STATUS_SPECIAL_HI_INT_FALL_HIT_OBJECT_ID",
                 (undefined **)0x1100000a,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_STATUS_SPECIAL_HI_TERM",(undefined **)0x1100000b
                 ,param_4,param_5,param_6,param_7,param_8);
  local_68 = 0xfffffffd;
  local_70 = 0;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_STATUS_SPECIAL_LW_FLAG_START",
                 (undefined **)0x2100000b,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_STATUS_SPECIAL_LW_FLAG_STANCE_START",
                 (undefined **)0x2100000c,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_STATUS_SPECIAL_LW_FLAG_STANCE",
                 (undefined **)0x2100000d,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_STATUS_SPECIAL_LW_FLAG_STANCE_END",
                 (undefined **)0x2100000e,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_STATUS_SPECIAL_LW_TERM",(undefined **)0x2100000f
                 ,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = -3;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_STATUS_FINAL_FLAG_START",
                 (undefined **)0x2100000b,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_STATUS_WORK_ID_FLAG_FINAL_READY",
                 (undefined **)0x2100000c,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_STATUS_WORK_ID_FLAG_FINAL_SUCCESS",
                 (undefined **)0x2100000d,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_STATUS_WORK_ID_FLAG_FINAL_ABS_SET",
                 (undefined **)0x2100000e,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_STATUS_WORK_ID_FLAG_FINAL_ABS_GET",
                 (undefined **)0x2100000f,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_STATUS_WORK_ID_FLAG_FINAL_ABS_HIT",
                 (undefined **)0x21000010,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_STATUS_WORK_ID_FLAG_FINAL_CLEAR_SLOW",
                 (undefined **)0x21000011,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_STATUS_WORK_ID_FLAG_FINAL_NO_DEAD_OFF",
                 (undefined **)0x21000012,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_STATUS_WORK_ID_FLAG_FINAL_INVISIBLE_ITEM_CURSOR"
                 ,(undefined **)0x21000013,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_STATUS_WORK_ID_FLAG_FINAL_STEREO_FADE_OUT_START"
                 ,(undefined **)0x21000014,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_STATUS_WORK_ID_FLAG_FINAL_STEREO_FADE_IN_START",
                 (undefined **)0x21000015,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_STATUS_WORK_ID_FLAG_FINAL_STEREO_FADE_FLAG",
                 (undefined **)0x21000016,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_STATUS_WORK_ID_FLAG_FINAL_END_GROUND_CORRECT_ON"
                 ,(undefined **)0x21000017,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,
                 (uint *)"FIGHTER_GAOGAEN_STATUS_WORK_ID_FLAG_FINAL_END_GROUND_CORRECT_SET",
                 (undefined **)0x21000018,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_STATUS_WORK_ID_FLAG_FINAL_SUCCESS_FRAME",
                 (undefined **)0x21000019,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_STATUS_WORK_ID_FLAG_FINAL_MOT_CHANGE",
                 (undefined **)0x2100001a,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_STATUS_WORK_ID_FLAG_FINAL_ZOOM_START",
                 (undefined **)0x2100001b,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_STATUS_WORK_ID_FLAG_FINAL_CLEAR_ATTACK",
                 (undefined **)0x2100001c,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_STATUS_WORK_ID_FLAG_FINAL_FOV_CHANGE",
                 (undefined **)0x2100001d,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_STATUS_WORK_ID_FLAG_FINAL_END_EXIT",
                 (undefined **)0x2100001e,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_STATUS_WORK_ID_FLAG_FINAL_END_EXIT_FINISH",
                 (undefined **)0x2100001f,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_STATUS_WORK_ID_FLAG_FINAL_SEARCH_END",
                 (undefined **)0x21000020,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_STATUS_FINAL_FLAG_TERM",(undefined **)0x21000021
                 ,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_STATUS_FINAL_WORK_INT_START",
                 (undefined **)0x11000004,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_STATUS_FINAL_WORK_INT_DASH_COUNT",
                 (undefined **)0x11000005,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_STATUS_FINAL_WORK_INT_DASH_CLIFF_CHECK_COUNT",
                 (undefined **)0x11000006,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_STATUS_WORK_ID_INT_FINAL_TASK_ID_COUNT",
                 (undefined **)0x11000007,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_STATUS_WORK_ID_INT_FINAL_COUNT",
                 (undefined **)0x11000008,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_STATUS_WORK_ID_INT_FINAL_END",
                 (undefined **)0x11000009,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_STATUS_FINAL_WORK_INT_TERM",
                 (undefined **)0x1100000a,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_STATUS_FINAL_WORK_FLOAT_START",
                 (undefined **)0x1000006,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_STATUS_WORK_ID_FLOAT_FINAL_PX",
                 (undefined **)0x1000007,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_STATUS_WORK_ID_FLOAT_FINAL_PY",
                 (undefined **)0x1000008,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_STATUS_WORK_ID_FLOAT_FINAL_LR",
                 (undefined **)0x1000009,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_STATUS_WORK_ID_FLOAT_FINAL_Z",
                 (undefined **)0x100000a,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,
                 (uint *)"FIGHTER_GAOGAEN_STATUS_WORK_ID_FLOAT_FINAL_FOV_RATE_SCENE_ATTACK",
                 (undefined **)0x100000b,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_STATUS_WORK_ID_FLOAT_FINAL_TRANS_MOVE_START_Y",
                 (undefined **)0x100000c,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,
                 (uint *)"FIGHTER_GAOGAEN_STATUS_WORK_ID_FLOAT_FINAL_TRANS_MOVE_POS_Y_PREV",
                 (undefined **)0x100000d,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_STATUS_WORK_ID_FLOAT_FINAL_TRANS_MOVE_Y_TOTAL",
                 (undefined **)0x100000e,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_STATUS_WORK_ID_FLOAT_FINAL_SCALE",
                 (undefined **)&DAT_0100000f,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_STATUS_WORK_ID_FLOAT_FINAL_OWNER_SCALE",
                 (undefined **)0x1000010,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_STATUS_FINAL_WORK_FLOAT_TERM",
                 (undefined **)0x1000011,param_4,param_5,param_6,param_7,param_8);
  if ((local_78 != 0) && (local_70 != 0)) {
    FUN_71038f55d0(local_78,local_68);
  }
  local_68 = 0xfffffffd;
  local_70 = 0;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_FINAL_TARGET_WORK_INT_START",
                 (undefined **)0x11000004,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_FINAL_TARGET_WORK_INT_PARENT_OBJECT_ID",
                 (undefined **)0x11000005,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_FINAL_TARGET_WORK_FLOAT_START",
                 (undefined **)0x1000006,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_FINAL_TARGET_WORK_FLOAT_SCALE",
                 (undefined **)0x1000007,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_FINAL_TARGET_FLAG_START",
                 (undefined **)0x2100000b,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_INSTANCE_WORK_ID_INT_START",
                 (undefined **)0x100000bd,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_INSTANCE_WORK_ID_INT_REVENGE_TIMER",
                 (undefined **)0x100000be,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_INSTANCE_WORK_ID_INT_BATTLE_OBJECT_ID_ROPE",
                 (undefined **)0x100000bf,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,
                 (uint *)
                 "FIGHTER_GAOGAEN_INSTANCE_WORK_ID_INT_BATTLE_OBJECT_ID_SWING_THROWN_FIGHTER",
                 (undefined **)0x100000c0,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,
                 (uint *)"FIGHTER_GAOGAEN_INSTANCE_WORK_ID_INT_SPECIAL_S_ROPE_CANCEL_FRAME",
                 (undefined **)0x100000c1,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_INSTANCE_WORK_ID_INT_BELT_FIRE_EFFECT_HANDLE",
                 (undefined **)0x100000c2,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,
                 (uint *)"FIGHTER_GAOGAEN_INSTANCE_WORK_ID_INT_ATTACK_HIT_REVENGE_ATTACK_NO",
                 (undefined **)0x100000c3,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_INSTANCE_WORK_ID_INT_WATER_FRAME",
                 (undefined **)0x100000c4,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_INSTANCE_WORK_ID_INT_TERM",
                 (undefined **)0x100000c5,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_INSTANCE_WORK_ID_FLOAT_START",
                 (undefined **)&DAT_0000004c,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_INSTANCE_WORK_ID_FLOAT_REVENGE_TOTAL_DAMAGE",
                 (undefined **)0x4d,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_INSTANCE_WORK_ID_FLOAT_REVENGE_RATE",
                 (undefined **)&DAT_0000004e,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_INSTANCE_WORK_ID_FLOAT_WEAPON_ROPE_BACK_METER",
                 (undefined **)0x4f,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,
                 (uint *)"FIGHTER_GAOGAEN_INSTANCE_WORK_ID_FLOAT_SPECIAL_S_LARIAT_AREA_HIT_POS_X",
                 (undefined **)&DAT_00000050,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,
                 (uint *)"FIGHTER_GAOGAEN_INSTANCE_WORK_ID_FLOAT_SPECIAL_S_LARIAT_BUTTON_PUSH_POS_X"
                 ,(undefined **)&DAT_00000051,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,
                 (uint *)"FIGHTER_GAOGAEN_INSTANCE_WORK_ID_FLOAT_SPECIAL_S_LARIAT_AREA_LENGTH",
                 (undefined **)&DAT_00000052,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_INSTANCE_WORK_ID_FLOAT_TERM",(undefined **)0x53,
                 param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_INSTANCE_WORK_ID_FLAG_START",
                 (undefined **)0x200000e0,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_INSTANCE_WORK_ID_FLAG_IS_FOLLOW_THROUGH",
                 (undefined **)0x200000e1,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_INSTANCE_WORK_ID_FLAG_IS_ATTACK_HIT",
                 (undefined **)0x200000e2,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_INSTANCE_WORK_ID_FLAG_IS_ATTACK_HIT_REVENGE",
                 (undefined **)0x200000e3,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,
                 (uint *)"FIGHTER_GAOGAEN_INSTANCE_WORK_ID_FLAG_IS_ATTACK_HIT_REVENGE_CONTINUE",
                 (undefined **)0x200000e4,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,
                 (uint *)"FIGHTER_GAOGAEN_INSTANCE_WORK_ID_FLAG_INVALID_SPECIAL_AIR_N_SPPED_Y",
                 (undefined **)0x200000e5,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,
                 (uint *)"FIGHTER_GAOGAEN_INSTANCE_WORK_ID_FLAG_INVALID_SPECIAL_AIR_LW_SPPED_Y",
                 (undefined **)0x200000e6,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_INSTANCE_WORK_ID_FLAG_INVALID_SPECIAL_AIR_S",
                 (undefined **)0x200000e7,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_INSTANCE_WORK_ID_FLAG_IS_REVENGE",
                 (undefined **)0x200000e8,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_INSTANCE_WORK_ID_FLAG_SPECIAL_HI_FALL",
                 (undefined **)0x200000e9,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_INSTANCE_WORK_ID_FLAG_SPECIAL_S_GENERATED_ROPE",
                 (undefined **)0x200000ea,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_INSTANCE_WORK_ID_FLAG_TERM",
                 (undefined **)0x200000eb,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = -3;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_REVENGE_STATUS_KIND_ATTACK",(undefined **)0x0,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_REVENGE_STATUS_KIND_ATTACK_DASH",
                 (undefined **)0x1,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_REVENGE_STATUS_KIND_ATTACK_S3",(undefined **)0x2
                 ,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_REVENGE_STATUS_KIND_ATTACK_HI3",
                 (undefined **)0x3,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_REVENGE_STATUS_KIND_ATTACK_LW3",
                 (undefined **)&DAT_00000004,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_REVENGE_STATUS_KIND_ATTACK_S4",(undefined **)0x5
                 ,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_REVENGE_STATUS_KIND_ATTACK_LW4",
                 (undefined **)0x6,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_REVENGE_STATUS_KIND_ATTACK_HI4",
                 (undefined **)&DAT_00000007,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_REVENGE_STATUS_KIND_ATTACK_AIR",
                 (undefined **)&DAT_00000008,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_REVENGE_STATUS_KIND_CATCH_ATTACK",
                 (undefined **)&DAT_00000009,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_REVENGE_STATUS_KIND_THROW",(undefined **)0xa,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_REVENGE_STATUS_KIND_ITEM_THROW",
                 (undefined **)0xb,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_REVENGE_STATUS_KIND_ITEM_SWING",
                 (undefined **)&DAT_0000000c,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_REVENGE_STATUS_KIND_SPECIAL_N",
                 (undefined **)&DAT_0000000d,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_REVENGE_STATUS_KIND_SPECIAL_S",
                 (undefined **)&DAT_0000000e,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_REVENGE_STATUS_KIND_SPECIAL_HI",
                 (undefined **)&DAT_0000000f,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_REVENGE_STATUS_KIND_FINAL",
                 (undefined **)&DAT_00000010,param_4,param_5,param_6,param_7,param_8);
  if ((local_78 != 0) && (local_70 != 0)) {
    FUN_71038f55d0(local_78,local_68);
  }
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_SEARCH_NO_SPECIAL_S_LARIAT",(undefined **)0x0,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_SEARCH_NO_SPECIAL_S_LARIAT_END",
                 (undefined **)0x1,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_SEARCH_NO_SPECIAL_S_FAILURE",(undefined **)0x2,
                 param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_CLIFF_HANG_DATA_DEFAULT",(undefined **)0x0,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_CLIFF_HANG_DATA_SPECIAL_S",(undefined **)0x1,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_CLIFF_HANG_DATA_SPECIAL_HI",(undefined **)0x2,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_CLIFF_HANG_DATA_SPECIAL_HI_BOUND_CLIFF_CHECK",
                 (undefined **)0x3,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_CLIFF_HANG_DATA_TERM",
                 (undefined **)&DAT_00000004,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = -3;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_LINK_NO_PRE_START",(undefined **)0xb,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_LINK_NO_FINAL_TARGET_START",
                 (undefined **)&DAT_0000000c,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_LINK_NO_FINAL_TARGET_0",
                 (undefined **)&DAT_0000000c,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_LINK_NO_FINAL_TARGET_1",
                 (undefined **)&DAT_0000000d,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_LINK_NO_FINAL_TARGET_2",
                 (undefined **)&DAT_0000000e,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_LINK_NO_FINAL_TARGET_3",
                 (undefined **)&DAT_0000000f,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_LINK_NO_FINAL_TARGET_4",
                 (undefined **)&DAT_00000010,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_LINK_NO_FINAL_TARGET_5",
                 (undefined **)&DAT_00000011,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_LINK_NO_FINAL_TARGET_6",
                 (undefined **)&DAT_00000012,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_LINK_NO_FINAL_TARGET_7",
                 (undefined **)&DAT_00000013,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_LINK_NO_FINAL_TARGET_8",
                 (undefined **)&DAT_00000014,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_LINK_NO_FINAL_TARGET_9",
                 (undefined **)&DAT_00000015,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_LINK_NO_FINAL_TARGET_10",(undefined **)0x16,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_LINK_NO_FINAL_TARGET_11",(undefined **)0x17,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_LINK_NO_FINAL_TARGET_12",
                 (undefined **)&SUB_00000018,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_LINK_NO_FINAL_TARGET_13",
                 (undefined **)&DAT_00000019,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_LINK_NO_FINAL_TARGET_14",
                 (undefined **)&DAT_0000001a,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_LINK_NO_FINAL_TARGET_15",
                 (undefined **)&DAT_0000001b,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_LINK_NO_FINAL_TARGET_END",
                 (undefined **)&DAT_0000001c,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAOGAEN_LINK_NO_TERM",(undefined **)&DAT_0000001c,
                 param_4,param_5,param_6,param_7,param_8);
  if ((local_78 != 0) && (local_70 != 0)) {
    FUN_71038f55d0(local_78,local_68);
  }
  local_68 = 0xfffffffd;
  local_70 = 0;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_ATTACK_ABSOLUTE_KIND_GAOGAEN_FINAL",(undefined **)0x0,
                 param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_ROBOT_STATUS_KIND_PREV",(undefined **)&DAT_000001e0,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_ROBOT_STATUS_KIND_SPECIAL_S_ATTACK",(undefined **)0x1e1,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_ROBOT_STATUS_KIND_SPECIAL_S_END",
                 (undefined **)&DAT_000001e2,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_ROBOT_STATUS_KIND_SPECIAL_HI_KEEP",(undefined **)0x1e3,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_ROBOT_STATUS_KIND_SPECIAL_HI_ATTACK",(undefined **)0x1e4
                 ,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_ROBOT_STATUS_KIND_SPECIAL_HI_ITEM_THROW",
                 (undefined **)0x1e5,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_ROBOT_STATUS_KIND_SPECIAL_HI_ITEM_SHOOT_AIR",
                 (undefined **)0x1e6,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_ROBOT_STATUS_KIND_SPECIAL_LW_HOLD",(undefined **)0x1e7,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_ROBOT_STATUS_KIND_SPECIAL_LW_END",
                 (undefined **)&DAT_000001e8,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_ROBOT_STATUS_KIND_FINAL_LOOP",(undefined **)0x1e9,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_ROBOT_STATUS_KIND_FINAL_END",(undefined **)0x1ea,param_4
                 ,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_ROBOT_STATUS_KIND_NUM",(undefined **)0x1eb,param_4,
                 param_5,param_6,param_7,param_8);
  local_68 = 0xfffffffd;
  local_70 = 0;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_LUA_SCRIPT_STATUS_FUNC_STATUS_SETTING",
                 (undefined **)&DAT_00000011,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LUA_SCRIPT_STATUS_FUNC_STATUS",(undefined **)&DAT_00000012,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LUA_SCRIPT_STATUS_FUNC_STATUS_COROUTINE",
                 (undefined **)&DAT_00000013,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LUA_SCRIPT_STATUS_FUNC_TERM",(undefined **)&DAT_00000014,
                 param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = -3;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_INVALID",(undefined **)0xfffffd03,param_4,param_5
                 ,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_NONE",(undefined **)&DAT_ffffffff,param_4,param_5
                 ,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_AUTO",(undefined **)&DAT_ffffffff,param_4,param_5
                 ,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_TABEMONO_OFFSET",(undefined **)&DAT_ffffffff,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_TABEMONO_CHERRIES",(undefined **)0x0,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_TABEMONO_PEAR",(undefined **)0x1,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_TABEMONO_MILK",(undefined **)0x2,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_TABEMONO_PANCAKE",(undefined **)0x3,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_TABEMONO_TEA",(undefined **)&DAT_00000004,param_4
                 ,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_TABEMONO_COLA",(undefined **)0x5,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_TABEMONO_SHORTCAKE",(undefined **)0x6,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_TABEMONO_EBITEN",(undefined **)&DAT_00000007,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_TABEMONO_KUSHIYAKI",(undefined **)&DAT_00000008,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_TABEMONO_HAMBURGERSTEAK",
                 (undefined **)&DAT_00000009,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_TABEMONO_TENSHIN",(undefined **)0xa,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_TABEMONO_HOTDOG",(undefined **)0xb,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_TABEMONO_CORNPOTAGE",(undefined **)&DAT_0000000c,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_TABEMONO_CHERRYPIE",(undefined **)&DAT_0000000d,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_TABEMONO_CHOCOLATE",(undefined **)&DAT_0000000e,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_TABEMONO_POPCORN",(undefined **)&DAT_0000000f,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_TABEMONO_SALAD",(undefined **)&DAT_00000010,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_TABEMONO_KIWI",(undefined **)&DAT_00000011,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_TABEMONO_MONTBLANC",(undefined **)&DAT_00000012,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_TABEMONO_PAN",(undefined **)&DAT_00000013,param_4
                 ,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_TABEMONO_RICEBALL",(undefined **)&DAT_00000014,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_TABEMONO_PASTA",(undefined **)&DAT_00000015,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_TABEMONO_GRAPE",(undefined **)0x16,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_TABEMONO_CANDY",(undefined **)0x17,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_TABEMONO_LEMON",(undefined **)&SUB_00000018,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_TABEMONO_FRIEDEGG",(undefined **)&DAT_00000019,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_TABEMONO_APPLE",(undefined **)&DAT_0000001a,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_TABEMONO_ROASTCHICKEN",
                 (undefined **)&DAT_0000001b,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_TABEMONO_STEAK",(undefined **)&DAT_0000001c,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_TABEMONO_STEAMEDBUN",(undefined **)&DAT_0000001d,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_TABEMONO_PIZZA",(undefined **)&DAT_0000001e,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_TABEMONO_HAMBURGER",(undefined **)0x1f,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_TABEMONO_PINEAPPLE",(undefined **)&SUB_00000020,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_TABEMONO_DONUT",(undefined **)&DAT_00000021,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_TABEMONO_CHEESE",(undefined **)&DAT_00000022,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_TABEMONO_FRANKFURTER",(undefined **)0x23,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_TABEMONO_PEACH",(undefined **)&DAT_00000024,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_TABEMONO_DAISY",(undefined **)&DAT_00000025,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_TABEMONO_GAMEWATCHAPPLE",
                 (undefined **)&DAT_00000026,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_TABEMONO_NORMAL_TERM",(undefined **)&DAT_00000024
                 ,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_BOX_OFFSET",(undefined **)&DAT_ffffffff,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_BOX_WOOD",(undefined **)0x0,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_BOX_FUTURE",(undefined **)0x1,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_BOX_PRESENT",(undefined **)0x2,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_BOX_TERM",(undefined **)0x3,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_CARRIERBOX_OFFSET",(undefined **)&DAT_ffffffff,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_CARRIERBOX_WOOD",(undefined **)0x0,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_CARRIERBOX_FUTURE",(undefined **)0x1,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_CARRIERBOX_PRESENT",(undefined **)0x2,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_CARRIERBOX_TERM",(undefined **)0x3,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_HEART_OFFSET",(undefined **)&DAT_ffffffff,param_4
                 ,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_HEART_NORMAL",(undefined **)0x0,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_HEART_FULL",(undefined **)0x1,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_HEART_TERM",(undefined **)0x2,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_BARREL_OFFSET",(undefined **)&DAT_ffffffff,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_BARREL_WOOD",(undefined **)0x0,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_BARREL_FUTURE",(undefined **)0x1,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_BARREL_PRESENT",(undefined **)0x2,param_4,param_5
                 ,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_BARREL_TERM",(undefined **)0x3,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_DRAGOON_OFFSET",(undefined **)&DAT_ffffffff,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_DRAGOON_PARTS_A",(undefined **)0x0,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_DRAGOON_PARTS_B",(undefined **)0x1,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_DRAGOON_PARTS_C",(undefined **)0x2,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_DRAGOON_TERM",(undefined **)0x3,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_GENESIS_OFFSET",(undefined **)&DAT_ffffffff,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_GENESIS_PARTS_A",(undefined **)0x0,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_GENESIS_PARTS_B",(undefined **)0x1,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_GENESIS_PARTS_C",(undefined **)0x2,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_GENESIS_TERM",(undefined **)0x3,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_PEACHDAIKON_OFFSET",(undefined **)&DAT_ffffffff,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_PEACHDAIKON_1",(undefined **)0x0,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_PEACHDAIKON_2",(undefined **)0x1,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_PEACHDAIKON_3",(undefined **)0x2,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_PEACHDAIKON_4",(undefined **)0x3,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_PEACHDAIKON_5",(undefined **)&DAT_00000004,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_PEACHDAIKON_6",(undefined **)0x5,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_PEACHDAIKON_7",(undefined **)0x6,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_PEACHDAIKON_8",(undefined **)&DAT_00000007,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_PEACHDAIKON_TERM",(undefined **)&DAT_00000008,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_DAISYDAIKON_OFFSET",(undefined **)&DAT_ffffffff,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_DAISYDAIKON_1",(undefined **)0x0,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_DAISYDAIKON_2",(undefined **)0x1,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_DAISYDAIKON_3",(undefined **)0x2,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_DAISYDAIKON_4",(undefined **)0x3,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_DAISYDAIKON_5",(undefined **)&DAT_00000004,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_DAISYDAIKON_6",(undefined **)0x5,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_DAISYDAIKON_7",(undefined **)0x6,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_DAISYDAIKON_8",(undefined **)&DAT_00000007,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_DAISYDAIKON_TERM",(undefined **)&DAT_00000008,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_ST_FRUIT_OFFSET",(undefined **)&DAT_ffffffff,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_ST_FRUIT_APPLE",(undefined **)0x0,param_4,param_5
                 ,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_ST_FRUIT_DELICIOUS_APPLE",(undefined **)0x1,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_ST_FRUIT_PEAR",(undefined **)0x2,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_ST_FRUIT_DELICIOUS_PEAR",(undefined **)0x3,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_ST_FRUIT_ORANGE",(undefined **)&DAT_00000004,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_ST_FRUIT_DELICIOUS_ORANGE",(undefined **)0x5,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_ST_FRUIT_PEACH",(undefined **)0x6,param_4,param_5
                 ,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_ST_FRUIT_DELICIOUS_PEACH",
                 (undefined **)&DAT_00000007,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_ST_FRUIT_CHERRY",(undefined **)&DAT_00000008,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_ST_FRUIT_DELICIOUS_CHERRY",
                 (undefined **)&DAT_00000009,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_ST_FRUIT_LEMON",(undefined **)0xa,param_4,param_5
                 ,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_ST_FRUIT_MANGO",(undefined **)0xb,param_4,param_5
                 ,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_ST_FRUIT_LYCHEE",(undefined **)&DAT_0000000c,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_ST_FRUIT_BANANA",(undefined **)&DAT_0000000d,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_ST_FRUIT_TERM",(undefined **)&DAT_0000000e,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_ST_FRUITBOMB_OFFSET",(undefined **)&DAT_ffffffff,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_ST_FRUITBOMB_DURIAN",(undefined **)0x0,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_ST_FRUITBOMB_COCONUT",(undefined **)0x1,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_ST_FRUITBOMB_TERM",(undefined **)0x2,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_PELLET_OFFSET",(undefined **)&DAT_ffffffff,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_PELLET_RED1",(undefined **)0x0,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_PELLET_RED5",(undefined **)0x1,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_PELLET_RED10",(undefined **)0x2,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_PELLET_RED20",(undefined **)0x3,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_PELLET_BLUE1",(undefined **)&DAT_00000004,param_4
                 ,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_PELLET_BLUE5",(undefined **)0x5,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_PELLET_BLUE10",(undefined **)0x6,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_PELLET_BLUE20",(undefined **)&DAT_00000007,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_PELLET_YELLOW1",(undefined **)&DAT_00000008,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_PELLET_YELLOW5",(undefined **)&DAT_00000009,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_PELLET_YELLOW10",(undefined **)0xa,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_PELLET_YELLOW20",(undefined **)0xb,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_PELLET_TERM",(undefined **)&DAT_0000000c,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_PELLET_RED_BEGIN",(undefined **)0x0,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_PELLET_RED_END",(undefined **)&DAT_00000004,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_PELLET_BLUE_BEGIN",(undefined **)&DAT_00000004,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_PELLET_BLUE_END",(undefined **)&DAT_00000008,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_PELLET_YELLOW_BEGIN",(undefined **)&DAT_00000008,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_PELLET_YELLOW_END",(undefined **)&DAT_0000000c,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_BOMBHEI_OFFSET",(undefined **)&DAT_ffffffff,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_BOMBHEI_NORMAL",(undefined **)0x0,param_4,param_5
                 ,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_BOMBHEI_SUDDENDEATH",(undefined **)0x1,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_BOMBHEI_TIMEBOMB",(undefined **)0x2,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_BOMBHEI_EVENT",(undefined **)0x3,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_BOMBHEI_ADVENTURE",(undefined **)&DAT_00000004,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_BOMBHEI_TERM",(undefined **)0x5,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_SMARTBOMB_OFFSET",(undefined **)&DAT_ffffffff,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_SMARTBOMB_NORMAL",(undefined **)0x0,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_SMARTBOMB_FINALSTAGE",(undefined **)0x1,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_SMARTBOMB_EVENTSTAGE",(undefined **)0x2,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_SMARTBOMB_PLAYABLEROLL",(undefined **)0x3,param_4
                 ,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_SMARTBOMB_TERM",(undefined **)&DAT_00000004,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_CROSSBOMB_OFFSET",(undefined **)&DAT_ffffffff,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_CROSSBOMB_NORMAL",(undefined **)0x0,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_CROSSBOMB_PLAYABLEROLL",(undefined **)0x1,param_4
                 ,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_CROSSBOMB_TERM",(undefined **)0x2,param_4,param_5
                 ,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_MURABITOFRUIT_OFFSET",(undefined **)&DAT_ffffffff
                 ,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_MURABITOFRUIT_APPLE",(undefined **)0x0,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_MURABITOFRUIT_PEAR",(undefined **)0x1,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_MURABITOFRUIT_PEACH",(undefined **)0x2,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_MURABITOFRUIT_ORANGE",(undefined **)0x3,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_MURABITOFRUIT_CHERRY",(undefined **)&DAT_00000004
                 ,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_MURABITOFRUIT_TERM",(undefined **)0x5,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_ROBOTGYRO_OFFSET",(undefined **)&DAT_ffffffff,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_ROBOTGYRO_1P",(undefined **)0x0,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_ROBOTGYRO_2P",(undefined **)0x1,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_ROBOTGYRO_3P",(undefined **)0x2,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_ROBOTGYRO_4P",(undefined **)0x3,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_ROBOTGYRO_5P",(undefined **)&DAT_00000004,param_4
                 ,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_ROBOTGYRO_6P",(undefined **)0x5,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_ROBOTGYRO_7P",(undefined **)0x6,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_ROBOTGYRO_8P",(undefined **)&DAT_00000007,param_4
                 ,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_ROBOTGYRO_TERM",(undefined **)&DAT_00000008,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_ST_ICE_YASAI_OFFSET",(undefined **)&DAT_ffffffff,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_ST_ICE_YASAI_CORN",(undefined **)0x0,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_ST_ICE_YASAI_HAKUSAI",(undefined **)0x1,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_ST_ICE_YASAI_POTATO",(undefined **)0x2,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_ST_ICE_YASAI_PUMPKIN",(undefined **)0x3,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_ST_ICE_YASAI_TURNIP",(undefined **)&DAT_00000004,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_ST_ICE_YASAI_MUSHROOM",(undefined **)0x5,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_ST_ICE_YASAI_CABBAGE",(undefined **)0x6,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_ST_ICE_YASAI_CUCUMBER",
                 (undefined **)&DAT_00000007,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_ST_ICE_YASAI_EGGPLANT",
                 (undefined **)&DAT_00000008,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_ST_ICE_YASAI_CARROT",(undefined **)&DAT_00000009,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_ST_ICE_YASAI_TERM",(undefined **)0xa,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_PITFALL_OFFSET",(undefined **)&DAT_ffffffff,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_PITFALL_NORMAL",(undefined **)0x0,param_4,param_5
                 ,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_PITFALL_LIOLEUS",(undefined **)0x1,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_PITFALL_TERM",(undefined **)0x2,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_DEKU_OFFSET",(undefined **)&DAT_ffffffff,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_DEKU_NORMAL",(undefined **)0x0,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_DEKU_LIOLEUS",(undefined **)0x1,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_DEKU_TERM",(undefined **)0x2,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_ROCKETBELT_OFFSET",(undefined **)&DAT_ffffffff,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_ROCKETBELT_NORMAL",(undefined **)0x0,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_ROCKETBELT_ADVENTURE",(undefined **)0x1,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_ROCKETBELT_TERM",(undefined **)0x2,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_HAMMER_OFFSET",(undefined **)&DAT_ffffffff,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_HAMMER_NORMAL",(undefined **)0x0,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_HAMMER_NO_HAZURE",(undefined **)0x1,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_HAMMER_TERM",(undefined **)0x2,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_BOSS_COMMON_OFFSET",(undefined **)&DAT_ffffffff,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_BOSS_COMMON_STANDARD",(undefined **)0x0,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_BOSS_COMMON_TERM",(undefined **)0x1,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_MASTERHAND_OFFSET",(undefined **)0x0,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_MASTERHAND_CRAZYHAND_STANDARD",(undefined **)0x1,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_MASTERHAND_ADVENTURE1",(undefined **)0x2,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_MASTERHAND_ADVENTURE2",(undefined **)0x3,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_MASTERHAND_ADVENTURE3",
                 (undefined **)&DAT_00000004,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_MASTERHAND_TERM",(undefined **)0x5,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_CRAZYHAND_OFFSET",(undefined **)0x0,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_CRAZYHAND_MASTERHAND_STANDARD",(undefined **)0x1,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_CRAZYHAND_ADVENTURE1",(undefined **)0x2,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_CRAZYHAND_ADVENTURE2",(undefined **)0x3,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_CRAZYHAND_ADVENTURE3",(undefined **)&DAT_00000004
                 ,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_CRAZYHAND_TERM",(undefined **)0x5,param_4,param_5
                 ,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_DRACULA_OFFSET",(undefined **)0x0,param_4,param_5
                 ,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_DRACULA_SOLO_DEBUG",(undefined **)0x1,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_DRACULA_TERM",(undefined **)0x2,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_MARX_PLANT_BODY_OFFSET",
                 (undefined **)&DAT_ffffffff,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_MARXPLANTBODY_MARXPLANTBODY_1",(undefined **)0x0,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_MARXPLANTBODY_MARXPLANTBODY_2",(undefined **)0x1,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_MARXPLANTBODY_MARXPLANTBODY_3",(undefined **)0x2,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_MARX_PLANT_BODY_TERM",(undefined **)0x3,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_KIILA_OFFSET",(undefined **)0x0,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_KIILA_LIGHTMAP",(undefined **)0x1,param_4,param_5
                 ,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_KIILA_FINALMAP",(undefined **)0x2,param_4,param_5
                 ,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_KIILA_DARZ",(undefined **)0x3,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_KIILA_TERM",(undefined **)&DAT_00000004,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_DARZ_OFFSET",(undefined **)0x0,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_DARZ_DARKMAP",(undefined **)0x1,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_DARZ_FINALMAP",(undefined **)0x2,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_DARZ_KIILA",(undefined **)0x3,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_DARZ_TERM",(undefined **)&DAT_00000004,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_PLAYABLE_MASTERHAND_OFFSET",(undefined **)0x0,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_PLAYABLE_MASTERHAND_BONUS",(undefined **)0x1,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_PLAYABLE_MASTERHAND_KUMITE",(undefined **)0x2,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VARIATION_PLAYABLE_MASTERHAND_TERM",(undefined **)0x3,
                 param_4,param_5,param_6,param_7,param_8);
  if ((local_78 != 0) && (local_70 != 0)) {
    FUN_71038f55d0(local_78,local_68);
  }
  local_68 = -3;
  local_70 = 0;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_FLOAT_PRE_START",(undefined **)&DAT_ffffffff,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_FLOAT_LANDING_FRAME",(undefined **)0x0,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_FLOAT_VALUE_1",(undefined **)0x1,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_FLOAT_VALUE_2",(undefined **)0x2,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_FLOAT_VALUE_3",(undefined **)0x3,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_FLOAT_VALUE_4",(undefined **)&DAT_00000004,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_FLOAT_VALUE_5",(undefined **)0x5,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_FLOAT_VALUE_6",(undefined **)0x6,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_FLOAT_VALUE_7",(undefined **)&DAT_00000007,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_FLOAT_VALUE_8",(undefined **)&DAT_00000008,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_FLOAT_HP",(undefined **)&DAT_00000009,param_4
                 ,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_FLOAT_HP_MAX",(undefined **)0xa,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_FLOAT_TARGET_POS_X",(undefined **)0xb,param_4
                 ,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_FLOAT_TARGET_POS_Y",
                 (undefined **)&DAT_0000000c,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_FLOAT_TARGET_POS_Z",
                 (undefined **)&DAT_0000000d,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_FLOAT_SCALE_ANIM_MIN",
                 (undefined **)&DAT_0000000e,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_FLOAT_SCALE_ANIM_MAX",
                 (undefined **)&DAT_0000000f,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_FLOAT_SCALE_ANIM_NOW",
                 (undefined **)&DAT_00000010,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_FLOAT_BASE_SCALE",(undefined **)&DAT_00000011
                 ,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_FLOAT_INHALED_COUNT",
                 (undefined **)&DAT_00000012,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_FLOAT_EQUIPMENT_FRAME",
                 (undefined **)&DAT_00000013,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_FLOAT_POWER_UP_THROW",
                 (undefined **)&DAT_00000014,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_FLOAT_POWER_UP_SHOOT",
                 (undefined **)&DAT_00000015,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_FLOAT_POWER_UP_ASSIST",(undefined **)0x16,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_FLOAT_POWER_UP_POKEMON",(undefined **)0x17,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_FLOAT_DAMAGE_REACTION_MUL",
                 (undefined **)&SUB_00000018,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_FLOAT_DAMAGE_SPEED_MUL",
                 (undefined **)&DAT_00000019,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_FLOAT_DAMAGE_BRAKE_MUL_GROUND",
                 (undefined **)&DAT_0000001a,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_FLOAT_DAMAGE_BRAKE_MUL_AIR",
                 (undefined **)&DAT_0000001b,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_FLOAT_HIT_EFFECT_SCALE_MUL",
                 (undefined **)&DAT_0000001c,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_FLOAT_BULLET_MUL",(undefined **)&DAT_0000001d
                 ,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_FLOAT_BULLET_FLOAT",
                 (undefined **)&DAT_0000001e,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_FLOAT_LEVEL",(undefined **)0x1f,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_FLOAT_STRENGTH",(undefined **)&SUB_00000020,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_FLOAT_DOWN_DAMAGE_MUL",
                 (undefined **)&DAT_00000021,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_FLOAT_DAMAGE_MAX",(undefined **)&DAT_00000022
                 ,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_FLOAT_KIILADARZ_ATTACK_MUL",
                 (undefined **)0x23,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_FLOAT_AI_VALUE_1",(undefined **)&DAT_00000024
                 ,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_FLOAT_AI_VALUE_2",(undefined **)&DAT_00000025
                 ,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_FLOAT_DAMAGE_MUL",(undefined **)&DAT_00000026
                 ,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_FLOAT_ADDITIONAL_HP_MUL",(undefined **)0x27,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_FLOAT_TERM",(undefined **)&DAT_00000028,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_FLOAT_NUM",(undefined **)&DAT_00000028,
                 param_4,param_5,param_6,param_7,param_8);
  if ((local_78 != 0) && (local_70 != 0)) {
    FUN_71038f55d0(local_78,local_68);
  }
  local_68 = -3;
  local_70 = 0;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_INT_PRE_START",(undefined **)0xfffffff,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_INT_VALUE_1",(undefined **)0x10000000,param_4
                 ,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_INT_VALUE_2",(undefined **)0x10000001,param_4
                 ,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_INT_VALUE_3",(undefined **)0x10000002,param_4
                 ,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_INT_VALUE_4",(undefined **)0x10000003,param_4
                 ,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_INT_VALUE_5",(undefined **)0x10000004,param_4
                 ,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_INT_VALUE_6",(undefined **)0x10000005,param_4
                 ,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_INT_VALUE_7",(undefined **)0x10000006,param_4
                 ,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_INT_VALUE_8",(undefined **)0x10000007,param_4
                 ,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_INT_HAVE_NODE_HASH",(undefined **)0x10000008,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_INT_TRAIT_FLAG",(undefined **)0x10000009,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_INT_VARIATION",(undefined **)0x1000000a,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_INT_LIFE_TIME",(undefined **)0x1000000b,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_INT_LIFE_TIME_MAX",(undefined **)0x1000000c,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_INT_LIFE_TIME_EDITSTAGE",
                 (undefined **)0x1000000d,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_INT_LIFE_TIME_FORCE_COUNTER1",
                 (undefined **)0x1000000e,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_INT_LIFE_TIME_FORCE_COUNTER2",
                 (undefined **)0x1000000f,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_INT_NO_DAMAGE_FRAME",(undefined **)0x10000010
                 ,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_INT_NO_PICKUP_FRAME",(undefined **)0x10000011
                 ,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_INT_COUNTER",(undefined **)0x10000012,param_4
                 ,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_INT_COUNTER_2",(undefined **)0x10000013,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_INT_COUNTER_3",(undefined **)0x10000014,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_INT_BOMB_COUNTER",(undefined **)0x10000015,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_INT_BOMB_COUNTER_MAX",
                 (undefined **)0x10000016,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_INT_MESSAGE",(undefined **)0x10000017,param_4
                 ,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_INT_BULLET",(undefined **)0x10000018,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_INT_PUT_IN_POCKET_COUNT",
                 (undefined **)0x10000019,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_INT_NO_GROUND_DAMAGE_FRAME",
                 (undefined **)0x1000001a,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_INT_NO_GROUND_DAMAGE_FRAME_MAX",
                 (undefined **)0x1000001b,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_INT_GROUND_DAMAGE_COUNT",
                 (undefined **)0x1000001c,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_INT_SCALE_ANIM_TYPE",(undefined **)0x1000001d
                 ,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_INT_SCALE_ANIM_COUNTER",
                 (undefined **)0x1000001e,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_INT_SCALE_ANIM_NODE_HASH",
                 (undefined **)0x1000001f,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_INT_SCALE_ANIM_COUNTER_LIMIT",
                 (undefined **)0x10000020,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_INT_TARGET_TASK_ID",(undefined **)0x10000021,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_INT_HIT_KIND",(undefined **)0x10000022,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_INT_HIT_EFFECT_KIND",(undefined **)0x10000023
                 ,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_INT_SYSTEM_SEARCH_DETECT_TYPE",
                 (undefined **)0x10000024,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_INT_BOUND_FLAG",(undefined **)0x10000025,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_INT_BOUND_COUNT",(undefined **)0x10000026,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_INT_SE_BOUND_HASH",(undefined **)0x10000027,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_INT_SE_WATER_HASH",(undefined **)0x10000028,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_INT_SE_LOST_HASH",(undefined **)0x10000029,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_INT_THROW_FRAME",(undefined **)0x1000002a,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_INT_ATTACK_SERIAL_ID",
                 (undefined **)0x1000002b,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_INT_ATTACK_KIND",(undefined **)0x1000002c,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_INT_HAVE_COUNT",(undefined **)0x1000002d,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_INT_THROW_COUNT",(undefined **)0x1000002e,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_INT_HIT_COUNT",(undefined **)0x1000002f,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_INT_HIT_STOP_ATTACK_SUSPEND_FRAME",
                 (undefined **)0x10000030,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_INT_TRACKING_COUNTER",
                 (undefined **)0x10000031,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_INT_INK_COLOR",(undefined **)0x10000032,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_INT_ATTACKER_ATTRIBUTE",
                 (undefined **)0x10000033,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_INT_FORCE_REMOVE_COUNTER",
                 (undefined **)0x10000034,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_INT_IGNORE_CAPTURE_COUNT",
                 (undefined **)0x10000035,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_INT_THROWN_MOTION_HASH",
                 (undefined **)0x10000036,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_INT_BOSS_MODE",(undefined **)0x10000037,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_INT_ADVENTURE_ROUND",(undefined **)0x10000038
                 ,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_INT_PARAMETER_ITEM_KIND",
                 (undefined **)0x10000039,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_INT_AI_VALUE_1",(undefined **)0x1000003a,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_INT_TERM",(undefined **)0x1000003b,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_INT_NUM",(undefined **)0x3b,param_4,param_5,
                 param_6,param_7,param_8);
  if ((local_78 != 0) && (local_70 != 0)) {
    FUN_71038f55d0(local_78,local_68);
  }
  local_70 = 0;
  local_68 = -3;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_FLAG_PRE_START",(undefined **)0x1fffffff,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_FLAG_VALUE_1",(undefined **)0x20000000,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_FLAG_VALUE_2",(undefined **)0x20000001,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_FLAG_VALUE_3",(undefined **)0x20000002,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_FLAG_VALUE_4",(undefined **)0x20000003,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_FLAG_VALUE_5",(undefined **)0x20000004,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_FLAG_VALUE_6",(undefined **)0x20000005,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_FLAG_REACTION",(undefined **)0x20000006,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_FLAG_REFLECT_GROUND",(undefined **)0x20000007
                 ,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_FLAG_VANISH",(undefined **)0x20000008,param_4
                 ,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_FLAG_VIA_EXIT",(undefined **)0x20000009,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_FLAG_TARGET_FOUND",(undefined **)0x2000000a,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_FLAG_DISABLE_JOSTLE",(undefined **)0x2000000b
                 ,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_FLAG_HAVE_STICK",(undefined **)0x2000000c,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_FLAG_WATER",(undefined **)0x2000000d,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_FLAG_EATABLE",(undefined **)0x2000000e,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_FLAG_AUTO_PLAY_BOUND_EFFECT",
                 (undefined **)0x2000000f,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_FLAG_AUTO_PLAY_LOST_EFFECT",
                 (undefined **)0x20000010,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_FLAG_HAVE_POSITION_ONLY",
                 (undefined **)0x20000011,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_FLAG_FORCE_WHOLE_HIT_NORMAL",
                 (undefined **)0x20000012,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_FLAG_DISABLE_AUTO_GRAVITY_MOVE",
                 (undefined **)0x20000013,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_FLAG_UPDATE_POSTURE_OWNER_SCALE",
                 (undefined **)0x20000014,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_FLAG_TARGETABLE",(undefined **)0x20000015,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_FLAG_TIMER_SLOW",(undefined **)0x20000016,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_FLAG_NO_DAMAGE_FROM_KUSUDAMA",
                 (undefined **)0x20000017,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_FLAG_DAMAGE_FLASHING_BOSS",
                 (undefined **)0x20000018,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_FLAG_DMAGE_CAMERA_QUAKE",
                 (undefined **)0x20000019,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_FLAG_IGNORE_DELETE_BY_STAGE",
                 (undefined **)0x2000001a,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_FLAG_KEEP_TARGET_ON_FIGHTER_CHANGE",
                 (undefined **)0x2000001b,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_FLAG_MISS_TARGET_BY_CHANGING",
                 (undefined **)0x2000001c,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_FLAG_POKEMON_CHANGE_START",
                 (undefined **)0x2000001d,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_FLAG_TURN_DAMAGE",(undefined **)0x2000001e,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_FLAG_TURN_DAMAGE_IS_NO_REACTION",
                 (undefined **)0x2000001f,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_FLAG_SPEED_DAMAGE",(undefined **)0x20000020,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_FLAG_APPLY_WORLD_MOVE",
                 (undefined **)0x20000021,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_FLAG_APPLY_WORLD_MOVE_Y",
                 (undefined **)0x20000022,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_FLAG_GROUND_DAMAGE",(undefined **)0x20000023,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_FLAG_RECEIVE_FINAL_STATUS_EVENT",
                 (undefined **)0x20000024,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_FLAG_RECEIVE_STAGE_TRANSITION_EVENT",
                 (undefined **)0x20000025,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_FLAG_AI_SOON_TO_BE_ATTACK",
                 (undefined **)0x20000026,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_FLAG_AI_IS_IN_EFFECT",
                 (undefined **)0x20000027,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_FLAG_HAVE_SILENT",(undefined **)0x20000028,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_FLAG_JUMP_AIR_ENABLE",
                 (undefined **)0x20000029,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_FLAG_TAKE_OFF",(undefined **)0x2000002a,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_FLAG_RUN_START",(undefined **)0x2000002b,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_FLAG_IS_SMASH_DAMAGE",
                 (undefined **)0x2000002c,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_FLAG_ANGRY",(undefined **)0x2000002d,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_FLAG_IMMORTAL",(undefined **)0x2000002e,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_FLAG_BOSS_KEYOFF_BGM",
                 (undefined **)0x2000002f,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_FLAG_BOSS_STOP_SE",(undefined **)0x20000030,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_FLAG_BOSS_DEAD",(undefined **)0x20000031,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_FLAG_GROUND_LOST",(undefined **)0x20000032,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_FLAG_TERM",(undefined **)0x20000033,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_INSTANCE_WORK_FLAG_NUM",(undefined **)&DAT_00000033,param_4
                 ,param_5,param_6,param_7,param_8);
  if ((local_78 != 0) && (local_70 != 0)) {
    FUN_71038f55d0(local_78,local_68);
  }
  local_68 = -3;
  local_70 = 0;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_DRAGOONSET_INSTANCE_WORK_FLOAT_CURSOR_X",(undefined **)0x1,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DRAGOONSET_INSTANCE_WORK_FLOAT_CURSOR_Y",(undefined **)0x2,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DRAGOONSET_INSTANCE_WORK_FLAG_ATTACK",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_HAMMERBROS_INSTANCE_WORK_FLAG_BOUND",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_ROBOTGYRO_INSTANCE_WORK_FLAG_ROBOT_THROW",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_ROBOTGYRO_INSTANCE_WORK_FLOAT_CHARGE",(undefined **)0x1,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_ROCKETBELT_INSTANCE_WORK_INT_HAVE_COUNTER",
                 (undefined **)0x10000012,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_ROCKETBELT_INSTANCE_WORK_FLAG_HAVE_INFINITY",
                 (undefined **)0x20000001,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_SCREW_INSTANCE_WORK_INT_HAVE_COUNTER",
                 (undefined **)0x10000012,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_SCREW_INSTANCE_WORK_FLAG_HAVE_INFINITY",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_SUPERLEAF_INSTANCE_WORK_INT_HAVE_COUNTER",
                 (undefined **)0x10000012,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_SUPERLEAF_INSTANCE_WORK_FLAG_HAVE_INFINITY",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_TABEMONO_INSTANCE_WORK_INT_EAT_SE_HASH",
                 (undefined **)0x10000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_USAGIHAT_INSTANCE_WORK_INT_HAVE_COUNTER",
                 (undefined **)0x10000012,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_USAGIHAT_INSTANCE_WORK_FLAG_HAVE_INFINITY",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_ST_ICE_YASAI_INSTANCE_WORK_INT_EAT_SE_HASH",
                 (undefined **)0x10000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_BOOMERANG_INSTANCE_WORK_INT_ATTACK_POWER_FLY",
                 (undefined **)0x10000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_BOOMERANG_INSTANCE_WORK_INT_ATTACK_POWER_TURN",
                 (undefined **)0x10000001,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_SOCCERBALL_INSTANCE_WORK_INT_ATTACK_POWER",
                 (undefined **)0x10000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GRASS_INSTANCE_WORK_INT_CREATE_OBJECT_ID",
                 (undefined **)0x10000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MAGICPOTWIND_INSTANCE_WORK_FLOAT_DIRECTION_X",
                 (undefined **)0x1,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MAGICPOTWIND_INSTANCE_WORK_FLOAT_DIRECTION_Y",
                 (undefined **)0x2,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MAGICPOTWIND_INSTANCE_WORK_FLOAT_SCALE",(undefined **)0x3,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MAGICPOTWIND_INSTANCE_WORK_FLAG_VIOLENT_WIND",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_POWBLOCK_INSTANCE_WORK_INT_ATTACK_OBJECT_ID",
                 (undefined **)0x10000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_PEACHDAIKON_INSTANCE_WORK_INT_ATTACK_POWER",
                 (undefined **)0x10000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DAISYDAIKON_INSTANCE_WORK_INT_ATTACK_POWER",
                 (undefined **)0x10000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_BANANA_INSTANCE_WORK_FLAG_SLIP",(undefined **)0x20000000,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_BANANA_INSTANCE_WORK_FLAG_HAVED",(undefined **)0x20000001,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_BANANA_INSTANCE_WORK_FLAG_DIDDY_SPECIAL_THROW",
                 (undefined **)0x20000002,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_WARIOBIKE_INSTANCE_WORK_INT_CREATE_FIGHTER_ID",
                 (undefined **)0x10000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_METALBLADE_INSTANCE_WORK_FLAG_SPECIAL_THROW",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_METALBLADE_INSTANCE_WORK_FLAG_DROP",
                 (undefined **)0x20000001,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_METALBLADE_INSTANCE_WORK_FLAG_REFLECT",
                 (undefined **)0x20000002,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_METALBLADE_INSTANCE_WORK_FLAG_SPEED_REVERSE",
                 (undefined **)0x20000003,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_METALBLADE_INSTANCE_WORK_INT_STICK_TOUCH_ID",
                 (undefined **)0x10000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_METALBLADE_INSTANCE_WORK_INT_INIT_SPEED_REVERSE_FRAME",
                 (undefined **)0x10000001,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_WIIFITBALL_INSTANCE_WORK_FLAG_ATTACK_START",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_WIIFITBALL_INSTANCE_WORK_FLAG_INIT_THROW",
                 (undefined **)0x20000001,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_WIIFITBALL_INSTANCE_WORK_FLAG_START_GROUND",
                 (undefined **)0x20000002,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_WIIFITBALL_INSTANCE_WORK_FLAG_INIT_GRAVITY",
                 (undefined **)0x20000003,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_WIIFITBALL_INSTANCE_WORK_INT_BOUND_COUNT",
                 (undefined **)0x10000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_WIIFITBALL_INSTANCE_WORK_INT_INIT_GRAVITY_FRAME",
                 (undefined **)0x10000001,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_WIIFITBALL_INSTANCE_WORK_INT_LIFE",(undefined **)0x10000002
                 ,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_WIIFITBALL_INSTANCE_WORK_FLOAT_SHOT_CALC_KATAMUKI",
                 (undefined **)0x1,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_WIIFITBALL_INSTANCE_WORK_FLOAT_SHOT_CALC_TAKASA",
                 (undefined **)0x2,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_WIIFITBALL_INSTANCE_WORK_FLOAT_INIT_WIND_SPEED_X",
                 (undefined **)0x3,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_WOOD_INSTANCE_WORK_INT_LOG_GROUP",(undefined **)0x10000000,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_WOOD_INSTANCE_WORK_INT_STATE",(undefined **)0x10000001,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_PACMAN_INSTANCE_WORK_FLAG_THROW",(undefined **)0x20000000,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_PACMAN_INSTANCE_WORK_FLAG_DROP",(undefined **)0x20000001,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_PACMAN_INSTANCE_WORK_FLAG_HIT",(undefined **)0x20000002,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_PACMAN_INSTANCE_WORK_FLAG_HOP",(undefined **)0x20000003,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_PACMAN_INSTANCE_WORK_FLAG_UNABLE_PICKUP",
                 (undefined **)0x20000004,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_PACMAN_INSTANCE_WORK_INT_LIFE",(undefined **)0x10000000,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_PACMAN_INSTANCE_WORK_INT_BOUND_COUNT",
                 (undefined **)0x10000001,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_POWERESA_INSTANCE_WORK_FLOAT_DAMAGE",(undefined **)0x1,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_POWERESA_INSTANCE_WORK_INT_OWNER_ID",
                 (undefined **)0x10000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_POWERESA_INSTANCE_WORK_INT_TEAM_NO",
                 (undefined **)0x10000001,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DOLL_INSTANCE_WORK_FLAG_FIRST_DAMAGE",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DOLL_INSTANCE_WORK_INT_LIFE",(undefined **)0x10000000,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DOLL_INSTANCE_WORK_FLOAT_ROT_SPEED",(undefined **)0x1,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DOLL_INSTANCE_WORK_FLOAT_ROT_Z",(undefined **)0x2,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LOG_INSTANCE_WORK_FLAG_FIRST_DAMAGE",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LOG_INSTANCE_WORK_INT_LIFE",(undefined **)0x10000000,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LOG_INSTANCE_WORK_FLOAT_ROT_SPEED",(undefined **)0x1,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LOG_INSTANCE_WORK_FLOAT_ROT_Z",(undefined **)0x2,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MECHAKOOPA_INSTANCE_WORK_FLAG_TEAM_ATTACK",
                 (undefined **)0x20000004,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MECHAKOOPA_INSTANCE_WORK_FLAG_THROW",
                 (undefined **)0x20000005,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LINKARROW_INSTANCE_WORK_ROT_X",(undefined **)0x1,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LINKARROW_INSTANCE_WORK_ROT_Y",(undefined **)0x2,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LINKARROW_INSTANCE_WORK_ROT_Z",(undefined **)0x3,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LINKARROW_INSTANCE_WORK_OFFSET_X",
                 (undefined **)&DAT_00000004,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LINKARROW_INSTANCE_WORK_OFFSET_Y",(undefined **)0x5,param_4
                 ,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LINKARROW_INSTANCE_WORK_OFFSET_Z",(undefined **)0x6,param_4
                 ,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LINKBOMB_INSTANCE_WORK_FLAG_IS_BLAST",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_REVENGESHOOTERSHOT_INSTANCE_WORK_FLOAT_ATTACK_POWER",
                 (undefined **)0x1,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_REVENGESHOOTERSHOT_INSTANCE_WORK_FLOAT_ATTACK_SIZE",
                 (undefined **)0x2,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_STAFFSHOT_INSTANCE_WORK_INT_EFFECT_HANDLE",
                 (undefined **)0x10000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_HEALBALL_INSTANCE_WORK_FLOAT_HOW_MANY_DROP_RATE",
                 (undefined **)0x2,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_BOMBER_INSTANCE_WORK_FLAG_BORN_END",
                 (undefined **)0x20000004,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_NIGHTMARE_INSTANCE_WORK_INT_SCALING_STATUS",
                 (undefined **)0x10000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_NIGHTMARE_INSTANCE_WORK_FLAG_START_BLIND",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_NIGHTMARE_INSTANCE_WORK_FLAG_END_BLIND",
                 (undefined **)0x20000001,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_NIGHTMARE_INSTANCE_WORK_FLAG_END_ATTACK",
                 (undefined **)0x20000002,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DRIVER_INSTANCE_WORK_FLOAT_FIGHTER_LR",(undefined **)0x1,
                 param_4,param_5,param_6,param_7,param_8);
  if ((local_78 != 0) && (local_70 != 0)) {
    FUN_71038f55d0(local_78,local_68);
  }
  local_68 = -3;
  local_70 = 0;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_STATUS_WORK_INT_PRE_START",(undefined **)0x10ffffff,param_4
                 ,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_STATUS_WORK_INT_0",(undefined **)0x11000000,param_4,param_5
                 ,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_STATUS_WORK_INT_1",(undefined **)0x11000001,param_4,param_5
                 ,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_STATUS_WORK_INT_2",(undefined **)0x11000002,param_4,param_5
                 ,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_STATUS_WORK_INT_3",(undefined **)0x11000003,param_4,param_5
                 ,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_STATUS_WORK_INT_4",(undefined **)0x11000004,param_4,param_5
                 ,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_STATUS_WORK_INT_5",(undefined **)0x11000005,param_4,param_5
                 ,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_STATUS_WORK_INT_6",(undefined **)0x11000006,param_4,param_5
                 ,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_STATUS_WORK_INT_7",(undefined **)0x11000007,param_4,param_5
                 ,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_STATUS_WORK_INT_8",(undefined **)0x11000008,param_4,param_5
                 ,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_STATUS_WORK_INT_9",(undefined **)0x11000009,param_4,param_5
                 ,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_STATUS_WORK_INT_10",(undefined **)0x1100000a,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_STATUS_WORK_INT_11",(undefined **)0x1100000b,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_STATUS_WORK_INT_12",(undefined **)0x1100000c,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_STATUS_WORK_INT_NO_RHOMBUS_UPDATE_COUNT",
                 (undefined **)0x1100000d,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_STATUS_WORK_INT_TERM",(undefined **)0x1100000e,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_STATUS_WORK_INT_NUM",(undefined **)&DAT_0000000e,param_4,
                 param_5,param_6,param_7,param_8);
  if ((local_78 != 0) && (local_70 != 0)) {
    FUN_71038f55d0(local_78,local_68);
  }
  local_68 = 0xfffffffd;
  local_70 = 0;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_STATUS_WORK_FLOAT_PRE_START",(undefined **)&DAT_00ffffff,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_STATUS_WORK_FLOAT_0",(undefined **)0x1000000,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_STATUS_WORK_FLOAT_1",(undefined **)0x1000001,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_STATUS_WORK_FLOAT_2",(undefined **)0x1000002,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_STATUS_WORK_FLOAT_3",(undefined **)&DAT_01000003,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_STATUS_WORK_FLOAT_4",(undefined **)0x1000004,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_STATUS_WORK_FLOAT_5",(undefined **)0x1000005,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_STATUS_WORK_FLOAT_TERM",(undefined **)0x1000006,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_STATUS_WORK_FLOAT_NUM",(undefined **)0x6,param_4,param_5,
                 param_6,param_7,param_8);
  local_68 = 0xfffffffd;
  local_70 = 0;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_STATUS_WORK_FLAG_PRE_START",(undefined **)0x20ffffff,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_STATUS_WORK_FLAG_USE_SPEED_POWER",(undefined **)0x21000000,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_STATUS_WORK_FLAG_DAMAGE",(undefined **)0x21000001,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_STATUS_WORK_FLAG_DEAD",(undefined **)0x21000002,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_STATUS_WORK_FLAG_HIT",(undefined **)0x21000003,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_STATUS_WORK_FLAG_NEAR_TARGET",(undefined **)0x21000004,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_STATUS_WORK_FLAG_FOUND",(undefined **)0x21000005,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_STATUS_WORK_FLAG_LOT_CREATE_BOMB",(undefined **)0x21000006,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_STATUS_WORK_FLAG_MOVE",(undefined **)0x21000007,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_STATUS_WORK_FLAG_DOLLY_SUPER_SPECIAL2_PRE_START",
                 (undefined **)0x21000007,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_STATUS_WORK_FLAG_DOLLY_SUPER_SPECIAL2_CAPTURE_START_FRAME",
                 (undefined **)0x21000008,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_STATUS_WORK_FLAG_CLUNG_PRE_START",(undefined **)0x21000007,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_STATUS_WORK_FLAG_CLUNG_START_FRAME",
                 (undefined **)0x21000008,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_STATUS_WORK_FLAG_TERM",(undefined **)0x21000009,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_STATUS_WORK_FLAG_NUM",(undefined **)&DAT_00000009,param_4,
                 param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_KINETIC_ENERGY_ID_NONE",(undefined **)&DAT_ffffffff,param_4
                 ,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KINETIC_ENERGY_ID_ROT",(undefined **)0x0,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KINETIC_ENERGY_ID_OUTER",(undefined **)0x1,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KINETIC_ENERGY_ID_GRAVITY",(undefined **)0x2,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KINETIC_ENERGY_ID_GROUND",(undefined **)0x3,param_4,param_5
                 ,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KINETIC_ENERGY_ID_CONTROL",(undefined **)&DAT_00000004,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KINETIC_ENERGY_ID_CONTROL_ROT",(undefined **)0x5,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KINETIC_ENERGY_ID_MOTION",(undefined **)0x6,param_4,param_5
                 ,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KINETIC_ENERGY_ID_STOP",(undefined **)&DAT_00000007,param_4
                 ,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KINETIC_ENERGY_ID_DAMAGE",(undefined **)&DAT_00000008,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KINETIC_ENERGY_ID_JOSTLE",(undefined **)&DAT_00000009,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KINETIC_ENERGY_ID_GROUND_MOVEMENT",(undefined **)0xa,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KINETIC_ENERGY_ID_WIND",(undefined **)0xb,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KINETIC_ENERGY_ID_MOTION_LINKED_MAIN",
                 (undefined **)&DAT_0000000c,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KINETIC_ENERGY_ID_MOTION_LINKED_SUB1",
                 (undefined **)&DAT_0000000d,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KINETIC_ENERGY_ID_TERM",(undefined **)&DAT_0000000e,param_4
                 ,param_5,param_6,param_7,param_8);
  if ((local_78 != 0) && (local_70 != 0)) {
    FUN_71038f55d0(local_78,-3);
  }
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_KINETIC_TYPE_NONE",(undefined **)&DAT_ffffffff,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KINETIC_TYPE_NORMAL",(undefined **)0x0,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KINETIC_TYPE_HAVE",(undefined **)0x1,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KINETIC_TYPE_ROLLING",(undefined **)0x2,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KINETIC_TYPE_TEETOTUM",(undefined **)0x3,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KINETIC_TYPE_BOND",(undefined **)&DAT_00000004,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KINETIC_TYPE_GEMINI",(undefined **)0x5,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KINETIC_TYPE_DAMAGE",(undefined **)0x6,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KINETIC_TYPE_MOTION_LINKED",(undefined **)&DAT_00000007,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KINETIC_TYPE_UNIQ",(undefined **)&DAT_00000008,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KINETIC_TYPE_TERM",(undefined **)&DAT_00000009,param_4,
                 param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_KINETIC_FLAG_NONE",(undefined **)0x0,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KINETIC_FLAG_AI_BOUND",(undefined **)0x1,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KINETIC_FLAG_SANDBAG",(undefined **)0x2,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KINETIC_FLAG_NO_WIND",(undefined **)&DAT_00000008,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KINETIC_FLAG_NO_OUTSIDE_ATTACK",(undefined **)&DAT_00000010
                 ,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KINETIC_FLAG_DIRECT_TRANSN",(undefined **)&SUB_00000020,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KINETIC_FLAG_Z_LR_TRANSN",(undefined **)&DAT_00000040,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KINETIC_FLAG_AI_MOVE_NO_SET_SPEED",
                 (undefined **)&DAT_00000080,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KINETIC_FLAG_THROW_KEEP_AIR",(undefined **)&DAT_00000100,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KINETIC_FLAG_MOTION_ENERGY_OFF",(undefined **)&DAT_00000400
                 ,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KINETIC_FLAG_AI_BOUND_X",(undefined **)0x800,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KINETIC_FLAG_DISABLE_AUTO_GRAVITY_ROT_Z",
                 (undefined **)&DAT_00001000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KINETIC_FLAG_CLIFF_NO_JOSTLE",(undefined **)0x2000,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KINETIC_FLAG_ROLLING_NO_UPDATE_ROT",(undefined **)0x4000,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KINETIC_FLAG_BOUND_X_ON_SLANT",(undefined **)0x8000,param_4
                 ,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"IT_AI_TYPE_MANUAL",(undefined **)0x0,param_4,param_5,param_6,
                 param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"IT_AI_TYPE_MOVE_TARGET",(undefined **)0x1,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"IT_AI_TYPE_MOVE_TARGET_PASS",(undefined **)0x2,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"IT_AI_TYPE_MOVE_TARGET_STOP",(undefined **)0x3,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"IT_AI_TYPE_NUM",(undefined **)&DAT_00000004,param_4,param_5,
                 param_6,param_7,param_8);
  local_68 = 0xfffffffd;
  local_70 = 0;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_BACKSHIELD_STATUS_KIND_BUMP",(undefined **)&DAT_00000041,
                 param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_BACKSHIELD_INSTANCE_WORK_FLOAT_ROTATE_ANGLE_DEG",
                 (undefined **)0x1,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_BACKSHIELD_INSTANCE_WORK_FLOAT_TARGET_ANGLE_DEG",
                 (undefined **)0x2,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_BACKSHIELD_INSTANCE_WORK_FLOAT_PRE_FIGHTER_LR",
                 (undefined **)0x3,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_BACKSHIELD_INSTANCE_WORK_FLOAT_NOW_FIGHTER_LR",
                 (undefined **)&DAT_00000004,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_BACKSHIELD_INSTANCE_WORK_INT_LIFE_FRAME",
                 (undefined **)0x10000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_BACKSHIELD_INSTANCE_WORK_INT_UNABLE_POCKET",
                 (undefined **)0x10000001,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_BACKSHIELD_INSTANCE_WORK_INT_EQUIPPED",
                 (undefined **)0x10000002,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_BACKSHIELD_INSTANCE_WORK_INT_EXEC_CHASE_FIGHTER",
                 (undefined **)0x10000003,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_BACKSHIELD_INSTANCE_WORK_FLAG_DAMAGE",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_BACKSHIELD_INSTANCE_WORK_FLAG_LIFE_INFINITY",
                 (undefined **)0x20000001,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_BACKSHIELD_INSTANCE_WORK_FLAG_ENABLE",
                 (undefined **)0x20000002,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_BACKSHIELD_INSTANCE_WORK_FLAG_EATEN",
                 (undefined **)0x20000003,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_BADGE_STATUS_KIND_BUMP",(undefined **)&DAT_00000041,param_4
                 ,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_BARREL_STATUS_KIND_MOVE",(undefined **)&DAT_00000041,
                 param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_BEETLE_STATUS_KIND_FLY",(undefined **)&DAT_00000041,param_4
                 ,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_BEETLE_STATUS_KIND_FLY_TURN_ATTACK",(undefined **)0x42,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_BEETLE_STATUS_KIND_FLY_TURN_REFLECT",(undefined **)0x43,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_BEETLE_STATUS_KIND_FLY_AWAY",(undefined **)&DAT_00000044,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_BEETLE_STATUS_KIND_BUMP",(undefined **)&DAT_00000045,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_BEETLE_STATUS_KIND_FALLING",(undefined **)0x46,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_BEETLE_STATUS_KIND_FALLING_BROKEN",(undefined **)0x47,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_BEETLE_STATUS_KIND_FIGHTER_DEAD_GRAB_RELEASE",
                 (undefined **)&DAT_00000048,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_BOMBCHU_STATUS_KIND_GROUND_FLY",(undefined **)&DAT_00000041
                 ,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_BOMBER_STATUS_KIND_TURN",(undefined **)&DAT_00000041,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_BOMBER_STATUS_KIND_ENTER_LANDING",(undefined **)0x42,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_BOMBER_STATUS_KIND_CLIFF",(undefined **)0x43,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_BOMBER_STATUS_KIND_BORN_FALL",(undefined **)&DAT_00000044,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_BOMBER_STATUS_KIND_BORN_LANDING",
                 (undefined **)&DAT_00000045,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_BOMBER_STATUS_KIND_BORN2",(undefined **)0x46,param_4,
                 param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_BOMBER_INSTANCE_WORK_FLAG_TIME_UP_SE_PLAYED",
                 (undefined **)0x20000002,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_BOMBHEI_STATUS_KIND_TURN",(undefined **)&DAT_00000041,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_BOMBHEI_STATUS_KIND_ENTER_FALL",(undefined **)0x42,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_BOMBHEI_STATUS_KIND_ENTER_LANDING",(undefined **)0x43,
                 param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_BOOK_STATUS_KIND_BEFORE_BORN",(undefined **)&DAT_00000041,
                 param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_BOOMERANG_STATUS_KIND_FLY",(undefined **)&DAT_00000041,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_BOOMERANG_STATUS_KIND_TURN",(undefined **)0x42,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_BOOMERANG_STATUS_KIND_BUMP_WALL",(undefined **)0x43,param_4
                 ,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_BOOMERANG_STATUS_KIND_BUMP_REFLECT",
                 (undefined **)&DAT_00000044,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = -3;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_BOSSGALAGA_INSTANCE_WORK_FLOAT_SPEED_X",(undefined **)0x1,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_BOSSGALAGA_INSTANCE_WORK_FLOAT_SPEED_Y",(undefined **)0x2,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_BOSSGALAGA_INSTANCE_WORK_FLOAT_ROTATE_DEG",
                 (undefined **)0x3,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_BOSSGALAGA_INSTANCE_WORK_FLOAT_ANIM_RAD",
                 (undefined **)&DAT_00000004,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_BOSSGALAGA_INSTANCE_WORK_FLOAT_CLATTER_FRAME",
                 (undefined **)0x5,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_BOSSGALAGA_INSTANCE_WORK_FLOAT_CATCH_OFFSET_X",
                 (undefined **)0x6,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_BOSSGALAGA_INSTANCE_WORK_FLOAT_CATCH_OFFSET_Y",
                 (undefined **)&DAT_00000007,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_BOSSGALAGA_INSTANCE_WORK_FLOAT_CATCH_FIGHTER_SIZE",
                 (undefined **)&DAT_00000008,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_BOSSGALAGA_INSTANCE_WORK_INT_ANIM_FRAME",
                 (undefined **)0x10000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_BOSSGALAGA_INSTANCE_WORK_INT_ANIM_COUNT",
                 (undefined **)0x10000001,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_BOSSGALAGA_INSTANCE_WORK_INT_CUT_FRAME",
                 (undefined **)0x10000002,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_BOSSGALAGA_INSTANCE_WORK_INT_EFFECT_FRAME_INDEX",
                 (undefined **)0x10000003,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_BOSSGALAGA_INSTANCE_WORK_INT_EFFECT_REMAIN_FRAME",
                 (undefined **)0x10000004,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_BOSSGALAGA_INSTANCE_WORK_INT_BEAM_EFFECT_HANDLE",
                 (undefined **)0x10000005,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_BOSSGALAGA_INSTANCE_WORK_FLAG_DIR_LEFT",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_BOSSGALAGA_INSTANCE_WORK_FLAG_DAMAGE_COLOR",
                 (undefined **)0x20000001,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_BOSSGALAGA_INSTANCE_WORK_FLAG_ANIM_WAIT",
                 (undefined **)0x20000002,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_BOSSGALAGA_INSTANCE_WORK_FLAG_PULL",
                 (undefined **)0x20000003,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_BOSSGALAGA_STATUS_WORK_FLOAT_DEAD_POS_X",
                 (undefined **)&DAT_01000003,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_BOSSGALAGA_STATUS_WORK_FLOAT_DEAD_POS_Y",
                 (undefined **)0x1000004,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_BOSSGALAGA_STATUS_WORK_FLOAT_DEAD_POS_Z",
                 (undefined **)0x1000005,param_4,param_5,param_6,param_7,param_8);
  if ((local_78 != 0) && (local_70 != 0)) {
    FUN_71038f55d0(local_78,local_68);
  }
  local_68 = 0xfffffffd;
  local_70 = 0;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_BOSSGALAGA_STATUS_KIND_FLYSKY",(undefined **)&DAT_00000041,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_BOSSGALAGA_STATUS_KIND_TURNDOWN",(undefined **)0x42,param_4
                 ,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_BOSSGALAGA_STATUS_KIND_FLYTARGET",(undefined **)0x43,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_BOSSGALAGA_STATUS_KIND_WAIT",(undefined **)&DAT_00000044,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_BOSSGALAGA_STATUS_KIND_BEAM",(undefined **)&DAT_00000045,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_BOSSGALAGA_STATUS_KIND_FLYAWAY",(undefined **)0x46,param_4,
                 param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_ASSIST_INSTANCE_WORK_FLOAT_ASSIST_OFFSET_X",
                 (undefined **)0x2,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_BUMPER_STATUS_KIND_BOND_WALL",(undefined **)&DAT_00000041,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_BUMPER_STATUS_KIND_BOND_WALL_ATTACK",(undefined **)0x42,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_BUMPER_STATUS_KIND_AIR_BOND",(undefined **)0x43,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_BUMPER_STATUS_KIND_AIR_WAIT",(undefined **)&DAT_00000044,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_BUMPER_STATUS_KIND_AIR_ATTACK",(undefined **)&DAT_00000045,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_BUMPER_STATUS_KIND_GROUND_BOND",(undefined **)0x46,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_BUMPER_STATUS_KIND_GROUND_WAIT",(undefined **)0x47,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_BUMPER_STATUS_KIND_GROUND_ATTACK",
                 (undefined **)&DAT_00000048,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_CARRIERBOX_INSTANCE_WORK_FLAG_WARPED",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_CARRIERBOX_STATUS_KIND_MOVE",(undefined **)&DAT_00000041,
                 param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_CHEWING_STATUS_KIND_BOND",(undefined **)&DAT_00000041,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CHEWING_STATUS_KIND_GROUND_BOND",(undefined **)0x42,param_4
                 ,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CHEWING_STATUS_KIND_HAVE_SLEEP",(undefined **)0x43,param_4,
                 param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_CHICKEN_STATUS_KIND_ESCAPE",(undefined **)&DAT_00000041,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CHICKEN_STATUS_KIND_WAIT",(undefined **)0x42,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CHICKEN_STATUS_KIND_FLY",(undefined **)0x43,param_4,param_5
                 ,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CHICKEN_STATUS_KIND_JUMP",(undefined **)&DAT_00000044,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CHICKEN_STATUS_KIND_TURN",(undefined **)&DAT_00000045,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CHICKEN_STATUS_KIND_DAMAGE",(undefined **)0x46,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CHICKEN_STATUS_KIND_COUNTER",(undefined **)0x47,param_4,
                 param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_CHICKENPARTY_STATUS_KIND_TURN",(undefined **)&DAT_00000041,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CHICKENPARTY_STATUS_KIND_COUNTER",(undefined **)0x42,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CHICKENPARTY_STATUS_KIND_JUMP",(undefined **)0x43,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CHICKENPARTY_STATUS_KIND_RUSH",(undefined **)&DAT_00000044,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CHICKENPARTY_STATUS_KIND_HOP",(undefined **)&DAT_00000045,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CHICKENPARTY_STATUS_KIND_TURNJUMP",(undefined **)0x46,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CHICKENPARTY_STATUS_KIND_WARP",(undefined **)0x47,param_4,
                 param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_CHICKENPARTY_INSTANCE_WORK_FLAG_IS_BOSS",
                 (undefined **)0x20000003,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_CLUBSHOT_INSTANCE_WORK_FLAG_NEAR_GROUND",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_CROSSBOMB_STATUS_KIND_TIMEUP",(undefined **)&DAT_00000041,
                 param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_DIDDYPEANUTS_STATUS_KIND_BEFORE_BORN",
                 (undefined **)&DAT_00000041,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DIDDYPEANUTS_STATUS_KIND_THROW_BOUND",(undefined **)0x42,
                 param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_DOLPHINBOMB_STATUS_KIND_INSTALLATION",
                 (undefined **)&DAT_00000041,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DOLPHINBOMB_STATUS_KIND_FLYING",(undefined **)0x42,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DOLPHINBOMB_STATUS_KIND_FALLING_WAIT",(undefined **)0x43,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DOLPHINBOMB_STATUS_KIND_FALLING",
                 (undefined **)&DAT_00000044,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_DOSEISAN_STATUS_KIND_FALL_MOVE",(undefined **)&DAT_00000041
                 ,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DOSEISAN_STATUS_KIND_GROUND_MOVE",(undefined **)0x42,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DOSEISAN_STATUS_KIND_GROUND_TURN",(undefined **)0x43,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DOSEISAN_STATUS_KIND_THROW_COMEBACK",
                 (undefined **)&DAT_00000044,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DOSEISAN_STATUS_KIND_FUTTOBI_AFTER",
                 (undefined **)&DAT_00000045,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_DRILLSHOT_STATUS_KIND_MOVERIGHT",
                 (undefined **)&DAT_00000041,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DRILLSHOT_STATUS_KIND_MOVELEFT",(undefined **)0x42,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DRILLSHOT_STATUS_KIND_STICK",(undefined **)0x43,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DRILLSHOT_STATUS_KIND_STOP",(undefined **)&DAT_00000044,
                 param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_FAIRYBOTTLE_INSTANCE_WORK_FLAG_USE_FAIRY",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_FAIRYBOTTLE_INSTANCE_WORK_FLAG_CAN_TOUCH",
                 (undefined **)0x20000001,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_FAIRYBOTTLE_INSTANCE_WORK_FLAG_IS_BOSS",
                 (undefined **)0x20000002,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_FIREBAR_INSTANCE_WORK_INT_EFFECT_ID",
                 (undefined **)0x10000000,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_FREEZER_STATUS_KIND_TURN",(undefined **)&DAT_00000041,
                 param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_GENESISSET_STATUS_KIND_END",(undefined **)&DAT_00000041,
                 param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_GOLDENHAMMER_STATUS_KIND_APPEAR_AIR",
                 (undefined **)&DAT_00000041,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GOLDENHAMMER_STATUS_KIND_APPEAR_GROUND",(undefined **)0x42,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GOLDENHAMMER_STATUS_KIND_WAIT_AIR",(undefined **)0x43,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GOLDENHAMMER_STATUS_KIND_WAIT_GROUND",
                 (undefined **)&DAT_00000044,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_GREENSHELL_STATUS_KIND_MOVE",(undefined **)&DAT_00000041,
                 param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_HEALBALL_INSTANCE_WORK_FLOAT_RECOVER_REMAIN",
                 (undefined **)0x1,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_HEALBALL_INSTANCE_WORK_INT_UN_CHEWING_TASKID",
                 (undefined **)0x10000000,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_HEALBALL_STATUS_KIND_BUMP",(undefined **)&DAT_00000041,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_HEALBALL_STATUS_KIND_HAVE_SLEEP",(undefined **)0x42,param_4
                 ,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_HEALBALL_EVENT_STICK_DROP",(undefined **)0x1,param_4,
                 param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_HONEYCOMBBEE_STATUS_KIND_ADVENT",
                 (undefined **)&DAT_00000041,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_HONEYCOMBBEE_STATUS_KIND_PASSING",(undefined **)0x42,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_HONEYCOMBBEE_STATUS_KIND_HAVE_SLEEP",(undefined **)0x43,
                 param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_KILLEREYE_INSTANCE_WORK_FLAG_IS_FLASHING_END",
                 (undefined **)0x20000004,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_KILLEREYE_STATUS_KIND_SHOT_READY",
                 (undefined **)&DAT_00000041,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KILLEREYE_STATUS_KIND_SHOT",(undefined **)0x42,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KILLEREYE_STATUS_KIND_AIRSHOT_READY",(undefined **)0x43,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KILLEREYE_STATUS_KIND_AIRSHOT",(undefined **)&DAT_00000044,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KILLEREYE_STATUS_KIND_INSTALLATION",
                 (undefined **)&DAT_00000045,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KILLEREYE_STATUS_KIND_AIRINSTALLATION",(undefined **)0x46,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KILLEREYE_STATUS_KIND_WAIT",(undefined **)0x47,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KILLEREYE_STATUS_KIND_AIRWAIT",(undefined **)&DAT_00000048,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KILLEREYE_STATUS_KIND_DAMAGE",(undefined **)&DAT_00000049,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KILLEREYE_STATUS_KIND_TURN",(undefined **)0x4a,param_4,
                 param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_KROOLCROWN_STATUS_KIND_WAIT_RESPAWN",
                 (undefined **)&DAT_00000041,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_KROOLCROWN_ACTION_ID_CREATE_OWNER_DEAD",(undefined **)0x2fd
                 ,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_LINKBOMB_STATUS_KIND_HITSTOP_BEFORE_BORN",
                 (undefined **)&DAT_00000041,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_LINKBOMB_INSTANCE_WORK_FLAG_HOP",(undefined **)0x20000001,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LINKBOMB_INSTANCE_WORK_FLAG_IS_RIGHT",
                 (undefined **)0x20000002,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LINKBOMB_INSTANCE_WORK_FLAG_LOST",(undefined **)0x20000003,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_YOUNGLINKBOMB_INSTANCE_WORK_FLAG_LOST",
                 (undefined **)0x20000003,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_MAGICPOT_STATUS_KIND_VIOLENT",(undefined **)&DAT_00000041,
                 param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_MECHAKOOPA_STATUS_KIND_INJECTION",
                 (undefined **)&DAT_00000041,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MECHAKOOPA_STATUS_KIND_BOUND",(undefined **)0x42,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MECHAKOOPA_STATUS_KIND_GETUP",(undefined **)0x43,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MECHAKOOPA_STATUS_KIND_MOVE",(undefined **)&DAT_00000044,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MECHAKOOPA_STATUS_KIND_TURN",(undefined **)&DAT_00000045,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MECHAKOOPA_STATUS_KIND_STOP",(undefined **)0x46,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MECHAKOOPA_STATUS_KIND_HOP",(undefined **)0x47,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MECHAKOOPA_STATUS_KIND_HOP_TO_LOST",
                 (undefined **)&DAT_00000048,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MECHAKOOPA_STATUS_KIND_DEAD",(undefined **)&DAT_00000049,
                 param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_METALBLADE_STATUS_KIND_STICK_AIR",
                 (undefined **)&DAT_00000041,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_METALBLADE_STATUS_KIND_STICK_GROUND",(undefined **)0x42,
                 param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_MUSHROOM_STATUS_KIND_TURN",(undefined **)&DAT_00000041,
                 param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_PACMANAPPLE_STATUS_KIND_SPECIAL_HAVE",
                 (undefined **)&DAT_00000041,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_PACMANBELL_STATUS_KIND_SPECIAL_HAVE",
                 (undefined **)&DAT_00000041,param_4,param_5,param_6,param_7,param_8);
  local_68 = 0xfffffffd;
  local_70 = 0;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_PACMANBELL_INSTANCE_WORK_INT_THROW_FRAME",
                 (undefined **)0x10000002,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_PACMANBELL_INSTANCE_WORK_INT_TOP_DEAD_CENTRE",
                 (undefined **)0x10000003,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_PACMANBOSS_STATUS_KIND_SPECIAL_HAVE",
                 (undefined **)&DAT_00000041,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_PACMANBOSS_INSTANCE_WORK_INT_STATE",
                 (undefined **)0x10000002,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_PACMANBOSS_INSTANCE_WORK_INT_THROW_FRAME",
                 (undefined **)0x10000003,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_PACMANBOSS_INSTANCE_WORK_INT_ROT_FRAME",
                 (undefined **)0x10000004,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_PACMANBOSS_INSTANCE_WORK_FLOAT_ROT_ANGLE",(undefined **)0x1
                 ,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"PACMANBOSS_STATE_FIRST",(undefined **)0x0,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"PACMANBOSS_STATE_ROT",(undefined **)0x1,param_4,param_5,param_6,
                 param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"PACMANBOSS_STATE_ROT_END",(undefined **)0x2,param_4,param_5,
                 param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_PACMANCHERRY_STATUS_KIND_SPECIAL_HAVE",
                 (undefined **)&DAT_00000041,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_PACMANKEY_STATUS_KIND_SPECIAL_HAVE",
                 (undefined **)&DAT_00000041,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_PACMANMELON_STATUS_KIND_SPECIAL_HAVE",
                 (undefined **)&DAT_00000041,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_PACMANORANGE_STATUS_KIND_SPECIAL_HAVE",
                 (undefined **)&DAT_00000041,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_PACMANSTRAWBERRY_STATUS_KIND_SPECIAL_HAVE",
                 (undefined **)&DAT_00000041,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_PASARAN_STATUS_KIND_GROUND_FLY",(undefined **)&DAT_00000041
                 ,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_PASARAN_INSTANCE_WORK_FLAG_IS_BOSS",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_PASARAN_INSTANCE_WORK_FLOAT_POWER",(undefined **)0x2,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_PASARAN_INSTANCE_WORK_FLOAT_SCALE",(undefined **)0x3,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_PASARAN_INSTANCE_WORK_FLOAT_ATK_SIZE",
                 (undefined **)&DAT_00000004,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_PASARAN_INSTANCE_WORK_INT_HIT_STOP_CNT",
                 (undefined **)0x10000001,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_PEACHDAIKON_STATUS_KIND_THROW_BOUND",
                 (undefined **)&DAT_00000041,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_PITFALL_STATUS_KIND_THROUGH_GROUND",
                 (undefined **)&DAT_00000041,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_PITFALL_STATUS_KIND_THROUGH_AIR",(undefined **)0x42,param_4
                 ,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_POWBLOCK_STATUS_KIND_EFFECT_MOTION",
                 (undefined **)&DAT_00000041,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_POWBLOCK_STATUS_KIND_BOUNCE",(undefined **)0x42,param_4,
                 param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_WALKMUSH_STATUS_KIND_TURN",(undefined **)&DAT_00000041,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_WALKMUSH_STATUS_KIND_ENTER_LANDING",(undefined **)0x42,
                 param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_WALKMUSHSHOT_ACTION_SHOOT",(undefined **)0x0,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_WALKMUSHSHOT_ACTION_TERM",(undefined **)0x1,param_4,param_5
                 ,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_WALKMUSHSHOT_CONSTANT_ANGLE_DIV_NUM",(undefined **)0x3,
                 param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_REVENGESHOOTER_ACTION_INITIALIZE",(undefined **)0x1,param_4
                 ,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_REVENGESHOOTER_ACTION_OTHERS",(undefined **)0x2,param_4,
                 param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_ROBOTGYRO_STATUS_KIND_FURAFURA",(undefined **)&DAT_00000041
                 ,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_ROCKETBELT_INSTANCE_WORK_SMOKELOOP_FRONT_EFFECT_HANDLE",
                 (undefined **)0x10000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_ROCKETBELT_INSTANCE_WORK_SMOKELOOP_REAR_EFFECT_HANDLE",
                 (undefined **)0x10000001,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_ROCKETBELT_STATUS_KIND_FLY_AWAY",
                 (undefined **)&DAT_00000041,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_SANDBAG_STATUS_KIND_CATCH_CUT",(undefined **)&DAT_00000041,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_SANDBAG_STATUS_KIND_CAPTURE_THROW",(undefined **)0x42,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_SANDBAG_STATUS_KIND_CATCH",(undefined **)0x43,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_SANDBAG_STATUS_KIND_DOWN",(undefined **)&DAT_00000044,
                 param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_SANDBAG_INSTANCE_WORK_FLAG_NO_POCKET",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_SANDBAG_INSTANCE_WORK_FLAG_NO_LANDING_SMOKE",
                 (undefined **)0x20000001,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_SANDBAG_INSTANCE_WORK_FLAG_IS_AVAILABLE_TO_BREAK_VARRIER",
                 (undefined **)0x20000002,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_SANDBAG_INSTANCE_WORK_INT_FINISH_LEVEL",
                 (undefined **)0x10000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_SANDBAG_INSTANCE_WORK_FLOAT_PREDICT_LANDING_POS_X",
                 (undefined **)0x1,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_SANDBAG_INSTANCE_WORK_FLOAT_PREDICT_STOP_POS_X",
                 (undefined **)0x2,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_SCREW_STATUS_KIND_BUMP",(undefined **)&DAT_00000041,param_4
                 ,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_SENSORBOMB_STATUS_KIND_NOHAVE_AIR",
                 (undefined **)&DAT_00000041,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_SENSORBOMB_STATUS_KIND_NOHAVE_GROUND",(undefined **)0x42,
                 param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_SMASHBALL_STATUS_KIND_EXIT",(undefined **)&DAT_00000041,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_SMASHBALL_STATUS_KIND_THROUGH",(undefined **)0x42,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_SMASHBALL_STATUS_KIND_BOUND",(undefined **)0x43,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_SMASHBALL_STATUS_FIGHTER_DRAWING",
                 (undefined **)&DAT_00000044,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_SMOKESCREEN_STATUS_KIND_HAVE_SLEEP",
                 (undefined **)&DAT_00000041,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_SOCCERBALL_STATUS_KIND_WARP",(undefined **)&DAT_00000041,
                 param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_STAFFSHOT_INSTANCE_WORK_FLOAT_CREATE_POS_X",
                 (undefined **)0x1,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_ST_SHELL_STATUS_KIND_MOVE",(undefined **)&DAT_00000041,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_ST_SHELL_STATUS_KIND_MOVE_FALL",(undefined **)0x42,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_ST_SHELL_STATUS_KIND_MOVE_TURN",(undefined **)0x43,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_ST_SHELL_STATUS_KIND_GETUP",(undefined **)&DAT_00000044,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_ST_CRAB_STATUS_KIND_ANGRY",(undefined **)&DAT_00000045,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_ST_SHELL_STATUS_KIND_WAIT_RESPAWN",(undefined **)0x46,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_ST_SHELL_STATUS_KIND_STAGE_GIMMICK",(undefined **)0x47,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_ST_SHELL_STATUS_KIND_DAMAGE_FLY",
                 (undefined **)&DAT_00000048,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_SUPERLEAF_STATUS_KIND_BUMP",(undefined **)&DAT_00000041,
                 param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"CHARGE_LEVEL_RAPID",(undefined **)0x0,param_4,param_5,param_6,
                 param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"CHARGE_LEVEL_1",(undefined **)0x1,param_4,param_5,param_6,
                 param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"CHARGE_LEVEL_2",(undefined **)0x2,param_4,param_5,param_6,
                 param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"CHARGE_LEVEL_3",(undefined **)0x3,param_4,param_5,param_6,
                 param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"CHARGE_LEVEL_4",(undefined **)&DAT_00000004,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"CHARGE_LEVEL_5",(undefined **)0x5,param_4,param_5,param_6,
                 param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"CHARGE_LEVEL_6",(undefined **)0x6,param_4,param_5,param_6,
                 param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"CHARGE_LEVEL_7",(undefined **)&DAT_00000007,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"CHARGE_LEVEL_8",(undefined **)&DAT_00000008,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"CHARGE_LEVEL_MAX",(undefined **)&DAT_00000009,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"CHARGE_LEVEL_NUM",(undefined **)0xa,param_4,param_5,param_6,
                 param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_SUPERSTAR_STATUS_KIND_HIT_LR",(undefined **)&DAT_00000041,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_SUPERSTAR_STATUS_KIND_HIT_UP",(undefined **)0x42,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_SUPERSTAR_STATUS_KIND_JUMP",(undefined **)0x43,param_4,
                 param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_THUNDERSWORD_STATUS_KIND_BEFORE_BORN",
                 (undefined **)&DAT_00000041,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_TOGEZOSHELL_STATUS_KIND_HOMING",(undefined **)&DAT_00000041
                 ,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_TOGEZOSHELL_STATUS_KIND_DROP",(undefined **)0x42,param_4,
                 param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_UNIRA_STATUS_KIND_TOUCH_LR",(undefined **)&DAT_00000041,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_UNIRA_STATUS_KIND_TOUCH_UP",(undefined **)0x42,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_UNIRA_STATUS_KIND_AIR_WAIT",(undefined **)0x43,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_UNIRA_STATUS_KIND_WAIT_DOWN",(undefined **)&DAT_00000044,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_UNIRA_STATUS_KIND_WAIT_UP",(undefined **)&DAT_00000045,
                 param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_UNIRA_INSTANCE_WORK_FLAG_UP_FLAG",(undefined **)0x20000000,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_UNIRA_INSTANCE_WORK_FLAG_DIRECT_ATTACK_FLAG",
                 (undefined **)0x20000001,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_UNIRA_INSTANCE_WORK_FLAG_IS_BOSS",(undefined **)0x20000002,
                 param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_USAGIHAT_STATUS_KIND_BUMP",(undefined **)&DAT_00000041,
                 param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_ASHLEY_STATUS_KIND_EFFECT_START",
                 (undefined **)&DAT_00000041,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_ASHLEY_STATUS_KIND_EFFECT_DOING",(undefined **)0x42,param_4
                 ,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_ASHLEY_STATUS_KIND_EFFECT_END",(undefined **)0x43,param_4,
                 param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_ELEKA_STATUS_KIND_APPEAR",(undefined **)&DAT_00000041,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_ELEKA_STATUS_KIND_WAIT",(undefined **)0x42,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_ELEKA_STATUS_KIND_SELECTACTION",(undefined **)0x43,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_ELEKA_STATUS_KIND_MOVECONTINUE",(undefined **)&DAT_00000044
                 ,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_ELEKA_STATUS_KIND_WARP_START",(undefined **)&DAT_00000045,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_ELEKA_STATUS_KIND_WARP",(undefined **)0x46,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_ELEKA_STATUS_KIND_WARP_END",(undefined **)0x47,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_ELEKA_STATUS_KIND_SPEEDSHOT",(undefined **)&DAT_00000048,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_ELEKA_STATUS_KIND_HOMINGSHOT",(undefined **)&DAT_00000049,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_ELEKA_STATUS_KIND_DIFFUSIONSHOT",(undefined **)0x4a,param_4
                 ,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_ELEKA_STATUS_KIND_TERM",(undefined **)0x4b,param_4,param_5,
                 param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_ELEKASHOT3_INSTANCE_WORK_INT_PARENT_TARGET_ID",
                 (undefined **)0x10000000,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_GHIRAHIM_INSTANCE_WORK_FLAG_CHANGE_ATTACK",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_GHIRAHIM_STATUS_KIND_APPEAL",(undefined **)&DAT_00000041,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GHIRAHIM_STATUS_KIND_ATKTELEPORT",(undefined **)0x42,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GHIRAHIM_STATUS_KIND_DASHCUT",(undefined **)0x43,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GHIRAHIM_STATUS_KIND_CUTDOWN_GROUND",
                 (undefined **)&DAT_00000044,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GHIRAHIM_STATUS_KIND_CUTDOWN_AIR",
                 (undefined **)&DAT_00000045,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GHIRAHIM_STATUS_KIND_KNIFE_GROUND",(undefined **)0x46,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GHIRAHIM_STATUS_KIND_KNIFE_AIR",(undefined **)0x47,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GHIRAHIM_STATUS_KIND_JUMP_VERTICAL",
                 (undefined **)&DAT_00000048,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GHIRAHIM_STATUS_KIND_BACK_JUMP",(undefined **)&DAT_00000049
                 ,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_HAMMERBROS_STATUS_KIND_JUMP",(undefined **)&DAT_00000041,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_HAMMERBROS_STATUS_KIND_JUMP_HAMMER",(undefined **)0x42,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_HAMMERBROS_STATUS_KIND_WAIT",(undefined **)0x43,param_4,
                 param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_JEFF_INSTANCE_WORK_FLOAT_ROCKET_ROTATE",(undefined **)0x1,
                 param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_JIRO_STATUS_KIND_HOP",(undefined **)&DAT_00000041,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_JIRO_STATUS_KIND_RUN",(undefined **)0x42,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_JIRO_STATUS_KIND_EX_RUN",(undefined **)0x43,param_4,param_5
                 ,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_JIRO_STATUS_KIND_TURN_RUN",(undefined **)&DAT_00000044,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_JIRO_STATUS_KIND_WALL_BURY",(undefined **)&DAT_00000045,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_JIRO_STATUS_KIND_HOLD",(undefined **)0x46,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_JIRO_STATUS_KIND_HOLD_SPECIAL",(undefined **)0x47,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_JIRO_STATUS_KIND_CHASE_OFF",(undefined **)&DAT_00000048,
                 param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_JOE_STATUS_KIND_ATTACK1",(undefined **)&DAT_00000041,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_JOE_STATUS_KIND_ATTACK2",(undefined **)0x42,param_4,param_5
                 ,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_JOE_STATUS_KIND_FINISH",(undefined **)0x43,param_4,param_5,
                 param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_KAWASHIMA_STATUS_KIND_FLY",(undefined **)&DAT_00000041,
                 param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"KAWASHIMA_DIRECTION_NONE",(undefined **)&DAT_ffffffff,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"KAWASHIMA_DIRECTION_TOP",(undefined **)0x0,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"KAWASHIMA_DIRECTION_BOTTOM",(undefined **)0x1,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"KAWASHIMA_DIRECTION_LEFT",(undefined **)0x2,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"KAWASHIMA_DIRECTION_RIGHT",(undefined **)0x3,param_4,param_5,
                 param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_KAWASHIMASHOT_MESSAGE_KIND_TOUCH",(undefined **)0x0,param_4
                 ,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KAWASHIMASHOT_MESSAGE_KIND_LOST",(undefined **)0x1,param_4,
                 param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_KAWASHIMASHOT_STATUS_KIND_MOVE",(undefined **)&DAT_00000041
                 ,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KAWASHIMASHOT_STATUS_KIND_TOUCH",(undefined **)0x42,param_4
                 ,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KAWASHIMASHOT_STATUS_KIND_BOMB",(undefined **)0x43,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KAWASHIMASHOT_STATUS_KIND_BIGBOMB",
                 (undefined **)&DAT_00000044,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KAWASHIMASHOT_STATUS_KIND_DAMAGE",
                 (undefined **)&DAT_00000045,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"KAWASHIMASHOT_INSTANCE_WORK_INT_VALUE",(undefined **)0x10000000,
                 param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIN_INSTANCE_WORK_FLAG_ENABLE_COUNTER",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIN_STATUS_KIND_ATTACK_AIR",(undefined **)&DAT_00000041,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIN_STATUS_KIND_START_AIR",(undefined **)0x42,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIN_STATUS_KIND_ATTACK_GROUND",(undefined **)0x43,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIN_STATUS_KIND_START_GROUND",(undefined **)&DAT_00000044,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIN_STATUS_KIND_COUNTER_ATTACK",(undefined **)&DAT_00000045
                 ,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_METROID_STATUS_KIND_ICE",(undefined **)&DAT_00000041,
                 param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_MIDNA_STATUS_KIND_WAIT",(undefined **)&DAT_00000041,param_4
                 ,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MIDNA_STATUS_KIND_TELEPORT",(undefined **)0x42,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MIDNA_STATUS_KIND_SWING_ARM",(undefined **)0x43,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MIDNA_STATUS_KIND_THROW_ATTACK",(undefined **)&DAT_00000044
                 ,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MIDNA_STATUS_KIND_RETURN_GROUND",
                 (undefined **)&DAT_00000045,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_MONSTERS_MESSAGE_KIND_MOVE_START",(undefined **)0x0,param_4
                 ,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MONSTERS_MESSAGE_KIND_SYNC_HP",(undefined **)0x1,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MONSTERS_MESSAGE_KIND_SMASH_DEAD",(undefined **)0x2,param_4
                 ,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MONSTERS_MESSAGE_KIND_LOST",(undefined **)0x3,param_4,
                 param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_MONSTERS_STATUS_KIND_MOVE",(undefined **)&DAT_00000041,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MONSTERS_STATUS_KIND_ROOT_WAIT",(undefined **)0x42,param_4,
                 param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_MONSTERSCHILD_STATUS_KIND_MOVE",(undefined **)&DAT_00000041
                 ,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MONSTERSCHILD_STATUS_KIND_EXIT",(undefined **)0x42,param_4,
                 param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_MOTHERBRAIN_STATUS_KIND_INITIAL_HIDE",
                 (undefined **)&DAT_00000041,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MOTHERBRAIN_STATUS_KIND_LOST_NO_SPACE",(undefined **)0x42,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MOTHERBRAIN_STATUS_KIND_GROW",(undefined **)0x43,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MOTHERBRAIN_STATUS_KIND_WAIT",(undefined **)&DAT_00000044,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MOTHERBRAIN_STATUS_KIND_SHOT_BLASTER_LASER",
                 (undefined **)&DAT_00000045,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MOTHERBRAIN_STATUS_KIND_SHOT_RING_LASER",(undefined **)0x46
                 ,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MOTHERBRAIN_STATUS_KIND_TURN",(undefined **)0x47,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MOTHERBRAIN_STATUS_KIND_EXPLODING",
                 (undefined **)&DAT_00000048,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MOTHERBRAIN_STATUS_KIND_SLIDING",
                 (undefined **)&DAT_00000049,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_NIGHTMARE_STATUS_KIND_ORB_FLY",(undefined **)&DAT_00000041,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_NIGHTMARE_STATUS_KIND_WIZARD_APPEAR",(undefined **)0x42,
                 param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_RIKI_STATUS_KIND_APPLY_EFFECT",(undefined **)&DAT_00000041,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_RIKI_STATUS_KIND_WAIT",(undefined **)0x42,param_4,param_5,
                 param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_SABLE_STATUS_KIND_WAIT",(undefined **)&DAT_00000041,param_4
                 ,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_SABLE_STATUS_KIND_PRINCE_APPEAL",(undefined **)0x42,param_4
                 ,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_SABLE_STATUS_KIND_PRINCE_CHANGE",(undefined **)0x43,param_4
                 ,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_SABLE_STATUS_KIND_FROG_FALL",(undefined **)&DAT_00000044,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_SABLE_STATUS_KIND_FROG_LANDING",(undefined **)&DAT_00000045
                 ,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_SABLE_STATUS_KIND_FROG_JUMP",(undefined **)0x46,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_SABLE_STATUS_KIND_FROG_JUMP_AIR",(undefined **)0x47,param_4
                 ,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_SABLE_STATUS_KIND_FROG_CHANGE",(undefined **)&DAT_00000048,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_SABLE_STATUS_KIND_FROG_SMASH",(undefined **)&DAT_00000049,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_SABLE_STATUS_KIND_SNAKE_RUN",(undefined **)0x4a,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_SABLE_STATUS_KIND_SNAKE_TURN",(undefined **)0x4b,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_SABLE_STATUS_KIND_SNAKE_FALL",(undefined **)&DAT_0000004c,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_SABLE_STATUS_KIND_SNAKE_LANDING",(undefined **)0x4d,param_4
                 ,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_SABLE_STATUS_KIND_SNAKE_CHANGE",(undefined **)&DAT_0000004e
                 ,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_SABLE_STATUS_KIND_SNAKE_SMASH",(undefined **)0x4f,param_4,
                 param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_SHADOW_STATUS_KIND_ATTACK_SLOW",(undefined **)&DAT_00000041
                 ,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_SHADOW_STATUS_KIND_ATTACK_SLOW_LOOP",(undefined **)0x42,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_SHADOW_STATUS_KIND_ATTACK_STOP",(undefined **)0x43,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_SHADOW_STATUS_KIND_ATTACK_STOP_LOOP",
                 (undefined **)&DAT_00000044,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_SHADOW_STATUS_KIND_ATTACK_END",(undefined **)&DAT_00000045,
                 param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_SHERIFF_STATUS_KIND_SELECTWALK",(undefined **)&DAT_00000041
                 ,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_SHERIFF_STATUS_KIND_WALKTARGETY",(undefined **)0x42,param_4
                 ,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_SHERIFF_STATUS_KIND_WALKTARGETX",(undefined **)0x43,param_4
                 ,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_SHERIFF_STATUS_KIND_WALKUP",(undefined **)&DAT_00000044,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_SHERIFF_STATUS_KIND_WALKDOWN",(undefined **)&DAT_00000045,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_SHERIFF_STATUS_KIND_WALKLEFT",(undefined **)0x46,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_SHERIFF_STATUS_KIND_WALKRIGHT",(undefined **)0x47,param_4,
                 param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_SKULLKID_STATUS_KIND_APPLY_EFFECT",
                 (undefined **)&DAT_00000041,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_SKULLKID_INSTANCE_WORK_FLAG_FLIP_SCREEN",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_STAFY_STATUS_KIND_ATTACK_AIR",(undefined **)&DAT_00000041,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_STAFY_STATUS_KIND_ATTACK_GROUND",(undefined **)0x42,param_4
                 ,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_STAFY_STATUS_KIND_WALK",(undefined **)0x43,param_4,param_5,
                 param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_STARMAN_STATUS_KIND_WAIT",(undefined **)&DAT_00000041,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_STARMAN_STATUS_KIND_TELEPORT",(undefined **)0x42,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_STARMAN_STATUS_KIND_HOLD_ATTACKING_PK_BEAM_GAMMA",
                 (undefined **)0x43,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_STARMAN_STATUS_KIND_HOLD_ATTACKING_PK_BEAM_OMEGA",
                 (undefined **)&DAT_00000044,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_STARMAN_STATUS_KIND_ATTACKING_PK_BEAM_GAMMA",
                 (undefined **)&DAT_00000045,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_STARMAN_STATUS_KIND_ATTACKING_PK_BEAM_OMEGA",
                 (undefined **)0x46,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_TAKAMARU_INSTANCE_WORK_FLAG_SPAWN_SHOT",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_TAKAMARU_STATUS_KIND_JUMP_VERTICAL",
                 (undefined **)&DAT_00000041,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_TAKAMARU_STATUS_KIND_HISYAKAKU_AIR",(undefined **)0x42,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_TAKAMARU_STATUS_KIND_HISYAKAKU_GROUND",(undefined **)0x43,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_TAKAMARU_STATUS_KIND_ATTACKSWORD",
                 (undefined **)&DAT_00000044,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_TVGAME_STATUS_KIND_MOVE",(undefined **)&DAT_00000041,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_TVGAME_STATUS_KIND_RESUME",(undefined **)0x42,param_4,
                 param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_TVGAMESHOT_STATUS_KIND_MOVE",(undefined **)&DAT_00000041,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_TVGAMESHOT_STATUS_KIND_HIDE",(undefined **)0x42,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_TVGAMESHOT_STATUS_KIND_SHOWRESULT",(undefined **)0x43,
                 param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_WALUIGI_STATUS_KIND_ATTACK_AIR",(undefined **)&DAT_00000041
                 ,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_WALUIGI_STATUS_KIND_ATTACK_GROUND",(undefined **)0x42,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_WALUIGI_STATUS_KIND_FINISH",(undefined **)0x43,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_WALUIGI_STATUS_KIND_PREFINISH",(undefined **)&DAT_00000044,
                 param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_WANWAN_STATUS_KIND_MOVING",(undefined **)&DAT_00000041,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_WANWAN_STATUS_KIND_TURNING",(undefined **)0x42,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_WANWAN_STATUS_KIND_BITE_ATTACKING",(undefined **)0x43,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_WANWAN_STATUS_KIND_BITE_HOLD_ATTACKING",
                 (undefined **)&DAT_00000044,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_WANWAN_STATUS_KIND_BITE_FALL",(undefined **)&DAT_00000045,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_WANWAN_STATUS_KIND_BITE_BACK",(undefined **)0x46,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_WANWAN_STATUS_KIND_LIFT_UP",(undefined **)0x47,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_WANWAN_STATUS_KIND_INITIAL_HIDE",
                 (undefined **)&DAT_00000048,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"WANWAN_MESSAGE_ID_INITIAL_SEARCH",(undefined **)0x0,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"WANWAN_MESSAGE_ID_READY",(undefined **)0x1,param_4,param_5,
                 param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"WANWANPILE_MESSAGE_ID_READY",(undefined **)0x0,param_4,param_5,
                 param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_WRIGHT_MESSAGE_KIND_COUNTER_ATTACK",(undefined **)0x0,
                 param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_WRIGHT_INSTANCE_WORK_FLAG_SPAWN_BUILDING",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_WRIGHT_STATUS_KIND_SPAWN_BUILDING",
                 (undefined **)&DAT_00000041,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_DARKRAI_STATUS_KIND_SHOT",(undefined **)&DAT_00000041,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DARKRAI_STATUS_KIND_READY",(undefined **)0x42,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DARKRAI_STATUS_KIND_LOSTWAIT",(undefined **)0x43,param_4,
                 param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_DARKRAISHOT_STATUS_KIND_MOVE",(undefined **)&DAT_00000041,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DARKRAISHOT_STATUS_KIND_ACTIVE",(undefined **)0x42,param_4,
                 param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_DEDENNE_STATUS_KIND_CHARGE",(undefined **)&DAT_00000041,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DEDENNE_STATUS_KIND_JUMP",(undefined **)0x42,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DEDENNE_STATUS_KIND_AIR_DISCHARGE",(undefined **)0x43,
                 param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_DEOXYS_STATUS_KIND_UPSTART",(undefined **)&DAT_00000041,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DEOXYS_STATUS_KIND_UP",(undefined **)0x42,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DEOXYS_STATUS_KIND_BEAM",(undefined **)0x43,param_4,param_5
                 ,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_EIEVUI_STATUS_KIND_SEARCH",(undefined **)&DAT_00000041,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_EIEVUI_STATUS_KIND_ATTACK",(undefined **)0x42,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_EIEVUI_STATUS_KIND_BRAKE",(undefined **)0x43,param_4,
                 param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_EIEVUI_INSTANCE_WORK_INT_CURRENT_FRAME",
                 (undefined **)0x10000000,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_FOKKO_STATUS_KIND_SHOT",(undefined **)&DAT_00000041,param_4
                 ,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_FOKKOSHOT_STATUS_KIND_SHOT",(undefined **)&DAT_00000041,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_FOKKOSHOT_STATUS_KIND_HIT",(undefined **)0x42,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_FOKKOSHOT_STATUS_KIND_PILLAR",(undefined **)0x43,param_4,
                 param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_GENESECT_STATUS_KIND_TURN",(undefined **)&DAT_00000041,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GENESECT_STATUS_KIND_WAIT",(undefined **)0x42,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GENESECT_STATUS_KIND_JUMP",(undefined **)0x43,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GENESECT_STATUS_KIND_JUMP_AIR",(undefined **)&DAT_00000044,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GENESECT_STATUS_KIND_ATTACK_LASER",
                 (undefined **)&DAT_00000045,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_GIRATINA_STATUS_KIND_BACKSTEP",(undefined **)&DAT_00000041,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GIRATINA_STATUS_KIND_BACKSTEPFALL",(undefined **)0x42,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GIRATINA_STATUS_KIND_SHOT",(undefined **)0x43,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GIRATINA_STATUS_KIND_WAIT",(undefined **)&DAT_00000044,
                 param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_GOGOAT_STATUS_KIND_WAIT",(undefined **)&DAT_00000041,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GOGOAT_STATUS_KIND_RUNSTART",(undefined **)0x42,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GOGOAT_STATUS_KIND_RUN",(undefined **)0x43,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GOGOAT_STATUS_KIND_RUNEND",(undefined **)&DAT_00000044,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GOGOAT_STATUS_KIND_TURN",(undefined **)&DAT_00000045,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GOGOAT_STATUS_KIND_TURNWALL",(undefined **)0x46,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GOGOAT_STATUS_KIND_TURNCLIFF",(undefined **)0x47,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GOGOAT_STATUS_KIND_TURNCAMERA",(undefined **)&DAT_00000048,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GOGOAT_STATUS_KIND_JUMP",(undefined **)&DAT_00000049,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GOGOAT_STATUS_KIND_TURN_JUMP",(undefined **)0x4a,param_4,
                 param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_HARIMARON_STATUS_KIND_ATTACK",(undefined **)&DAT_00000041,
                 param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_KELDEO_STATUS_KIND_WAIT_GROUND",(undefined **)&DAT_00000041
                 ,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KELDEO_STATUS_KIND_TURN",(undefined **)0x42,param_4,param_5
                 ,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KELDEO_STATUS_KIND_RUN",(undefined **)0x43,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KELDEO_STATUS_KIND_SLASH_ATTACK",
                 (undefined **)&DAT_00000044,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KELDEO_STATUS_KIND_WARP",(undefined **)&DAT_00000045,
                 param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIREIHANA_STATUS_KIND_DANCE",(undefined **)&DAT_00000041,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIREIHANA_STATUS_KIND_GREET_AIR",(undefined **)0x42,param_4
                 ,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIREIHANA_STATUS_KIND_GREET_GROUND",(undefined **)0x43,
                 param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_KOFUURAI_STATUS_KIND_WAIT_GROUND",
                 (undefined **)&DAT_00000041,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KOFUURAI_STATUS_KIND_TURN",(undefined **)0x42,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KOFUURAI_STATUS_KIND_ATTACK",(undefined **)0x43,param_4,
                 param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_KYOGRE_STATUS_KIND_FLY",(undefined **)&DAT_00000041,param_4
                 ,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KYOGRE_STATUS_KIND_TURN",(undefined **)0x42,param_4,param_5
                 ,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KYOGRE_STATUS_KIND_ATTACKSTART",(undefined **)0x43,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KYOGRE_STATUS_KIND_ATTACKLOOP",(undefined **)&DAT_00000044,
                 param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_KYUREM_STATUS_KIND_ENDATTACK",(undefined **)&DAT_00000041,
                 param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_LUGIA_STATUS_KIND_ATTACK",(undefined **)&DAT_00000041,
                 param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_MAAIIKA_STATUS_KIND_TUMBLE",(undefined **)&DAT_00000041,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MAAIIKA_STATUS_KIND_WAIT",(undefined **)0x42,param_4,
                 param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_MARUMINE_STATUS_KIND_DUD_BORN",(undefined **)&DAT_00000041,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MARUMINE_STATUS_KIND_ENTER_FALL",(undefined **)0x42,param_4
                 ,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MARUMINE_STATUS_KIND_ENTER_LANDING",(undefined **)0x43,
                 param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_MELOETTA_STATUS_KIND_TURN",(undefined **)&DAT_00000041,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MELOETTA_STATUS_KIND_MOVE",(undefined **)0x42,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MELOETTA_STATUS_KIND_ATTACK",(undefined **)0x43,param_4,
                 param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_METAGROSS_STATUS_KIND_ATTACK",(undefined **)&DAT_00000041,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_METAGROSS_STATUS_KIND_WAIT",(undefined **)0x42,param_4,
                 param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_MIJUMARU_STATUS_KIND_ATTACKSTART",
                 (undefined **)&DAT_00000041,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MIJUMARU_STATUS_KIND_ATTACK",(undefined **)0x42,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MIJUMARU_STATUS_KIND_TURN",(undefined **)0x43,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MIJUMARU_STATUS_KIND_ATTACKEND",(undefined **)&DAT_00000044
                 ,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_NYARTH_STATUS_KIND_SHOOT_AIR",(undefined **)&DAT_00000041,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_NYARTH_STATUS_KIND_SHOOT",(undefined **)0x42,param_4,
                 param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_NYARTHSHOT_STATUS_KIND_SHOOT",(undefined **)&DAT_00000041,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_NYARTHSHOT_STATUS_KIND_SLEEP",(undefined **)0x42,param_4,
                 param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_PALKIA_STATUS_KIND_CUT",(undefined **)&DAT_00000041,param_4
                 ,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_PALKIA_STATUS_KIND_ROLL",(undefined **)0x42,param_4,param_5
                 ,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_PALKIA_STATUS_KIND_ROLL_END",(undefined **)0x43,param_4,
                 param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_PEROPPAFU_STATUS_KIND_START",(undefined **)&DAT_00000041,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_PEROPPAFU_STATUS_KIND_ATTACK",(undefined **)0x42,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_PEROPPAFU_STATUS_KIND_END",(undefined **)0x43,param_4,
                 param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_SIRNIGHT_STATUS_KIND_ENTRY_AIR",(undefined **)&DAT_00000041
                 ,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_SIRNIGHT_STATUS_KIND_ENTRY_GROUND",(undefined **)0x42,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_SIRNIGHT_STATUS_KIND_WALK",(undefined **)0x43,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_SIRNIGHT_STATUS_KIND_TURN",(undefined **)&DAT_00000044,
                 param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_TOSAKINTO_STATUS_KIND_JUMP_1",(undefined **)&DAT_00000041,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_TOSAKINTO_STATUS_KIND_JUMP_2",(undefined **)0x42,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_TOSAKINTO_STATUS_KIND_JUMP_3",(undefined **)0x43,param_4,
                 param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_YAYAKOMA_STATUS_KIND_JUMPCHECK",(undefined **)&DAT_00000041
                 ,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_YAYAKOMA_STATUS_KIND_JUMP",(undefined **)0x42,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_YAYAKOMA_STATUS_KIND_FLY",(undefined **)0x43,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_YAYAKOMA_STATUS_KIND_WALK",(undefined **)&DAT_00000044,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_YAYAKOMA_STATUS_KIND_WAIT",(undefined **)&DAT_00000045,
                 param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_YUKINOOH_STATUS_KIND_WALL",(undefined **)&DAT_00000041,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_YUKINOOH_STATUS_KIND_BLIZZARD",(undefined **)0x42,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_YUKINOOH_STATUS_KIND_FREEZEPUNCH",(undefined **)0x43,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_YUKINOOH_STATUS_KIND_WAIT",(undefined **)&DAT_00000044,
                 param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_ZOROARK_INSTANCE_WORK_FLAG_THROW_UP_GRAVITY_START",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_ZOROARK_INSTANCE_WORK_FLAG_IS_LOST_TARGET",
                 (undefined **)0x20000002,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_ZOROARK_INSTANCE_WORK_FLAG_IS_ATTACK",
                 (undefined **)0x20000003,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_ZOROARK_INSTANCE_WORK_INT_TARGET_STATE",
                 (undefined **)0x10000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_ZOROARK_INSTANCE_WORK_INT_FURYSWIPES_COUNT",
                 (undefined **)0x10000001,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_ZOROARK_INSTANCE_WORK_INT_TASK_ID",(undefined **)0x10000004
                 ,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_ZOROARK_INSTANCE_WORK_INT_CUR_ACTION",
                 (undefined **)0x10000005,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_ZOROARK_INSTANCE_WORK_FLOAT_THROWUP_LR",(undefined **)0x1,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_ZOROARK_INSTANCE_WORK_FLOAT_FINAL_X",(undefined **)0x2,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_ZOROARK_INSTANCE_WORK_FLOAT_FINAL_Y",(undefined **)0x3,
                 param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_ZOROARK_STATUS_KIND_WAIT",(undefined **)&DAT_00000041,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_ZOROARK_STATUS_KIND_TELEPORT",(undefined **)0x42,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_ZOROARK_STATUS_KIND_FURYSWIPES",(undefined **)0x43,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_ZOROARK_STATUS_KIND_THROWUP",(undefined **)&DAT_00000044,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_ZOROARK_STATUS_KIND_PRESWIPE",(undefined **)&DAT_00000045,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_ZOROARK_STATUS_KIND_SLAM",(undefined **)0x46,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_ZOROARK_STATUS_KIND_FAILWAIT",(undefined **)0x47,param_4,
                 param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_STARRING_INSTANCE_WORK_FLAG_SHOOT",(undefined **)0x20000000
                 ,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_STARRING_STATUS_KIND_FIXING",(undefined **)&DAT_00000041,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_STARRING_STATUS_KIND_FIXED",(undefined **)0x42,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_STARRING_STATUS_KIND_FIXED_SHOOT",(undefined **)0x43,
                 param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_BLACKBALL_STATUS_KIND_AIR_BOND",(undefined **)&DAT_00000041
                 ,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_BLACKBALL_STATUS_KIND_AIR_WAIT",(undefined **)0x42,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_BLACKBALL_STATUS_KIND_AIR_ATTACK",(undefined **)0x43,
                 param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_TEAMHEALFIELD_STATUS_KIND_BOND_GROUND",
                 (undefined **)&DAT_00000041,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_TEAMHEALFIELD_STATUS_KIND_BOND_AIR",(undefined **)0x42,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_TEAMHEALFIELD_STATUS_KIND_BOND_FALL",(undefined **)0x43,
                 param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_MAGICBALL_STATUS_KIND_NORMAL_TO_MAGIC",
                 (undefined **)&DAT_00000041,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MAGICBALL_STATUS_KIND_MAGIC_THROW",(undefined **)0x42,
                 param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_MAGICBALL_INSTANCE_WORK_FLAG_THROW_UPDOWN",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MAGICBALL_INSTANCE_WORK_FLAG_SOUND_THROW_FIRE",
                 (undefined **)0x20000001,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_SMASHBALLHEAVY_STATUS_KIND_MOVE",
                 (undefined **)&DAT_00000041,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_SMASHBALLHEAVY_STATUS_KIND_ROLLSTART",(undefined **)0x42,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_SMASHBALLHEAVY_STATUS_KIND_RESTART",(undefined **)0x43,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_SMASHBALLHEAVY_STATUS_KIND_WAIT_RESPAWN",
                 (undefined **)&DAT_00000044,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_ROBIN_STATUS_KIND_SEARCH",(undefined **)&DAT_00000041,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_ROBIN_STATUS_KIND_WAIT",(undefined **)0x42,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_ROBIN_STATUS_KIND_ATTACK",(undefined **)0x43,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_ROBIN_STATUS_KIND_TELEPORT",(undefined **)&DAT_00000044,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_ROBIN_STATUS_KIND_PRESS",(undefined **)&DAT_00000045,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_ROBIN_STATUS_KIND_LIFT",(undefined **)0x46,param_4,param_5,
                 param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_ROBIN_INSTANCE_WORK_FLAG_SHOOT",(undefined **)0x20000000,
                 param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_ROBINSHOT_STATUS_KIND_SEARCH",(undefined **)&DAT_00000041,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_ROBINSHOT_STATUS_KIND_CORRECT",(undefined **)0x42,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_ROBINSHOT_STATUS_KIND_DAMAGE",(undefined **)0x43,param_4,
                 param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_ROBINPRESS_STATUS_KIND_UP",(undefined **)&DAT_00000041,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_ROBINPRESS_STATUS_KIND_DOWN",(undefined **)0x42,param_4,
                 param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_CYBORG_STATUS_KIND_ATTACK",(undefined **)&DAT_00000041,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CYBORG_STATUS_KIND_ATTACK_AIR",(undefined **)0x42,param_4,
                 param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_GUILE_ACTION_INITIALIZE",(undefined **)0x1,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GUILE_ACTION_OTHERS",(undefined **)0x2,param_4,param_5,
                 param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"GUILE_ATTACK_KIND_NONE",(undefined **)0x0,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"GUILE_ATTACK_KIND_SONICBOOM_SHORT_LIGHT",(undefined **)0x1,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"GUILE_ATTACK_KIND_SONICBOOM_SHORT_HARD",(undefined **)0x2,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"GUILE_ATTACK_KIND_SONICBOOM_MEDIUM_LIGHT",(undefined **)0x3,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"GUILE_ATTACK_KIND_SONICBOOM_MEDIUM_HARD",
                 (undefined **)&DAT_00000004,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"GUILE_ATTACK_KIND_SONICBOOM_LONG_LIGHT",(undefined **)0x5,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"GUILE_ATTACK_KIND_SONICBOOM_LONG_HARD",(undefined **)0x6,param_4
                 ,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"GUILE_ATTACK_KIND_SUMMERSAULTKICK_LIGHT",
                 (undefined **)&DAT_00000007,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"GUILE_ATTACK_KIND_SUMMERSAULTKICK_HARD",
                 (undefined **)&DAT_00000008,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"GUILE_ATTACK_KIND_VERTICAL_JUMP_ATTACK",
                 (undefined **)&DAT_00000009,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"GUILE_ATTACK_KIND_FRONT_JUMP_ATTACK",(undefined **)0xa,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"GUILE_ATTACK_KIND_NUM",(undefined **)0xb,param_4,param_5,param_6
                 ,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"GUILE_WEIGHT_KIND_NONE",(undefined **)0x0,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"GUILE_WEIGHT_KIND_LIGHT",(undefined **)0x1,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"GUILE_WEIGHT_KIND_HARD",(undefined **)0x2,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"GUILE_WEIGHT_KIND_NUM",(undefined **)0x3,param_4,param_5,param_6
                 ,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_GUILE_INSTANCE_WORK_FLAG_TURN_RIGHT",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GUILE_INSTANCE_WORK_FLAG_VISIBLE_KUSI",
                 (undefined **)0x20000001,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_GUILE_STATUS_KIND_SQUAT",(undefined **)&DAT_00000041,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GUILE_STATUS_KIND_SQUAT_WAIT",(undefined **)0x42,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GUILE_STATUS_KIND_SQUAT_REVERSE",(undefined **)0x43,param_4
                 ,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GUILE_STATUS_KIND_SQUAT_GUARD",(undefined **)&DAT_00000044,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GUILE_STATUS_KIND_SONICBOOM",(undefined **)&DAT_00000045,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GUILE_STATUS_KIND_SUMMERSAULT_LIGHT",(undefined **)0x46,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GUILE_STATUS_KIND_SUMMERSAULT_HARD",(undefined **)0x47,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GUILE_STATUS_KIND_VERTICAL_JUMP",
                 (undefined **)&DAT_00000048,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GUILE_STATUS_KIND_FRONT_JUMP",(undefined **)&DAT_00000049,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GUILE_STATUS_KIND_HIGH_KICK_AIR",(undefined **)0x4a,param_4
                 ,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GUILE_STATUS_KIND_MIDDLE_KICK_AIR",(undefined **)0x4b,
                 param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_GUILESHOT_STATUS_KIND_LIGHT",(undefined **)&DAT_00000041,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GUILESHOT_STATUS_KIND_HARD",(undefined **)0x42,param_4,
                 param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_SHIOKARAZU_BGM_KIND_SHIOKARABUSHI",(undefined **)0x0,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_SHIOKARAZU_BGM_KIND_KIMIIRONISOMETE",(undefined **)0x1,
                 param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_SHIOKARAZU_STATUS_KIND_ZOOM_WAIT",
                 (undefined **)&DAT_00000041,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_KRYSTAL_ACTION_ICEBRAST_SHOOT_LANDING",(undefined **)0x1,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KRYSTAL_ACTION_ICEBRAST_SHOOT_AIR",(undefined **)0x2,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KRYSTAL_ACTION_OTHERS",(undefined **)0x3,param_4,param_5,
                 param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_KRYSTAL_INSTANCE_WORK_FLAG_IS_SHOOT",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KRYSTAL_INSTANCE_WORK_FLAG_IS_FIRST_LANDING",
                 (undefined **)0x20000001,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_KRYSTAL_STATUS_KIND_ATTACK_STAFF_AIR",
                 (undefined **)&DAT_00000041,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KRYSTAL_STATUS_KIND_ATTACK_STAFF_GROUND",(undefined **)0x42
                 ,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KRYSTAL_STATUS_KIND_ATTACK_ICEBRAST_AIR",(undefined **)0x43
                 ,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KRYSTAL_STATUS_KIND_ATTACK_ICEBRAST_GROUND",
                 (undefined **)&DAT_00000044,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KRYSTAL_STATUS_KIND_ESCAPE_GROUND",
                 (undefined **)&DAT_00000045,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_MOON_INSTANCE_WORK_SHOCKWAVE_EFFECT_HANDLE",
                 (undefined **)0x10000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MOON_INSTANCE_WORK_DEBRIS_RISE_EFFECT_HADNLE",
                 (undefined **)0x10000001,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MOON_INSTANCE_WORK_FLAG_SHOCKWAVE_EFFECT_REMOVE",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MOON_INSTANCE_WORK_FLAG_DEBRIS_RISE_EFFECT_REMOVE",
                 (undefined **)0x20000001,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_MOON_STATUS_KIND_APPEAR",(undefined **)&DAT_00000041,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MOON_STATUS_KIND_IMPACT",(undefined **)0x42,param_4,param_5
                 ,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_ZERO_INSTANCE_WORK_FLAG_IS_TRANS_MOVE",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_ZERO_INSTANCE_WORK_FLAG_CAN_LANDING",
                 (undefined **)0x20000001,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_ZERO_INSTANCE_WORK_FLAG_SHOT_START",
                 (undefined **)0x20000002,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_ZERO_STATUS_KIND_ATTACK_3SLASH",(undefined **)&DAT_00000041
                 ,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_ZERO_STATUS_KIND_ATTACK_RYUUENJIN",(undefined **)0x42,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_ZERO_STATUS_KIND_ATTACK_KUUENZAN",(undefined **)0x43,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_ZERO_STATUS_KIND_ATTACK_GENMUZERO",
                 (undefined **)&DAT_00000044,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_ZERO_STATUS_KIND_ATTACK_GENMUZERO_AIR",
                 (undefined **)&DAT_00000045,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_ZERO_STATUS_KIND_DASH_GROUND",(undefined **)0x46,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_ZERO_STATUS_KIND_DASH_AIR",(undefined **)0x47,param_4,
                 param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_METAMON_STATUS_KIND_WAIT",(undefined **)&DAT_00000041,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_METAMON_STATUS_KIND_METAMON_TO_FIGHTER",(undefined **)0x42,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_METAMON_STATUS_KIND_FIGHTER_TO_METAMON",(undefined **)0x43,
                 param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_METAMON_INSTANCE_WORK_EFFECT_SCALE",(undefined **)0x1,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_METAMON_INSTANCE_WORK_FLAG_FIGHTER_ON",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_ALUCARD_INSTANCE_WORK_ATTACK_CONSECUTIVE_LOOP_NUM",
                 (undefined **)0x10000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_ALUCARD_INSTANCE_WORK_ATTACK_CONSECUTIVE_EFFECT_HANDLE",
                 (undefined **)0x10000002,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_ALUCARD_INSTANCE_WORK_ATTACK_MIST_LOOP_EFFECT_HANDLE",
                 (undefined **)0x10000003,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,
                 (uint *)"ITEM_ALUCARD_INSTANCE_WORK_FLAG_IS_ANIMCMD_PARTIAL_ATTACK_CONSECUTIVE_END"
                 ,(undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,
                 (uint *)
                 "ITEM_ALUCARD_INSTANCE_WORK_FLAG_IS_ANIMCMD_PARTIAL_ATTACK_CONSECUTIVE_FINISH_END",
                 (undefined **)0x20000001,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_ALUCARD_INSTANCE_WORK_FLAG_IS_DIVE_KICK_ENERGY_START",
                 (undefined **)0x20000002,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_ALUCARD_INSTANCE_WORK_FLAG_IS_TRANSFORM_END_READY",
                 (undefined **)0x20000002,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_ALUCARD_INSTANCE_WORK_FLAG_IS_VALMECEU_DIR_CHANGE",
                 (undefined **)0x20000003,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_ALUCARD_INSTANCE_WORK_FLAG_IS_CHANGE_FORM",
                 (undefined **)0x20000004,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_ALUCARD_INSTANCE_WORK_FLAG_TURN_MOVE_ENERGY_APPLICATE",
                 (undefined **)0x20000005,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_ALUCARD_STATUS_KIND_ATTACK_CONSECUTIVE",
                 (undefined **)&DAT_00000041,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_ALUCARD_STATUS_KIND_ATTACK_JUMP_SLASH",(undefined **)0x42,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_ALUCARD_STATUS_KIND_BAT_ATTACK",(undefined **)0x43,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_ALUCARD_STATUS_KIND_BAT_ATTACK_BRAKE",
                 (undefined **)&DAT_00000044,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_ALUCARD_STATUS_KIND_TRANSFORM_FOR_BAT",
                 (undefined **)&DAT_00000045,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_ALUCARD_STATUS_KIND_TRANSFORM_FOR_HUMAN",(undefined **)0x46
                 ,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_ALUCARD_STATUS_KIND_TRANSFORM_FOR_HUMAN_JUMP_AIR",
                 (undefined **)0x47,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_ALUCARD_STATUS_KIND_BACK_DASH",(undefined **)&DAT_00000048,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_ALUCARD_STATUS_KIND_ATTACK_DIVE_KICK",
                 (undefined **)&DAT_00000049,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_ALUCARD_STATUS_KIND_DIVE_KICK_AFTER_HOP_JUMP",
                 (undefined **)0x4a,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_ALUCARD_STATUS_KIND_ESCAPE_MIST_GROUND",(undefined **)0x4b,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_ALUCARD_STATUS_KIND_ESCAPE_MIST_AIR",
                 (undefined **)&DAT_0000004c,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_AKIRA_STATUS_KIND_WALK",(undefined **)&DAT_00000041,param_4
                 ,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_AKIRA_STATUS_KIND_FRONT_STEP",(undefined **)0x42,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_AKIRA_STATUS_KIND_BACK_STEP",(undefined **)0x43,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_AKIRA_STATUS_KIND_ATTACK_TETSUZANKOU",
                 (undefined **)&DAT_00000044,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_AKIRA_STATUS_KIND_ATTACK_RENKANTAI",
                 (undefined **)&DAT_00000045,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_AKIRA_STATUS_KIND_ATTACK_MOUKO_KOUHAZAN",(undefined **)0x46
                 ,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_AKIRA_STATUS_KIND_ATTACK_RIMON_CHOCHU",(undefined **)0x47,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_AKIRA_STATUS_KIND_ATTACK_TOKYAKU",
                 (undefined **)&DAT_00000048,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_AKIRA_STATUS_KIND_ATTACK_VERTICAL_TOKYAKU",
                 (undefined **)&DAT_00000049,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_AKIRA_STATUS_KIND_ATTACK_HIDANTAI",(undefined **)0x4a,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_AKIRA_STATUS_KIND_ATTACK_HIDANTAI_LANDING",
                 (undefined **)0x4b,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_AKIRA_STATUS_KIND_GUARD",(undefined **)&DAT_0000004c,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_AKIRA_STATUS_KIND_GUARD_BREAK",(undefined **)0x4d,param_4,
                 param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_AKIRA_SHIELD_GROUP_KIND_ALL",(undefined **)0x0,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_AKIRA_SHIELD_GROUP_KIND_BULLET",(undefined **)0x1,param_4,
                 param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_AKIRA_SHIELD_PROTECT_KIND_NONE",(undefined **)0x0,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_AKIRA_SHIELD_PROTECT_KIND_BULLET",(undefined **)0x1,param_4
                 ,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_AKIRA_SHIELD_PROTECT_KIND_ALL",(undefined **)0x2,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_AKIRA_SHIELD_PROTECT_KIND_NUM",(undefined **)0x3,param_4,
                 param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_AKIRA_INSTANCE_WORK_FLAG_PAA",(undefined **)0x20000000,
                 param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_DARKKNIGHT_INSTANCE_WORK_FLAG_IS_SLASHDOWN_CANCEL_FRAME",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DARKKNIGHT_INSTANCE_WORK_FLAG_IS_SLASHUP_CANCEL_FRAME",
                 (undefined **)0x20000001,param_4,param_5,param_6,param_7,param_8);
  local_68 = 0xfffffffd;
  local_70 = 0;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_DARKKNIGHT_STATUS_KIND_ATTACK_SLASH_DOWN_GROUND",
                 (undefined **)&DAT_00000041,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DARKKNIGHT_STATUS_KIND_ATTACK_SLASH_UP_GROUND",
                 (undefined **)0x42,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DARKKNIGHT_STATUS_KIND_ATTACK_SLASH_UP_AIR",
                 (undefined **)0x43,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DARKKNIGHT_STATUS_KIND_ATTACK_DOUBLE_SLASH_DOWN_UP",
                 (undefined **)&DAT_00000044,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DARKKNIGHT_STATUS_KIND_ATTACK_DOUBLE_SLASH_UP_DOWN",
                 (undefined **)&DAT_00000045,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DARKKNIGHT_STATUS_KIND_TERM",(undefined **)0x46,param_4,
                 param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_HEBIGARASU_INSTANCE_WORK_FLAG_NO_DAMAGE_STUN",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_HEBIGARASU_INSTANCE_WORK_FLAG_NO_DEAD",
                 (undefined **)0x20000001,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_HEBIGARASU_INSTANCE_WORK_FLAG_ASSIST_BEAT_REQUEST",
                 (undefined **)0x20000002,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_HEBIGARASU_INSTANCE_WORK_FLAG_LOST",
                 (undefined **)0x20000003,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_HEBIGARASU_STATUS_KIND_APPEAR",(undefined **)&DAT_00000041,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_HEBIGARASU_STATUS_KIND_DIVE",(undefined **)0x42,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_HEBIGARASU_STATUS_KIND_HIDING",(undefined **)0x43,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_HEBIGARASU_STATUS_KIND_HIDING_FIRST",
                 (undefined **)&DAT_00000044,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_HEBIGARASU_STATUS_KIND_ATTACK_UP",
                 (undefined **)&DAT_00000045,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_HEBIGARASU_STATUS_KIND_ATTACK_MIDDLE",(undefined **)0x46,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_HEBIGARASU_STATUS_KIND_ATTACK_DOWN",(undefined **)0x47,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_HEBIGARASU_STATUS_KIND_VANISH",(undefined **)&DAT_00000048,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_HEBIGARASU_STATUS_KIND_DAMAGE_STUN",
                 (undefined **)&DAT_00000049,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_HEBIGARASU_STATUS_KIND_EXIT",(undefined **)0x4a,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_HEBIGARASU_STATUS_KIND_DEAD",(undefined **)0x4b,param_4,
                 param_5,param_6,param_7,param_8);
  local_68 = 0xfffffffd;
  local_70 = 0;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_KAWASAKI_STATUS_KIND_ATTACK_SHOOT_START",
                 (undefined **)&DAT_00000041,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KAWASAKI_STATUS_KIND_ATTACK_SHOOT_MAIN",(undefined **)0x42,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KAWASAKI_STATUS_KIND_ATTACK_SHOOT_END",(undefined **)0x43,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KAWASAKI_STATUS_KIND_ATTACK_SHOOT_AIR_START",
                 (undefined **)&DAT_00000044,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KAWASAKI_STATUS_KIND_ATTACK_SHOOT_AIR_MAIN",
                 (undefined **)&DAT_00000045,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KAWASAKI_STATUS_KIND_ATTACK_SHOOT_AIR_END",
                 (undefined **)0x46,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KAWASAKI_STATUS_KIND_ATTACK_SWING",(undefined **)0x47,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KAWASAKI_STATUS_KIND_ATTACK_COOK_START",
                 (undefined **)&DAT_00000048,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KAWASAKI_STATUS_KIND_ATTACK_COOK_MAIN",
                 (undefined **)&DAT_00000049,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KAWASAKI_STATUS_KIND_ATTACK_COOK_END",(undefined **)0x4a,
                 param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_KAWASAKI_INSTANCE_WORK_FLAG_SHOOT",(undefined **)0x20000000
                 ,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KAWASAKI_INSTANCE_WORK_FLAG_SWING_SLOPE",
                 (undefined **)0x20000001,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KAWASAKI_INSTANCE_WORK_FLAG_SLOPE_SLANT",
                 (undefined **)0x20000002,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KAWASAKI_INSTANCE_WORK_FLAG_SWING_CANCEL",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KAWASAKI_INSTANCE_WORK_FLAG_COOK_MOVE",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KAWASAKI_INSTANCE_WORK_FLAG_SPAWN_PRESENT",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = -3;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIOLEUS_STATUS_KIND_WAIT",(undefined **)&DAT_00000041,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIOLEUS_STATUS_KIND_TURN",(undefined **)0x42,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIOLEUS_STATUS_KIND_TURN_AIR",(undefined **)0x43,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIOLEUS_STATUS_KIND_ATTACK_FIREBALL",
                 (undefined **)&DAT_00000044,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIOLEUS_STATUS_KIND_ATTACK_FIREBALL3_START",
                 (undefined **)&DAT_00000045,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIOLEUS_STATUS_KIND_ATTACK_FIREBALL3",(undefined **)0x46,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIOLEUS_STATUS_KIND_ATTACK_FIREBALL3_END",
                 (undefined **)0x47,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIOLEUS_STATUS_KIND_ATTACK_BACK_JUMP_FIREBALL",
                 (undefined **)&DAT_00000048,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIOLEUS_STATUS_KIND_ATTACK_TAIL",
                 (undefined **)&DAT_00000049,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIOLEUS_STATUS_KIND_ATTACK_HOWLING",(undefined **)0x4a,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIOLEUS_STATUS_KIND_ATTACK_TACKLE_START",(undefined **)0x4b
                 ,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIOLEUS_STATUS_KIND_ATTACK_TACKLE",
                 (undefined **)&DAT_0000004c,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIOLEUS_STATUS_KIND_ATTACK_TACKLE_END",(undefined **)0x4d,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIOLEUS_STATUS_KIND_WAIT_AIR",(undefined **)&DAT_0000004e,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIOLEUS_STATUS_KIND_WAIT_AIR_SEARCH_GROUND",
                 (undefined **)0x4f,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIOLEUS_STATUS_KIND_WAIT_AIR_MOVE_LANDING",
                 (undefined **)&DAT_00000050,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIOLEUS_STATUS_KIND_ATTACK_FIREBALL_AIR",
                 (undefined **)&DAT_00000051,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIOLEUS_STATUS_KIND_ATTACK_FIREBALL3_AIR_START",
                 (undefined **)&DAT_00000052,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIOLEUS_STATUS_KIND_ATTACK_FIREBALL3_AIR",
                 (undefined **)0x53,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIOLEUS_STATUS_KIND_ATTACK_FIREBALL3_AIR_END",
                 (undefined **)&DAT_00000054,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIOLEUS_STATUS_KIND_ATTACK_NAIL_AIR",(undefined **)0x55,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIOLEUS_STATUS_KIND_ATTACK_HOWLING_AIR",(undefined **)0x56,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIOLEUS_STATUS_KIND_CHANGE_MODE_AIR",(undefined **)0x57,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIOLEUS_STATUS_KIND_CHANGE_MODE_GROUND",
                 (undefined **)&DAT_00000058,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIOLEUS_STATUS_KIND_LEAVE_LANDING",
                 (undefined **)&DAT_00000059,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIOLEUS_STATUS_KIND_LEAVE_AIR",(undefined **)0x5a,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIOLEUS_STATUS_KIND_DEAD",(undefined **)0x5b,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIOLEUS_STATUS_KIND_DEAD_AIR_START",
                 (undefined **)&DAT_0000005c,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIOLEUS_STATUS_KIND_DEAD_AIR_LOOP",(undefined **)0x5d,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIOLEUS_STATUS_KIND_DEAD_AIR_END",(undefined **)0x5e,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIOLEUS_STATUS_KIND_DOWN_TAIL_CUT_START",
                 (undefined **)&DAT_0000005f,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIOLEUS_STATUS_KIND_DOWN_TAIL_CUT_END",
                 (undefined **)&DAT_00000060,param_4,param_5,param_6,param_7,param_8);
  if ((local_78 != 0) && (local_70 != 0)) {
    FUN_71038f55d0(local_78,local_68);
  }
  local_68 = 0xfffffffd;
  local_70 = 0;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIOLEUS_INSTANCE_WORK_FLAG_SHOOT",(undefined **)0x20000000,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIOLEUS_INSTANCE_WORK_FLAG_START_ENERGY",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIOLEUS_INSTANCE_WORK_FLAG_START_BRAKE",
                 (undefined **)0x20000001,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIOLEUS_INSTANCE_WORK_FLAG_INITIALIZE_CHECK_GROUND",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIOLEUS_INSTANCE_WORK_FLAG_INITIALIZE_ATTACH_GROUND",
                 (undefined **)0x20000001,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIOLEUS_INSTANCE_WORK_FLAG_CHANGE_MODE_GROUND_ATTACH",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIOLEUS_INSTANCE_WORK_FLAG_TAIL_CUT_CREATE_ITEM",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_SHOVELKNIGHT_INSTANCE_WORK_FLAG_DIG_GROUND_OBJECT_CREATE",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_SHOVELKNIGHT_INSTANCE_WORK_FLAG_TURN_VISIBILITY_CHANGE",
                 (undefined **)0x20000001,param_4,param_5,param_6,param_7,param_8);
  local_68 = 0xfffffffd;
  local_70 = 0;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_SHOVELKNIGHT_STATUS_KIND_ATTACK_DIG_GROUND",
                 (undefined **)&DAT_00000041,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_SHOVELKNIGHT_STATUS_KIND_ATTACK_DIG_AIR",(undefined **)0x42
                 ,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_SHOVELKNIGHT_STATUS_KIND_ATTACK_LOWER_STAB_START",
                 (undefined **)0x43,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_SHOVELKNIGHT_STATUS_KIND_ATTACK_LOWER_STAB",
                 (undefined **)&DAT_00000044,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_SHOVELKNIGHT_STATUS_KIND_ATTACK_LOWER_STAB_HOP",
                 (undefined **)&DAT_00000045,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_SHOVELKNIGHT_STATUS_KIND_ATTACK_LOWER_STAB_END",
                 (undefined **)0x46,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_SHOVELKNIGHT_STATUS_KIND_ATTACK_LOWER_STAB_LANDING",
                 (undefined **)0x47,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_SHOVELKNIGHT_STATUS_KIND_ATTACK_REFLECT_GROUND",
                 (undefined **)&DAT_00000048,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_SHOVELKNIGHT_STATUS_KIND_ATTACK_REFLECT_AIR",
                 (undefined **)&DAT_00000049,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_SHOVELKNIGHT_ACTION_KIND_FORCE_LOST",(undefined **)0x1,
                 param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_SHOVELKNIGHT_REFLECTOR_KIND_SHOVEL",(undefined **)0x0,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_SHOVELKNIGHT_REFLECTOR_KIND_TERM",(undefined **)0x1,param_4
                 ,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_ROKONA_STATUS_KIND_SHOT",(undefined **)&DAT_00000041,
                 param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_NASYA_STATUS_KIND_WALK_START",(undefined **)&DAT_00000041,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_NASYA_STATUS_KIND_WALK",(undefined **)0x42,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_NASYA_STATUS_KIND_WALK_END",(undefined **)0x43,param_4,
                 param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_NASYA_INSTANCE_WORK_FLAG_START_UPDATE_COLLISION",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_NASYA_INSTANCE_WORK_INT_RIGHT_COL_IDX",
                 (undefined **)0x10000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_NASYA_INSTANCE_WORK_INT_LEFT_COL_IDX",
                 (undefined **)0x10000001,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_ALUCARD_INSTANCE_WORK_FLAG_ATTACK_MOVE_ENERGY_APPLICATE",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_KITERUGUMA_STATUS_KIND_WALK_START",
                 (undefined **)&DAT_00000041,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KITERUGUMA_STATUS_KIND_WALK",(undefined **)0x42,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KITERUGUMA_STATUS_KIND_ATTACK_FRONT",(undefined **)0x43,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KITERUGUMA_STATUS_KIND_ATTACK_UPPER",
                 (undefined **)&DAT_00000044,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KITERUGUMA_STATUS_KIND_ATTACK_BACK",
                 (undefined **)&DAT_00000045,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_MIMIKKYU_STATUS_KIND_WALK",(undefined **)&DAT_00000041,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MIMIKKYU_STATUS_KIND_RUN",(undefined **)0x42,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MIMIKKYU_STATUS_KIND_TURN",(undefined **)0x43,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MIMIKKYU_STATUS_KIND_JUMP",(undefined **)&DAT_00000044,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MIMIKKYU_STATUS_KIND_ATTACK",(undefined **)&DAT_00000045,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MIMIKKYU_STATUS_KIND_ATTACK_AIR",(undefined **)0x46,param_4
                 ,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MIMIKKYU_STATUS_KIND_CAPTURE_START",(undefined **)0x47,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MIMIKKYU_STATUS_KIND_CAPTURE_LOOP_FALL",
                 (undefined **)&DAT_00000048,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MIMIKKYU_STATUS_KIND_CAPTURE_LOOP_LANDING",
                 (undefined **)&DAT_00000049,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MIMIKKYU_STATUS_KIND_CAPTURE_LOOP",(undefined **)0x4a,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MIMIKKYU_STATUS_KIND_CAPTURE_END",(undefined **)0x4b,
                 param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_MIMIKKYU_INSTANCE_WORK_FLAG_CAPTURED_FIGHTER_SCALE_BEGIN",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MIMIKKYU_INSTANCE_WORK_FLAG_COMPLETE_CAPTURE",
                 (undefined **)0x20000001,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MIMIKKYU_INSTANCE_WORK_FLAG_CATCH_CUT",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MIMIKKYU_INSTANCE_WORK_INT_TARGET_ID",
                 (undefined **)0x10000000,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_SOLGALEO_STATUS_KIND_ATTACK_START",
                 (undefined **)&DAT_00000041,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_SOLGALEO_STATUS_KIND_ATTACK_ROT",(undefined **)0x42,param_4
                 ,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_SOLGALEO_STATUS_KIND_ATTACK",(undefined **)0x43,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_SOLGALEO_STATUS_KIND_ATTACK_SLEEP",
                 (undefined **)&DAT_00000044,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_SOLGALEO_STATUS_KIND_ATTACK_END",
                 (undefined **)&DAT_00000045,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_SOLGALEO_INSTANCE_WORK_FLAG_EFFECT_HANDLE_FIRE",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_SOLGALEO_INSTANCE_WORK_FLAG_EFFECT_HANDLE_FIRE2",
                 (undefined **)0x20000001,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_SOLGALEO_INSTANCE_WORK_FLAG_TAKE_OFF",
                 (undefined **)0x20000002,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_LUNALA_MESSAGE_KIND_MOVE_RAY",(undefined **)0x0,param_4,
                 param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_LUNALA_INSTANCE_WORK_FLAG_ROT_START",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_LUNALA_STATUS_KIND_SHADOW_RAY_READY",
                 (undefined **)&DAT_00000041,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LUNALA_STATUS_KIND_SHADOW_RAY_CHARGE",(undefined **)0x42,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LUNALA_STATUS_KIND_SHADOW_RAY_START",(undefined **)0x43,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LUNALA_STATUS_KIND_SHADOW_RAY_SHOOT",
                 (undefined **)&DAT_00000044,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LUNALA_STATUS_KIND_SHADOW_RAY_MAIN",
                 (undefined **)&DAT_00000045,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LUNALA_STATUS_KIND_SHADOW_RAY_END",(undefined **)0x46,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LUNALA_STATUS_KIND_MOVE",(undefined **)0x47,param_4,param_5
                 ,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_RAICHUA_STATUS_KIND_RUN_AIR",(undefined **)&DAT_00000041,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_RAICHUA_STATUS_KIND_LANDING_AIR",(undefined **)0x42,param_4
                 ,param_5,param_6,param_7,param_8);
  local_68 = 0xfffffffd;
  local_70 = 0;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_NAMAKOBUSHI_INSTANCE_WORK_INT_COUNTER_TREAD_UNABLE",
                 (undefined **)0x10000012,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_NAMAKOBUSHI_INSTANCE_WORK_FLAG_IS_ATTACK_CANCEL",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_NAMAKOBUSHI_STATUS_KIND_TOBIDASU",
                 (undefined **)&DAT_00000041,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_NAMAKOBUSHI_STATUS_KIND_AIR_TOBIDASU",(undefined **)0x42,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_NAMAKOBUSHI_STATUS_KIND_CLIFF_TOBIDASU",(undefined **)0x43,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_NAMAKOBUSHI_STATUS_KIND_TURN_TOBIDASU",
                 (undefined **)&DAT_00000044,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_NAMAKOBUSHI_STATUS_KIND_TURN_CLIFF_TOBIDASU",
                 (undefined **)&DAT_00000045,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_NAMAKOBUSHI_STATUS_KIND_TREAD_TOBIDASU",(undefined **)0x46,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_NAMAKOBUSHI_STATUS_KIND_TREAD_CLIFF_TOBIDASU",
                 (undefined **)0x47,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_NAMAKOBUSHI_STATUS_KIND_TREAD_TURN_TOBIDASU",
                 (undefined **)&DAT_00000048,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_NAMAKOBUSHI_STATUS_KIND_TREAD_TURN_CLIFF_TOBIDASU",
                 (undefined **)&DAT_00000049,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_TOGEDEMARU_STATUS_KIND_WAIT",(undefined **)&DAT_00000041,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_TOGEDEMARU_STATUS_KIND_JUMP",(undefined **)0x42,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_TOGEDEMARU_STATUS_KIND_JUMP_FALL",(undefined **)0x43,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_TOGEDEMARU_STATUS_KIND_JUMP_LANDING",
                 (undefined **)&DAT_00000044,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_TOGEDEMARU_STATUS_KIND_ATTACK",(undefined **)&DAT_00000045,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_TOGEDEMARU_STATUS_KIND_ATTACK_FAILED",(undefined **)0x46,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_TOGEDEMARU_STATUS_KIND_ATTACK_SUCCEEDED_START",
                 (undefined **)0x47,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_TOGEDEMARU_STATUS_KIND_ATTACK_SUCCEEDED_LOOP",
                 (undefined **)&DAT_00000048,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_TOGEDEMARU_STATUS_KIND_ATTACK_SUCCEEDED_END",
                 (undefined **)&DAT_00000049,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_KASEY_INSTANCE_WORK_FLAG_APPEAR_FIGHTER",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KASEY_INSTANCE_WORK_FLAG_CATCHED_FIGHTER",
                 (undefined **)0x20000001,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_KASEY_STATUS_KIND_TELEPORT_START",
                 (undefined **)&DAT_00000041,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KASEY_STATUS_KIND_TELEPORT",(undefined **)0x42,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KASEY_STATUS_KIND_TELEPORT_WAIT",(undefined **)0x43,param_4
                 ,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KASEY_STATUS_KIND_TELEPORT_END",(undefined **)&DAT_00000044
                 ,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KASEY_STATUS_KIND_TERM",(undefined **)&DAT_00000045,param_4
                 ,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_KAPUKOKEKO_STATUS_KIND_ELECTRIC_FIELD",
                 (undefined **)&DAT_00000041,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KAPUKOKEKO_STATUS_KIND_ATTACK_START",(undefined **)0x42,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KAPUKOKEKO_STATUS_KIND_ATTACK",(undefined **)0x43,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KAPUKOKEKO_STATUS_KIND_ATTACK_END",
                 (undefined **)&DAT_00000044,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_MARSHADOW_STATUS_KIND_DIVE_START",
                 (undefined **)&DAT_00000041,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MARSHADOW_STATUS_KIND_DIVE_MAIN",(undefined **)0x42,param_4
                 ,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MARSHADOW_STATUS_KIND_DIVE_WAIT",(undefined **)0x43,param_4
                 ,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MARSHADOW_STATUS_KIND_DIVE_ATTACK",
                 (undefined **)&DAT_00000044,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MARSHADOW_STATUS_KIND_DIVE_END",(undefined **)&DAT_00000045
                 ,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MARSHADOW_STATUS_KIND_ATTACK",(undefined **)0x46,param_4,
                 param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_MARSHADOW_INSTANCE_WORK_FLAG_ATTACK_LANDING",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MARSHADOW_INSTANCE_WORK_FLAG_ATTACK_MOVE",
                 (undefined **)0x20000001,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MARSHADOW_INSTANCE_WORK_FLAG_SLOPE_SLANT",
                 (undefined **)0x20000002,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_HASSAM_STATUS_KIND_ATTACK_GROUND_START",
                 (undefined **)&DAT_00000041,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_HASSAM_STATUS_KIND_ATTACK_GROUND_LOOP",(undefined **)0x42,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_HASSAM_STATUS_KIND_ATTACK_GROUND_END",(undefined **)0x43,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_HASSAM_STATUS_KIND_ATTACK_AIR_START",
                 (undefined **)&DAT_00000044,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_HASSAM_STATUS_KIND_ATTACK_AIR_LOOP",
                 (undefined **)&DAT_00000045,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_HASSAM_STATUS_KIND_ATTACK_AIR_END",(undefined **)0x46,
                 param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = -3;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHAND_STATUS_KIND_TRANS_PHASE",
                 (undefined **)&DAT_00000041,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHAND_STATUS_KIND_PH_RANDOM_TIME_WAIT",
                 (undefined **)0x42,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHAND_STATUS_KIND_PH_ATTACK",(undefined **)0x43,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHAND_STATUS_KIND_PH_ATTACK_MOVE",
                 (undefined **)&DAT_00000044,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHAND_STATUS_KIND_RND_WAIT",
                 (undefined **)&DAT_00000045,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHAND_STATUS_KIND_HIKOUKI_START",(undefined **)0x46,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHAND_STATUS_KIND_HIKOUKI",(undefined **)0x47,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHAND_STATUS_KIND_HIKOUKI_END",
                 (undefined **)&DAT_00000048,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHAND_STATUS_KIND_YUBI_BEAM",
                 (undefined **)&DAT_00000049,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHAND_STATUS_KIND_YUBIDEPPOU_START",(undefined **)0x4a
                 ,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHAND_STATUS_KIND_YUBIDEPPOU_HOMING",
                 (undefined **)0x4b,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHAND_STATUS_KIND_YUBIDEPPOU",
                 (undefined **)&DAT_0000004c,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHAND_STATUS_KIND_YUBIDEPPOU_END",(undefined **)0x4d,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHAND_STATUS_KIND_HIPPATAKU_HOLD",
                 (undefined **)&DAT_0000004e,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHAND_STATUS_KIND_HIPPATAKU",(undefined **)0x4f,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHAND_STATUS_KIND_DRILL_START",
                 (undefined **)&DAT_00000050,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHAND_STATUS_KIND_DRILL_ATTACK",
                 (undefined **)&DAT_00000051,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHAND_STATUS_KIND_DRILL_END",
                 (undefined **)&DAT_00000052,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHAND_STATUS_KIND_PAA_TSUBUSHI_START",
                 (undefined **)0x53,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHAND_STATUS_KIND_PAA_TSUBUSHI_START_MOVE",
                 (undefined **)&DAT_00000054,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHAND_STATUS_KIND_PAA_TSUBUSHI_HOMING",
                 (undefined **)0x55,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHAND_STATUS_KIND_PAA_TSUBUSHI_HOLD",
                 (undefined **)0x56,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHAND_STATUS_KIND_PAA_TSUBUSHI_END",(undefined **)0x57
                 ,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHAND_STATUS_KIND_NIGIRU_HOMING",
                 (undefined **)&DAT_00000058,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHAND_STATUS_KIND_NIGIRU_CAPTURE",
                 (undefined **)&DAT_00000059,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHAND_STATUS_KIND_NIGIRU_CENTER_MOVE",
                 (undefined **)0x5a,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHAND_STATUS_KIND_NIGIRU",(undefined **)0x5b,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHAND_STATUS_KIND_NIGIRU_THROW_END_1",
                 (undefined **)&DAT_0000005c,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHAND_STATUS_KIND_NIGIRU_MISS_MOVE",(undefined **)0x5d
                 ,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHAND_STATUS_KIND_NIGIRU_MISS_END",(undefined **)0x5e,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHAND_STATUS_KIND_NIGIRU_CANCEL",
                 (undefined **)&DAT_0000005f,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHAND_STATUS_KIND_YUBIPACCHIN_START",
                 (undefined **)&DAT_00000060,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHAND_STATUS_KIND_YUBIPACCHIN_HOMING",
                 (undefined **)&DAT_00000061,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHAND_STATUS_KIND_YUBIPACCHIN",(undefined **)0x62,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHAND_STATUS_KIND_YUBIPACCHIN_END_START",
                 (undefined **)0x63,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHAND_STATUS_KIND_YUBIPACCHIN_END",
                 (undefined **)&DAT_00000064,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHAND_STATUS_KIND_COMPOUND_ATTACK_WAIT",
                 (undefined **)&DAT_00000065,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHAND_STATUS_KIND_GOOPAA",(undefined **)&DAT_00000066,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHAND_STATUS_KIND_SCRATCH_BLOW_START",
                 (undefined **)0x67,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHAND_STATUS_KIND_SCRATCH_BLOW_LOOP",
                 (undefined **)&DAT_00000068,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHAND_STATUS_KIND_SCRATCH_BLOW",
                 (undefined **)&DAT_00000069,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHAND_STATUS_KIND_TURN",(undefined **)0x6a,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHAND_STATUS_KIND_WAIT_TO_POINT",(undefined **)0x6b,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHAND_STATUS_KIND_WAIT_FEINT",
                 (undefined **)&DAT_0000006c,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHAND_STATUS_KIND_WAIT_TELEPORT",
                 (undefined **)&DAT_0000006d,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHAND_STATUS_KIND_WAIT_CHASE",
                 (undefined **)&DAT_0000006e,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHAND_STATUS_KIND_WAIT_TIME",(undefined **)0x6f,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHAND_STATUS_KIND_DOWN_START",
                 (undefined **)&DAT_00000070,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHAND_STATUS_KIND_DOWN_FALL",
                 (undefined **)&DAT_00000071,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHAND_STATUS_KIND_DOWN_LANDING",(undefined **)0x72,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHAND_STATUS_KIND_DOWN_LOOP",(undefined **)0x73,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHAND_STATUS_KIND_DOWN_END",
                 (undefined **)&DAT_00000074,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHAND_STATUS_KIND_IRON_BALL_PRE_MOVE",
                 (undefined **)&DAT_00000075,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHAND_STATUS_KIND_IRON_BALL_START",(undefined **)0x76,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHAND_STATUS_KIND_IRON_BALL",(undefined **)0x77,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHAND_STATUS_KIND_IRON_BALL_END",
                 (undefined **)&DAT_00000078,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHAND_STATUS_KIND_SATELLITE_GUN_START",
                 (undefined **)&DAT_00000079,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHAND_STATUS_KIND_SATELLITE_GUN_HOLD",
                 (undefined **)&DAT_0000007a,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHAND_STATUS_KIND_SATELLITE_GUN_FIRING",
                 (undefined **)0x7b,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHAND_STATUS_KIND_SATELLITE_GUN_SHOOT",
                 (undefined **)&DAT_0000007c,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHAND_STATUS_KIND_SATELLITE_GUN_END",
                 (undefined **)0x7d,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHAND_STATUS_KIND_PAINT_BALL_START",(undefined **)0x7e
                 ,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHAND_STATUS_KIND_PAINT_BALL",(undefined **)0x7f,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHAND_STATUS_KIND_PAINT_BALL_END",
                 (undefined **)&DAT_00000080,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHAND_STATUS_KIND_KENZAN_PRE_MOVE",
                 (undefined **)&DAT_00000081,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHAND_STATUS_KIND_KENZAN_START",(undefined **)0x82,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHAND_STATUS_KIND_KENZAN",(undefined **)0x83,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHAND_STATUS_KIND_KENZAN_END",
                 (undefined **)&DAT_00000084,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHAND_STATUS_KIND_CHAKRAM_PRE_MOVE",(undefined **)0x85
                 ,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHAND_STATUS_KIND_CHAKRAM_START",(undefined **)0x86,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHAND_STATUS_KIND_CHAKRAM_END",(undefined **)0x87,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHAND_STATUS_KIND_ENERGY_SHOT_START_UP",
                 (undefined **)&DAT_00000088,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHAND_STATUS_KIND_ENERGY_SHOT_START_DOWN",
                 (undefined **)&DAT_00000089,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHAND_STATUS_KIND_ENERGY_SHOT_CHARGE_LOOP",
                 (undefined **)0x8a,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHAND_STATUS_KIND_ENERGY_SHOT",
                 (undefined **)&DAT_0000008b,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHAND_STATUS_KIND_ENERGY_SHOT_LOOP",
                 (undefined **)&DAT_0000008c,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHAND_STATUS_KIND_ENERGY_SHOT_RUSH",(undefined **)0x8d
                 ,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHAND_STATUS_KIND_ENERGY_SHOT_RUSH_END",
                 (undefined **)0x8e,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHAND_STATUS_KIND_BARK",(undefined **)0x8f,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHAND_STATUS_KIND_ELECTROSHOCK_START",
                 (undefined **)&DAT_00000090,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHAND_STATUS_KIND_ELECTROSHOCK",
                 (undefined **)&DAT_00000091,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHAND_STATUS_KIND_ELECTROSHOCK_END",(undefined **)0x92
                 ,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHAND_STATUS_KIND_FINDER",(undefined **)0x93,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHAND_STATUS_KIND_WFINGER_BEAM_START",
                 (undefined **)&DAT_00000094,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHAND_STATUS_KIND_DEBUG_WAIT",(undefined **)0x95,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHAND_STATUS_KIND_DEBUG_CONTROL",(undefined **)0x96,
                 param_4,param_5,param_6,param_7,param_8);
  if ((local_78 != 0) && (local_70 != 0)) {
    FUN_71038f55d0(local_78,local_68);
  }
  local_68 = -3;
  local_70 = 0;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHAND_INSTANCE_WORK_FLOAT_HIPPATAKU_GA_HEIGHT",
                 (undefined **)0x1,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHAND_INSTANCE_WORK_FLAG_YUBIDEPPOU",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHAND_INSTANCE_WORK_FLAG_YUBIBEAM_BEAMSTART",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHAND_INSTANCE_WORK_INT_YUBIBEAM_EFFECT_1",
                 (undefined **)0x10000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHAND_INSTANCE_WORK_INT_YUBIBEAM_EFFECT_2",
                 (undefined **)0x10000001,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHAND_INSTANCE_WORK_INT_YUBIBEAM_EFFECT_3",
                 (undefined **)0x10000002,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHAND_INSTANCE_WORK_INT_YUBIBEAM_EFFECT_4",
                 (undefined **)0x10000003,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHAND_INSTANCE_WORK_FLAG_CATCH_HOMING_END",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHAND_INSTANCE_WORK_FLAG_THROW",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHAND_INSTANCE_WORK_FLAG_RELEASE",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHAND_INSTANCE_WORK_FLAG_IRON_BALL_CREATE",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHAND_INSTANCE_WORK_FLAG_IRON_BALL_THROW",
                 (undefined **)0x20000001,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHAND_INSTANCE_WORK_FLAG_PAINT_BALL_CREATE",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHAND_INSTANCE_WORK_FLAG_PAINT_BALL_THROW",
                 (undefined **)0x20000001,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHAND_INSTANCE_WORK_FLAG_CHAKRAM_CREATE",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHAND_INSTANCE_WORK_FLAG_CHAKRAM_THROW",
                 (undefined **)0x20000001,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHAND_INSTANCE_WORK_FLAG_WYUBIBEAM_START",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHAND_INSTANCE_WORK_FLAG_WYUBIBEAM_SE_STOP",
                 (undefined **)0x20000001,param_4,param_5,param_6,param_7,param_8);
  if ((local_78 != 0) && (local_70 != 0)) {
    FUN_71038f55d0(local_78,local_68);
  }
  local_70 = 0;
  local_68 = -3;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHAND_MESSAGE_KIND_COMPOUND_START",(undefined **)0x0,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHAND_MESSAGE_KIND_COMPOUND_READY",(undefined **)0x1,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHAND_MESSAGE_KIND_COMPOUND_GOOPAA",(undefined **)0x2,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHAND_MESSAGE_KIND_COMPOUND_SCRATCH_BLOW",
                 (undefined **)0x3,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHAND_MESSAGE_KIND_COMPOUND_BARK",
                 (undefined **)&DAT_00000004,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHAND_MESSAGE_KIND_COMPOUND_ELECTROSHOCK",
                 (undefined **)0x5,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHAND_MESSAGE_KIND_COMPOUND_FINDER",(undefined **)0x6,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHAND_MESSAGE_KIND_COMPOUND_WFINGER_BEAM",
                 (undefined **)&DAT_00000007,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHAND_MESSAGE_KIND_MASTERHAND_DEAD",
                 (undefined **)&DAT_00000008,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHAND_MESSAGE_KIND_CRAZYHAND_DEAD",
                 (undefined **)&DAT_00000009,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHAND_MESSAGE_KIND_PAINTBALL_BORN",(undefined **)0xa,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHAND_MESSAGE_KIND_CRAZYHANDGRAVITYBALL_REMOVE",
                 (undefined **)0xb,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHAND_MESSAGE_KIND_CRAZYHANDLOOK_CHACE_START",
                 (undefined **)&DAT_0000000c,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHAND_MESSAGE_KIND_CRAZYHANDLOOK_ATTACK",
                 (undefined **)&DAT_0000000d,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHAND_MESSAGE_KIND_CRAZYHANDLOOK_END",
                 (undefined **)&DAT_0000000e,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHAND_MESSAGE_KIND_CRAZYHANDWFINGERBEAM_SE_END",
                 (undefined **)&DAT_0000000f,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHAND_MESSAGE_KIND_DEBUG_WAIT",
                 (undefined **)&DAT_00000010,param_4,param_5,param_6,param_7,param_8);
  if ((local_78 != 0) && (local_70 != 0)) {
    FUN_71038f55d0(local_78,local_68);
  }
  local_68 = -3;
  local_70 = 0;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHAND_STATUS_KIND_TRANS_PHASE",
                 (undefined **)&DAT_00000041,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHAND_STATUS_KIND_PH_RANDOM_TIME_WAIT",
                 (undefined **)0x42,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHAND_STATUS_KIND_PH_ATTACK",(undefined **)0x43,param_4
                 ,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHAND_STATUS_KIND_PH_ATTACK_MOVE",
                 (undefined **)&DAT_00000044,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHAND_STATUS_KIND_RND_WAIT",(undefined **)&DAT_00000045
                 ,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHAND_STATUS_KIND_HIKOUKI_START",(undefined **)0x46,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHAND_STATUS_KIND_HIKOUKI",(undefined **)0x47,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHAND_STATUS_KIND_HIKOUKI_END",
                 (undefined **)&DAT_00000048,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHAND_STATUS_KIND_YUBI_BEAM",
                 (undefined **)&DAT_00000049,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHAND_STATUS_KIND_BOMB_ATTACK_START",(undefined **)0x4a
                 ,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHAND_STATUS_KIND_BOMB_ATTACK",(undefined **)0x4b,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHAND_STATUS_KIND_BOMB_ATTACK_END",
                 (undefined **)&DAT_0000004c,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHAND_STATUS_KIND_NOTAUTSU_PRE_MOVE",(undefined **)0x4d
                 ,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHAND_STATUS_KIND_NOTAUTSU",(undefined **)&DAT_0000004e
                 ,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHAND_STATUS_KIND_KUMO_PRE_MOVE",(undefined **)0x4f,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHAND_STATUS_KIND_KUMO",(undefined **)&DAT_00000050,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHAND_STATUS_KIND_DRILL_START",
                 (undefined **)&DAT_00000051,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHAND_STATUS_KIND_DRILL_ATTACK",
                 (undefined **)&DAT_00000052,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHAND_STATUS_KIND_DRILL_END",(undefined **)0x53,param_4
                 ,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHAND_STATUS_KIND_HIPPATAKU_HOLD",
                 (undefined **)&DAT_00000054,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHAND_STATUS_KIND_HIPPATAKU",(undefined **)0x55,param_4
                 ,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHAND_STATUS_KIND_NIGIRU_START",(undefined **)0x56,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHAND_STATUS_KIND_NIGIRU_START1",(undefined **)0x57,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHAND_STATUS_KIND_NIGIRU_START2",
                 (undefined **)&DAT_00000058,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHAND_STATUS_KIND_NIGIRU_HOMING",
                 (undefined **)&DAT_00000059,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHAND_STATUS_KIND_NIGIRU_CAPTURE",(undefined **)0x5a,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHAND_STATUS_KIND_NIGIRU_CENTER_MOVE",
                 (undefined **)0x5b,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHAND_STATUS_KIND_NIGIRU",(undefined **)&DAT_0000005c,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHAND_STATUS_KIND_NIGIRU_THROW_END_2",
                 (undefined **)0x5d,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHAND_STATUS_KIND_NIGIRU_THROW_END_3",
                 (undefined **)0x5e,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHAND_STATUS_KIND_NIGIRU_MISS_MOVE",
                 (undefined **)&DAT_0000005f,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHAND_STATUS_KIND_NIGIRU_MISS_END",
                 (undefined **)&DAT_00000060,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHAND_STATUS_KIND_NIGIRU_CANCEL",
                 (undefined **)&DAT_00000061,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHAND_STATUS_KIND_NIGIRU_UMERU_HOMING",
                 (undefined **)0x62,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHAND_STATUS_KIND_COMPOUND_ATTACK_WAIT",
                 (undefined **)0x63,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHAND_STATUS_KIND_GOOPAA",(undefined **)&DAT_00000064,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHAND_STATUS_KIND_SCRATCH_BLOW_START",
                 (undefined **)&DAT_00000065,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHAND_STATUS_KIND_SCRATCH_BLOW_LOOP",
                 (undefined **)&DAT_00000066,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHAND_STATUS_KIND_SCRATCH_BLOW",(undefined **)0x67,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHAND_STATUS_KIND_TURN",(undefined **)&DAT_00000068,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHAND_STATUS_KIND_WAIT_TO_POINT",
                 (undefined **)&DAT_00000069,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHAND_STATUS_KIND_WAIT_FEINT",(undefined **)0x6a,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHAND_STATUS_KIND_WAIT_TELEPORT",(undefined **)0x6b,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHAND_STATUS_KIND_WAIT_CHASE",
                 (undefined **)&DAT_0000006c,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHAND_STATUS_KIND_WAIT_TIME",
                 (undefined **)&DAT_0000006d,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHAND_STATUS_KIND_DOWN_START",
                 (undefined **)&DAT_0000006e,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHAND_STATUS_KIND_DOWN_FALL",(undefined **)0x6f,param_4
                 ,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHAND_STATUS_KIND_DOWN_LANDING",
                 (undefined **)&DAT_00000070,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHAND_STATUS_KIND_DOWN_LOOP",
                 (undefined **)&DAT_00000071,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHAND_STATUS_KIND_DOWN_END",(undefined **)0x72,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHAND_STATUS_KIND_FIRE_CHARIOT_PRE_MOVE",
                 (undefined **)0x73,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHAND_STATUS_KIND_FIRE_CHARIOT_READY",
                 (undefined **)&DAT_00000074,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHAND_STATUS_KIND_FIRE_CHARIOT_LOOP",
                 (undefined **)&DAT_00000075,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHAND_STATUS_KIND_FIRE_CHARIOT_START",
                 (undefined **)0x76,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHAND_STATUS_KIND_FIRE_CHARIOT",(undefined **)0x77,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHAND_STATUS_KIND_FIRE_CHARIOT_END",
                 (undefined **)&DAT_00000078,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHAND_STATUS_KIND_GROW_FINGER_START",
                 (undefined **)&DAT_00000079,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHAND_STATUS_KIND_GROW_FINGER_LOOP",
                 (undefined **)&DAT_0000007a,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHAND_STATUS_KIND_GROW_FINGER_END",(undefined **)0x7b,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHAND_STATUS_KIND_LOOK_START",
                 (undefined **)&DAT_0000007c,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHAND_STATUS_KIND_LOOK_LOOP",(undefined **)0x7d,param_4
                 ,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHAND_STATUS_KIND_LOOK_ATTACK",(undefined **)0x7e,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHAND_STATUS_KIND_LOOK_END",(undefined **)0x7f,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHAND_STATUS_KIND_GRAVITY_BALL_START",
                 (undefined **)&DAT_00000080,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHAND_STATUS_KIND_GRAVITY_BALL_LOOP",
                 (undefined **)&DAT_00000081,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHAND_STATUS_KIND_GRAVITY_BALL_END",(undefined **)0x82,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHAND_STATUS_KIND_DIG_PRE_MOVE",(undefined **)0x83,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHAND_STATUS_KIND_DIG_START",
                 (undefined **)&DAT_00000084,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHAND_STATUS_KIND_DIG_LOOP",(undefined **)0x85,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHAND_STATUS_KIND_DIG_END",(undefined **)0x86,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHAND_STATUS_KIND_BARK",(undefined **)0x87,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHAND_STATUS_KIND_ELECTROSHOCK_START",
                 (undefined **)&DAT_00000088,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHAND_STATUS_KIND_ELECTROSHOCK",
                 (undefined **)&DAT_00000089,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHAND_STATUS_KIND_ELECTROSHOCK_END",(undefined **)0x8a,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHAND_STATUS_KIND_FINDER",(undefined **)&DAT_0000008b,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHAND_STATUS_KIND_WFINGER_BEAM_START",
                 (undefined **)&DAT_0000008c,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHAND_STATUS_KIND_DEBUG_FIRE_CHARIOT_3",
                 (undefined **)0x8d,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHAND_STATUS_KIND_DEBUG_FIRE_CHARIOT_5",
                 (undefined **)0x8e,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHAND_STATUS_KIND_DEBUG_WAIT",(undefined **)0x8f,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHAND_STATUS_KIND_DEBUG_CONTROL",
                 (undefined **)&DAT_00000090,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHAND_STATUS_KIND_DEBUG_WAIT_WIDTH_MASTERHAND",
                 (undefined **)&DAT_00000091,param_4,param_5,param_6,param_7,param_8);
  if ((local_78 != 0) && (local_70 != 0)) {
    FUN_71038f55d0(local_78,local_68);
  }
  local_70 = 0;
  local_68 = -3;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHAND_INSTANCE_WORK_FLOAT_HIPPATAKU_GA_HEIGHT",
                 (undefined **)0x1,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHAND_INSTANCE_WORK_FLAG_YUBIBEAM_BEAMSTART",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHAND_INSTANCE_WORK_INT_YUBIBEAM_EFFECT_1",
                 (undefined **)0x10000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHAND_INSTANCE_WORK_INT_YUBIBEAM_EFFECT_2",
                 (undefined **)0x10000001,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHAND_INSTANCE_WORK_INT_YUBIBEAM_EFFECT_3",
                 (undefined **)0x10000002,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHAND_INSTANCE_WORK_INT_YUBIBEAM_EFFECT_4",
                 (undefined **)0x10000003,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHAND_INSTANCE_WORK_FLAG_NIGIRU_HOMING_END",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHAND_INSTANCE_WORK_FLAG_CATCH_HOMING_END",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHAND_INSTANCE_WORK_FLAG_THROW",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHAND_INSTANCE_WORK_FLAG_RELEASE",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHAND_INSTANCE_WORK_FLAG_BOMB_INDEX",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHAND_INSTANCE_WORK_FLAG_BOMB_MIDDLE",
                 (undefined **)0x20000001,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHAND_INSTANCE_WORK_FLAG_BOMB_RING",
                 (undefined **)0x20000002,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHAND_INSTANCE_WORK_FLAG_BOMB_PINKY",
                 (undefined **)0x20000003,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHAND_INSTANCE_WORK_FLAG_BOMB_CHASE",
                 (undefined **)0x20000004,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHAND_INSTANCE_WORK_FLAG_NOTAUTSU_CHASE",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHAND_INSTANCE_WORK_FLAG_NOTAUTSU_JOSTLE_OFF",
                 (undefined **)0x20000001,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHAND_INSTANCE_WORK_FLAG_NOTAUTSU_JOSTLE_ON",
                 (undefined **)0x20000002,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHAND_INSTANCE_WORK_FLAG_FIRE_CHARIOT_INDEX",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHAND_INSTANCE_WORK_FLAG_FIRE_CHARIOT_RELEASE",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHAND_INSTANCE_WORK_FLAG_FIRE_CHARIOT_MIDDLE",
                 (undefined **)0x20000001,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHAND_INSTANCE_WORK_FLAG_FIRE_CHARIOT_RING",
                 (undefined **)0x20000002,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHAND_INSTANCE_WORK_FLAG_FIRE_CHARIOT_PINKY",
                 (undefined **)0x20000003,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHAND_INSTANCE_WORK_FLAG_FIRE_CHARIOT_THUMB",
                 (undefined **)0x20000004,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHAND_INSTANCE_WORK_INT_FIRE_CHARIOT_MODE",
                 (undefined **)0x10000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHAND_INSTANCE_WORK_FLOAT_FIRE_CHARIOT_RADIUS",
                 (undefined **)0x1,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHAND_INSTANCE_WORK_FLOAT_FIRE_CHARIOT_ROTATE",
                 (undefined **)0x2,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHAND_INSTANCE_WORK_FLOAT_FIRE_CHARIOT_SPEED",
                 (undefined **)0x3,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHAND_INSTANCE_WORK_FLAG_FIRE_CHARIOT_END_PURGE",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHAND_INSTANCE_WORK_FLAG_GROW_FINGER_HOMING_END",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHAND_INSTANCE_WORK_FLAG_SHOCK_WAVE_CREATE",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHAND_INSTANCE_WORK_FLAG_SCRATCH_JOSTLE_OFF",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHAND_INSTANCE_WORK_FLAG_SCRATCH_JOSTLE_ON",
                 (undefined **)0x20000001,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHAND_INSTANCE_WORK_FLAG_FINDER_SHIRINK_START",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHAND_INSTANCE_WORK_FLAG_WYUBIBEAM_START",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  if ((local_78 != 0) && (local_70 != 0)) {
    FUN_71038f55d0(local_78,local_68);
  }
  local_68 = 0xfffffffd;
  local_70 = 0;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_ST_APPLE_STATUS_KIND_NORMAL",(undefined **)&DAT_00000041,
                 param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_RODIN_MESSAGE_KIND_CANCEL",(undefined **)0x0,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_RODIN_MESSAGE_KIND_HIT_STOP",(undefined **)0x1,param_4,
                 param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_RODIN_INSTANCE_WORK_FLAG_SPAWN_ARM_RIGHT",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_RODIN_INSTANCE_WORK_FLAG_SPAWN_ARM_LEFT",
                 (undefined **)0x20000001,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_RODIN_INSTANCE_WORK_FLAG_SPAWN_ARM_STRAIGHT",
                 (undefined **)0x20000002,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_RODIN_INSTANCE_WORK_FLAG_SPAWN_ARM_UPPER",
                 (undefined **)0x20000003,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_RODIN_INSTANCE_WORK_FLAG_HEEL_DROP_START",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_RODIN_INSTANCE_WORK_FLAG_LANDING_CHECK_ENABLE",
                 (undefined **)0x20000001,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_RODIN_INSTANCE_WORK_FLAG_WALL_CHECK_ENABLE",
                 (undefined **)0x20000002,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_RODIN_INSTANCE_WORK_FLAG_ITEM_CREATE",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_RODIN_INSTANCE_WORK_FLAG_ITEM_THROW",
                 (undefined **)0x20000001,param_4,param_5,param_6,param_7,param_8);
  local_68 = 0xfffffffd;
  local_70 = 0;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_RODIN_STATUS_KIND_ATTACK_STRAIGHT",
                 (undefined **)&DAT_00000041,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_RODIN_STATUS_KIND_ATTACK_ONETWO",(undefined **)0x42,param_4
                 ,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_RODIN_STATUS_KIND_ATTACK_UPPER",(undefined **)0x43,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_RODIN_STATUS_KIND_ATTACK_TRAMPLE",
                 (undefined **)&DAT_00000044,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_RODIN_STATUS_KIND_ATTACK_HEELDROP",
                 (undefined **)&DAT_00000045,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_RODIN_STATUS_KIND_ATTACK_KICKUP",(undefined **)0x46,param_4
                 ,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_RODIN_STATUS_KIND_ATTACK_KICKDOWN",(undefined **)0x47,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_RODIN_STATUS_KIND_HEELDROP_LANDING",
                 (undefined **)&DAT_00000048,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_RODIN_STATUS_KIND_KICKDOWN_LANDING",
                 (undefined **)&DAT_00000049,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_RODIN_STATUS_KIND_FLUTTER",(undefined **)0x4a,param_4,
                 param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_KNUCKLES_INSTANCE_WORK_FLAG_CHANGE_SPHERE",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KNUCKLES_INSTANCE_WORK_FLAG_EXIT_FLIP_OFF",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_KNUCKLES_STATUS_KIND_NONE",(undefined **)&DAT_00000041,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KNUCKLES_STATUS_KIND_PUNCH_COMBO",(undefined **)0x42,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KNUCKLES_STATUS_KIND_JUMPING_OUT_UPPER",(undefined **)0x43,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KNUCKLES_STATUS_KIND_SPIN_ATTACK_GROUND_START",
                 (undefined **)&DAT_00000044,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KNUCKLES_STATUS_KIND_SPIN_ATTACK_AIR_START",
                 (undefined **)&DAT_00000045,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KNUCKLES_STATUS_KIND_SPIN_ATTACK_HOMING",(undefined **)0x46
                 ,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KNUCKLES_STATUS_KIND_SPIN_ATTACK_CANCEL",(undefined **)0x47
                 ,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KNUCKLES_STATUS_KIND_SPIN_ATTACK_LANDING",
                 (undefined **)&DAT_00000048,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KNUCKLES_STATUS_KIND_SPIN_ATTACK_REBOUND",
                 (undefined **)&DAT_00000049,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KNUCKLES_STATUS_KIND_SPIN_ATTACK_HIT",(undefined **)0x4a,
                 param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_KOZUKATA_MESSAGE_KIND_VISIBLE_SIGHT",(undefined **)0x0,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KOZUKATA_MESSAGE_KIND_FORCE_EXIT_SIGHT",(undefined **)0x1,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KOZUKATA_MESSAGE_KIND_SLEEP_CAMERA_SUBJECT",
                 (undefined **)0x2,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KOZUKATA_MESSAGE_KIND_EXIT",(undefined **)0x3,param_4,
                 param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_KOZUKATA_INSTANCE_WORK_FLAG_SPAWN_SIGHT",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KOZUKATA_INSTANCE_WORK_FLAG_START_CAMERA",
                 (undefined **)0x20000001,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KOZUKATA_INSTANCE_WORK_FLAG_VISIBLE_SIGHT",
                 (undefined **)0x20000002,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_KOZUKATAGHOST_KIND_MAX",(undefined **)&DAT_00000004,param_4
                 ,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_KOZUKATASIGHT_CAMERA_PRIORITY",(undefined **)0x3,param_4,
                 param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_KOZUKATASIGHT_INSTANCE_WORK_FLAG_SPAWN_GHOST",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KOZUKATASIGHT_INSTANCE_WORK_FLAG_SHUTTER_END",
                 (undefined **)0x20000001,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KOZUKATASIGHT_INSTANCE_WORK_FLAG_EXIT_FINDER",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KOZUKATASIGHT_INSTANCE_WORK_FLAG_DEL_CURSOR",
                 (undefined **)0x20000001,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KOZUKATASIGHT_INSTANCE_WORK_FLAG_EXIT_KOZUKATA",
                 (undefined **)0x20000002,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KOZUKATASIGHT_INSTANCE_WORK_FLAG_END_SOUND_EFFECT",
                 (undefined **)0x20000003,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KOZUKATASIGHT_INSTANCE_WORK_FLAG_LOST",
                 (undefined **)0x20000004,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_KOZUKATASIGHT_STATUS_KIND_RANDOM_MOVE",
                 (undefined **)&DAT_00000041,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KOZUKATASIGHT_STATUS_KIND_TARGET_MOVE",(undefined **)0x42,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KOZUKATASIGHT_STATUS_KIND_LAST_MOVE",(undefined **)0x43,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KOZUKATASIGHT_STATUS_KIND_SHUTTER_WAIT",
                 (undefined **)&DAT_00000044,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KOZUKATASIGHT_STATUS_KIND_SHUTTER",
                 (undefined **)&DAT_00000045,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KOZUKATASIGHT_STATUS_KIND_DEBUG_SHUTTER_1",
                 (undefined **)0x46,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KOZUKATASIGHT_STATUS_KIND_DEBUG_SHUTTER_2",
                 (undefined **)0x47,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KOZUKATASIGHT_STATUS_KIND_DEBUG_SHUTTER_3",
                 (undefined **)&DAT_00000048,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KOZUKATASIGHT_STATUS_KIND_DEBUG_SHUTTER_4",
                 (undefined **)&DAT_00000049,param_4,param_5,param_6,param_7,param_8);
  local_68 = 0xfffffffd;
  local_70 = 0;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_SUKAPON_STATUS_KIND_ATTACK_GRAB",
                 (undefined **)&DAT_00000041,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_SUKAPON_STATUS_KIND_ATTACK_THROW",(undefined **)0x42,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_SUKAPON_STATUS_KIND_ATTACK_ROLLING_START",
                 (undefined **)0x43,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_SUKAPON_STATUS_KIND_ATTACK_ROLLING_MAIN",
                 (undefined **)&DAT_00000044,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_SUKAPON_STATUS_KIND_ATTACK_ROLLING_END",
                 (undefined **)&DAT_00000045,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_SUKAPON_STATUS_KIND_ATTACK_ROLLING2_START",
                 (undefined **)0x46,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_SUKAPON_STATUS_KIND_ATTACK_ROLLING2_MAIN",
                 (undefined **)0x47,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_SUKAPON_STATUS_KIND_ATTACK_ROLLING2_END",
                 (undefined **)&DAT_00000048,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_SUKAPON_STATUS_KIND_ATTACK_ROLLING_HOP",
                 (undefined **)&DAT_00000049,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_SUKAPON_STATUS_KIND_ATTACK_SHOOT",(undefined **)0x4a,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_SUKAPON_STATUS_KIND_GUARD",(undefined **)0x4b,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_SUKAPON_STATUS_KIND_GUARD_BREAK",
                 (undefined **)&DAT_0000004c,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_SUKAPON_STATUS_KIND_DOWN",(undefined **)0x4d,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_SUKAPON_STATUS_KIND_DOWN_BOUND",(undefined **)&DAT_0000004e
                 ,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_SUKAPON_STATUS_KIND_DOWN_END",(undefined **)0x4f,param_4,
                 param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_SUKAPON_INSTANCE_WORK_FLAG_SHOOT",(undefined **)0x20000000,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_SUKAPON_INSTANCE_WORK_FLAG_THROW",(undefined **)0x20000001,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_SUKAPON_INSTANCE_WORK_INT_DOWN_BOUND_COUNT",
                 (undefined **)0x10000000,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_SUKAPON_SHIELD_GROUP_KIND_ALL",(undefined **)0x0,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_SUKAPON_SHIELD_GROUP_KIND_BULLET",(undefined **)0x1,param_4
                 ,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_SUKAPON_SHIELD_PROTECT_KIND_NONE",(undefined **)0x0,param_4
                 ,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_SUKAPON_SHIELD_PROTECT_KIND_BULLET",(undefined **)0x1,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_SUKAPON_SHIELD_PROTECT_KIND_ALL",(undefined **)0x2,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_SUKAPON_SHIELD_PROTECT_KIND_NUM",(undefined **)0x3,param_4,
                 param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_BAITO_MESSAGE_KIND_APPEARL",(undefined **)0x0,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_BAITO_MESSAGE_KIND_LOST_SUCCESS",(undefined **)0x1,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_BAITO_MESSAGE_KIND_LOST_FAILED",(undefined **)0x2,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_BAITO_MESSAGE_KIND_CATCH_FAILED",(undefined **)0x3,param_4,
                 param_5,param_6,param_7,param_8);
  local_68 = 0xfffffffd;
  local_70 = 0;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_BAITO_STATUS_KIND_PREPARATION",(undefined **)&DAT_00000041,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_BAITO_STATUS_KIND_APPEAL",(undefined **)0x42,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_BAITO_STATUS_KIND_CATCH_FAILED",(undefined **)0x43,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_BAITO_STATUS_KIND_DEADAREA",(undefined **)&DAT_00000044,
                 param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_CLAPTRAP_STATUS_KIND_LOW_JUMP",(undefined **)&DAT_00000041,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CLAPTRAP_STATUS_KIND_ATTACK_BITE_REMOVE",(undefined **)0x42
                 ,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CLAPTRAP_STATUS_KIND_ATTACK_BITE_REMOVE_ON_FINISH",
                 (undefined **)0x43,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAPTRAP_INSTANCE_WORK_FLAG_BITE_RELEASE",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_DRIVER_STATUS_KIND_APPEAR_LANDING",
                 (undefined **)&DAT_00000041,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DRIVER_STATUS_KIND_APPEAR_RIDE",(undefined **)0x42,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DRIVER_STATUS_KIND_APPEAR_RUN_START",(undefined **)0x43,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DRIVER_STATUS_KIND_APPEAR_RUN_START_TURN",
                 (undefined **)&DAT_00000044,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DRIVER_STATUS_KIND_TURN_CHOICE",(undefined **)&DAT_00000045
                 ,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DRIVER_STATUS_KIND_TURN",(undefined **)0x46,param_4,param_5
                 ,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DRIVER_STATUS_KIND_TURN_SHORT",(undefined **)0x47,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DRIVER_STATUS_KIND_RUN_START",(undefined **)&DAT_00000048,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DRIVER_STATUS_KIND_JUMP_CHOICE",(undefined **)&DAT_00000049
                 ,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DRIVER_STATUS_KIND_JUMP_STEP",(undefined **)0x4a,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DRIVER_STATUS_KIND_CARRY_RUN",(undefined **)0x4b,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DRIVER_STATUS_KIND_CARRY_TURN",(undefined **)&DAT_0000004c,
                 param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_DRIVER_INSTANCE_WORK_FLAG_REVERSE_LR",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DRIVER_INSTANCE_WORK_FLAG_REVERSE_FIGHTER",
                 (undefined **)0x20000001,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_DOSSUN_STATUS_KIND_WARP",(undefined **)&DAT_00000041,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DOSSUN_STATUS_KIND_RISING",(undefined **)0x42,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DOSSUN_STATUS_KIND_PRESAGE",(undefined **)0x43,param_4,
                 param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_BOMBERMAN_MESSAGE_KIND_REMOCON_TRIGGER",(undefined **)0x0,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_BOMBERMAN_MESSAGE_KIND_BOMBPUNCH_HIT",(undefined **)0x1,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_BOMBERMAN_MESSAGE_KIND_UPDATE_BOMB",(undefined **)0x2,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_BOMBERMAN_MESSAGE_KIND_DANGER_BOMB",(undefined **)0x3,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_BOMBERMAN_MESSAGE_KIND_REMOCON_AREA_REQUEST",
                 (undefined **)&DAT_00000004,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_BOMBERMAN_MESSAGE_KIND_REMOCON_TRIGGER_REQUEST",
                 (undefined **)0x5,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_BOMBERMANBOMB_INSTANCE_WORK_FLAG_DESTROYED",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_BOMBERMANBOMB_INSTANCE_WORK_FLAG_DANGER",
                 (undefined **)0x20000001,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_BOMBERMAN_INSTANCE_WORK_FLAG_REMOCON_TRIGGER",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_BOMBERMAN_INSTANCE_WORK_FLAG_BOMBCREATE",
                 (undefined **)0x20000003,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_BOMBERMAN_INSTANCE_WORK_FLAG_BOMBPUT",
                 (undefined **)0x20000004,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_BOMBERMAN_STATUS_KIND_BOMBPUT_GROUND",
                 (undefined **)&DAT_00000041,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_BOMBERMAN_STATUS_KIND_BOMBPUT_AIR",(undefined **)0x42,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_BOMBERMAN_STATUS_KIND_REMOCON_TRIGGER_GROUND",
                 (undefined **)0x43,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_BOMBERMAN_STATUS_KIND_REMOCON_TRIGGER_AIR",
                 (undefined **)&DAT_00000044,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_BOMBERMAN_STATUS_KIND_BOMBPUNCH_GROUND",
                 (undefined **)&DAT_00000045,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_BOMBERMAN_STATUS_KIND_BOMBPUNCH_AIR",(undefined **)0x46,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_BOMBERMAN_STATUS_KIND_BOMBESCAPE",(undefined **)0x47,
                 param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_BOMBERMANBOMB_JUMP_REVERSE",(undefined **)&DAT_00000041,
                 param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_SPRINGMAN_ACTION_PUNCH_R_HIT_STOP",(undefined **)0x0,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_SPRINGMAN_ACTION_PUNCH_L_HIT_STOP",(undefined **)0x1,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_SPRINGMAN_ACTION_PUNCH_R_MISS",(undefined **)0x2,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_SPRINGMAN_ACTION_PUNCH_L_MISS",(undefined **)0x3,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_SPRINGMAN_ACTION_PUNCH_R_HOP",(undefined **)&DAT_00000004,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_SPRINGMAN_ACTION_PUNCH_L_HOP",(undefined **)0x5,param_4,
                 param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_SPRINGMAN_ARM_STATUS_NONE",(undefined **)0x0,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_SPRINGMAN_ARM_STATUS_SHOOT",(undefined **)0x1,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_SPRINGMAN_ARM_STATUS_STOP",(undefined **)0x2,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_SPRINGMAN_ARM_STATUS_RETURN",(undefined **)0x3,param_4,
                 param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_SPRINGMAN_STATUS_KIND_ATTACK_PUNCH1R_START",
                 (undefined **)&DAT_00000041,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_SPRINGMAN_STATUS_KIND_ATTACK_PUNCH1R_MAIN",
                 (undefined **)0x42,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_SPRINGMAN_STATUS_KIND_ATTACK_PUNCH1R_END",
                 (undefined **)0x43,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_SPRINGMAN_STATUS_KIND_ATTACK_PUNCH1L_START",
                 (undefined **)&DAT_00000044,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_SPRINGMAN_STATUS_KIND_ATTACK_PUNCH1L_MAIN",
                 (undefined **)&DAT_00000045,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_SPRINGMAN_STATUS_KIND_ATTACK_PUNCH1L_END",
                 (undefined **)0x46,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_SPRINGMAN_STATUS_KIND_ATTACK_RUSH_START",(undefined **)0x47
                 ,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_SPRINGMAN_STATUS_KIND_ATTACK_RUSH_MAIN",
                 (undefined **)&DAT_00000048,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_SPRINGMAN_STATUS_KIND_ATTACK_RUSH_END",
                 (undefined **)&DAT_00000049,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_SPRINGMAN_STATUS_KIND_STEP_IN",(undefined **)0x4a,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_SPRINGMAN_STATUS_KIND_STEP_OUT",(undefined **)0x4b,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_SPRINGMAN_STATUS_KIND_GUARD",(undefined **)&DAT_0000004c,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_SPRINGMAN_STATUS_KIND_GUARD_BREAK",(undefined **)0x4d,
                 param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_SPRINGMAN_INSTANCE_WORK_FLAG_NO_REACTION",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_SPRINGMAN_INSTANCE_WORK_FLAG_SHOOT",
                 (undefined **)0x20000001,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_SPRINGMAN_SHIELD_GROUP_KIND_ALL",(undefined **)0x0,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_SPRINGMAN_SHIELD_GROUP_KIND_BULLET",(undefined **)0x1,
                 param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_SPRINGMAN_SHIELD_PROTECT_KIND_NONE",(undefined **)0x0,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_SPRINGMAN_SHIELD_PROTECT_KIND_BULLET",(undefined **)0x1,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_SPRINGMAN_SHIELD_PROTECT_KIND_ALL",(undefined **)0x2,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_SPRINGMAN_SHIELD_PROTECT_KIND_NUM",(undefined **)0x3,
                 param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_GANONBOSS_INSTANCE_WORK_FLAG_WAIT_END",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GANONBOSS_INSTANCE_WORK_FLAG_IS_TOUCH",
                 (undefined **)0x20000001,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GANONBOSS_INSTANCE_WORK_FLAG_HOMING_BOMB_SHOOT",
                 (undefined **)0x20000002,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GANONBOSS_INSTANCE_WORK_INT_DOWN_EFFECT_HANDLE_1",
                 (undefined **)0x10000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GANONBOSS_INSTANCE_WORK_INT_DOWN_EFFECT_HANDLE_2",
                 (undefined **)0x10000001,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GANONBOSS_INSTANCE_WORK_INT_DOWN_EFFECT_HANDLE_3",
                 (undefined **)0x10000002,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GANONBOSS_INSTANCE_WORK_INT_DOWN_EFFECT_HANDLE_4",
                 (undefined **)0x10000003,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GANONBOSS_INSTANCE_WORK_INT_DOWN_EFFECT_HANDLE_5",
                 (undefined **)0x10000004,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GANONBOSS_INSTANCE_WORK_INT_DOWN_EFFECT_HANDLE_6",
                 (undefined **)0x10000005,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GANONBOSS_INSTANCE_WORK_FLAG_VANISH_MODEL",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = -3;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_GANONBOSS_STATUS_KIND_DOWN_START",
                 (undefined **)&DAT_00000041,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GANONBOSS_STATUS_KIND_DOWN_LOOP",(undefined **)0x42,param_4
                 ,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GANONBOSS_STATUS_KIND_DOWN_END",(undefined **)0x43,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GANONBOSS_STATUS_KIND_WALK_FRONT",
                 (undefined **)&DAT_00000044,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GANONBOSS_STATUS_KIND_WALK_BACK",
                 (undefined **)&DAT_00000045,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GANONBOSS_STATUS_KIND_BACK_JUMP",(undefined **)0x46,param_4
                 ,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GANONBOSS_STATUS_KIND_TURN_JUMP",(undefined **)0x47,param_4
                 ,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GANONBOSS_STATUS_KIND_RETURN_START",
                 (undefined **)&DAT_00000048,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GANONBOSS_STATUS_KIND_RETURN_JUMP",
                 (undefined **)&DAT_00000049,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GANONBOSS_STATUS_KIND_RETURN_WALK",(undefined **)0x4a,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GANONBOSS_STATUS_KIND_ATTACK_DOUBLE_SLASH_START",
                 (undefined **)0x4b,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GANONBOSS_STATUS_KIND_ATTACK_DOUBLE_SLASH_TURN",
                 (undefined **)&DAT_0000004c,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GANONBOSS_STATUS_KIND_ATTACK_DOUBLE_SLASH_EXEC",
                 (undefined **)0x4d,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GANONBOSS_STATUS_KIND_ATTACK_SPIN_SLASH_START",
                 (undefined **)&DAT_0000004e,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GANONBOSS_STATUS_KIND_ATTACK_SPIN_SLASH_LOOP",
                 (undefined **)0x4f,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GANONBOSS_STATUS_KIND_ATTACK_SPIN_SLASH_END",
                 (undefined **)&DAT_00000050,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GANONBOSS_STATUS_KIND_ATTACK_SPIN_SLASH_END_REVERSE",
                 (undefined **)&DAT_00000051,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GANONBOSS_STATUS_KIND_ATTACK_JUMP_SLASH_START",
                 (undefined **)&DAT_00000052,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GANONBOSS_STATUS_KIND_ATTACK_JUMP_SLASH_TURN",
                 (undefined **)0x53,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GANONBOSS_STATUS_KIND_ATTACK_JUMP_SLASH_CHARGE",
                 (undefined **)&DAT_00000054,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GANONBOSS_STATUS_KIND_ATTACK_JUMP_SLASH_EXEC",
                 (undefined **)0x55,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GANONBOSS_STATUS_KIND_ATTACK_SLASH_UP",(undefined **)0x56,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GANONBOSS_STATUS_KIND_ATTACK_THUNDER_SLASH_START",
                 (undefined **)0x57,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GANONBOSS_STATUS_KIND_ATTACK_THUNDER_SLASH_TURN",
                 (undefined **)&DAT_00000058,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GANONBOSS_STATUS_KIND_ATTACK_THUNDER_SLASH_EXEC",
                 (undefined **)&DAT_00000059,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GANONBOSS_STATUS_KIND_ATTACK_THUNDER_SLASH_RETURN",
                 (undefined **)0x5a,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GANONBOSS_STATUS_KIND_ATTACK_BACK_SLASH",(undefined **)0x5b
                 ,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GANONBOSS_STATUS_KIND_ATTACK_BODY_ATTACK_INIT",
                 (undefined **)&DAT_0000005c,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GANONBOSS_STATUS_KIND_ATTACK_BODY_ATTACK_BACK_JUMP",
                 (undefined **)0x5d,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GANONBOSS_STATUS_KIND_ATTACK_BODY_ATTACK_TURN_JUMP",
                 (undefined **)0x5e,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GANONBOSS_STATUS_KIND_ATTACK_BODY_ATTACK_KEEP_BACK_JUMP",
                 (undefined **)&DAT_0000005f,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GANONBOSS_STATUS_KIND_ATTACK_BODY_ATTACK_KEEP_TURN_JUMP",
                 (undefined **)&DAT_00000060,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GANONBOSS_STATUS_KIND_ATTACK_BODY_ATTACK_HOLD",
                 (undefined **)&DAT_00000061,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GANONBOSS_STATUS_KIND_ATTACK_BODY_ATTACK_START",
                 (undefined **)0x62,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GANONBOSS_STATUS_KIND_ATTACK_BODY_ATTACK_LOOP",
                 (undefined **)0x63,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GANONBOSS_STATUS_KIND_ATTACK_BODY_ATTACK_END",
                 (undefined **)&DAT_00000064,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GANONBOSS_STATUS_KIND_ATTACK_HOMING_BOMB_ENTRY",
                 (undefined **)&DAT_00000065,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GANONBOSS_STATUS_KIND_ATTACK_HOMING_BOMB_BACK",
                 (undefined **)&DAT_00000066,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GANONBOSS_STATUS_KIND_ATTACK_HOMING_BOMB_TURN",
                 (undefined **)0x67,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GANONBOSS_STATUS_KIND_ATTACK_HOMING_BOMB_HOLD",
                 (undefined **)&DAT_00000068,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GANONBOSS_STATUS_KIND_ATTACK_HOMING_BOMB_START",
                 (undefined **)&DAT_00000069,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GANONBOSS_STATUS_KIND_ATTACK_HOMING_BOMB_SHOOT",
                 (undefined **)0x6a,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GANONBOSS_STATUS_KIND_ATTACK_BIG_JUMP",(undefined **)0x6b,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GANONBOSS_STATUS_KIND_ATTACK_BIG_JUMP_END",
                 (undefined **)&DAT_0000006c,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GANONBOSS_STATUS_KIND_ATTACK_BIG_JUMP_LANDING",
                 (undefined **)&DAT_0000006d,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GANONBOSS_STATUS_KIND_ATTACK_LASER_BEAM_READY_JUMP",
                 (undefined **)&DAT_0000006e,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GANONBOSS_STATUS_KIND_ATTACK_LASER_BEAM_READY_BACK_JUMP",
                 (undefined **)0x6f,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GANONBOSS_STATUS_KIND_ATTACK_LASER_BEAM_READY_TURN_JUMP",
                 (undefined **)&DAT_00000070,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GANONBOSS_STATUS_KIND_ATTACK_LASER_BEAM_HOLD",
                 (undefined **)&DAT_00000071,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GANONBOSS_STATUS_KIND_ATTACK_LASER_BEAM_START",
                 (undefined **)0x72,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GANONBOSS_STATUS_KIND_ATTACK_LASER_BEAM_LOOP",
                 (undefined **)0x73,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GANONBOSS_STATUS_KIND_ATTACK_LASER_BEAM_LOOP_END",
                 (undefined **)&DAT_00000074,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GANONBOSS_STATUS_KIND_ATTACK_LASER_BEAM_END",
                 (undefined **)&DAT_00000075,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GANONBOSS_STATUS_KIND_DEBUG_TURN",(undefined **)0x76,
                 param_4,param_5,param_6,param_7,param_8);
  if ((local_78 != 0) && (local_70 != 0)) {
    FUN_71038f55d0(local_78,local_68);
  }
  local_68 = 0xfffffffd;
  local_70 = 0;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_HOLYWATER_STATUS_KIND_FIRE_PILLAR",
                 (undefined **)&DAT_00000041,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = -3;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_GALLEOM_STATUS_KIND_WAIT",(undefined **)&DAT_00000041,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GALLEOM_STATUS_KIND_WALK_FRONT",(undefined **)0x42,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GALLEOM_STATUS_KIND_WALK_BACK",(undefined **)0x43,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GALLEOM_STATUS_KIND_TURN",(undefined **)&DAT_00000044,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GALLEOM_STATUS_KIND_ANGER",(undefined **)&DAT_00000045,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GALLEOM_STATUS_KIND_STEP_CRUSH",(undefined **)0x46,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GALLEOM_STATUS_KIND_UPPERCUT",(undefined **)0x47,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GALLEOM_STATUS_KIND_MISSILE",(undefined **)&DAT_00000048,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GALLEOM_STATUS_KIND_DOUBLE_LARIAT_SQUAT",
                 (undefined **)&DAT_00000049,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GALLEOM_STATUS_KIND_DOUBLE_LARIAT_CHARGE",
                 (undefined **)0x4a,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GALLEOM_STATUS_KIND_DOUBLE_LARIAT_MAIN",(undefined **)0x4b,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GALLEOM_STATUS_KIND_LARGE_JUMP_SQUAT",
                 (undefined **)&DAT_0000004c,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GALLEOM_STATUS_KIND_LARGE_JUMP_CHARGE",(undefined **)0x4d,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GALLEOM_STATUS_KIND_LARGE_JUMP_MAIN",
                 (undefined **)&DAT_0000004e,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GALLEOM_STATUS_KIND_LARGE_JUMP_LANDING",(undefined **)0x4f,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GALLEOM_STATUS_KIND_DOUBLE_ARM_PRESS",
                 (undefined **)&DAT_00000050,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GALLEOM_STATUS_KIND_HAMMER_KNUCKLE",
                 (undefined **)&DAT_00000051,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GALLEOM_STATUS_KIND_FALL_DOWN",(undefined **)&DAT_00000052,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GALLEOM_STATUS_KIND_RUSH_TRANSFORM",(undefined **)0x53,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GALLEOM_STATUS_KIND_RUSH_CHARGE",
                 (undefined **)&DAT_00000054,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GALLEOM_STATUS_KIND_RUSH_MAIN",(undefined **)0x55,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GALLEOM_STATUS_KIND_RUSH_RETURN",(undefined **)0x56,param_4
                 ,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GALLEOM_STATUS_KIND_RUSH_FINISH_START",(undefined **)0x57,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GALLEOM_STATUS_KIND_RUSH_FINISH_END",
                 (undefined **)&DAT_00000058,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GALLEOM_STATUS_KIND_RUSH_RETURN_TRANSFORM",
                 (undefined **)&DAT_00000059,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GALLEOM_STATUS_KIND_RUSH_FALL_TRANSFORM",(undefined **)0x5a
                 ,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GALLEOM_STATUS_KIND_RUSH_FALL_CHARGE",(undefined **)0x5b,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GALLEOM_STATUS_KIND_RUSH_FALL_MAIN",
                 (undefined **)&DAT_0000005c,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GALLEOM_STATUS_KIND_RUSH_FALL_WAIT",(undefined **)0x5d,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GALLEOM_STATUS_KIND_RUSH_FALL_RETURN",(undefined **)0x5e,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GALLEOM_STATUS_KIND_RUSH_FALL_RETURN_TRANSFORM",
                 (undefined **)&DAT_0000005f,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GALLEOM_STATUS_KIND_SHOOT_START",
                 (undefined **)&DAT_00000060,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GALLEOM_STATUS_KIND_SHOOT_MAIN",(undefined **)&DAT_00000061
                 ,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GALLEOM_STATUS_KIND_SHOOT_END",(undefined **)0x62,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GALLEOM_STATUS_KIND_GRAB",(undefined **)0x63,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GALLEOM_STATUS_KIND_GRAB_CRUSH",(undefined **)&DAT_00000064
                 ,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GALLEOM_STATUS_KIND_GRAB_CRUSH_MISS",
                 (undefined **)&DAT_00000065,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GALLEOM_STATUS_KIND_GRAB_MISS",(undefined **)&DAT_00000066,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GALLEOM_STATUS_KIND_TURN_GRAB",(undefined **)0x67,param_4,
                 param_5,param_6,param_7,param_8);
  if ((local_78 != 0) && (local_70 != 0)) {
    FUN_71038f55d0(local_78,local_68);
  }
  local_68 = 0xfffffffd;
  local_70 = 0;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_GALLEOM_INSTANCE_WORK_FLAG_MISSILE",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GALLEOM_INSTANCE_WORK_FLAG_SHOCKWAVE",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GALLEOM_INSTANCE_WORK_FLAG_CATCH",(undefined **)0x20000000,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GALLEOM_INSTANCE_WORK_FLAG_THROW",(undefined **)0x20000000,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GALLEOM_INSTANCE_WORK_FLAG_DISABLE_CLATTER",
                 (undefined **)0x20000001,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GALLEOM_INSTANCE_WORK_FLAG_CHANGE_FORM",
                 (undefined **)0x20000002,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GALLEOM_INSTANCE_WORK_FLAG_TANK_DEAD",
                 (undefined **)0x20000003,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_GANONBOSSSHOT_ACTION_SET_ANGLE",(undefined **)0x0,param_4,
                 param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_GANONBOSSSHOT2_INSTANCE_WORK_FLAG_VALUE_BOMB_END",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GANONBOSSSHOT2_INSTANCE_WORK_FLOAT_VALUE_BOMB_SCALE",
                 (undefined **)0x1,param_4,param_5,param_6,param_7,param_8);
  local_68 = 0xfffffffd;
  local_70 = 0;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_GANONBOSSSHOT2_STATUS_KIND_TARGET_HOMING_MOVE",
                 (undefined **)&DAT_00000041,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GANONBOSSSHOT2_STATUS_KIND_STRAIGHT_MOVE",
                 (undefined **)0x42,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_LINKARROW_STATUS_KIND_STICK",(undefined **)&DAT_00000041,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LINKARROW_STATUS_KIND_STICK_AIR",(undefined **)0x42,param_4
                 ,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_LINKARROW_INSTANCE_WORK_FLAG_CAPTURED",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_GALLEOMMISSILE_ACTION_SET_TYPE_MISSILE",(undefined **)0x0,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_GALLEOMMISSILE_ACTION_SET_TYPE_SHOOT",(undefined **)0x1,
                 param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_GALLEOMMISSILE_STATUS_KIND_TAKE_FROM_POCKET",
                 (undefined **)&DAT_00000041,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHANDBULLET_STATUS_KIND_SHOOT",
                 (undefined **)&DAT_00000041,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHANDBULLET_ACTION_SET_ANGLE",(undefined **)0x0,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHANDBULLET_ACTION_SET_ANGLE_DELAY",(undefined **)0x1,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHANDBULLET_ACTION_CHANGE_MOTION_SHOOT2",
                 (undefined **)0x2,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_BAITOCRANE_STATUS_KIND_MOVE",(undefined **)&DAT_00000041,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_BAITOCRANE_STATUS_KIND_DOWN",(undefined **)0x42,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_BAITOCRANE_STATUS_KIND_CATCH",(undefined **)0x43,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_BAITOCRANE_STATUS_KIND_RELEASE",(undefined **)&DAT_00000044
                 ,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_BAITOCRANE_STATUS_KIND_UP_SUCCESS",
                 (undefined **)&DAT_00000045,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_BAITOCRANE_STATUS_KIND_UP_FAILED",(undefined **)0x46,
                 param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_BAITOCRANE_INSTANCE_WORK_FLAG_GRAB",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_ROKONASHOT_STATUS_KIND_SHOT",(undefined **)&DAT_00000041,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_ROKONASHOT_STATUS_KIND_HIT",(undefined **)0x42,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_ROKONASHOT_STATUS_KIND_PILLAR",(undefined **)0x43,param_4,
                 param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_ROKONSHOT_STATUS_KIND_SHOT",(undefined **)&DAT_00000041,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_ROKONSHOT_STATUS_KIND_HIT",(undefined **)0x42,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_ROKONSHOT_STATUS_KIND_PILLAR",(undefined **)0x43,param_4,
                 param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_KAWASAKIPOT_ACTION_CATCH",(undefined **)0x0,param_4,param_5
                 ,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KAWASAKIPOT_ACTION_RELEASE",(undefined **)0x1,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KAWASAKIPOT_ACTION_COOK",(undefined **)0x2,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KAWASAKIPOT_ACTION_COOK_END",(undefined **)0x3,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KAWASAKIPOT_ACTION_LOST",(undefined **)&DAT_00000004,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KAWASAKIPOT_ACTION_TERM",(undefined **)0x5,param_4,param_5,
                 param_6,param_7,param_8);
  local_70 = 0;
  local_68 = -3;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_DRACULA_STATUS_KIND_CHANGE_START",
                 (undefined **)&DAT_00000041,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DRACULA_STATUS_KIND_WAIT",(undefined **)0x42,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DRACULA_STATUS_KIND_TELEPORT_START",(undefined **)0x43,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DRACULA_STATUS_KIND_TELEPORT_MAIN",
                 (undefined **)&DAT_00000044,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DRACULA_STATUS_KIND_TELEPORT_END",
                 (undefined **)&DAT_00000045,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DRACULA_STATUS_KIND_ATTACK_3WAY_START",(undefined **)0x46,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DRACULA_STATUS_KIND_ATTACK_3WAY_MAIN",(undefined **)0x47,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DRACULA_STATUS_KIND_ATTACK_3WAY_END",
                 (undefined **)&DAT_00000048,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DRACULA_STATUS_KIND_ATTACK_TURN_3WAY_START",
                 (undefined **)&DAT_00000049,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DRACULA_STATUS_KIND_ATTACK_TURN_3WAY_MAIN",
                 (undefined **)0x4a,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DRACULA_STATUS_KIND_ATTACK_TURN_3WAY_END",
                 (undefined **)0x4b,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DRACULA_STATUS_KIND_ATTACK_STRAIGHT_START",
                 (undefined **)&DAT_0000004c,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DRACULA_STATUS_KIND_ATTACK_STRAIGHT_MAIN",
                 (undefined **)0x4d,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DRACULA_STATUS_KIND_ATTACK_STRAIGHT_END",
                 (undefined **)&DAT_0000004e,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DRACULA_STATUS_KIND_ATTACK_PILLAR_START",(undefined **)0x4f
                 ,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DRACULA_STATUS_KIND_ATTACK_PILLAR_MAIN",
                 (undefined **)&DAT_00000050,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DRACULA_STATUS_KIND_ATTACK_PILLAR_END",
                 (undefined **)&DAT_00000051,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DRACULA_STATUS_KIND_ATTACK_FILL_START",
                 (undefined **)&DAT_00000052,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DRACULA_STATUS_KIND_ATTACK_FILL_MAIN",(undefined **)0x53,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DRACULA_STATUS_KIND_ATTACK_FILL_END",
                 (undefined **)&DAT_00000054,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DRACULA_STATUS_KIND_ATTACK_RUSH_START",(undefined **)0x55,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DRACULA_STATUS_KIND_ATTACK_RUSH_MAIN",(undefined **)0x56,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DRACULA_STATUS_KIND_ATTACK_RUSH_END",(undefined **)0x57,
                 param_4,param_5,param_6,param_7,param_8);
  if ((local_78 != 0) && (local_70 != 0)) {
    FUN_71038f55d0(local_78,local_68);
  }
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_DRACULA_INSTANCE_WORK_FLAG_SHOOT",(undefined **)0x20000000,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DRACULA_INSTANCE_WORK_FLAG_UNVISIBLE",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_DRACULA2_MESSAGE_KIND_SHOT_ANGLE",(undefined **)0x0,param_4
                 ,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_DRACULA2_FIRESHOT_KIND_UNABLE_FIRE_PILLAR",
                 (undefined **)0x0,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DRACULA2_FIRESHOT_KIND_ENABLE_FIRE_PILLAR",
                 (undefined **)0x1,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_DRACULA2_INSTANCE_WORK_FLAG_SPAWN_SHOT",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DRACULA2_INSTANCE_WORK_FLAG_VANISH_MODEL",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = -3;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_DRACULA2_STATUS_KIND_WAIT",(undefined **)&DAT_00000041,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DRACULA2_STATUS_KIND_FRONT_JUMP",(undefined **)0x42,param_4
                 ,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DRACULA2_STATUS_KIND_BACK_JUMP",(undefined **)0x43,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DRACULA2_STATUS_KIND_TURN",(undefined **)&DAT_00000044,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DRACULA2_STATUS_KIND_FIRE_SHOT_START",
                 (undefined **)&DAT_00000045,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DRACULA2_STATUS_KIND_FIRE_SHOT_LOOP",(undefined **)0x46,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DRACULA2_STATUS_KIND_FIRE_SHOT_END",(undefined **)0x47,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DRACULA2_STATUS_KIND_HOMING_SHOT_START",
                 (undefined **)&DAT_00000048,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DRACULA2_STATUS_KIND_HOMING_SHOT_LOOP",
                 (undefined **)&DAT_00000049,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DRACULA2_STATUS_KIND_HOMING_SHOT_END",(undefined **)0x4a,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DRACULA2_STATUS_KIND_SHOCK_WAVE",(undefined **)0x4b,param_4
                 ,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DRACULA2_STATUS_KIND_SHOCK_WAVE_TURN",
                 (undefined **)&DAT_0000004c,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DRACULA2_STATUS_KIND_SLASH",(undefined **)0x4d,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DRACULA2_STATUS_KIND_SLASH_THREE",
                 (undefined **)&DAT_0000004e,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DRACULA2_STATUS_KIND_STEP_SLASH",(undefined **)0x4f,param_4
                 ,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DRACULA2_STATUS_KIND_TURN_SLASH",
                 (undefined **)&DAT_00000050,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DRACULA2_STATUS_KIND_STRIKE",(undefined **)&DAT_00000051,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DRACULA2_STATUS_KIND_STEP_STRIKE",
                 (undefined **)&DAT_00000052,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DRACULA2_STATUS_KIND_SQUASH_START",(undefined **)0x53,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DRACULA2_STATUS_KIND_SQUASH_END",
                 (undefined **)&DAT_00000054,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DRACULA2_STATUS_KIND_SQUASH_END_TURN",(undefined **)0x55,
                 param_4,param_5,param_6,param_7,param_8);
  if ((local_78 != 0) && (local_70 != 0)) {
    FUN_71038f55d0(local_78,local_68);
  }
  local_68 = -3;
  local_70 = 0;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_MARX_STATUS_KIND_MOVE_STRAIGHT",(undefined **)&DAT_00000041
                 ,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MARX_STATUS_KIND_MOVE_TELEPORT",(undefined **)0x42,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MARX_STATUS_KIND_AVOID_TELEPORT",(undefined **)0x43,param_4
                 ,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MARX_STATUS_KIND_ATTACK_BLACK_HOLE_READY",
                 (undefined **)&DAT_00000044,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MARX_STATUS_KIND_ATTACK_BLACK_HOLE_START",
                 (undefined **)&DAT_00000045,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MARX_STATUS_KIND_ATTACK_BLACK_HOLE_LOOP",(undefined **)0x46
                 ,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MARX_STATUS_KIND_ATTACK_BLACK_HOLE_END",(undefined **)0x47,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MARX_STATUS_KIND_ATTACK_4_CUTTER",
                 (undefined **)&DAT_00000048,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MARX_STATUS_KIND_ATTACK_FLY_OUT_HOMING",
                 (undefined **)&DAT_00000049,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MARX_STATUS_KIND_ATTACK_FLY_OUT_HOMING_END",
                 (undefined **)0x4a,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MARX_STATUS_KIND_ATTACK_FLY_OUT",(undefined **)0x4b,param_4
                 ,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MARX_STATUS_KIND_ATTACK_PLANT_START",
                 (undefined **)&DAT_0000004c,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MARX_STATUS_KIND_ATTACK_PLANT_SOW_SEED",(undefined **)0x4d,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MARX_STATUS_KIND_ATTACK_PLANT_GROWS",
                 (undefined **)&DAT_0000004e,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MARX_STATUS_KIND_ATTACK_ICE_BOMB_START",(undefined **)0x4f,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MARX_STATUS_KIND_ATTACK_ICE_BOMB_LOOP",
                 (undefined **)&DAT_00000050,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MARX_STATUS_KIND_ATTACK_ICE_BOMB_SHOOT",
                 (undefined **)&DAT_00000051,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MARX_STATUS_KIND_ATTACK_FOLLOW_EYE_START",
                 (undefined **)&DAT_00000052,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MARX_STATUS_KIND_ATTACK_FOLLOW_EYE_LOOP",(undefined **)0x53
                 ,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MARX_STATUS_KIND_ATTACK_FOLLOW_EYE_END",
                 (undefined **)&DAT_00000054,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MARX_STATUS_KIND_ATTACK_THICK_LASER_START",
                 (undefined **)0x55,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MARX_STATUS_KIND_ATTACK_THICK_LASER_LOOP",
                 (undefined **)0x56,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MARX_STATUS_KIND_ATTACK_THICK_LASER_END",(undefined **)0x57
                 ,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MARX_STATUS_KIND_ATTACK_CAPILLARY_START",
                 (undefined **)&DAT_00000058,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MARX_STATUS_KIND_ATTACK_CAPILLARY_LOOP",
                 (undefined **)&DAT_00000059,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MARX_STATUS_KIND_ATTACK_CAPILLARY_END",(undefined **)0x5a,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MARX_STATUS_KIND_ATTACK_FACET_EYE_LASER_START",
                 (undefined **)0x5b,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MARX_STATUS_KIND_ATTACK_FACET_EYE_LASER",
                 (undefined **)&DAT_0000005c,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MARX_STATUS_KIND_ATTACK_FACET_EYE_LASER_END",
                 (undefined **)0x5d,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MARX_STATUS_KIND_DEAD_REACTION",(undefined **)0x5e,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MARX_STATUS_KIND_DEBUG_CONTROL",(undefined **)&DAT_0000005f
                 ,param_4,param_5,param_6,param_7,param_8);
  if ((local_78 != 0) && (local_70 != 0)) {
    FUN_71038f55d0(local_78,local_68);
  }
  local_70 = 0;
  local_68 = -3;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_MARX_INSTANCE_WORK_FLAG_PLANT_EXTINCTION_START",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MARX_INSTANCE_WORK_FLAG_ICE_BOMB_SHOOT",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MARX_INSTANCE_WORK_FLAG_BLACK_HOLE_VANISH",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MARX_INSTANCE_WORK_FLAG_4_CUTTER",(undefined **)0x20000000,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MARX_INSTANCE_WORK_FLAG_FOLLOW_EYE_CREATE",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MARX_INSTANCE_WORK_FLAG_FLY_OUT_HIT_ENABLE",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MARX_INSTANCE_WORK_FLAG_THICK_LASER_START",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MARX_INSTANCE_WORK_FLAG_THICK_LASER_END",
                 (undefined **)0x20000001,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MARX_INSTANCE_WORK_FLAG_IS_CAMERANGE_INSIDE_TELEPORT_READY"
                 ,(undefined **)0x20000005,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MARX_INSTANCE_WORK_INT_BLACK_HOLE_EFFECT",
                 (undefined **)0x10000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MARX_INSTANCE_WORK_INT_THICK_LASER_EFFECT",
                 (undefined **)0x10000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MARX_INSTANCE_WORK_INT_THICK_LASER_SIGN_WAIT_FRAME",
                 (undefined **)0x10000001,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MARX_INSTANCE_WORK_FLOAT_THICK_LASER_GA_HEIGHT",
                 (undefined **)0x1,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MARX_INSTANCE_WORK_FLOAT_THICK_LASER_MOVE_LR",
                 (undefined **)0x2,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MARX_INSTANCE_WORK_FLAG_ENTRY_STOP",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MARX_INSTANCE_WORK_FLAG_ENTRY_FIGHTER_VISIBLE",
                 (undefined **)0x20000001,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MARX_INSTANCE_WORK_FLAG_FLIP_RESET",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  if ((local_78 != 0) && (local_70 != 0)) {
    FUN_71038f55d0(local_78,local_68);
  }
  local_68 = 0xfffffffd;
  local_70 = 0;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_MARX_PLANT_MESSAGE_KIND_GROWS_CANCEL",(undefined **)0x0,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MARX_PLANT_MESSAGE_KIND_EXTINCTION_START",(undefined **)0x1
                 ,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MARX_CHASE_EYE_MESSAGE_KIND_CHASE_START",(undefined **)0x2,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MARX_EYELASER_MESSAGE_KIND_FACET_LR",(undefined **)0x3,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MARX_EYELASER_MESSAGE_KIND_FACET_START",
                 (undefined **)&DAT_00000004,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MARX_EYELASER_MESSAGE_KIND_FACET_LOST",(undefined **)0x5,
                 param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = -3;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIOLEUSBOSS_STATUS_KIND_WAIT",(undefined **)&DAT_00000041,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIOLEUSBOSS_STATUS_KIND_MOVE_TACKLE_START",
                 (undefined **)0x42,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIOLEUSBOSS_STATUS_KIND_MOVE_TACKLE",(undefined **)0x43,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIOLEUSBOSS_STATUS_KIND_MOVE_TACKLE_END",
                 (undefined **)&DAT_00000044,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIOLEUSBOSS_STATUS_KIND_MOVE_TACKLE_TURN",
                 (undefined **)&DAT_00000045,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIOLEUSBOSS_STATUS_KIND_TURN",(undefined **)0x46,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIOLEUSBOSS_STATUS_KIND_ATTACK_TACKLE_START",
                 (undefined **)0x47,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIOLEUSBOSS_STATUS_KIND_ATTACK_TACKLE",
                 (undefined **)&DAT_00000048,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIOLEUSBOSS_STATUS_KIND_ATTACK_TACKLE_END",
                 (undefined **)&DAT_00000049,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIOLEUSBOSS_STATUS_KIND_ATTACK_TACKLE_TURN",
                 (undefined **)0x4a,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIOLEUSBOSS_STATUS_KIND_ATTACK_TACKLE_JUMP",
                 (undefined **)0x4b,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIOLEUSBOSS_STATUS_KIND_ATTACK_FIREBALL",
                 (undefined **)&DAT_0000004c,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIOLEUSBOSS_STATUS_KIND_ATTACK_FIREBALL3_START",
                 (undefined **)0x4d,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIOLEUSBOSS_STATUS_KIND_ATTACK_FIREBALL3",
                 (undefined **)&DAT_0000004e,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIOLEUSBOSS_STATUS_KIND_ATTACK_FIREBALL3_END",
                 (undefined **)0x4f,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIOLEUSBOSS_STATUS_KIND_ATTACK_BACK_JUMP_FIREBALL",
                 (undefined **)&DAT_00000050,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIOLEUSBOSS_STATUS_KIND_ATTACK_BACK_JUMP_FIREBALL2",
                 (undefined **)&DAT_00000051,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIOLEUSBOSS_STATUS_KIND_ATTACK_CHARGE_FIREBALL_START",
                 (undefined **)&DAT_00000052,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIOLEUSBOSS_STATUS_KIND_ATTACK_CHARGE_FIREBALL_START_AIR",
                 (undefined **)0x53,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIOLEUSBOSS_STATUS_KIND_ATTACK_CHARGE_FIREBALL_HOLD",
                 (undefined **)&DAT_00000054,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIOLEUSBOSS_STATUS_KIND_ATTACK_CHARGE_FIREBALL",
                 (undefined **)0x55,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIOLEUSBOSS_STATUS_KIND_ATTACK_CHARGE_FIREBALL_END",
                 (undefined **)0x56,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIOLEUSBOSS_STATUS_KIND_ATTACK_TAIL",(undefined **)0x57,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIOLEUSBOSS_STATUS_KIND_ATTACK_HOWLING",
                 (undefined **)&DAT_00000058,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIOLEUSBOSS_STATUS_KIND_ATTACK_ASSAULT_START",
                 (undefined **)&DAT_00000059,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIOLEUSBOSS_STATUS_KIND_ATTACK_ASSAULT",(undefined **)0x5a,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIOLEUSBOSS_STATUS_KIND_WAIT_AIR",(undefined **)0x5b,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIOLEUSBOSS_STATUS_KIND_FLY",(undefined **)&DAT_0000005c,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIOLEUSBOSS_STATUS_KIND_FLY_TURN",(undefined **)0x5d,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIOLEUSBOSS_STATUS_KIND_FLY_END",(undefined **)0x5e,param_4
                 ,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIOLEUSBOSS_STATUS_KIND_TURN_AIR",
                 (undefined **)&DAT_0000005f,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIOLEUSBOSS_STATUS_KIND_STEP_AIR",
                 (undefined **)&DAT_00000060,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIOLEUSBOSS_STATUS_KIND_ATTACK_FIREBALL_AIR",
                 (undefined **)&DAT_00000061,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIOLEUSBOSS_STATUS_KIND_ATTACK_FIREBALL3_AIR_START",
                 (undefined **)0x62,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIOLEUSBOSS_STATUS_KIND_ATTACK_FIREBALL3_AIR",
                 (undefined **)0x63,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIOLEUSBOSS_STATUS_KIND_ATTACK_FIREBALL3_AIR_END",
                 (undefined **)&DAT_00000064,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIOLEUSBOSS_STATUS_KIND_ATTACK_NAIL_AIR",
                 (undefined **)&DAT_00000065,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIOLEUSBOSS_STATUS_KIND_ATTACK_HOWLING_AIR",
                 (undefined **)&DAT_00000066,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIOLEUSBOSS_STATUS_KIND_ATTACK_GLIDE_START",
                 (undefined **)0x67,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIOLEUSBOSS_STATUS_KIND_ATTACK_GLIDE",
                 (undefined **)&DAT_00000068,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIOLEUSBOSS_STATUS_KIND_ATTACK_GLIDE_END",
                 (undefined **)&DAT_00000069,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIOLEUSBOSS_STATUS_KIND_ATTACK_GLIDE_END2",
                 (undefined **)0x6a,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIOLEUSBOSS_STATUS_KIND_CHANGE_MODE_AIR",(undefined **)0x6b
                 ,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIOLEUSBOSS_STATUS_KIND_CHANGE_MODE_GROUND",
                 (undefined **)&DAT_0000006c,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIOLEUSBOSS_STATUS_KIND_DOWN_START",
                 (undefined **)&DAT_0000006d,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIOLEUSBOSS_STATUS_KIND_DOWN_LOOP",
                 (undefined **)&DAT_0000006e,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIOLEUSBOSS_STATUS_KIND_DOWN_END",(undefined **)0x6f,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIOLEUSBOSS_STATUS_KIND_DOWN_AIR_START",
                 (undefined **)&DAT_00000070,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIOLEUSBOSS_STATUS_KIND_DOWN_AIR_LOOP",
                 (undefined **)&DAT_00000071,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIOLEUSBOSS_STATUS_KIND_DOWN_AIR_END",(undefined **)0x72,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIOLEUSBOSS_STATUS_KIND_DOWN_TAIL_CUT_START",
                 (undefined **)0x73,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIOLEUSBOSS_STATUS_KIND_DOWN_TAIL_CUT_END",
                 (undefined **)&DAT_00000074,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIOLEUSBOSS_STATUS_KIND_KIZETSU_START",
                 (undefined **)&DAT_00000075,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIOLEUSBOSS_STATUS_KIND_KIZETSU_LOOP",(undefined **)0x76,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIOLEUSBOSS_STATUS_KIND_KIZETSU_END",(undefined **)0x77,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIOLEUSBOSS_STATUS_KIND_HOLE_START",
                 (undefined **)&DAT_00000078,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIOLEUSBOSS_STATUS_KIND_HOLE_LOOP",
                 (undefined **)&DAT_00000079,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIOLEUSBOSS_STATUS_KIND_HOLE_END",
                 (undefined **)&DAT_0000007a,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIOLEUSBOSS_STATUS_KIND_DEAD_AIR_START",(undefined **)0x7b,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIOLEUSBOSS_STATUS_KIND_DEAD_AIR",
                 (undefined **)&DAT_0000007c,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIOLEUSBOSS_STATUS_KIND_DEBUG_ATTACK_TACKLE_JUMP",
                 (undefined **)0x7d,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIOLEUSBOSS_STATUS_KIND_DEBUG_WAIT_AIR",(undefined **)0x7e,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIOLEUSBOSS_STATUS_KIND_DEBUG_CONTROL",(undefined **)0x7f,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIOLEUSBOSS_STATUS_KIND_TERM",(undefined **)&DAT_00000080,
                 param_4,param_5,param_6,param_7,param_8);
  if ((local_78 != 0) && (local_70 != 0)) {
    FUN_71038f55d0(local_78,local_68);
  }
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIOLEUSBOSS_INSTANCE_WORK_FLAG_SHOOT",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIOLEUSBOSS_INSTANCE_WORK_FLAG_RESTART",
                 (undefined **)0x20000001,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIOLEUSBOSS_INSTANCE_WORK_FLAG_START_ENERGY",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIOLEUSBOSS_INSTANCE_WORK_FLAG_START_BRAKE",
                 (undefined **)0x20000001,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIOLEUSBOSS_INSTANCE_WORK_FLAG_MOVING_ON_Z_AXIS",
                 (undefined **)0x20000002,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIOLEUSBOSS_INSTANCE_WORK_FLAG_STOP_HOLE_EFFECT",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIOLEUSBOSS_INSTANCE_WORK_FLAG_TAIL_CUT_CREATE_ITEM",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIOLEUSBOSS_INSTANCE_WORK_FLAG_LANDING",
                 (undefined **)0x20000001,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIOLEUSBOSS_INSTANCE_WORK_INT_DEAD_KIND",
                 (undefined **)0x10000000,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIOLEUSBOSS_DEAD_KIND_GROUND",(undefined **)0x0,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIOLEUSBOSS_DEAD_KIND_AIR",(undefined **)0x1,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIOLEUSBOSS_DEAD_KIND_HOLE",(undefined **)0x2,param_4,
                 param_5,param_6,param_7,param_8);
  local_68 = 0xfffffffd;
  local_70 = 0;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_SUKAPONSHOT_STATUS_KIND_HOP",(undefined **)&DAT_00000041,
                 param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHANDIRONBALL_STATUS_KIND_MOVE1",
                 (undefined **)&DAT_00000041,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHANDIRONBALL_STATUS_KIND_MOVE2",(undefined **)0x42,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHANDIRONBALL_STATUS_KIND_PRE_MOVE",(undefined **)0x43
                 ,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHANDIRONBALL_ACTION_SET_STRAIGHT",(undefined **)0x0,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHANDIRONBALL_ACTION_SET_BOUND",(undefined **)0x1,
                 param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHANDPAINTBALL_ACTION_ROT",(undefined **)0x0,param_4,
                 param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHANDPAINTBALL_INSTANCE_WORK_FLOAT_R",
                 (undefined **)0x1,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHANDPAINTBALL_INSTANCE_WORK_FLOAT_G",
                 (undefined **)0x2,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHANDPAINTBALL_INSTANCE_WORK_FLOAT_B",
                 (undefined **)0x3,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHANDCHAKRAM_ACTION_SHOOT1",(undefined **)0x0,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHANDCHAKRAM_ACTION_SHOOT2",(undefined **)0x1,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHANDCHAKRAM_ACTION_SHOOT3",(undefined **)0x2,param_4,
                 param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHANDKENZAN_STATUS_KIND_NEEDLE",
                 (undefined **)&DAT_00000041,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHANDENERGYSHOT_ACTION_SHOOT",(undefined **)0x0,
                 param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHANDENERGYSHOT_STATUS_KIND_THROW2",
                 (undefined **)&DAT_00000041,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_DRACULA3WAY_ACTION_SET_SPEED_Y_MUL",(undefined **)0x0,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DRACULA3WAY_ACTION_SET_TURN_SPEED_Y_MUL",(undefined **)0x1,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DRACULA3WAY_ACTION_SET_ANGLE",(undefined **)0x2,param_4,
                 param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_DRACULAPILLAR_ACTION_TYPE_FENCE_LAST",(undefined **)0x0,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DRACULAPILLAR_ACTION_TYPE_CHASE",(undefined **)0x1,param_4,
                 param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_DRACULAPILLAR_STATUS_KIND_SHOOT",
                 (undefined **)&DAT_00000041,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_DRACULAPILLAR_INSTANCE_WORK_INT_MAIN_EFFECT_HANDLE",
                 (undefined **)0x10000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DRACULAPILLAR_INSTANCE_WORK_INT_FLOOR_EFFECT_HANDLE",
                 (undefined **)0x10000001,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DRACULAPILLAR_INSTANCE_WORK_FLOAT_MAIN_EFFECT_SCALE",
                 (undefined **)0x1,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DRACULAPILLAR_INSTANCE_WORK_FLOAT_FLOOR_EFFECT_SCALE",
                 (undefined **)0x2,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_DRACULAFILL_ACTION_SET_ANGLE",(undefined **)0x0,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DRACULAFILL_ACTION_SET_SHOT_LEVEL",(undefined **)0x1,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DRACULAFILL_ACTION_TYPE_STRAIGHT",(undefined **)0x2,param_4
                 ,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DRACULAFILL_ACTION_TYPE_CURVE",(undefined **)0x3,param_4,
                 param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHANDSATELLITE_ACTION_SET_ROT",(undefined **)0x0,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHANDSATELLITE_ACTION_HIT_BEAM",(undefined **)0x1,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHANDSATELLITE_ACTION_SHRINK",(undefined **)0x2,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHANDSATELLITE_ACTION_LOST",(undefined **)0x3,param_4,
                 param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHANDSATELLITESHOT_STATUS_KIND_SHOOT",
                 (undefined **)&DAT_00000041,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHANDSATELLITESHOT_STATUS_KIND_SHOOT_END",
                 (undefined **)0x42,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHANDSATELLITESHOT_ACTION_BEAM_SHOOT",
                 (undefined **)0x0,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHANDSATELLITESHOT_ACTION_BEAM_DELETE",
                 (undefined **)0x1,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHANDSATELLITESHOT_ACTION_DELETE",(undefined **)0x2,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHANDSATELLITESHOT_ACTION_SET_DUET",(undefined **)0x3,
                 param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,
                 (uint *)"ITEM_MASTERHANDSATELLITESHOT_INSTANCE_WORK_FLAG_SATELLITE_BEAM_MOVE_DONE",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,
                 (uint *)"ITEM_MASTERHANDSATELLITESHOT_INSTANCE_WORK_FLAG_SATELLITE_BEAM_END",
                 (undefined **)0x20000001,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MASTERHANDSATELLITESHOT_INSTANCE_WORK_INT_POS_IDX",
                 (undefined **)0x10000000,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIOLEUSBOSSSHOT_ACTION_SET_ANGLE",(undefined **)0x0,param_4
                 ,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIOLEUSBOSSSHOT_ACTION_SET_ANGLE3",(undefined **)0x1,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_LIOLEUSBOSSSHOT_ACTION_SET_ANGLE_BACKJUMP",
                 (undefined **)0x2,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHANDFIRE_STATUS_KIND_PURGE",
                 (undefined **)&DAT_00000041,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHANDFIRE_ACTION_RELEASE",(undefined **)0x0,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHANDFIRE_ACTION_PURGE",(undefined **)0x1,param_4,
                 param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHANDSEARCHLIGHT_INSTANCE_WORK_FLAG_CHASE_END",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHANDSEARCHLIGHT_INSTANCE_WORK_FLAG_ATTACK_END",
                 (undefined **)0x20000001,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHANDSEARCHLIGHT_INSTANCE_WORK_INT_EFFECT_GROUND",
                 (undefined **)0x10000000,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHANDSEARCHLIGHT_STATUS_KIND_SEARCH_1",
                 (undefined **)&DAT_00000041,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHANDSEARCHLIGHT_STATUS_KIND_SEARCH_2",
                 (undefined **)0x42,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHANDSEARCHLIGHT_STATUS_KIND_SEARCH_3",
                 (undefined **)0x43,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHANDSEARCHLIGHT_STATUS_KIND_SEARCH_4",
                 (undefined **)&DAT_00000044,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHANDGRAVITYBALL_STATUS_KIND_ATTACK",
                 (undefined **)&DAT_00000041,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHANDGRAVITYBALL_INSTANCE_WORK_FLAG_THROW",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHANDGRAVITYBALL_INSTANCE_WORK_FLAG_LOST",
                 (undefined **)0x20000001,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHANDGRAVITYBALL_ACTION_SET_RAD",(undefined **)0x0,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_CRAZYHANDGRAVITYBALL_ACTION_SET_DUET",(undefined **)0x1,
                 param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_DRACULABAT_ACTION_SET_GOAL_X",(undefined **)0x0,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DRACULABAT_ACTION_SET_ANGRY",(undefined **)0x1,param_4,
                 param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_WILYCAPSULE_HOMING_SHOT_KIND_FIRE",(undefined **)0x0,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_WILYCAPSULE_HOMING_SHOT_KIND_PARALYZE",(undefined **)0x1,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_WILYCAPSULE_HOMING_SHOT_KIND_ICE",(undefined **)0x2,param_4
                 ,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_WILYCAPSULE_THUNDER_SHOT_KIND_PARENT",(undefined **)0x0,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_WILYCAPSULE_THUNDER_SHOT_KIND_1ST",(undefined **)0x1,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_WILYCAPSULE_THUNDER_SHOT_KIND_2ND",(undefined **)0x2,
                 param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_WILYCAPSULE_INSTANCE_WORK_FLAG_SHOT_START",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_WILYCAPSULE_INSTANCE_WORK_FLAG_RUSH_MOVE_START",
                 (undefined **)0x20000001,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_WILYCAPSULE_INSTANCE_WORK_FLAG_RUSH_BRAKE_START",
                 (undefined **)0x20000002,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_WILYCAPSULE_STATUS_KIND_WARP_START",
                 (undefined **)&DAT_00000041,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_WILYCAPSULE_STATUS_KIND_WARP",(undefined **)0x42,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_WILYCAPSULE_STATUS_KIND_WARP_END",(undefined **)0x43,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_WILYCAPSULE_STATUS_KIND_HOMING_SHOT",
                 (undefined **)&DAT_00000044,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_WILYCAPSULE_STATUS_KIND_THUNDER_SHOT",
                 (undefined **)&DAT_00000045,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_WILYCAPSULE_STATUS_KIND_RUSH",(undefined **)0x46,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_WILYCAPSULE_STATUS_KIND_TERM",(undefined **)0x47,param_4,
                 param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_FLYANDHAND_STATUS_KIND_MOVE1",(undefined **)&DAT_00000041,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_FLYANDHAND_STATUS_KIND_MOVE2",(undefined **)0x42,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_FLYANDHAND_STATUS_KIND_MOVE3",(undefined **)0x43,param_4,
                 param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_VINCE_STATUS_KIND_PRE_DRAW",(undefined **)&DAT_00000041,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VINCE_STATUS_KIND_DRAW_START",(undefined **)0x42,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VINCE_STATUS_KIND_DRAW",(undefined **)0x43,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VINCE_STATUS_KIND_DRAW_END",(undefined **)&DAT_00000044,
                 param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_VINCE_INSTANCE_WORK_INT_EASEL_EFFECT_HANDLE",
                 (undefined **)0x10000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_VINCE_INSTANCE_WORK_INT_EASEL_EFFECT_KIND",
                 (undefined **)0x10000001,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_TIKI_MESSAGE_KIND_ANGLE",(undefined **)0x0,param_4,param_5,
                 param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_TIKI_STATUS_KIND_TRANSFORM_DRAGON_START",
                 (undefined **)&DAT_00000041,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_TIKI_STATUS_KIND_TRANSFORM_DRAGON_END",(undefined **)0x42,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_TIKI_STATUS_KIND_TRANSFORM_DRAGON_RELEASE",
                 (undefined **)0x43,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_TIKI_STATUS_KIND_DRAGON_MOVE_START",
                 (undefined **)&DAT_00000044,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_TIKI_STATUS_KIND_DRAGON_MOVE_EXEC",
                 (undefined **)&DAT_00000045,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_TIKI_STATUS_KIND_DRAGON_MOVE_SHORT",(undefined **)0x46,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_TIKI_STATUS_KIND_DRAGON_BREATH",(undefined **)0x47,param_4,
                 param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_TIKI_INSTANCE_WORK_FLAG_HIT_ENABLE",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_TIKI_INSTANCE_WORK_FLAG_BREATH_READY",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_TIKI_INSTANCE_WORK_FLAG_SPREAD_STOP",
                 (undefined **)0x20000001,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_TIKI_INSTANCE_WORK_FLAG_NECK_RETURN_START",
                 (undefined **)0x20000002,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_TIKI_INSTANCE_WORK_FLAG_BREATH_EMBERS_START_EFFECT",
                 (undefined **)0x20000003,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_TIKI_INSTANCE_WORK_INT_TRANSFORM_EFFECT_HANDLE",
                 (undefined **)0x10000000,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_NIKKI_STATUS_KIND_CHANGE_FRONT",(undefined **)&DAT_00000041
                 ,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_NIKKI_STATUS_KIND_DRAW",(undefined **)0x42,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_NIKKI_STATUS_KIND_DEBUG_DRAW_ILLUST1",(undefined **)0x43,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_NIKKI_STATUS_KIND_DEBUG_DRAW_ILLUST2",
                 (undefined **)&DAT_00000044,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_NIKKI_STATUS_KIND_DEBUG_DRAW_ILLUST3",
                 (undefined **)&DAT_00000045,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_NIKKI_STATUS_KIND_DEBUG_DRAW_ILLUST4",(undefined **)0x46,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_NIKKI_STATUS_KIND_DEBUG_DRAW_ILLUST5",(undefined **)0x47,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_NIKKI_STATUS_KIND_DEBUG_DRAW_ILLUST6",
                 (undefined **)&DAT_00000048,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_NIKKI_INSTANCE_WORK_FLAG_CAMERA_FRONT",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_NIKKI_INSTANCE_WORK_FLOAT_SCREEN_POS_X",(undefined **)0x1,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_NIKKI_INSTANCE_WORK_FLOAT_SCREEN_POS_Y",(undefined **)0x2,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_NIKKI_INSTANCE_WORK_FLOAT_OFFSET_Z",(undefined **)0x3,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_NIKKI_INSTANCE_WORK_FLOAT_ROT_Y",
                 (undefined **)&DAT_00000004,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_NIKKI_INSTANCE_WORK_FLOAT_NEAR_CLIP_OFFSET",
                 (undefined **)0x5,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_FLYANDHANDFLY_INSTANCE_WORK_FLAG_DEAD",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_FLYANDHANDFLY_INSTANCE_WORK_FLAG_LOST",
                 (undefined **)0x20000001,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_FLYANDHANDFLY_INSTANCE_WORK_FLOAT_TARGET_LENGTH",
                 (undefined **)0x1,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_FLYANDHANDFLY_INSTANCE_WORK_INT_CREATE_TIME",
                 (undefined **)0x10000000,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_FLYANDHANDFLY_ACTION_SET_ANGLE",(undefined **)0x0,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_FLYANDHANDFLY_ACTION_LOST",(undefined **)0x1,param_4,
                 param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_FLYANDHANDFLY_STATUS_KIND_MOVE1",
                 (undefined **)&DAT_00000041,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_FLYANDHANDFLY_STATUS_KIND_MOVE2",(undefined **)0x42,param_4
                 ,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_FLYANDHANDFLY_STATUS_KIND_MOVE3",(undefined **)0x43,param_4
                 ,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_FLYANDHANDFLY_STATUS_KIND_MOVE4",
                 (undefined **)&DAT_00000044,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_FLYANDHANDFLY_STATUS_KIND_DEAD",(undefined **)&DAT_00000045
                 ,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_SPRINGMANSHOT_ACTION_LOST",(undefined **)0x0,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_SPRINGMANSHOT_ACTION_BRAKE",(undefined **)0x1,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_SPRINGMANSHOT_ACTION_SET_SIDE",(undefined **)0x2,param_4,
                 param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_SPRINGMANSHOT_STATUS_KIND_HOP",(undefined **)&DAT_00000041,
                 param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_SPRINGMANSHOT_INSTANCE_WORK_INT_PARENT_TARGET_ID",
                 (undefined **)0x10000000,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_SNAKECBOX_INSTANCE_WORK_FLAG_FOR_RESULT",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_DRACULA2FIRESHOT_STATUS_KIND_FIRE_PILLAR",
                 (undefined **)&DAT_00000041,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_MARXCUTTER_INSTANCE_WORK_FLAG_LEFT_ROTATION",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEMMARXCUTTER_ACTION_SET_ANGLE",(undefined **)0x0,param_4,
                 param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_MARXPLANTSEED_INSTANCE_WORK_FLAG_UNABLE_DISP",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MARXPLANTSEED_INSTANDE_WORK_INT_INFO_INDEX",
                 (undefined **)0x10000000,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_MARXPLANTBODY_STATUS_KIND_GROW",(undefined **)&DAT_00000041
                 ,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MARXPLANTBODY_STATUS_KIND_WITHER",(undefined **)0x42,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MARXPLANTBODY_STATUS_KIND_EXTINCTION_START",
                 (undefined **)0x43,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MARXPLANTBODY_STATUS_KIND_EXTINCTION_EXEC",
                 (undefined **)&DAT_00000044,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_MARXPLANTBODY_INSTANCE_WORK_INT_WITHER_FRAME",
                 (undefined **)0x10000000,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_MARXCHASEEYE_INSTANCE_WORK_FLAG_INIT_VISIBLE",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_MARXCHASEEYE_STATUS_KIND_START",(undefined **)&DAT_00000041
                 ,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_MARXEYELASER_STATUS_KIND_LASER_START",
                 (undefined **)&DAT_00000041,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MARXEYELASER_STATUS_KIND_LASER_HOLD",(undefined **)0x42,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MARXEYELASER_STATUS_KIND_LASER_LOOP",(undefined **)0x43,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MARXEYELASER_STATUS_KIND_LASER_FINISH",
                 (undefined **)&DAT_00000044,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MARXEYELASER_STATUS_KIND_LASER_END",
                 (undefined **)&DAT_00000045,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MARXEYELASER_STATUS_KIND_LASER_LOST_READY",
                 (undefined **)0x46,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_MARXEYELASER_INSTANCE_WORK_FLAG_VISIBILITY_ON",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MARXEYELASER_INSTANCE_WORK_FLAG_VISIBILITY_OFF",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MARXEYELASER_INSTANCE_WORK_INT_LASER_EFFECT_1",
                 (undefined **)0x10000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MARXEYELASER_INSTANCE_WORK_INT_LASER_EFFECT_2",
                 (undefined **)0x10000001,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MARXEYELASER_INSTANCE_WORK_INT_LASER_EFFECT_3",
                 (undefined **)0x10000002,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MARXEYELASER_INSTANCE_WORK_INT_LASER_EFFECT_4",
                 (undefined **)0x10000003,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_MARXEYELASER_INSTANCE_WORK_INT_LASER_EFFECT_5",
                 (undefined **)0x10000004,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = -3;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILA_STATUS_KIND_TELEPORT",(undefined **)&DAT_00000041,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILA_STATUS_KIND_MANAGER_WAIT",(undefined **)0x42,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILA_STATUS_KIND_MANAGER_VANISH",(undefined **)0x43,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILA_STATUS_KIND_DOWN_START",(undefined **)&DAT_00000044,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILA_STATUS_KIND_DOWN_FALL",(undefined **)&DAT_00000045,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILA_STATUS_KIND_DOWN_LOOP",(undefined **)0x46,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILA_STATUS_KIND_DOWN_END",(undefined **)0x47,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILA_STATUS_KIND_DOWN_CHASE_HUMMER",
                 (undefined **)&DAT_00000048,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILA_STATUS_KIND_CHANGE_ANGRY",(undefined **)&DAT_00000049
                 ,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILA_STATUS_KIND_CROSS_BOMB",(undefined **)0x4a,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILA_STATUS_KIND_CRUSH_DOWN_START",(undefined **)0x4b,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILA_STATUS_KIND_CRUSH_DOWN_LOOP",
                 (undefined **)&DAT_0000004c,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILA_STATUS_KIND_CRUSH_DOWN",(undefined **)0x4d,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILA_STATUS_KIND_LASER_RUSH_START",
                 (undefined **)&DAT_0000004e,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILA_STATUS_KIND_LASER_RUSH_LOOP",(undefined **)0x4f,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILA_STATUS_KIND_LASER_RUSH_END",
                 (undefined **)&DAT_00000050,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILA_STATUS_KIND_EXPLODE_SHOT_START",
                 (undefined **)&DAT_00000051,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILA_STATUS_KIND_EXPLODE_SHOT_LOOP",
                 (undefined **)&DAT_00000052,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILA_STATUS_KIND_EXPLODE_SHOT",(undefined **)0x53,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILA_STATUS_KIND_EXPLODE_SHOT_END",
                 (undefined **)&DAT_00000054,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILA_STATUS_KIND_THREAT_START",(undefined **)0x55,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILA_STATUS_KIND_THREAT_LOOP",(undefined **)0x56,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILA_STATUS_KIND_THREAT_END",(undefined **)0x57,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILA_STATUS_KIND_CHASE_SPEAR",(undefined **)&DAT_00000058,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILA_STATUS_KIND_STATIC_MISSILE_START",
                 (undefined **)&DAT_00000059,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILA_STATUS_KIND_STATIC_MISSILE_LOOP",(undefined **)0x5a,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILA_STATUS_KIND_STATIC_MISSILE_END",(undefined **)0x5b,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILA_STATUS_KIND_ENERGY_SMART_BOMB_START",
                 (undefined **)&DAT_0000005c,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILA_STATUS_KIND_ENERGY_SMART_BOMB_HOLD",
                 (undefined **)0x5d,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILA_STATUS_KIND_ENERGY_SMART_BOMB",(undefined **)0x5e,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILA_STATUS_KIND_ENERGY_SMART_BOMB_END",
                 (undefined **)&DAT_0000005f,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILA_STATUS_KIND_SUMMON_FIGHTER",
                 (undefined **)&DAT_00000060,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILA_STATUS_KIND_SUMMON_FIGHTER_WAIT",
                 (undefined **)&DAT_00000061,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILA_STATUS_KIND_TORRENT",(undefined **)0x62,param_4,
                 param_5,param_6,param_7,param_8);
  if ((local_78 != 0) && (local_70 != 0)) {
    FUN_71038f55d0(local_78,local_68);
  }
  local_68 = 0xfffffffd;
  local_70 = 0;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILA_INSTANCE_WORK_INT_EFFECT_AURA",
                 (undefined **)0x10000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILA_INSTANCE_WORK_INT_EFFECT_AURA_ANGER",
                 (undefined **)0x10000001,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILA_INSTANCE_WORK_FLAG_CROSS_BOMB_START",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILA_INSTANCE_WORK_FLAG_EXPLODE_SHOT_CREATE",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILA_INSTANCE_WORK_FLAG_ENERGY_SHOT_SHOOT",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILA_INSTANCE_WORK_FLAG_STATIC_MISSILE_CORE_HIT_CHANGE",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILA_INSTANCE_WORK_FLAG_DOWN_LANDING",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILA_INSTANCE_WORK_FLAG_ZOOM_IN",(undefined **)0x20000000,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILA_INSTANCE_WORK_FLAG_ZOOM_OUT",(undefined **)0x20000001
                 ,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILA_INSTANCE_WORK_FLAG_ZOOM_END",(undefined **)0x20000002
                 ,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILA_INSTANCE_WORK_FLAG_SHOW_STAGE_FLOATING_PLATES",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILA_INSTANCE_WORK_FLAG_DEAD_HIDE_HUD",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILA_INSTANCE_WORK_FLAG_STOP_STAGE_SOUND",
                 (undefined **)0x20000001,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILA_INSTANCE_WORK_FLAG_STOP_INGAME_SE",
                 (undefined **)0x20000002,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_DARZTEARUP_KIND_1",(undefined **)0x0,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DARZTEARUP_KIND_2",(undefined **)0x1,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DARZTEARUP_KIND_3",(undefined **)0x2,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DARZTEARUP_KIND_ANGER",(undefined **)0x3,param_4,param_5,
                 param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_DARZSPACERUSHSTENCIL_CONSTRAINT_ID_STENCIL_A",
                 (undefined **)0x0,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DARZSPACERUSHSTENCIL_CONSTRAINT_ID_STENCIL_B",
                 (undefined **)0x1,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_DARZ_MESSAGE_KIND_STENCIL_LOST_REQUEST",
                 (undefined **)&DAT_00000022,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DARZ_MESSAGE_KIND_CENTIPEDE_FINISH",(undefined **)0x23,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DARZ_MESSAGE_KIND_CENTIPEDE_LOST_REQUEST",
                 (undefined **)&DAT_00000024,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DARZ_MESSAGE_KIND_PIERCE_RIDE",(undefined **)&DAT_00000025,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DARZ_MESSAGE_KIND_PIERCE_ATTACK",
                 (undefined **)&DAT_00000026,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DARZ_MESSAGE_KIND_PIERCE_LOST_REQUEST",(undefined **)0x27,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DARZ_MESSAGE_KIND_TEARUP_LOST_REQUEST",
                 (undefined **)&DAT_00000028,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_DARZ_INSTANCE_WORK_FLAG_SPAWN_SHOT",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DARZ_INSTANCE_WORK_FLAG_HOMING_END",
                 (undefined **)0x20000001,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DARZ_INSTANCE_WORK_START_BRAKE",(undefined **)0x20000002,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DARZ_INSTANCE_WORK_FLAG_DOWN_FALL",(undefined **)0x20000000
                 ,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DARZ_INSTANCE_WORK_FLAG_DOWN_LANDING",
                 (undefined **)0x20000001,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DARZ_INSTANCE_WORK_FLAG_ZOOM_IN",(undefined **)0x20000000,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DARZ_INSTANCE_WORK_FLAG_ZOOM_OUT",(undefined **)0x20000001,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DARZ_INSTANCE_WORK_FLAG_ZOOM_END",(undefined **)0x20000002,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DARZ_INSTANCE_WORK_FLAG_SHOW_STAGE_FLOATING_PLATES",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DARZ_INSTANCE_WORK_FLAG_DEAD_HIDE_HUD",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DARZ_INSTANCE_WORK_FLAG_STOP_STAGE_SOUND",
                 (undefined **)0x20000001,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DARZ_INSTANCE_WORK_FLAG_STOP_INGAME_SE",
                 (undefined **)0x20000002,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = -3;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_DARZ_STATUS_KIND_TELEPORT",(undefined **)&DAT_00000041,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DARZ_STATUS_KIND_MANAGER_WAIT",(undefined **)0x42,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DARZ_STATUS_KIND_MANAGER_VANISH",(undefined **)0x43,param_4
                 ,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DARZ_STATUS_KIND_CHANGE_ANGRY",(undefined **)&DAT_00000044,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DARZ_STATUS_KIND_DOWN_START",(undefined **)&DAT_00000045,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DARZ_STATUS_KIND_DOWN_LOOP",(undefined **)0x46,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DARZ_STATUS_KIND_DOWN_END",(undefined **)0x47,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DARZ_STATUS_KIND_DOWN_CHASE_SPEAR",
                 (undefined **)&DAT_00000048,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DARZ_STATUS_KIND_CROSS_BOMB",(undefined **)&DAT_00000049,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DARZ_STATUS_KIND_GATLING_START",(undefined **)0x4a,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DARZ_STATUS_KIND_GATLING_HOLD_LOOP",(undefined **)0x4b,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DARZ_STATUS_KIND_GATLING_LOOP",(undefined **)&DAT_0000004c,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DARZ_STATUS_KIND_GATLING_ANGER_HOLD_LOOP",
                 (undefined **)0x4d,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DARZ_STATUS_KIND_GATLING_ANGER",(undefined **)&DAT_0000004e
                 ,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DARZ_STATUS_KIND_GATLING_END",(undefined **)0x4f,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DARZ_STATUS_KIND_TEAR_UP_START",(undefined **)&DAT_00000050
                 ,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DARZ_STATUS_KIND_TEAR_UP",(undefined **)&DAT_00000051,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DARZ_STATUS_KIND_TEAR_UP_ANGER",(undefined **)&DAT_00000052
                 ,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DARZ_STATUS_KIND_SPACE_RUSH_START",(undefined **)0x53,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DARZ_STATUS_KIND_SPACE_RUSH_LOOP",
                 (undefined **)&DAT_00000054,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DARZ_STATUS_KIND_SPACE_RUSH_END",(undefined **)0x55,param_4
                 ,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DARZ_STATUS_KIND_CENTIPEDE_START",(undefined **)0x56,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DARZ_STATUS_KIND_CENTIPEDE_LOOP",(undefined **)0x57,param_4
                 ,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DARZ_STATUS_KIND_CHASE_HAMMER",(undefined **)&DAT_00000058,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DARZ_STATUS_KIND_PIERCE_START",(undefined **)&DAT_00000059,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DARZ_STATUS_KIND_PIERCE_LOOP",(undefined **)0x5a,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DARZ_STATUS_KIND_DARK_PILLAR_START",(undefined **)0x5b,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DARZ_STATUS_KIND_DARK_PILLAR_LOOP",
                 (undefined **)&DAT_0000005c,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DARZ_STATUS_KIND_DARK_PILLAR",(undefined **)0x5d,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DARZ_STATUS_KIND_DARK_PILLAR_END",(undefined **)0x5e,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DARZ_STATUS_KIND_SUMMON_FIGHTER",
                 (undefined **)&DAT_0000005f,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DARZ_STATUS_KIND_SUMMON_FIGHTER_WAIT",
                 (undefined **)&DAT_00000060,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DARZ_STATUS_KIND_TORRENT",(undefined **)&DAT_00000061,
                 param_4,param_5,param_6,param_7,param_8);
  if ((local_78 != 0) && (local_70 != 0)) {
    FUN_71038f55d0(local_78,local_68);
  }
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_NIKKIILLUST1_INSTANCE_WORK_INT_ATTACK_COUNT",
                 (undefined **)0x10000000,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_NIKKIILLUST6_INSTANCE_WORK_FLOAT_TARGET_OFFSET",
                 (undefined **)0x1,param_4,param_5,param_6,param_7,param_8);
  local_68 = 0xfffffffd;
  local_70 = 0;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILACROSSBOMB_STATUS_KIND_DEAD",
                 (undefined **)&DAT_00000041,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILABOMB_INSTANCE_WORK_INT_DELAY",(undefined **)0x10000000
                 ,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_DARZBOMB_INSTANCE_WORK_INT_DELAY",(undefined **)0x10000000,
                 param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILACRUSHWING_STATUS_KIND_CHARGE",
                 (undefined **)&DAT_00000041,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILACRUSHWING_STATUS_KIND_ATTACK",(undefined **)0x42,
                 param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILACRUSHWING_INSTANCE_WORK_FLAG_ATTACK_END",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILALASER_STATUS_KIND_SHOOT",(undefined **)&DAT_00000041,
                 param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILALASER_INSTANCE_WORK_FLOAT_X1",(undefined **)0x1,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILALASER_INSTANCE_WORK_FLOAT_Y1",(undefined **)0x2,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILALASER_INSTANCE_WORK_FLOAT_X2",(undefined **)0x3,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILALASER_INSTANCE_WORK_FLOAT_Y2",
                 (undefined **)&DAT_00000004,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILALASER_ACTION_INITIALIZE",(undefined **)0x0,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILALASER_ACTION_ADD_ATTACK",(undefined **)0x1,param_4,
                 param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILAEXPLODESHOT2_STATUS_KIND_SHOOT1",
                 (undefined **)&DAT_00000041,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILAEXPLODESHOT2_STATUS_KIND_SHOOT2",(undefined **)0x42,
                 param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILAEXPLODESHOT2_INSTANCE_WORK_INT_WAIT_FRAME",
                 (undefined **)0x10000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILAEXPLODESHOT2_INSTANCE_WORK_INT_SE_NO",
                 (undefined **)0x10000001,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILAEXPLODESHOT2_ACTION_SET_ANGLE",(undefined **)0x0,
                 param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = -3;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_PLAYABLE_MASTERHAND_STATUS_KIND_ENTRY",
                 (undefined **)&DAT_00000041,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_PLAYABLE_MASTERHAND_STATUS_KIND_WAIT",(undefined **)0x42,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_PLAYABLE_MASTERHAND_STATUS_KIND_MOVE",(undefined **)0x43,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_PLAYABLE_MASTERHAND_STATUS_KIND_TURN",
                 (undefined **)&DAT_00000044,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_PLAYABLE_MASTERHAND_STATUS_KIND_TURN_DUSH",
                 (undefined **)&DAT_00000045,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_PLAYABLE_MASTERHAND_STATUS_KIND_DOWN_START",
                 (undefined **)0x46,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_PLAYABLE_MASTERHAND_STATUS_KIND_DOWN_FALL",
                 (undefined **)0x47,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_PLAYABLE_MASTERHAND_STATUS_KIND_DOWN_LANDING",
                 (undefined **)&DAT_00000048,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_PLAYABLE_MASTERHAND_STATUS_KIND_DOWN_LOOP",
                 (undefined **)&DAT_00000049,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_PLAYABLE_MASTERHAND_STATUS_KIND_DOWN_END",
                 (undefined **)0x4a,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_PLAYABLE_MASTERHAND_STATUS_KIND_HIPPATAKU_HOLD",
                 (undefined **)0x4b,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_PLAYABLE_MASTERHAND_STATUS_KIND_HIPPATAKU",
                 (undefined **)&DAT_0000004c,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_PLAYABLE_MASTERHAND_STATUS_KIND_DRILL_START",
                 (undefined **)0x4d,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_PLAYABLE_MASTERHAND_STATUS_KIND_DRILL_FALL",
                 (undefined **)&DAT_0000004e,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_PLAYABLE_MASTERHAND_STATUS_KIND_DRILL_END",
                 (undefined **)0x4f,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_PLAYABLE_MASTERHAND_STATUS_KIND_DRILL_SUKA",
                 (undefined **)&DAT_00000050,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_PLAYABLE_MASTERHAND_STATUS_KIND_PAA_TSUBUSHI_HOLD",
                 (undefined **)&DAT_00000051,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_PLAYABLE_MASTERHAND_STATUS_KIND_PAA_TSUBUSHI_FALL",
                 (undefined **)&DAT_00000052,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_PLAYABLE_MASTERHAND_STATUS_KIND_PAA_TSUBUSHI_END",
                 (undefined **)0x53,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_PLAYABLE_MASTERHAND_STATUS_KIND_PAA_TSUBUSHI_SUKA",
                 (undefined **)&DAT_00000054,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_PLAYABLE_MASTERHAND_STATUS_KIND_YUBIPACCHIN_START",
                 (undefined **)0x55,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_PLAYABLE_MASTERHAND_STATUS_KIND_YUBIPACCHIN",
                 (undefined **)0x56,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_PLAYABLE_MASTERHAND_STATUS_KIND_YUBIPACCHIN_END_START",
                 (undefined **)0x57,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_PLAYABLE_MASTERHAND_STATUS_KIND_YUBIPACCHIN_END",
                 (undefined **)&DAT_00000058,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_PLAYABLE_MASTERHAND_STATUS_KIND_YUBI_BEAM",
                 (undefined **)&DAT_00000059,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_PLAYABLE_MASTERHAND_STATUS_KIND_YUBIDEPPOU_START",
                 (undefined **)0x5a,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_PLAYABLE_MASTERHAND_STATUS_KIND_YUBIDEPPOU_HOMING",
                 (undefined **)0x5b,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_PLAYABLE_MASTERHAND_STATUS_KIND_YUBIDEPPOU",
                 (undefined **)&DAT_0000005c,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_PLAYABLE_MASTERHAND_STATUS_KIND_YUBIDEPPOU_END",
                 (undefined **)0x5d,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_PLAYABLE_MASTERHAND_STATUS_KIND_IRON_BALL_START",
                 (undefined **)0x5e,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_PLAYABLE_MASTERHAND_STATUS_KIND_IRON_BALL",
                 (undefined **)&DAT_0000005f,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_PLAYABLE_MASTERHAND_STATUS_KIND_IRON_BALL_END",
                 (undefined **)&DAT_00000060,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_PLAYABLE_MASTERHAND_STATUS_KIND_CHAKRAM_START",
                 (undefined **)&DAT_00000061,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_PLAYABLE_MASTERHAND_STATUS_KIND_CHAKRAM_END",
                 (undefined **)0x62,param_4,param_5,param_6,param_7,param_8);
  if ((local_78 != 0) && (local_70 != 0)) {
    FUN_71038f55d0(local_78,local_68);
  }
  local_68 = 0xfffffffd;
  local_70 = 0;
  local_78 = param_1;
  FUN_71037289c0(&local_78,
                 (uint *)"ITEM_PLAYABLE_MASTERHAND_INSTANCE_WORK_FLOAT_HIPPATAKU_GA_HEIGHT",
                 (undefined **)0x1,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_PLAYABLE_MASTERHAND_INSTANCE_WORK_FLAG_YUBIDEPPOU",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_PLAYABLE_MASTERHAND_INSTANCE_WORK_FLAG_YUBIBEAM_BEAMSTART",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,
                 (uint *)"ITEM_PLAYABLE_MASTERHAND_INSTANCE_WORK_FLAG_YUBIBEAM_MOVE_ENABLE",
                 (undefined **)0x20000001,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_PLAYABLE_MASTERHAND_INSTANCE_WORK_INT_YUBIBEAM_EFFECT_1",
                 (undefined **)0x10000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_PLAYABLE_MASTERHAND_INSTANCE_WORK_INT_YUBIBEAM_EFFECT_2",
                 (undefined **)0x10000001,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_PLAYABLE_MASTERHAND_INSTANCE_WORK_INT_YUBIBEAM_EFFECT_3",
                 (undefined **)0x10000002,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_PLAYABLE_MASTERHAND_INSTANCE_WORK_INT_YUBIBEAM_EFFECT_4",
                 (undefined **)0x10000003,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_PLAYABLE_MASTERHAND_INSTANCE_WORK_FLAG_IRON_BALL_CREATE",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_PLAYABLE_MASTERHAND_INSTANCE_WORK_FLAG_IRON_BALL_THROW",
                 (undefined **)0x20000001,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_PLAYABLE_MASTERHAND_INSTANCE_WORK_FLAG_CHAKRAM_CREATE",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_PLAYABLE_MASTERHAND_INSTANCE_WORK_FLAG_CHAKRAM_THROW",
                 (undefined **)0x20000001,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_PLAYABLE_MASTERHAND_INSTANCE_WORK_FLAG_WYUBIBEAM_START",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  local_68 = 0xfffffffd;
  local_70 = 0;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILACORE_STATUS_KIND_ATTACK",(undefined **)&DAT_00000041,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILACORE_STATUS_KIND_ATTACK_STOP",(undefined **)0x42,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILACORE_STATUS_KIND_ATTACK_END",(undefined **)0x43,
                 param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILACORE_ACTION_INIT_POS",(undefined **)0x0,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILACORE_ACTION_INIT_DIRECTION",(undefined **)0x1,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILACORE_ACTION_ATTACK_START",(undefined **)0x2,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILACORE_ACTION_ATTACK_END",(undefined **)0x3,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILACORE_ACTION_DAMAGE",(undefined **)&DAT_00000004,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILACORE_ACTION_DAMAGE_FOR_DARZ",(undefined **)0x5,param_4
                 ,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_TIKISHOT_INSTANCE_WORK_FLAG_ATTACK_END",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILADARZ_STATUS_KIND_BOSS_SINGLE_WAIT",
                 (undefined **)&DAT_00000041,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILADARZ_STATUS_KIND_WAIT_WAIT",(undefined **)0x42,param_4
                 ,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILADARZ_STATUS_KIND_RESET_RESET",(undefined **)0x43,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILADARZ_STATUS_KIND_TELEPORT_TELEPORT",
                 (undefined **)&DAT_00000044,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILADARZ_STATUS_KIND_DOWN_DOWN",
                 (undefined **)&DAT_00000045,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILADARZ_STATUS_KIND_ANGRY_ANGRY",(undefined **)0x46,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILADARZ_STATUS_KIND_SPEAR_DOWN",(undefined **)0x47,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILADARZ_STATUS_KIND_DOWN_HAMMER",
                 (undefined **)&DAT_00000048,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILADARZ_STATUS_KIND_ATTACK_COMBINATION_START",
                 (undefined **)&DAT_00000049,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILADARZ_STATUS_KIND_ATTACK_COMBINATION__END",
                 (undefined **)0x85,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILADARZ_INSTANCE_WORK_FLAG_KIILA_VANISH",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILADARZ_INSTANCE_WORK_FLAG_DARZ_VANISH",
                 (undefined **)0x20000001,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILADARZ_INSTANCE_WORK_FLAG_KIILA_DOWN_CHASE_ENABLE",
                 (undefined **)0x20000002,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILADARZ_INSTANCE_WORK_FLAG_DARZ_DOWN_CHASE_ENABLE",
                 (undefined **)0x20000003,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = -3;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILADARZ_MESSAGE_KIND_COMMON_WAIT",(undefined **)0x0,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILADARZ_MESSAGE_KIND_COMMON_VANISH",(undefined **)0x1,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILADARZ_MESSAGE_KIND_COMMON_ATTACK_CHASE",
                 (undefined **)0x2,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILADARZ_MESSAGE_KIND_COMMON_CHASE_DAMAGED_START",
                 (undefined **)0x3,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILADARZ_MESSAGE_KIND_COMMON_CHASE_DAMAGED_END",
                 (undefined **)&DAT_00000004,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILADARZ_MESSAGE_KIND_COMMON_PARTNER_DEAD",
                 (undefined **)0x5,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILADARZ_MESSAGE_KIND_COMMON_SAME_ATTACK",
                 (undefined **)0x6,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILADARZ_MESSAGE_KIND_COMMON_TRANS_PHASE",
                 (undefined **)&DAT_00000007,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILADARZ_MESSAGE_KIND_DEBUG_WAIT",
                 (undefined **)&DAT_00000008,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILADARZ_MESSAGE_KIND_DEBUG_RESET",
                 (undefined **)&DAT_00000009,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILADARZ_MESSAGE_KIND_DEBUG_TELEPORT",(undefined **)0xa,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILADARZ_MESSAGE_KIND_DEBUG_DOWN",(undefined **)0xb,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILADARZ_MESSAGE_KIND_DEBUG_ANGER",
                 (undefined **)&DAT_0000000c,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILADARZ_MESSAGE_KIND_DEBUG_END",
                 (undefined **)&DAT_0000000d,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILADARZ_MESSAGE_KIND_KIILA_CROSS_BOMB",
                 (undefined **)&DAT_0000000e,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILADARZ_MESSAGE_KIND_KIILA_CRUSH_DOWN",
                 (undefined **)&DAT_0000000f,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILADARZ_MESSAGE_KIND_KIILA_LASER_RUSH",
                 (undefined **)&DAT_00000010,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILADARZ_MESSAGE_KIND_KIILA_EXPLODE_SHOT",
                 (undefined **)&DAT_00000011,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILADARZ_MESSAGE_KIND_KIILA_THREAT",
                 (undefined **)&DAT_00000012,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILADARZ_MESSAGE_KIND_KIILA_CHASE_SPEAR",
                 (undefined **)&DAT_00000013,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILADARZ_MESSAGE_KIND_KIILA_STATIC_MISSILE",
                 (undefined **)&DAT_00000014,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILADARZ_MESSAGE_KIND_KIILA_SMART_BOMB",
                 (undefined **)&DAT_00000015,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILADARZ_MESSAGE_KIND_KIILA_SUMMON_FIGHTER",
                 (undefined **)0x16,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILADARZ_MESSAGE_KIND_KIILA_TORRENT",(undefined **)0x17,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILADARZ_MESSAGE_KIND_DARZ_GATLING",
                 (undefined **)&SUB_00000018,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILADARZ_MESSAGE_KIND_DARZ_TEAR_UP",
                 (undefined **)&DAT_00000019,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILADARZ_MESSAGE_KIND_DARZ_CROSS_BOMB",
                 (undefined **)&DAT_0000001a,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILADARZ_MESSAGE_KIND_DARZ_SPACE_RUSH",
                 (undefined **)&DAT_0000001b,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILADARZ_MESSAGE_KIND_DARZ_CENTIPEDE",
                 (undefined **)&DAT_0000001c,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILADARZ_MESSAGE_KIND_DARZ_CHASE_HAMMER",
                 (undefined **)&DAT_0000001d,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILADARZ_MESSAGE_KIND_DARZ_PIERCE",
                 (undefined **)&DAT_0000001e,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILADARZ_MESSAGE_KIND_DARZ_DARK_PILLAR",(undefined **)0x1f
                 ,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILADARZ_MESSAGE_KIND_DARZ_SUMMON_FIGHTER",
                 (undefined **)&SUB_00000020,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILADARZ_MESSAGE_KIND_DARZ_TORRENT",
                 (undefined **)&DAT_00000021,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILADARZ_MESSAGE_KIND_TERM",(undefined **)&DAT_00000022,
                 param_4,param_5,param_6,param_7,param_8);
  if ((local_78 != 0) && (local_70 != 0)) {
    FUN_71038f55d0(local_78,local_68);
  }
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILATORRENT_ACTION_START",(undefined **)0x0,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILATORRENT_ACTION_START_REVERSE",(undefined **)0x1,
                 param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILATORRENT_INSTANCE_WORK_INT_PARAMETER_IDX",
                 (undefined **)0x10000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_KIILATORRENT_INSTANCE_WORK_FLAG_IS_DUET",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  local_68 = 0xfffffffd;
  local_70 = 0;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_DARZPILLAR_STATUS_KIND_SHOOT",(undefined **)&DAT_00000041,
                 param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_DARZPILLAR_INSTANCE_WORK_INT_MAIN_EFFECT_HANDLE",
                 (undefined **)0x10000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DARZPILLAR_INSTANCE_WORK_INT_FLOOR_EFFECT_HANDLE",
                 (undefined **)0x10000001,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DARZPILLAR_INSTANCE_WORK_FLOAT_MAIN_EFFECT_SCALE",
                 (undefined **)0x1,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DARZPILLAR_INSTANCE_WORK_FLOAT_FLOOR_EFFECT_SCALE",
                 (undefined **)0x2,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_DARZCENTIPEDE_STATUS_KIND_HEAD_RUN",
                 (undefined **)&DAT_00000041,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DARZCENTIPEDE_STATUS_KIND_FOLLOW_RUN",(undefined **)0x42,
                 param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_DARZCENTIPEDE_INSTANCE_WORK_FLOAT_POS_X",(undefined **)0x1,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DARZCENTIPEDE_INSTANCE_WORK_FLOAT_POS_Y",(undefined **)0x2,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DARZCENTIPEDE_INSTANCE_WORK_FLOAT_ROT_Z",(undefined **)0x3,
                 param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_DARZSPACERUSH_INSTANCE_WORK_INT_ENTRANCE_EFFECT_HANDLE",
                 (undefined **)0x10000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DARZSPACERUSH_INSTANCE_WORK_INT_EXIT_EFFECT_HANDLE",
                 (undefined **)0x10000001,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DARZSPACERUSH_INSTANCE_WORK_INT_PARAM_HASH",
                 (undefined **)0x10000002,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DARZSPACERUSH_INSTANCE_WORK_FLAG_SE_OPEN_IN",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DARZSPACERUSH_INSTANCE_WORK_FLAG_SE_OPEN_OUT",
                 (undefined **)0x20000001,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_DARZPIERCE_STATUS_KIND_PIERCE_START",
                 (undefined **)&DAT_00000041,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DARZPIERCE_STATUS_KIND_PIERCE_HOLD_LOOP",(undefined **)0x42
                 ,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DARZPIERCE_STATUS_KIND_PIERCE",(undefined **)0x43,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DARZPIERCE_STATUS_KIND_PIERCE_LOOP",
                 (undefined **)&DAT_00000044,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DARZPIERCE_STATUS_KIND_PIERCE_END",
                 (undefined **)&DAT_00000045,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_DARZPIERCE_INSTANCE_WORK_FLAG_ATTACKED",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_DARZPIERCE_INSTANCE_WORK_FLAG_ODD",(undefined **)0x20000001
                 ,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_BUDDYBOMB_INSTANCE_WORK_FLAG_SPECIAL_LW",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_BUDDYBOMB_INSTANCE_WORK_INT_SPECIAL_LW_BOUND_KIND",
                 (undefined **)0x10000000,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_BUDDYBOMB_BOUND_KIND_NONE",(undefined **)0x0,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_BUDDYBOMB_BOUND_KIND_VERTICAL",(undefined **)0x1,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_BUDDYBOMB_BOUND_KIND_HORIZONTAL",(undefined **)0x2,param_4,
                 param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = -3;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_PICKELOBJECT_INSTANCE_WORK_FLAG_COLLISION_ENABLED",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_PICKELOBJECT_INSTANCE_WORK_FLAG_COLLISION_UPDATED",
                 (undefined **)0x20000001,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_PICKELOBJECT_INSTANCE_WORK_FLAG_COLLISION_UPDATE_AS_MOVE",
                 (undefined **)0x20000002,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_PICKELOBJECT_INSTANCE_WORK_FLAG_DONE_REPLACE_HP",
                 (undefined **)0x20000003,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_PICKELOBJECT_INSTANCE_WORK_FLAG_HEADING",
                 (undefined **)0x20000004,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_PICKELOBJECT_INSTANCE_WORK_INT_COLLSION_HANDLE",
                 (undefined **)0x10000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_PICKELOBJECT_INSTANCE_WORK_INT_MATERIAL_KIND",
                 (undefined **)0x10000001,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_PICKELOBJECT_INSTANCE_WORK_INT_BROKE_OBJECT_ID",
                 (undefined **)0x10000002,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_PICKELOBJECT_INSTANCE_WORK_INT_GENERATE_OWNER_ID",
                 (undefined **)0x10000003,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_PICKELOBJECT_INSTANCE_WORK_INT_WALL_LEFT_OBJECT_ID",
                 (undefined **)0x10000004,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_PICKELOBJECT_INSTANCE_WORK_INT_WALL_LEFT_PRESS_FRAME",
                 (undefined **)0x10000005,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_PICKELOBJECT_INSTANCE_WORK_INT_WALL_RIGHT_OBJECT_ID",
                 (undefined **)0x10000006,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_PICKELOBJECT_INSTANCE_WORK_INT_WALL_RIGHT_PRESS_FRAME",
                 (undefined **)0x10000007,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_PICKELOBJECT_INSTANCE_WORK_FLOAT_COLLSION_LD_X",
                 (undefined **)0x1,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_PICKELOBJECT_INSTANCE_WORK_FLOAT_COLLSION_LD_Y",
                 (undefined **)0x2,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_PICKELOBJECT_INSTANCE_WORK_FLOAT_COLLSION_LU_X",
                 (undefined **)0x3,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_PICKELOBJECT_INSTANCE_WORK_FLOAT_COLLSION_LU_Y",
                 (undefined **)&DAT_00000004,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_PICKELOBJECT_INSTANCE_WORK_FLOAT_COLLSION_RD_X",
                 (undefined **)0x5,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_PICKELOBJECT_INSTANCE_WORK_FLOAT_COLLSION_RD_Y",
                 (undefined **)0x6,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_PICKELOBJECT_INSTANCE_WORK_FLOAT_COLLSION_RU_X",
                 (undefined **)&DAT_00000007,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_PICKELOBJECT_INSTANCE_WORK_FLOAT_COLLSION_RU_Y",
                 (undefined **)&DAT_00000008,param_4,param_5,param_6,param_7,param_8);
  if ((local_78 != 0) && (local_70 != 0)) {
    FUN_71038f55d0(local_78,local_68);
  }
  local_68 = 0xfffffffd;
  local_70 = 0;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_PICKELOBJECT_STATUS_WORK_INT_STATUS_FRAME",
                 (undefined **)0x11000001,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_PICKELOBJECT_STATUS_WORK_INT_HEADING_FRAME",
                 (undefined **)0x11000002,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_PICKELOBJECT_STATUS_WORK_INT_FIGHTER_LANDING_FRAME",
                 (undefined **)0x11000003,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_PICKELOBJECT_STATUS_WORK_INT_FIGHTER_LANDING_OBJECT_ID",
                 (undefined **)0x11000004,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_PICKELOBJECT_STATUS_WORK_INT_FIGHTER_LANDING_PRESS_FRAME",
                 (undefined **)0x11000005,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_PICKELOBJECT_STATUS_WORK_INT_FIGHTER_HEADING_OBJECT_ID",
                 (undefined **)0x11000006,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_PICKELOBJECT_STATUS_WORK_INT_FIGHTER_HEADING_PRESS_FRAME",
                 (undefined **)0x11000007,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_PICKELOBJECT_STATUS_WORK_INT_FIGHTER_HEADING_LONG_FRAME",
                 (undefined **)0x11000008,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_PICKELOBJECT_STATUS_WORK_INT_SIDE_LR_EFFECT_HANDLE",
                 (undefined **)0x11000009,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_PICKELOBJECT_STATUS_WORK_INT_SIDE_UD_EFFECT_HANDLE",
                 (undefined **)0x1100000a,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_PICKELOBJECT_STATUS_WORK_INT_SIDE_LR_MISS_EFFECT_HANDLE",
                 (undefined **)0x1100000b,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_PICKELOBJECT_STATUS_WORK_INT_SIDE_UD_MISS_EFFECT_HANDLE",
                 (undefined **)0x1100000c,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,
                 (uint *)
                 "ITEM_PICKELOBJECT_STATUS_WORK_FLOAT_FIGHTER_HEADING_JOSTLE_DOWN_GROUND_POS_X",
                 (undefined **)0x1000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,
                 (uint *)
                 "ITEM_PICKELOBJECT_STATUS_WORK_FLOAT_FIGHTER_HEADING_JOSTLE_DOWN_GROUND_POS_Y",
                 (undefined **)0x1000001,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_PICKELOBJECT_STATUS_WORK_FLOAT_HP_DAMAGE_FOR_AI",
                 (undefined **)&DAT_01000003,param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"PickelGridStatusGreen",(undefined **)0x0,param_4,param_5,param_6
                 ,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"PickelGridStatusYellow",(undefined **)0x1,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"PickelGridStatusRed",(undefined **)0x2,param_4,param_5,param_6,
                 param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"PickelGridStatusBlack",(undefined **)0x3,param_4,param_5,param_6
                 ,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_PICKELOBJECT_STATUS_KIND_FLOAT",(undefined **)&DAT_00000041
                 ,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_PICKELOBJECT_STATUS_KIND_PRE_LOST",(undefined **)0x42,
                 param_4,param_5,param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"ITEM_PICKELBOMB_INSTANCE_WORK_FLOAT_LIFE",(undefined **)0x1,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_PICKELBOMB_INSTANCE_WORK_INT_OBJECT_ID",
                 (undefined **)0x10000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_PICKELBOMB_INSTANCE_WORK_INT_SE_HANDLE",
                 (undefined **)0x10000001,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_PICKELBOMB_INSTANCE_WORK_FLAG_FIRE",
                 (undefined **)0x20000000,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"ITEM_PICKELBOMB_INSTANCE_WORK_FLAG_FLASH",
                 (undefined **)0x20000001,param_4,param_5,param_6,param_7,param_8);
  return;
}

