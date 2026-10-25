// addr:      7102123d40
// offset:    0x2123d40
// name:      FUN_7102123d40
// mangled:   
// signature: undefined __cdecl FUN_7102123d40(void)


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
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT1_ATTACK_S3",(undefined **)0x1,in_x3,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT1_ATTACK_HI3",(undefined **)0x2,in_x3,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT1_ATTACK_LW3",(undefined **)0x3,in_x3,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT1_ATTACK_S4",(undefined **)&DAT_00000004,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT1_ATTACK_HI4",(undefined **)0x5,in_x3,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT1_ATTACK_LW4",(undefined **)0x6,in_x3,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT1_ATTACK_AIR_N",(undefined **)&DAT_00000007,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT1_ATTACK_AIR_F",(undefined **)&DAT_00000008,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT1_ATTACK_AIR_B",(undefined **)&DAT_00000009,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT1_ATTACK_AIR_HI",(undefined **)0xa,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT1_ATTACK_AIR_LW",(undefined **)0xb,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT1_SPECIAL_N",(undefined **)&DAT_0000000c,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT1_SPECIAL_S",(undefined **)&DAT_0000000d,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT1_SPECIAL_HI",(undefined **)&DAT_0000000e,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT1_SPECIAL_LW",(undefined **)&DAT_0000000f,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT1_WALK",(undefined **)&DAT_00000010,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT1_DASH",(undefined **)&DAT_00000011,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT1_TURN",(undefined **)&DAT_00000012,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT1_TURN_DASH",(undefined **)&DAT_00000013,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT1_JUMP",(undefined **)&DAT_00000014,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT1_JUMP_BUTTON",(undefined **)&DAT_00000015,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT1_AIR_ESCAPE",(undefined **)0x16,in_x3,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT1_SQUAT",(undefined **)0x17,in_x3,in_x4,in_x5
                 ,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT1_ESCAPE",(undefined **)&SUB_00000018,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT1_ESCAPE_F",(undefined **)&DAT_00000019,in_x3
                 ,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT1_ESCAPE_B",(undefined **)&DAT_0000001a,in_x3
                 ,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT1_WALL_JUMP_LEFT",(undefined **)&DAT_0000001b
                 ,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT1_WALL_JUMP_RIGHT",
                 (undefined **)&DAT_0000001c,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT1_CATCH",(undefined **)&DAT_0000001d,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT1_NO_CMD",(undefined **)&DAT_0000001e,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT1_MAX",(undefined **)0x1f,in_x3,in_x4,in_x5,
                 in_x6,in_x7);
  if ((local_80 != 0) && (local_78 != 0)) {
    FUN_71038f55d0(local_80,local_70);
  }
  local_80 = 0;
  local_78 = 0;
  local_70 = -3;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT2_APPEAL_S_L",(undefined **)0x0,in_x3,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT2_APPEAL_S_R",(undefined **)0x1,in_x3,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT2_APPEAL_HI",(undefined **)0x2,in_x3,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT2_APPEAL_LW",(undefined **)0x3,in_x3,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT2_APPEAL_SMASH",(undefined **)&DAT_00000004,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT2_ATTACK_DASH_ATTACK_HI4",(undefined **)0x5,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT2_FALL_JUMP",(undefined **)0x6,in_x3,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT2_DASH_ATTACK_S4",(undefined **)&DAT_00000007
                 ,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT2_DAMAGE_FALL_TO_FALL",
                 (undefined **)&DAT_00000008,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT2_DOWN_TO_DOWN_STAND_FB",
                 (undefined **)&DAT_00000009,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT2_DOWN_TO_DOWN_STAND",(undefined **)0xa,in_x3
                 ,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT2_GUARD_TO_PASS",(undefined **)0xb,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT2_SQUAT_TO_SQUAT_F",
                 (undefined **)&DAT_0000000c,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT2_SQUAT_TO_SQUAT_B",
                 (undefined **)&DAT_0000000d,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT2_TURN_TO_ESCAPE_F",
                 (undefined **)&DAT_0000000e,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT2_TURN_TO_ESCAPE_B",
                 (undefined **)&DAT_0000000f,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT2_STICK_ESCAPE_F",(undefined **)&DAT_00000010
                 ,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT2_STICK_ESCAPE_B",(undefined **)&DAT_00000011
                 ,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT2_STICK_ESCAPE",(undefined **)&DAT_00000012,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT2_SPECIAL_N_REVERSE_LR",
                 (undefined **)&DAT_00000013,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT2_THROW_F",(undefined **)&DAT_00000014,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT2_THROW_B",(undefined **)&DAT_00000015,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT2_THROW_HI",(undefined **)0x16,in_x3,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT2_THROW_LW",(undefined **)0x17,in_x3,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT2_COMMON_GUARD",(undefined **)&SUB_00000018,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT2_AIR_LASSO",(undefined **)&DAT_00000019,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT2_ATTACK_N2",(undefined **)&DAT_0000001a,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT2_FINAL_REVERSE_LR",
                 (undefined **)&DAT_0000001b,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT2_MAX",(undefined **)&DAT_0000001c,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  if ((local_80 != 0) && (local_78 != 0)) {
    FUN_71038f55d0(local_80,local_70);
  }
  local_70 = -3;
  local_80 = 0;
  local_78 = 0;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT3_ITEM_LIGHT_THROW_FB4",(undefined **)0x0,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT3_ITEM_LIGHT_THROW_HI4",(undefined **)0x1,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT3_ITEM_LIGHT_THROW_LW4",(undefined **)0x2,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT3_ITEM_LIGHT_THROW_HI",(undefined **)0x3,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT3_ITEM_LIGHT_THROW_LW",
                 (undefined **)&DAT_00000004,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT3_ITEM_LIGHT_DROP",(undefined **)0x5,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT3_ITEM_LIGHT_THROW_FB",(undefined **)0x6,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT3_ITEM_LIGHT_THROW_AIR_FB",
                 (undefined **)&DAT_00000007,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT3_ITEM_LIGHT_THROW_AIR_FB4",
                 (undefined **)&DAT_00000008,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT3_ITEM_LIGHT_THROW_AIR_HI",
                 (undefined **)&DAT_00000009,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT3_ITEM_LIGHT_THROW_AIR_HI4",(undefined **)0xa
                 ,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT3_ITEM_LIGHT_THROW_AIR_LW",(undefined **)0xb,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT3_ITEM_LIGHT_THROW_AIR_LW4",
                 (undefined **)&DAT_0000000c,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT3_ITEM_LIGHT_DROP_AIR",
                 (undefined **)&DAT_0000000d,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT3_ITEM_HEAVY_THROW_FB",
                 (undefined **)&DAT_0000000e,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT3_ITEM_GET_AIR",(undefined **)&DAT_0000000f,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT3_SPECIAL_S_SMASH",
                 (undefined **)&DAT_00000010,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT3_SPECIAL_S_SMASH_DASH",
                 (undefined **)&DAT_00000011,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT3_MAX",(undefined **)&DAT_00000012,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  if ((local_80 != 0) && (local_78 != 0)) {
    FUN_71038f55d0(local_80,local_70);
  }
  local_80 = 0;
  local_78 = 0;
  local_70 = -3;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT4_SPECIAL_N_COMMAND",(undefined **)0x0,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT4_SPECIAL_N2_COMMAND",(undefined **)0x1,in_x3
                 ,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT4_SPECIAL_S_COMMAND",(undefined **)0x2,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT4_SPECIAL_HI_COMMAND",(undefined **)0x3,in_x3
                 ,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT4_COMMAND_6N6",(undefined **)&DAT_00000004,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT4_COMMAND_4N4",(undefined **)0x5,in_x3,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT4_ATTACK_COMMAND1",(undefined **)0x6,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT4_SPECIAL_HI2_COMMAND",
                 (undefined **)&DAT_00000007,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT4_SUPER_SPECIAL_COMMAND",
                 (undefined **)&DAT_00000008,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT4_SUPER_SPECIAL_R_COMMAND",
                 (undefined **)&DAT_00000009,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT4_SUPER_SPECIAL2_COMMAND",(undefined **)0xa,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT4_SUPER_SPECIAL2_R_COMMAND",(undefined **)0xb
                 ,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT4_COMMAND_623NB",(undefined **)&DAT_0000000c,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT4_COMMAND_623STRICT",
                 (undefined **)&DAT_0000000d,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT4_COMMAND_623ALONG",
                 (undefined **)&DAT_0000000e,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT4_COMMAND_623BLONG",
                 (undefined **)&DAT_0000000f,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT4_COMMAND_623A",(undefined **)&DAT_00000010,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT4_COMMAND_2",(undefined **)&DAT_00000011,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT4_COMMAND_3",(undefined **)&DAT_00000012,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT4_COMMAND_1",(undefined **)&DAT_00000013,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT4_COMMAND_6",(undefined **)&DAT_00000014,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT4_COMMAND_4",(undefined **)&DAT_00000015,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT4_COMMAND_8",(undefined **)0x16,in_x3,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT4_COMMAND_9",(undefined **)0x17,in_x3,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT4_COMMAND_7",(undefined **)&SUB_00000018,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT4_COMMAND_6N6AB",(undefined **)&DAT_00000019,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT4_COMMAND_323CATCH",
                 (undefined **)&DAT_0000001a,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT4_MAX",(undefined **)&DAT_0000001b,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  if ((local_80 != 0) && (local_78 != 0)) {
    FUN_71038f55d0(local_80,local_70);
  }
  local_70 = 0xfffffffd;
  local_80 = 0;
  local_78 = 0;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_COMMAND_CATEGORY1",(undefined **)0x0,in_x3,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_COMMAND_CATEGORY2",(undefined **)0x1,in_x3,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_COMMAND_CATEGORY3",(undefined **)0x2,in_x3,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_COMMAND_CATEGORY4",(undefined **)0x3,in_x3,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_COMMAND_CATEGORY_MAX",(undefined **)&DAT_00000004,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_FLAG_ATTACK_TRIGGER",(undefined **)0x1,in_x3,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_FLAG_ATTACK_RELEASE",(undefined **)0x2,in_x3,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_FLAG_SPECIAL_TRIGGER",(undefined **)&DAT_00000004,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_FLAG_SPECIAL_RELEASE",(undefined **)&DAT_00000008,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_FLAG_JUMP_TRIGGER",(undefined **)&DAT_00000010,in_x3
                 ,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_FLAG_JUMP_RELEASE",(undefined **)&SUB_00000020,in_x3
                 ,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_FLAG_GUARD_TRIGGER",(undefined **)&DAT_00000040,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_FLAG_GUARD_RELEASE",(undefined **)&DAT_00000080,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = -3;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT1_FLAG_ATTACK_N",(undefined **)0x1,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT1_FLAG_ATTACK_S3",(undefined **)0x2,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT1_FLAG_ATTACK_HI3",
                 (undefined **)&DAT_00000004,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT1_FLAG_ATTACK_LW3",
                 (undefined **)&DAT_00000008,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT1_FLAG_ATTACK_S4",(undefined **)&DAT_00000010
                 ,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT1_FLAG_ATTACK_HI4",
                 (undefined **)&SUB_00000020,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT1_FLAG_ATTACK_LW4",
                 (undefined **)&DAT_00000040,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT1_FLAG_ATTACK_AIR_N",
                 (undefined **)&DAT_00000080,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT1_FLAG_ATTACK_AIR_F",
                 (undefined **)&DAT_00000100,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT1_FLAG_ATTACK_AIR_B",
                 (undefined **)&DAT_00000200,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT1_FLAG_ATTACK_AIR_HI",
                 (undefined **)&DAT_00000400,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT1_FLAG_ATTACK_AIR_LW",(undefined **)0x800,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT1_FLAG_SPECIAL_N",(undefined **)&DAT_00001000
                 ,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT1_FLAG_SPECIAL_S",(undefined **)0x2000,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT1_FLAG_SPECIAL_HI",(undefined **)0x4000,in_x3
                 ,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT1_FLAG_SPECIAL_LW",(undefined **)0x8000,in_x3
                 ,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT1_FLAG_WALK",(undefined **)0x10000,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT1_FLAG_DASH",(undefined **)0x20000,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT1_FLAG_TURN",(undefined **)0x40000,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT1_FLAG_TURN_DASH",(undefined **)0x80000,in_x3
                 ,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT1_FLAG_JUMP",(undefined **)0x100000,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT1_FLAG_JUMP_BUTTON",(undefined **)0x200000,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT1_FLAG_AIR_ESCAPE",(undefined **)0x400000,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT1_FLAG_SQUAT",(undefined **)0x800000,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT1_FLAG_ESCAPE",(undefined **)0x1000000,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT1_FLAG_ESCAPE_F",(undefined **)0x2000000,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT1_FLAG_ESCAPE_B",(undefined **)0x4000000,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT1_FLAG_WALL_JUMP_LEFT",
                 (undefined **)0x8000000,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT1_FLAG_WALL_JUMP_RIGHT",
                 (undefined **)0x10000000,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT1_FLAG_CATCH",(undefined **)0x20000000,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT1_FLAG_NO_CMD",(undefined **)0x40000000,in_x3
                 ,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT1_FLAG_SPECIAL_ANY",(undefined **)0xf000,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  if ((local_80 != 0) && (local_78 != 0)) {
    FUN_71038f55d0(local_80,local_70);
  }
  local_80 = 0;
  local_78 = 0;
  local_70 = -3;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT2_FLAG_APPEAL_S_L",(undefined **)0x1,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT2_FLAG_APPEAL_S_R",(undefined **)0x2,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT2_FLAG_APPEAL_HI",(undefined **)&DAT_00000004
                 ,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT2_FLAG_APPEAL_LW",(undefined **)&DAT_00000008
                 ,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT2_FLAG_APPEAL_SMASH",
                 (undefined **)&DAT_00000010,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT2_FLAG_ATTACK_DASH_ATTACK_HI4",
                 (undefined **)&SUB_00000020,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT2_FLAG_FALL_JUMP",(undefined **)&DAT_00000040
                 ,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT2_FLAG_DASH_ATTACK_S4",
                 (undefined **)&DAT_00000080,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT2_FLAG_DAMAGE_FALL_TO_FALL",
                 (undefined **)&DAT_00000100,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT2_FLAG_DOWN_TO_DOWN_STAND_FB",
                 (undefined **)&DAT_00000200,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT2_FLAG_DOWN_TO_DOWN_STAND",
                 (undefined **)&DAT_00000400,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT2_FLAG_GUARD_TO_PASS",(undefined **)0x800,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT2_FLAG_SQUAT_TO_SQUAT_F",
                 (undefined **)&DAT_00001000,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT2_FLAG_SQUAT_TO_SQUAT_B",(undefined **)0x2000
                 ,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT2_FLAG_TURN_TO_ESCAPE_F",(undefined **)0x4000
                 ,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT2_FLAG_TURN_TO_ESCAPE_B",(undefined **)0x8000
                 ,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT2_FLAG_STICK_ESCAPE_F",(undefined **)0x10000,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT2_FLAG_STICK_ESCAPE_B",(undefined **)0x20000,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT2_FLAG_STICK_ESCAPE",(undefined **)0x40000,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT2_FLAG_SPECIAL_N_REVERSE_LR",
                 (undefined **)0x80000,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT2_FLAG_THROW_F",(undefined **)0x100000,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT2_FLAG_THROW_B",(undefined **)0x200000,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT2_FLAG_THROW_HI",(undefined **)0x400000,in_x3
                 ,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT2_FLAG_THROW_LW",(undefined **)0x800000,in_x3
                 ,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT2_FLAG_COMMON_GUARD",(undefined **)0x1000000,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT2_FLAG_AIR_LASSO",(undefined **)0x2000000,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT2_FLAG_ATTACK_N2",(undefined **)0x4000000,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT2_FLAG_FINAL_REVERSE_LR",
                 (undefined **)0x8000000,in_x3,in_x4,in_x5,in_x6,in_x7);
  if ((local_80 != 0) && (local_78 != 0)) {
    FUN_71038f55d0(local_80,local_70);
  }
  local_70 = -3;
  local_80 = 0;
  local_78 = 0;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT3_FLAG_ITEM_LIGHT_THROW_FB4",
                 (undefined **)0x1,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT3_FLAG_ITEM_LIGHT_THROW_HI4",
                 (undefined **)0x2,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT3_FLAG_ITEM_LIGHT_THROW_LW4",
                 (undefined **)&DAT_00000004,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT3_FLAG_ITEM_LIGHT_THROW_HI",
                 (undefined **)&DAT_00000008,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT3_FLAG_ITEM_LIGHT_THROW_LW",
                 (undefined **)&DAT_00000010,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT3_FLAG_ITEM_LIGHT_DROP",
                 (undefined **)&SUB_00000020,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT3_FLAG_ITEM_LIGHT_THROW_FB",
                 (undefined **)&DAT_00000040,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT3_FLAG_ITEM_LIGHT_THROW_AIR_FB",
                 (undefined **)&DAT_00000080,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT3_FLAG_ITEM_LIGHT_THROW_AIR_FB4",
                 (undefined **)&DAT_00000100,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT3_FLAG_ITEM_LIGHT_THROW_AIR_HI",
                 (undefined **)&DAT_00000200,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT3_FLAG_ITEM_LIGHT_THROW_AIR_HI4",
                 (undefined **)&DAT_00000400,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT3_FLAG_ITEM_LIGHT_THROW_AIR_LW",
                 (undefined **)0x800,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT3_FLAG_ITEM_LIGHT_THROW_AIR_LW4",
                 (undefined **)&DAT_00001000,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT3_FLAG_ITEM_LIGHT_DROP_AIR",
                 (undefined **)0x2000,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT3_FLAG_ITEM_HEAVY_THROW_FB",
                 (undefined **)0x4000,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT3_FLAG_ITEM_GET_AIR",(undefined **)0x8000,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT3_FLAG_SPECIAL_S_SMASH",(undefined **)0x10000
                 ,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT3_FLAG_SPECIAL_S_SMASH_DASH",
                 (undefined **)0x20000,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT3_FLAG_ITEM_LIGHT_THROW",
                 (undefined **)&DAT_00000058,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT3_FLAG_ITEM_LIGHT_THROW_AIR",
                 (undefined **)0xa80,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT3_FLAG_ITEM_LIGHT_THROW_4",
                 (undefined **)&DAT_00000007,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT3_FLAG_ITEM_LIGHT_THROW_4_AIR",
                 (undefined **)0x1500,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT3_FLAG_ITEM_LIGHT_THROW_ALL",
                 (undefined **)&DAT_0000005f,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT3_FLAG_ITEM_LIGHT_THROW_AIR_ALL",
                 (undefined **)0x1f80,in_x3,in_x4,in_x5,in_x6,in_x7);
  if ((local_80 != 0) && (local_78 != 0)) {
    FUN_71038f55d0(local_80,local_70);
  }
  local_80 = 0;
  local_78 = 0;
  local_70 = -3;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT4_FLAG_SPECIAL_N_COMMAND",(undefined **)0x1,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT4_FLAG_SPECIAL_N2_COMMAND",(undefined **)0x2,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT4_FLAG_SPECIAL_S_COMMAND",
                 (undefined **)&DAT_00000004,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT4_FLAG_SPECIAL_HI_COMMAND",
                 (undefined **)&DAT_00000008,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT4_FLAG_COMMAND_6N6",
                 (undefined **)&DAT_00000010,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT4_FLAG_COMMAND_4N4",
                 (undefined **)&SUB_00000020,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT4_FLAG_ATTACK_COMMAND1",
                 (undefined **)&DAT_00000040,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT4_FLAG_SPECIAL_HI2_COMMAND",
                 (undefined **)&DAT_00000080,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT4_FLAG_SUPER_SPECIAL_COMMAND",
                 (undefined **)&DAT_00000100,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT4_FLAG_SUPER_SPECIAL_R_COMMAND",
                 (undefined **)&DAT_00000200,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT4_FLAG_SUPER_SPECIAL2_COMMAND",
                 (undefined **)&DAT_00000400,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT4_FLAG_SUPER_SPECIAL2_R_COMMAND",
                 (undefined **)0x800,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT4_FLAG_COMMAND_623NB",
                 (undefined **)&DAT_00001000,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT4_FLAG_COMMAND_623STRICT",
                 (undefined **)0x2000,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT4_FLAG_COMMAND_623ALONG",(undefined **)0x4000
                 ,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT4_FLAG_COMMAND_623BLONG",(undefined **)0x8000
                 ,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT4_FLAG_COMMAND_623A",(undefined **)0x10000,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT4_FLAG_COMMAND_2",(undefined **)0x20000,in_x3
                 ,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT4_FLAG_COMMAND_3",(undefined **)0x40000,in_x3
                 ,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT4_FLAG_COMMAND_1",(undefined **)0x80000,in_x3
                 ,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT4_FLAG_COMMAND_6",(undefined **)0x100000,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT4_FLAG_COMMAND_4",(undefined **)0x200000,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT4_FLAG_COMMAND_8",(undefined **)0x400000,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT4_FLAG_COMMAND_9",(undefined **)0x800000,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT4_FLAG_COMMAND_7",(undefined **)0x1000000,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT4_FLAG_COMMAND_6N6AB",(undefined **)0x2000000
                 ,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT4_FLAG_COMMAND_323CATCH",
                 (undefined **)0x4000000,in_x3,in_x4,in_x5,in_x6,in_x7);
  if ((local_80 != 0) && (local_78 != 0)) {
    FUN_71038f55d0(local_80,local_70);
  }
  local_70 = 0xfffffffd;
  local_80 = 0;
  local_78 = 0;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_COMMAND_FB_CATEGORY_NONE",(undefined **)0x0,in_x3,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_COMMAND_FB_CATEGORY_FRONT",(undefined **)0x1,in_x3,in_x4
                 ,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_COMMAND_FB_CATEGORY_BACK",(undefined **)0x2,in_x3,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_COMMAND_FB_CATEGORY_NUM",(undefined **)0x3,in_x3,in_x4,
                 in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_COMMAND_TURN_LR_NONE",(undefined **)0x0,in_x3,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_COMMAND_TURN_LR_LEFT",(undefined **)0x1,in_x3,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_COMMAND_TURN_LR_RIGHT",(undefined **)0x2,in_x3,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_COMMAND_TURN_LR_NUM",(undefined **)0x3,in_x3,in_x4,in_x5
                 ,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_COMMAND_ATTACK3_KIND_F",(undefined **)0x0,in_x3,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_COMMAND_ATTACK3_KIND_B",(undefined **)0x1,in_x3,in_x4,
                 in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_COMMAND_ATTACK_AIR_KIND_NONE",(undefined **)0x0,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_COMMAND_ATTACK_AIR_KIND_N",(undefined **)0x1,in_x3,in_x4
                 ,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_COMMAND_ATTACK_AIR_KIND_F",(undefined **)0x2,in_x3,in_x4
                 ,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_COMMAND_ATTACK_AIR_KIND_B",(undefined **)0x3,in_x3,in_x4
                 ,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_COMMAND_ATTACK_AIR_KIND_HI",(undefined **)&DAT_00000004,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_COMMAND_ATTACK_AIR_KIND_LW",(undefined **)0x5,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_COMMAND_ATTACK_AIR_KIND_NUM",(undefined **)0x6,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_COMMAND_DOWN_STAND_FB_KIND_NONE",(undefined **)0x0,in_x3
                 ,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_COMMAND_DOWN_STAND_FB_KIND_FRONT",(undefined **)0x1,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_COMMAND_DOWN_STAND_FB_KIND_BACK",(undefined **)0x2,in_x3
                 ,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_COMMAND_DOWN_STAND_FB_KIND_NUM",(undefined **)0x3,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_COMMAND_ITEM_THROW_KIND_F",(undefined **)0x0,in_x3,in_x4
                 ,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_COMMAND_ITEM_THROW_KIND_B",(undefined **)0x1,in_x3,in_x4
                 ,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_COMMAND_APPEAL_LR_NONE",(undefined **)0x0,in_x3,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_COMMAND_APPEAL_LR_LEFT",(undefined **)0x1,in_x3,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_COMMAND_APPEAL_LR_RIGHT",(undefined **)0x2,in_x3,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_COMMAND_APPEAL_LR_NUM",(undefined **)0x3,in_x3,in_x4,
                 in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_CONTROLLER_CLATTER_MAIN_CAUSE_START",
                 (undefined **)&DAT_ffffffff,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_CONTROLLER_CLATTER_MAIN_CAUSE_BURY",(undefined **)0x0,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_CONTROLLER_CLATTER_MAIN_CAUSE_DAMAGE_SONG",
                 (undefined **)0x1,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_CONTROLLER_CLATTER_MAIN_CAUSE_ICE",(undefined **)0x2,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_CONTROLLER_CLATTER_MAIN_CAUSE_BIND",(undefined **)0x3,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_CONTROLLER_CLATTER_MAIN_CAUSE_TERM",
                 (undefined **)&DAT_00000004,in_x3,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_RUMBLE_LEVEL_S",(undefined **)0x0,in_x3,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_RUMBLE_LEVEL_M",(undefined **)0x1,in_x3,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_RUMBLE_LEVEL_L",(undefined **)0x2,in_x3,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_RUMBLE_LEVEL_LL",(undefined **)0x3,in_x3,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_RUMBLE_LEVEL_TERM",(undefined **)&DAT_00000004,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_CONTROLLER_RUMBLE_ID_FIGHTER",(undefined **)0x0,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_CONTROLLER_RUMBLE_ID_HAMMER",(undefined **)0x1,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_CONTROLLER_RUMBLE_ID_BREATH",(undefined **)0x2,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_CONTROLLER_RUMBLE_ID_ICE",(undefined **)0x3,in_x3,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_CONTROLLER_RUMBLE_ID_SWALLOWED",
                 (undefined **)&DAT_00000004,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_CONTROLLER_RUMBLE_ID_ICECLIMBER",(undefined **)0x5,in_x3
                 ,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_CONTROLLER_RUMBLE_ID_HEAL",(undefined **)0x6,in_x3,in_x4
                 ,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_CONTROLLER_RUMBLE_ID_FIGHTER_TERM",
                 (undefined **)&DAT_00000007,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_CONTROLLER_RUMBLE_ID_ITEM",(undefined **)&DAT_00000064,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_CONTROLLER_RUMBLE_ID_GROUND",(undefined **)&DAT_000000c8
                 ,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_CONTROLLER_RUMBLE_ID_TERM",(undefined **)0xc9,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_CONTROLLER_STICK_BUTTON_UP",(undefined **)0x0,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_CONTROLLER_STICK_BUTTON_DOWN",(undefined **)0x1,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_CONTROLLER_STICK_BUTTON_LEFT",(undefined **)0x2,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_CONTROLLER_STICK_BUTTON_RIGHT",(undefined **)0x3,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_CONTROLLER_STICK_BUTTON_TERM",
                 (undefined **)&DAT_00000004,in_x3,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = -3;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_SPECIAL_COMMAND_BUTTON_NONE",(undefined **)0x0,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_SPECIAL_COMMAND_BUTTON_UP",(undefined **)0x1,in_x3,in_x4
                 ,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_SPECIAL_COMMAND_BUTTON_DOWN",(undefined **)0x2,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_SPECIAL_COMMAND_BUTTON_LEFT",(undefined **)0x3,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_SPECIAL_COMMAND_BUTTON_RIGHT",
                 (undefined **)&DAT_00000004,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_SPECIAL_COMMAND_BUTTON_LEFT_UP",(undefined **)0x5,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_SPECIAL_COMMAND_BUTTON_LEFT_DOWN",(undefined **)0x6,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_SPECIAL_COMMAND_BUTTON_RIGHT_UP",
                 (undefined **)&DAT_00000007,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_SPECIAL_COMMAND_BUTTON_RIGHT_DOWN",
                 (undefined **)&DAT_00000008,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_SPECIAL_COMMAND_BUTTON_A",(undefined **)&DAT_00000009,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_SPECIAL_COMMAND_BUTTON_B",(undefined **)0xa,in_x3,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_SPECIAL_COMMAND_BUTTON_CATCH",(undefined **)0xb,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_SPECIAL_COMMAND_BUTTON_A_ON",(undefined **)&DAT_0000000c
                 ,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_SPECIAL_COMMAND_BUTTON_B_ON",(undefined **)&DAT_0000000d
                 ,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_SPECIAL_COMMAND_BUTTON_A_TRIGGER",
                 (undefined **)&DAT_0000000e,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_SPECIAL_COMMAND_BUTTON_MAX",(undefined **)&DAT_0000000f,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_SPECIAL_COMMAND_STICK_NEUTRAL",(undefined **)0x0,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  if ((local_80 != 0) && (local_78 != 0)) {
    FUN_71038f55d0(local_80,local_70);
  }
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_SPECIAL_COMMAND_BUTTON_FLAG_NONE",(undefined **)0x1,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_SPECIAL_COMMAND_BUTTON_FLAG_UP",(undefined **)0x2,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_SPECIAL_COMMAND_BUTTON_FLAG_DOWN",
                 (undefined **)&DAT_00000004,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_SPECIAL_COMMAND_BUTTON_FLAG_LEFT",
                 (undefined **)&DAT_00000008,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_SPECIAL_COMMAND_BUTTON_FLAG_RIGHT",
                 (undefined **)&DAT_00000010,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_SPECIAL_COMMAND_BUTTON_FLAG_LEFT_UP",
                 (undefined **)&SUB_00000020,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_SPECIAL_COMMAND_BUTTON_FLAG_LEFT_DOWN",
                 (undefined **)&DAT_00000040,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_SPECIAL_COMMAND_BUTTON_FLAG_RIGHT_UP",
                 (undefined **)&DAT_00000080,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_SPECIAL_COMMAND_BUTTON_FLAG_RIGHT_DOWN",
                 (undefined **)&DAT_00000100,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_SPECIAL_COMMAND_BUTTON_FLAG_A",
                 (undefined **)&DAT_00000200,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_SPECIAL_COMMAND_BUTTON_FLAG_B",
                 (undefined **)&DAT_00000400,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_SPECIAL_COMMAND_BUTTON_FLAG_CATCH",(undefined **)0x800,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_SPECIAL_COMMAND_BUTTON_FLAG_A_ON",
                 (undefined **)&DAT_00001000,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_SPECIAL_COMMAND_BUTTON_FLAG_B_ON",(undefined **)0x2000,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_SPECIAL_COMMAND_BUTTON_FLAG_A_TRIGGER",
                 (undefined **)0x4000,in_x3,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_SPECIAL_COMMAND_INPUT_CAT_STICK",(undefined **)0x0,in_x3
                 ,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_SPECIAL_COMMAND_INPUT_CAT_A",(undefined **)0x1,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_SPECIAL_COMMAND_INPUT_CAT_B",(undefined **)0x2,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_SPECIAL_COMMAND_INPUT_CAT_CATCH",(undefined **)0x3,in_x3
                 ,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_SPECIAL_COMMAND_INPUT_CAT_MAX",
                 (undefined **)&DAT_00000004,in_x3,in_x4,in_x5,in_x6,in_x7);
  local_70 = 0xfffffffd;
  local_80 = 0;
  local_78 = 0;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_KINETIC_ENERGY_ID_NONE",(undefined **)&DAT_ffffffff,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_KINETIC_ENERGY_ID_MOTION",(undefined **)0x0,in_x3,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_KINETIC_ENERGY_ID_GRAVITY",(undefined **)0x1,in_x3,in_x4
                 ,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_KINETIC_ENERGY_ID_CONTROL",(undefined **)0x2,in_x3,in_x4
                 ,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_KINETIC_ENERGY_ID_STOP",(undefined **)0x3,in_x3,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_KINETIC_ENERGY_ID_DAMAGE",(undefined **)&DAT_00000004,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_KINETIC_ENERGY_ID_ENV_WIND",(undefined **)0x5,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_KINETIC_ENERGY_ID_GROUND_MOVEMENT",(undefined **)0x6,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_KINETIC_ENERGY_ID_JOSTLE",(undefined **)&DAT_00000007,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_KINETIC_ENERGY_ID_CONTROL_NO_STOP",
                 (undefined **)&DAT_00000008,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_KINETIC_ENERGY_ID_DAMAGE_NO_STOP",
                 (undefined **)&DAT_00000009,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_KINETIC_ENERGY_ID_STOP_NO_STOP",(undefined **)0xa,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_KINETIC_ENERGY_ID_NUM",(undefined **)0xb,in_x3,in_x4,
                 in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = -3;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_KINETIC_TYPE_NONE",(undefined **)&DAT_ffffffff,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_KINETIC_TYPE_FALL",(undefined **)0x0,in_x3,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_KINETIC_TYPE_JUMP",(undefined **)0x1,in_x3,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_KINETIC_TYPE_JUMP_AERIAL",(undefined **)0x2,in_x3,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_KINETIC_TYPE_FLY",(undefined **)0x3,in_x3,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_KINETIC_TYPE_JUMP_CLIFF",(undefined **)&DAT_00000004,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_KINETIC_TYPE_JUMP_CLIFF_VERTICAL",(undefined **)0x5,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_KINETIC_TYPE_GROUND_STOP",(undefined **)0x6,in_x3,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_KINETIC_TYPE_RUN_STOP",(undefined **)&DAT_00000007,in_x3
                 ,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_KINETIC_TYPE_MOTION_RUN_STOP",
                 (undefined **)&DAT_00000008,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_KINETIC_TYPE_GLIDE_START",(undefined **)&DAT_00000009,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_KINETIC_TYPE_GLIDE_LANDING_STOP",(undefined **)0xa,in_x3
                 ,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_KINETIC_TYPE_AIR_STOP",(undefined **)0xb,in_x3,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_KINETIC_TYPE_AIR_STOP_X_NORMAL_MAX",
                 (undefined **)&DAT_0000000c,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_KINETIC_TYPE_AIR_ESCAPE",(undefined **)&DAT_0000000d,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_KINETIC_TYPE_AIR_BRAKE",(undefined **)&DAT_0000000e,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_KINETIC_TYPE_MOTION_LOOP",(undefined **)&DAT_0000000f,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_KINETIC_TYPE_MOTION",(undefined **)&DAT_00000010,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_KINETIC_TYPE_MOTION_IGNORE_NORMAL",
                 (undefined **)&DAT_00000011,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_KINETIC_TYPE_MOTION_AIR",(undefined **)&DAT_00000012,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_KINETIC_TYPE_MOTION_AIR_ANGLE",
                 (undefined **)&DAT_00000013,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_KINETIC_TYPE_MOTION_FALL",(undefined **)&DAT_00000014,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_KINETIC_TYPE_MOTION_CLIFF_MOVE",
                 (undefined **)&DAT_00000015,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_KINETIC_TYPE_MOTION_CLIFF",(undefined **)0x16,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_KINETIC_TYPE_MOTION_CLIFF_GROUND",(undefined **)0x17,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_KINETIC_TYPE_MOTION_CLIFF_ROBBED",
                 (undefined **)&SUB_00000018,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_KINETIC_TYPE_LADDER",(undefined **)&DAT_00000019,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_KINETIC_TYPE_MOTION_LADDER",(undefined **)&DAT_0000001a,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_KINETIC_TYPE_LADDER_ATTACK",(undefined **)&DAT_0000001b,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_KINETIC_TYPE_MOTION_BIND",(undefined **)&DAT_0000001c,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_KINETIC_TYPE_DASH",(undefined **)&DAT_0000001d,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_KINETIC_TYPE_SHOOT_DASH",(undefined **)&DAT_0000001e,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_KINETIC_TYPE_SHOOT_BACK_DASH",(undefined **)0x1f,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_KINETIC_TYPE_SLIP_DASH",(undefined **)&SUB_00000020,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_KINETIC_TYPE_TURN_RUN",(undefined **)&DAT_00000021,in_x3
                 ,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_KINETIC_TYPE_DAMAGE_GROUND",(undefined **)&DAT_00000022,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_KINETIC_TYPE_DAMAGE_AIR",(undefined **)0x23,in_x3,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_KINETIC_TYPE_DAMAGE_FLY",(undefined **)&DAT_00000024,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_KINETIC_TYPE_DAMAGE_AIR_S_BREAK",
                 (undefined **)&DAT_00000025,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_KINETIC_TYPE_DAMAGE_AIR_REFLECT_LR",
                 (undefined **)&DAT_00000026,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_KINETIC_TYPE_DAMAGE_AIR_REFLECT_U",(undefined **)0x27,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_KINETIC_TYPE_DAMAGE_KNOCK_BACK",
                 (undefined **)&DAT_00000028,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_KINETIC_TYPE_PASSIVE_CEIL",(undefined **)&DAT_00000029,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_KINETIC_TYPE_PASSIVE_WALL",(undefined **)&DAT_0000002a,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_KINETIC_TYPE_PASSIVE_WALL_JUMP",(undefined **)0x2b,in_x3
                 ,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_KINETIC_TYPE_WALL_JUMP",(undefined **)&DAT_0000002c,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_KINETIC_TYPE_DETACH_WALL",(undefined **)0x2d,in_x3,in_x4
                 ,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_KINETIC_TYPE_DETACH_WALL_JUMP",
                 (undefined **)&DAT_0000002e,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_KINETIC_TYPE_DETACH_WALL_FALL",(undefined **)0x2f,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_KINETIC_TYPE_STOP_CEIL",(undefined **)&DAT_00000030,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_KINETIC_TYPE_CAPTURE",(undefined **)&DAT_00000031,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_KINETIC_TYPE_CATCH_CUT",(undefined **)&DAT_00000032,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_KINETIC_TYPE_CAPTURE_JUMP",(undefined **)&DAT_00000033,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_KINETIC_TYPE_RAGDOLL",(undefined **)&DAT_00000034,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_KINETIC_TYPE_UNIQ",(undefined **)0x35,in_x3,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_KINETIC_TYPE_RESET",(undefined **)&DAT_00000036,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_KINETIC_TYPE_RESET_NORMAL",(undefined **)0x37,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_KINETIC_TYPE_TURN",(undefined **)&DAT_00000038,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_KINETIC_TYPE_ITEM_LIFT_WALK",(undefined **)&DAT_00000039
                 ,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_KINETIC_TYPE_ITEM_SWING_DASH",
                 (undefined **)&DAT_0000003a,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_KINETIC_TYPE_ITEM_DASH_THROW",(undefined **)0x3b,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_KINETIC_TYPE_SWIM_DIVE",(undefined **)&DAT_0000003c,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_KINETIC_TYPE_SWIM_RISE",(undefined **)&DAT_0000003d,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_KINETIC_TYPE_SWIM",(undefined **)0x3e,in_x3,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_KINETIC_TYPE_SWIM_STOP",(undefined **)&DAT_0000003f,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_KINETIC_TYPE_SWIM_JUMP_CHARGE",
                 (undefined **)&DAT_00000040,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_KINETIC_TYPE_SWIM_DROWN",(undefined **)&DAT_00000041,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_KINETIC_TYPE_SWIM_DROWN_OUT",(undefined **)0x42,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_KINETIC_TYPE_SUPER_JUMP_PUNCH",(undefined **)0x43,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_KINETIC_TYPE_SUPER_JUMP_PUNCH_AIR",
                 (undefined **)&DAT_00000044,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_KINETIC_TYPE_SUPER_JUMP_PUNCH_AIR_TRANS",
                 (undefined **)&DAT_00000045,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_KINETIC_TYPE_FALL_FREE",(undefined **)0x46,in_x3,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_KINETIC_TYPE_FALL_ICE",(undefined **)0x47,in_x3,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_KINETIC_TYPE_JUMP_ICE",(undefined **)&DAT_00000048,in_x3
                 ,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_KINETIC_TYPE_GEKIKARA_RUN",(undefined **)&DAT_00000049,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_KINETIC_TYPE_SCREW_JUMP",(undefined **)0x4a,in_x3,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_KINETIC_TYPE_SCREW_JUMP_AERIAL",(undefined **)0x4b,in_x3
                 ,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_KINETIC_TYPE_CATCH_DASH",(undefined **)&DAT_0000004c,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_KINETIC_TYPE_CATCH_CUT_GOKULIN",(undefined **)0x4d,in_x3
                 ,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_KINETIC_TYPE_REBOUND",(undefined **)&DAT_0000004e,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_KINETIC_TYPE_REBOUND_JUMP",(undefined **)0x4f,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_KINETIC_TYPE_PIT_FALL",(undefined **)&DAT_00000050,in_x3
                 ,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_KINETIC_TYPE_PASSIVE_GROUND",(undefined **)&DAT_00000051
                 ,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_KINETIC_TYPE_PASSIVE_GROUND_MOTION",
                 (undefined **)&DAT_00000052,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_KINETIC_TYPE_JUMP_AERIAL_MOTION",(undefined **)0x53,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_KINETIC_TYPE_JUMP_AERIAL_MOTION_2ND",
                 (undefined **)&DAT_00000054,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_KINETIC_TYPE_GUARD_ON",(undefined **)0x55,in_x3,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_KINETIC_TYPE_SLIP",(undefined **)0x56,in_x3,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_KINETIC_TYPE_CAPTURE_BEETLE",(undefined **)0x57,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_KINETIC_TYPE_DAMAGE_AIR_REFLECT_D",
                 (undefined **)&DAT_00000058,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_KINETIC_TYPE_AIR_LASSO_HANG",(undefined **)&DAT_00000059
                 ,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_KINETIC_TYPE_AIR_LASSO_REWIND",(undefined **)0x5a,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_KINETIC_TYPE_DAMAGE_FALL",(undefined **)0x5b,in_x3,in_x4
                 ,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_KINETIC_TYPE_SONG_FALL",(undefined **)&DAT_0000005c,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_KINETIC_TYPE_FINAL_END_JUMP",(undefined **)0x5d,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_KINETIC_TYPE_DASH_BACK",(undefined **)0x5e,in_x3,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_KINETIC_TYPE_FREE",(undefined **)&DAT_0000005f,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_KINETIC_TYPE_TERM",(undefined **)&DAT_00000060,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_KINETIC_TYPE_NUM",(undefined **)&DAT_00000060,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_KINETIC_TYPE_EXTEND_START",(undefined **)&DAT_00000064,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  if ((local_80 != 0) && (local_78 != 0)) {
    FUN_71038f55d0(local_80,local_70);
  }
  local_70 = -3;
  local_80 = 0;
  local_78 = 0;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_PRE_START",
                 (undefined **)0x1dffffff,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_WAIT",(undefined **)0x1e000000
                 ,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_WAIT_FROM_RUN_BRAKE",
                 (undefined **)0x1e000001,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_FALL",(undefined **)0x1e000002
                 ,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_FALL_AERIAL",
                 (undefined **)0x1e000003,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_FALL_SPECIAL",
                 (undefined **)0x1e000004,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_DAMAGE_FALL",
                 (undefined **)0x1e000005,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_DAMAGE_FLY_REFLECT_L",
                 (undefined **)0x1e000006,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_DAMAGE_FLY_REFLECT_R",
                 (undefined **)0x1e000007,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_DAMAGE_FLY_REFLECT_U",
                 (undefined **)0x1e000008,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_DAMAGE_FLY_REFLECT_D",
                 (undefined **)0x1e000009,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_DASH_TO_RUN",
                 (undefined **)0x1e00000a,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_SLIP",(undefined **)0x1e00000b
                 ,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_RUN",(undefined **)0x1e00000c,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_DOWN",(undefined **)0x1e00000d
                 ,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_DOWN_WAIT",
                 (undefined **)0x1e00000e,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_DOWN_STAND",
                 (undefined **)0x1e00000f,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_DOWN_DAMAGE_FALL",
                 (undefined **)0x1e000010,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_DOWN_DAMAGE_REFLECT_L",
                 (undefined **)0x1e000011,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_DOWN_DAMAGE_REFLECT_R",
                 (undefined **)0x1e000012,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_PASSIVE",
                 (undefined **)0x1e000013,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_PASSIVE_FB",
                 (undefined **)0x1e000014,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_PASSIVE_WALL",
                 (undefined **)0x1e000015,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_PASSIVE_WALL_JUMP",
                 (undefined **)0x1e000016,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_PASSIVE_WALL_JUMP_BUTTON",
                 (undefined **)0x1e000017,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_PASSIVE_CEIL",
                 (undefined **)0x1e000018,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_STOP_WALL",
                 (undefined **)0x1e000019,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_STOP_CEIL",
                 (undefined **)0x1e00001a,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_LANDING",
                 (undefined **)0x1e00001b,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_LANDING_LIGHT",
                 (undefined **)0x1e00001c,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_LANDING_ATTACK_AIR",
                 (undefined **)0x1e00001d,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_LANDING_FALL_SPECIAL",
                 (undefined **)0x1e00001e,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CLIFF_CATCH",
                 (undefined **)0x1e00001f,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_GLIDE",
                 (undefined **)0x1e000020,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_GLIDE_LANDING",
                 (undefined **)0x1e000021,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_SQUAT_WAIT",
                 (undefined **)0x1e000022,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CATCH_WAIT",
                 (undefined **)0x1e000023,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CAPTURE_WAIT",
                 (undefined **)0x1e000024,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CAPTURE_CUT",
                 (undefined **)0x1e000025,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ESCAPE",
                 (undefined **)0x1e000026,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ESCAPE_F",
                 (undefined **)0x1e000027,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ESCAPE_B",
                 (undefined **)0x1e000028,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_GUARD_ON",
                 (undefined **)0x1e000029,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_GUARD",
                 (undefined **)0x1e00002a,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_JUMP_SQUAT",
                 (undefined **)0x1e00002b,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_JUMP_SQUAT_BUTTON",
                 (undefined **)0x1e00002c,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_DASH",
                 (undefined **)0x1e00002d,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_RUN_BRAKE",
                 (undefined **)0x1e00002e,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_TURN",
                 (undefined **)0x1e00002f,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_TURN_RUN",
                 (undefined **)0x1e000030,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_TURN_DASH",
                 (undefined **)0x1e000031,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_TURN_DASH_DASH",
                 (undefined **)0x1e000032,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_SLIP_TURN",
                 (undefined **)0x1e000033,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_SQUAT",
                 (undefined **)0x1e000034,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_SQUAT_RV",
                 (undefined **)0x1e000035,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_SQUAT_WAIT",
                 (undefined **)0x1e000036,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_SQUAT_F",
                 (undefined **)0x1e000037,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_SQUAT_B",
                 (undefined **)0x1e000038,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_APPEAL_U",
                 (undefined **)0x1e000039,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_APPEAL_S",
                 (undefined **)0x1e00003a,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_APPEAL_LW",
                 (undefined **)0x1e00003b,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_WALK",
                 (undefined **)0x1e00003c,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ESCAPE_AIR",
                 (undefined **)0x1e00003d,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_JUMP_AERIAL",
                 (undefined **)0x1e00003e,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_JUMP_AERIAL_BUTTON",
                 (undefined **)0x1e00003f,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_TREAD_JUMP",
                 (undefined **)0x1e000040,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_TREAD_JUMP_BUTTON",
                 (undefined **)0x1e000041,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_TREAD_JUMP_NO_TRIGGER",
                 (undefined **)0x1e000042,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_FLY",
                 (undefined **)0x1e000043,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_FLY_BUTTON",
                 (undefined **)0x1e000044,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_FLY_NEXT",
                 (undefined **)0x1e000045,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_CLIFF_ATTACK",
                 (undefined **)0x1e000046,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_CLIFF_SPEICAL",
                 (undefined **)0x1e000047,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_CLIFF_ESCAPE",
                 (undefined **)0x1e000048,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_CLIFF_CLIMB",
                 (undefined **)0x1e000049,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_CLIFF_FALL",
                 (undefined **)0x1e00004a,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_CLIFF_JUMP",
                 (undefined **)0x1e00004b,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_CLIFF_JUMP_BUTTON",
                 (undefined **)0x1e00004c,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_GLIDE_START",
                 (undefined **)0x1e00004d,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_GLIDE_END",
                 (undefined **)0x1e00004e,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_GLIDE_ATTACK",
                 (undefined **)0x1e00004f,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_PASS",
                 (undefined **)0x1e000050,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_AIR_LASSO",
                 (undefined **)0x1e000051,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ATTACK",
                 (undefined **)0x1e000052,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ATTACK_100",
                 (undefined **)0x1e000053,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ATTACK_DASH",
                 (undefined **)0x1e000054,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ATTACK_S3",
                 (undefined **)0x1e000055,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ATTACK_HI3",
                 (undefined **)0x1e000056,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ATTACK_LW3",
                 (undefined **)0x1e000057,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ATTACK_S4",
                 (undefined **)0x1e000058,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ATTACK_S4_START",
                 (undefined **)0x1e000059,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ATTACK_S4_HOLD",
                 (undefined **)0x1e00005a,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ATTACK_HI4",
                 (undefined **)0x1e00005b,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ATTACK_HI4_START",
                 (undefined **)0x1e00005c,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ATTACK_HI4_HOLD",
                 (undefined **)0x1e00005d,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ATTACK_LW4",
                 (undefined **)0x1e00005e,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ATTACK_LW4_START",
                 (undefined **)0x1e00005f,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ATTACK_LW4_HOLD",
                 (undefined **)0x1e000060,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ATTACK_COMMAND1",
                 (undefined **)0x1e000061,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ATTACK_AIR",
                 (undefined **)0x1e000062,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_SPECIAL_N",
                 (undefined **)0x1e000063,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_SPECIAL_S",
                 (undefined **)0x1e000064,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_SPECIAL_HI",
                 (undefined **)0x1e000065,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_SPECIAL_LW",
                 (undefined **)0x1e000066,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_SPECIAL_N_COMMAND",
                 (undefined **)0x1e000067,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_SPECIAL_N2_COMMAND",
                 (undefined **)0x1e000068,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_SPECIAL_S_COMMAND",
                 (undefined **)0x1e000069,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_SPECIAL_HI_COMMAND",
                 (undefined **)0x1e00006a,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_THROW_F",
                 (undefined **)0x1e00006b,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_THROW_B",
                 (undefined **)0x1e00006c,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_THROW_HI",
                 (undefined **)0x1e00006d,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_THROW_LW",
                 (undefined **)0x1e00006e,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_CATCH",
                 (undefined **)0x1e00006f,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_CATCH_DASH",
                 (undefined **)0x1e000070,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_CATCH_TURN",
                 (undefined **)0x1e000071,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_CAPTURE_JUMP_BUTTON",
                 (undefined **)0x1e000072,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_CAPTURE_JUMP",
                 (undefined **)0x1e000073,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ITEM_PICKUP_LIGHT",
                 (undefined **)0x1e000074,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ITEM_PICKUP_HEAVY",
                 (undefined **)0x1e000075,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ITEM_THROW",
                 (undefined **)0x1e000076,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ITEM_THROW_GUARD",
                 (undefined **)0x1e000077,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ITEM_THROW_FORCE",
                 (undefined **)0x1e000078,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ITEM_THROW_FORCE_DASH",
                 (undefined **)0x1e000079,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ITEM_THROW_DASH",
                 (undefined **)0x1e00007a,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ITEM_THROW_DASH_CLACKER",
                 (undefined **)0x1e00007b,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ITEM_SWING_BAT_4",
                 (undefined **)0x1e00007c,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ITEM_SWING_4",
                 (undefined **)0x1e00007d,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ITEM_SWING_4_HOLD",
                 (undefined **)0x1e00007e,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ITEM_SWING_3",
                 (undefined **)0x1e00007f,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ITEM_SWING",
                 (undefined **)0x1e000080,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ITEM_SWING_DASH",
                 (undefined **)0x1e000081,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ITEM_SHOOT",
                 (undefined **)0x1e000082,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ITEM_SHOOT_S3",
                 (undefined **)0x1e000083,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ITEM_SHOOT_S4",
                 (undefined **)0x1e000084,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ITEM_SHOOT_WAIT",
                 (undefined **)0x1e000085,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ITEM_SHOOT_WALK_F",
                 (undefined **)0x1e000086,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ITEM_SHOOT_WALK_F_BRAKE",
                 (undefined **)0x1e000087,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ITEM_SHOOT_WALK_B",
                 (undefined **)0x1e000088,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ITEM_SHOOT_WALK_B_BRAKE",
                 (undefined **)0x1e000089,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ITEM_SHOOT_DASH_F",
                 (undefined **)0x1e00008a,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ITEM_SHOOT_DASH_B",
                 (undefined **)0x1e00008b,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ITEM_SHOOT_AIR",
                 (undefined **)0x1e00008c,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ITEM_SHOOT_AIR_PASS",
                 (undefined **)0x1e00008d,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ITEM_SHOOT_JUMP_BUTTON",
                 (undefined **)0x1e00008e,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ITEM_SHOOT_JUMP",
                 (undefined **)0x1e00008f,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ITEM_SHOOT_TURN_DASH",
                 (undefined **)0x1e000090,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ITEM_SHOOT_TURN",
                 (undefined **)0x1e000091,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ITEM_SHOOT_LANDING",
                 (undefined **)0x1e000092,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_ITEM_GEKIKARA_WAIT",
                 (undefined **)0x1e000093,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_ITEM_GEKIKARA_RUN",
                 (undefined **)0x1e000094,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ITEM_GEKIKARA_RUN_BRAKE",
                 (undefined **)0x1e000095,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_THROW_KIRBY_GROUND",
                 (undefined **)0x1e000096,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_FINAL",
                 (undefined **)0x1e000097,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_THROW_ENEMY",
                 (undefined **)0x1e000098,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_SMASH_APPEAL",
                 (undefined **)0x1e000099,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_ATTACH_WALL",
                 (undefined **)0x1e00009a,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_WALL_JUMP",
                 (undefined **)0x1e00009b,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_JUMP_START",
                 (undefined **)0x1e00009c,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_SPECIAL_LW_COMMAND",
                 (undefined **)0x1e00009d,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_SUPER_SPECIAL",
                 (undefined **)0x1e00009e,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_SUPER_SPECIAL2",
                 (undefined **)0x1e00009f,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ITEM_THROW_RUN_BRAKE_HI4"
                 ,(undefined **)0x1e0000a0,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_LADDER_ATTACK",
                 (undefined **)0x1e0000a1,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ITEM_PICKUP_LIGHT_DASH",
                 (undefined **)0x1e0000a2,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ITEM_PICKUP_HEAVY_DASH",
                 (undefined **)0x1e0000a3,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_COMMAND_623NB",
                 (undefined **)0x1e0000a4,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ATTACK_STAND",
                 (undefined **)0x1e0000a5,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ATTACK_SQUAT",
                 (undefined **)0x1e0000a6,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_END",(undefined **)0x1e0000a7,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_ID_NUM",(undefined **)0xa7,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  if ((local_80 != 0) && (local_78 != 0)) {
    FUN_71038f55d0(local_80,local_70);
  }
  local_70 = -3;
  local_80 = 0;
  local_78 = 0;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_GROUP_PRE_START",
                 (undefined **)0x1effffff,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_GROUP_CHK_GROUND_SPECIAL",
                 (undefined **)0x1f000000,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_GROUP_CHK_GROUND_ITEM",
                 (undefined **)0x1f000001,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_GROUP_CHK_GROUND_CATCH",
                 (undefined **)0x1f000002,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_GROUP_CHK_GROUND_ATTACK",
                 (undefined **)0x1f000003,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_GROUP_CHK_GROUND_ESCAPE",
                 (undefined **)0x1f000004,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_GROUP_CHK_GROUND_GUARD",
                 (undefined **)0x1f000005,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_GROUP_CHK_GROUND_JUMP",
                 (undefined **)0x1f000006,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_GROUP_CHK_GROUND",
                 (undefined **)0x1f000007,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_GROUP_CHK_AIR_LANDING",
                 (undefined **)0x1f000008,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_GROUP_CHK_AIR_CLIFF",
                 (undefined **)0x1f000009,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_GROUP_CHK_AIR_SPECIAL",
                 (undefined **)0x1f00000a,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_GROUP_CHK_AIR_ITEM_THROW",
                 (undefined **)0x1f00000b,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_GROUP_CHK_AIR_LASSO",
                 (undefined **)0x1f00000c,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_GROUP_CHK_AIR_ESCAPE",
                 (undefined **)0x1f00000d,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_GROUP_CHK_AIR_ATTACK",
                 (undefined **)0x1f00000e,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_GROUP_CHK_AIR_TREAD_JUMP",
                 (undefined **)0x1f00000f,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_GROUP_CHK_AIR_WALL_JUMP",
                 (undefined **)0x1f000010,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_GROUP_CHK_AIR_JUMP_AERIAL",
                 (undefined **)0x1f000011,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_GROUP_ID_END",
                 (undefined **)0x1f000012,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRANSITION_TERM_GROUP_ID_NUM",
                 (undefined **)&DAT_00000012,in_x3,in_x4,in_x5,in_x6,in_x7);
  if ((local_80 != 0) && (local_78 != 0)) {
    FUN_71038f55d0(local_80,local_70);
  }
  local_70 = -3;
  local_80 = 0;
  local_78 = 0;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ATTR_KEEP_2NDARY",(undefined **)0x1,in_x3,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ATTR_DISABLE_TURN_DAMAGE",(undefined **)0x2,in_x3
                 ,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ATTR_DAMAGE",(undefined **)&DAT_00000004,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ATTR_NO_DROP_ITEM",(undefined **)&DAT_00000008,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ATTR_INTO_DOOR",(undefined **)&DAT_00000010,in_x3
                 ,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ATTR_DISABLE_INTERRUPT_SCALING",
                 (undefined **)&SUB_00000020,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ATTR_DISABLE_INTERRUPT_SPRING",
                 (undefined **)&DAT_00000040,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ATTR_DISABLE_INTERRUPT_SUPERSTAR",
                 (undefined **)&DAT_00000080,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ATTR_DISABLE_INTERRUPT_SLOW",
                 (undefined **)&DAT_00000100,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ATTR_DISABLE_SWIM",(undefined **)&DAT_00000200,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ATTR_DISABLE_CURRY_SHOT",
                 (undefined **)&DAT_00000400,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ATTR_DISABLE_CURRY_FACE",(undefined **)0x800,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ATTR_START_TURN",(undefined **)&DAT_00001000,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ATTR_DISABLE_SHIELD_RECOVERY",
                 (undefined **)0x2000,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ATTR_CLEAR_MOTION_ENERGY",(undefined **)0x4000,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ATTR_INHERIT_CURSOR",(undefined **)0x8000,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ATTR_SLOPE_TOP_UNLIMIT",(undefined **)0x10000,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ATTR_INHERIT_CAMERA_RANGE",(undefined **)0x20000,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ATTR_HIDE_NAME_CURSOR",(undefined **)0x40000,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ATTR_DISABLE_GROUND_FRICTION",
                 (undefined **)0x80000,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ATTR_FINAL",(undefined **)0x100000,in_x3,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ATTR_FINAL_DAMAGE",(undefined **)0x200000,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ATTR_SCALE_KINETIC_ENERGY",(undefined **)0x400000
                 ,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ATTR_DETACH_PIKMIN",(undefined **)0x800000,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ATTR_KEEP_MOTION_RATE",(undefined **)0x1000000,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ATTR_ENABLE_ROCKETBELT_EJECT",
                 (undefined **)0x2000000,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ATTR_IGNORE_SPEED_LIMIT",(undefined **)0x4000000,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ATTR_DISABLE_INTERRUPT_STOP",
                 (undefined **)0x8000000,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ATTR_DISABLE_INTERRUPT_WARP",
                 (undefined **)0x10000000,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ATTR_DISABLE_DISSOLVE_CURSOR",
                 (undefined **)0x20000000,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ATTR_DISABLE_JUMP_BOARD_EFFECT",
                 (undefined **)0x40000000,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ATTR_DISABLE_ITEM_INTERRUPT",
                 (undefined **)0x80001e0,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ATTR_TERM",(undefined **)0x80001e1,in_x3,in_x4,
                 in_x5,in_x6,in_x7);
  if ((local_80 != 0) && (local_78 != 0)) {
    FUN_71038f55d0(local_80,local_70);
  }
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_HAVE_ITEM_WORK_MAIN",(undefined **)0x0,in_x3,in_x4,in_x5
                 ,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_HAVE_ITEM_WORK_SPECIAL",(undefined **)0x1,in_x3,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_HAVE_ITEM_WORK_TEMPORARY",(undefined **)0x2,in_x3,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_HAVE_ITEM_WORK_EXTRA",(undefined **)0x3,in_x3,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_HAVE_ITEM_WORK_EXTRA_2",(undefined **)&DAT_00000004,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_HAVE_ITEM_WORK_EXTRA_3",(undefined **)0x5,in_x3,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_HAVE_ITEM_WORK_EXTRA_4",(undefined **)0x6,in_x3,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_HAVE_ITEM_WORK_NUM",(undefined **)&DAT_00000007,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  local_70 = 0xfffffffd;
  local_80 = 0;
  local_78 = 0;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_ATTACH_ITEM_WORK_NUM",(undefined **)&DAT_00000009,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_SWING_ITEM_STATUS_KIND_INDEX_1",(undefined **)0x0,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_SWING_ITEM_STATUS_KIND_INDEX_3",(undefined **)0x1,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_SWING_ITEM_STATUS_KIND_INDEX_4",(undefined **)0x2,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_SWING_ITEM_STATUS_KIND_INDEX_4_2",(undefined **)0x3,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_SWING_ITEM_STATUS_KIND_INDEX_DASH",
                 (undefined **)&DAT_00000004,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_SWING_ITEM_STATUS_KIND_INDEX_TERM",(undefined **)0x5,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_SWING_ITEM_NO_SWORD",(undefined **)0x0,in_x3,in_x4,in_x5
                 ,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_SWING_ITEM_NO_BAT",(undefined **)0x1,in_x3,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_SWING_ITEM_NO_HARISEN",(undefined **)0x2,in_x3,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_SWING_ITEM_NO_STARROD",(undefined **)0x3,in_x3,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_SWING_ITEM_NO_LIPSTICK",(undefined **)&DAT_00000004,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_SWING_ITEM_NO_FIREBAR",(undefined **)0x5,in_x3,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_SWING_ITEM_NO_CLUB",(undefined **)0x6,in_x3,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_SWING_ITEM_NO_KILLSWORD",(undefined **)&DAT_00000007,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_SWING_ITEM_NO_DEATHSCYTHE",(undefined **)&DAT_00000008,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_SWING_ITEM_NO_TERM",(undefined **)&DAT_00000009,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_ITEM_HOLD_KIND_HAVE",(undefined **)0x0,in_x3,in_x4,in_x5
                 ,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_ITEM_HOLD_KIND_PICKUP",(undefined **)0x1,in_x3,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_ITEM_HOLD_KIND_GRIP",(undefined **)0x2,in_x3,in_x4,in_x5
                 ,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_ITEM_HOLD_KIND_SMASH",(undefined **)0x3,in_x3,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_ITEM_HOLD_KIND_TERM",(undefined **)&DAT_00000004,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_ITEM_HOLD_KIND_NONE",(undefined **)&DAT_ffffffff,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_ITEM_GLIP_CANCEL_NODE_KIND_COMMON_HAVE",
                 (undefined **)0x0,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_ITEM_GLIP_CANCEL_NODE_KIND_COMMON_HAND",
                 (undefined **)0x1,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_ITEM_GLIP_CANCEL_NODE_KIND_EXTEND_1",(undefined **)0x2,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_ITEM_GLIP_CANCEL_NODE_KIND_EXTEND_2",(undefined **)0x3,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_ITEM_GLIP_CANCEL_NODE_KIND_TERM",
                 (undefined **)&DAT_00000004,in_x3,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_REFLECTOR_GROUP_JUST_SHIELD",(undefined **)0x0,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_REFLECTOR_GROUP_HIT",(undefined **)0x1,in_x3,in_x4,in_x5
                 ,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_REFLECTOR_GROUP_HOMERUNBAT",(undefined **)0x2,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_REFLECTOR_GROUP_COMMON_NUM",(undefined **)0x3,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_REFLECTOR_GROUP_EXTEND",(undefined **)0x3,in_x3,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_REFLECTOR_GROUP_EXTEND2",(undefined **)&DAT_00000004,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_REFLECTOR_GROUP_NUM",(undefined **)0x5,in_x3,in_x4,in_x5
                 ,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_REFLECTOR_KIND_COMMON_JUST_SHIELD",(undefined **)0x0,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_REFLECTOR_KIND_COMMON_NUM",(undefined **)0x1,in_x3,in_x4
                 ,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_SND_GROUP_CHARA_DUMMY_ID",(undefined **)&DAT_ffffffff,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_SOUND_TABLE_KIND_DAMAGE_RANDOM_VC",(undefined **)0x0,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_SOUND_TABLE_KIND_DAMAGE_FLY_RANDOM_VC",(undefined **)0x1
                 ,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_SOUND_TABLE_KIND_ATTACK_RANDOM_VC",(undefined **)0x2,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_SOUND_TABLE_KIND_ETC_VC",(undefined **)0x3,in_x3,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_SOUND_TABLE_KIND_ATTACK_RANDOM_VC_2",
                 (undefined **)&DAT_00000004,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_SOUND_TABLE_KIND_ATTACK_RANDOM_VC_3",(undefined **)0x5,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_SOUND_TABLE_KIND_TERM",(undefined **)0x6,in_x3,in_x4,
                 in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_ETC_VOICE_KIND_LRD",(undefined **)0x0,in_x3,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_ETC_VOICE_KIND_LRD_RARE",(undefined **)0x1,in_x3,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_ETC_VOICE_KIND_U_STAR",(undefined **)0x2,in_x3,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_ETC_VOICE_KIND_OUEN",(undefined **)0x3,in_x3,in_x4,in_x5
                 ,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_ETC_VOICE_KIND_TERM",(undefined **)&DAT_00000004,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_METAL_SOUND_TYPE_STEP",(undefined **)0x0,in_x3,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_METAL_SOUND_TYPE_LANDING",(undefined **)0x1,in_x3,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_METAL_SOUND_TYPE_TERM",(undefined **)0x2,in_x3,in_x4,
                 in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_METAL_SOUND_LEVEL_NONE",(undefined **)&DAT_ffffffff,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_METAL_SOUND_LEVEL_S",(undefined **)0x0,in_x3,in_x4,in_x5
                 ,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_METAL_SOUND_LEVEL_M",(undefined **)0x1,in_x3,in_x4,in_x5
                 ,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_METAL_SOUND_LEVEL_L",(undefined **)0x2,in_x3,in_x4,in_x5
                 ,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_METAL_SOUND_LEVEL_TERM",(undefined **)0x3,in_x3,in_x4,
                 in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_WATER_DIVE_SOUND_LEVEL_NONE",(undefined **)&DAT_ffffffff
                 ,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_WATER_DIVE_SOUND_LEVEL_S",(undefined **)0x0,in_x3,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_WATER_DIVE_SOUND_LEVEL_M",(undefined **)0x1,in_x3,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_WATER_DIVE_SOUND_LEVEL_L",(undefined **)0x2,in_x3,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_WATER_DIVE_SOUND_LEVEL_TERM",(undefined **)0x3,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_COMMONSND_DEAD",(undefined **)0x0,in_x3,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_COMMONSND_DEAD_RARE",(undefined **)0x1,in_x3,in_x4,in_x5
                 ,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_COMMONSND_HOSHIKIE",(undefined **)0x2,in_x3,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_COMMONSND_OUEN_L",(undefined **)0x3,in_x3,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_COMMONSND_MAX",(undefined **)&DAT_00000004,in_x3,in_x4,
                 in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_EFFECT_SCREEN_NO_0",(undefined **)0x0,in_x3,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_EFFECT_SCREEN_NO_1",(undefined **)0x1,in_x3,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_EFFECT_SCREEN_NO_FINAL_FLASH",(undefined **)0x2,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_EFFECT_SCREEN_NO_TERM",(undefined **)0x3,in_x3,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_EFFECT_SCREEN_NO_FINAL_BG",(undefined **)0x0,in_x3,in_x4
                 ,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ACTION_CATEGORY_NONE",(undefined **)0x0,in_x3,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ACTION_CATEGORY_KEEP",(undefined **)0x1,in_x3,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ACTION_CATEGORY_ATTACK",(undefined **)0x2,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ACTION_CATEGORY_SLIP",(undefined **)0x3,in_x3,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ACTION_CATEGORY_DROWN",(undefined **)&DAT_00000004,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ACTION_CATEGORY_CATCH",(undefined **)0x5,in_x3,in_x4
                 ,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ACTION_CATEGORY_NO_ATTACK_FINAL",(undefined **)0x6,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ACTION_CATEGORY_NO_ATTACK_SPECIAL",
                 (undefined **)&DAT_00000007,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ACTION_CATEGORY_TERM",(undefined **)&DAT_00000008,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ACTION_KIND_NONE",(undefined **)0x0,in_x3,in_x4,
                 in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = -3;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_NONE",(undefined **)0x0,in_x3,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_ATTACK11",(undefined **)0x1,in_x3,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_ATTACK12",(undefined **)0x2,in_x3,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_ATTACK13",(undefined **)0x3,in_x3,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_ATTACK100",(undefined **)&DAT_00000004,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_ATTACK_DASH",(undefined **)0x5,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_ATTACK_S3",(undefined **)0x6,in_x3,in_x4
                 ,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_ATTACK_S3_S2",
                 (undefined **)&DAT_00000007,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_ATTACK_S3_S3",
                 (undefined **)&DAT_00000008,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_ATTACK_HI3",(undefined **)&DAT_00000009,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_ATTACK_LW3",(undefined **)0xa,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_ATTACK_S4",(undefined **)0xb,in_x3,in_x4
                 ,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_ATTACK_HI4",(undefined **)&DAT_0000000c,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_ATTACK_LW4",(undefined **)&DAT_0000000d,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_ATTACK_AIR_N",
                 (undefined **)&DAT_0000000e,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_ATTACK_AIR_F",
                 (undefined **)&DAT_0000000f,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_ATTACK_AIR_F2",
                 (undefined **)&DAT_00000010,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_ATTACK_AIR_F3",
                 (undefined **)&DAT_00000011,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_ATTACK_AIR_B",
                 (undefined **)&DAT_00000012,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_ATTACK_AIR_HI",
                 (undefined **)&DAT_00000013,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_ATTACK_AIR_LW",
                 (undefined **)&DAT_00000014,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_ATTACK11_W",(undefined **)&DAT_00000015,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_ATTACK_S3_W",(undefined **)0x16,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_ATTACK_HI3_W",(undefined **)0x17,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_ATTACK_LW3_W",
                 (undefined **)&SUB_00000018,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_ATTACK_NEAR",(undefined **)&DAT_00000019
                 ,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_ATTACK_NEAR_W",
                 (undefined **)&DAT_0000001a,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_ATTACK_COMMAND1",
                 (undefined **)&DAT_0000001b,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_ATTACK_COMMAND2",
                 (undefined **)&DAT_0000001c,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_ATTACK_COMMAND3",
                 (undefined **)&DAT_0000001d,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_SPECIAL_N",(undefined **)&DAT_0000001e,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_SPECIAL_N_COMMAND",(undefined **)0x1f,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_SPECIAL_N2_COMMAND",
                 (undefined **)&SUB_00000020,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_SPECIAL_S",(undefined **)&DAT_00000021,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_SPECIAL_S_COMMAND",
                 (undefined **)&DAT_00000022,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_SPECIAL_HI",(undefined **)0x23,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_SPECIAL_HI_COMMAND",
                 (undefined **)&DAT_00000024,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_SPECIAL_LW",(undefined **)&DAT_00000025,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_FINAL",(undefined **)&DAT_00000026,in_x3
                 ,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_FINAL2",(undefined **)0x27,in_x3,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_DOWN_ATTACK_U",
                 (undefined **)&DAT_00000028,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_DOWN_ATTACK_D",
                 (undefined **)&DAT_00000029,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_CATCH",(undefined **)&DAT_0000002a,in_x3
                 ,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_CATCH_ATTACK",(undefined **)0x2b,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_THROW_F",(undefined **)&DAT_0000002c,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_THROW_B",(undefined **)0x2d,in_x3,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_THROW_HI",(undefined **)&DAT_0000002e,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_THROW_LW",(undefined **)0x2f,in_x3,in_x4
                 ,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_THROW_LIFT_F",
                 (undefined **)&DAT_00000030,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_THROW_LIFT_B",
                 (undefined **)&DAT_00000031,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_THROW_LIFT_HI",
                 (undefined **)&DAT_00000032,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_THROW_LIFT_LW",
                 (undefined **)&DAT_00000033,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_CLIFF_ATTACK_SLOW",
                 (undefined **)&DAT_00000034,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_CLIFF_ATTACK_QUICK",(undefined **)0x35,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_APPEAL_ATTACK",
                 (undefined **)&DAT_00000036,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_SLIP_STAND_ATTACK",(undefined **)0x37,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_SWORD_SWING1",
                 (undefined **)&DAT_00000038,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_SWORD_SWING3",
                 (undefined **)&DAT_00000039,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_SWORD_SWING4",
                 (undefined **)&DAT_0000003a,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_SWORD_SWING_DASH",(undefined **)0x3b,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_BAT_SWING1",(undefined **)&DAT_0000003c,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_BAT_SWING3",(undefined **)&DAT_0000003d,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_BAT_SWING4",(undefined **)0x3e,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_BAT_SWING_DASH",
                 (undefined **)&DAT_0000003f,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_HARISEN_SWING1",
                 (undefined **)&DAT_00000040,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_HARISEN_SWING3",
                 (undefined **)&DAT_00000041,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_HARISEN_SWING4",(undefined **)0x42,in_x3
                 ,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_HARISEN_SWING_DASH",(undefined **)0x43,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_STAR_ROD_SWING1",
                 (undefined **)&DAT_00000044,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_STAR_ROD_SWING3",
                 (undefined **)&DAT_00000045,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_STAR_ROD_SWING4",(undefined **)0x46,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_STAR_ROD_SWING_DASH",(undefined **)0x47,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_LIP_STICK_SWING1",
                 (undefined **)&DAT_00000048,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_LIP_STICK_SWING3",
                 (undefined **)&DAT_00000049,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_LIP_STICK_SWING4",(undefined **)0x4a,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_LIP_STICK_SWING_DASH",(undefined **)0x4b
                 ,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_FIREBAR_SWING1",
                 (undefined **)&DAT_0000004c,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_FIREBAR_SWING3",(undefined **)0x4d,in_x3
                 ,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_FIREBAR_SWING4",
                 (undefined **)&DAT_0000004e,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_FIREBAR_SWING_DASH",(undefined **)0x4f,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_CLUB_SWING1",(undefined **)&DAT_00000050
                 ,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_CLUB_SWING3",(undefined **)&DAT_00000051
                 ,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_CLUB_SWING4",(undefined **)&DAT_00000052
                 ,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_CLUB_SWING_DASH",(undefined **)0x53,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_KILLSWORD_SWING1",
                 (undefined **)&DAT_00000054,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_KILLSWORD_SWING3",(undefined **)0x55,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_KILLSWORD_SWING4",(undefined **)0x56,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_KILLSWORD_SWING_DASH",(undefined **)0x57
                 ,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_DEATHSCYTHE_SWING1",
                 (undefined **)&DAT_00000058,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_DEATHSCYTHE_SWING3",
                 (undefined **)&DAT_00000059,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_DEATHSCYTHE_SWING4",(undefined **)0x5a,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_DEATHSCYTHE_SWING_DASH",
                 (undefined **)0x5b,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_RAY_GUN_SHOOT",
                 (undefined **)&DAT_0000005c,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_FIRE_FLOWER_SHOOT",(undefined **)0x5d,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_CLACKER_SHOOT",(undefined **)0x5e,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_SCOPE_RAPID",(undefined **)&DAT_0000005f
                 ,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_SCOPE_FIRE",(undefined **)&DAT_00000060,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_SCREW",(undefined **)&DAT_00000061,in_x3
                 ,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_HAMMER",(undefined **)0x62,in_x3,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_WARP_STAR",(undefined **)0x63,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_DRAGOON",(undefined **)&DAT_00000064,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_ITEM_ATTACK",(undefined **)&DAT_00000065
                 ,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_POKEMON_ATTACK",
                 (undefined **)&DAT_00000066,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_ASSIST_ATTACK",(undefined **)0x67,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_BOMB_ATTACK",(undefined **)&DAT_00000068
                 ,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_THROW_ITEM",(undefined **)&DAT_00000069,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_GENESIS_SHOOT",(undefined **)0x6a,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_DRILL_SHOOT",(undefined **)0x6b,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_MAGICPOT_SHOOT",
                 (undefined **)&DAT_0000006c,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_STEEL_DIVER_SHOOT",
                 (undefined **)&DAT_0000006d,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_KILLER",(undefined **)&DAT_0000006e,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_AIR_LASSO",(undefined **)0x6f,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_STAFF_SHOOT",(undefined **)&DAT_00000070
                 ,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_REVENGESHOOTER_SHOOT",
                 (undefined **)&DAT_00000071,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_ADDITIONS_ATTACK_01",(undefined **)0x72,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_ADDITIONS_ATTACK_02",(undefined **)0x73,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_ADDITIONS_ATTACK_03",
                 (undefined **)&DAT_00000074,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_ADDITIONS_ATTACK_04",
                 (undefined **)&DAT_00000075,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_ADDITIONS_ATTACK_05",(undefined **)0x76,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_ADDITIONS_ATTACK_06",(undefined **)0x77,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_ADDITIONS_ATTACK_07",
                 (undefined **)&DAT_00000078,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_ADDITIONS_ATTACK_08",
                 (undefined **)&DAT_00000079,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_ADDITIONS_ATTACK_09",
                 (undefined **)&DAT_0000007a,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_ADDITIONS_ATTACK_10",(undefined **)0x7b,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_ADDITIONS_ATTACK_11",
                 (undefined **)&DAT_0000007c,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_ADDITIONS_ATTACK_12",(undefined **)0x7d,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_ADDITIONS_ATTACK_13",(undefined **)0x7e,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_ADDITIONS_ATTACK_14",(undefined **)0x7f,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_ADDITIONS_ATTACK_15",
                 (undefined **)&DAT_00000080,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_ADDITIONS_ATTACK_16",
                 (undefined **)&DAT_00000081,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_KIND_TERM",(undefined **)0x82,in_x3,in_x4,
                 in_x5,in_x6,in_x7);
  if ((local_80 != 0) && (local_78 != 0)) {
    FUN_71038f55d0(local_80,local_70);
  }
  local_70 = 0xfffffffd;
  local_80 = 0;
  local_78 = 0;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_SUB_KIND_NONE",(undefined **)0x0,in_x3,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ATTACK_SUB_KIND_UNIQ",(undefined **)0x1,in_x3,in_x4,
                 in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ACTION_TRIGGER_OFF",(undefined **)0x0,in_x3,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ACTION_TRIGGER_ON",(undefined **)0x1,in_x3,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_ACTION_TRIGGER_TERM",(undefined **)0x2,in_x3,in_x4,
                 in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_DAMAGE_TRICK_KIND_NORMAL",(undefined **)0x0,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_DAMAGE_TRICK_KIND_ADDITIONAL",(undefined **)0x1,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_DAMAGE_TRICK_KIND_TERM",(undefined **)0x2,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_DIST_MEASURE_NONE",(undefined **)0x0,in_x3,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_DIST_MEASURE_SWIM",(undefined **)0x1,in_x3,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_DIST_MEASURE_TERM",(undefined **)0x2,in_x3,in_x4,
                 in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_FLAG_SHOOT_NONE",(undefined **)0x0,in_x3,in_x4,in_x5
                 ,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_FLAG_SHOOT",(undefined **)0x1,in_x3,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_FLAG_SHOOT_TERM",(undefined **)0x2,in_x3,in_x4,in_x5
                 ,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_FLAG_HAJIKI_NONE",(undefined **)0x0,in_x3,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_FLAG_HAJIKI",(undefined **)0x1,in_x3,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_FLAG_HAJIKI_TERM",(undefined **)0x2,in_x3,in_x4,
                 in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_FLAG_THROW_NONE",(undefined **)0x0,in_x3,in_x4,in_x5
                 ,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_FLAG_THROW",(undefined **)0x1,in_x3,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_FLAG_THROW_TERM",(undefined **)0x2,in_x3,in_x4,in_x5
                 ,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_FLAG_NO_FINAL_NONE",(undefined **)0x0,in_x3,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_FLAG_NO_FINAL",(undefined **)0x1,in_x3,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_FLAG_NO_FINAL_TERM",(undefined **)0x2,in_x3,in_x4,
                 in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = -3;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ACTION_CATEGORY_NONE",(undefined **)0x0,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ACTION_CATEGORY_KEEP",(undefined **)0x1,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ACTION_CATEGORY_ATTACK",(undefined **)0x2,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ACTION_CATEGORY_SLIP",(undefined **)0x3,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ACTION_CATEGORY_DROWN",
                 (undefined **)&DAT_00000004,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ACTION_CATEGORY_CATCH",(undefined **)0x5,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ACTION_CATEGORY_NO_ATTACK_FINAL",
                 (undefined **)0x6,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ACTION_CATEGORY_NO_ATTACK_SPECIAL",
                 (undefined **)&DAT_00000007,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_ATTACK11",
                 (undefined **)&DAT_00000010,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_ATTACK12",
                 (undefined **)&SUB_00000020,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_ATTACK13",
                 (undefined **)&DAT_00000030,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_ATTACK100",
                 (undefined **)&DAT_00000040,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_ATTACK_DASH",
                 (undefined **)&DAT_00000050,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_ATTACK_S3",
                 (undefined **)&DAT_00000060,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_ATTACK_S3_S2",
                 (undefined **)&DAT_00000070,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_ATTACK_S3_S3",
                 (undefined **)&DAT_00000080,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_ATTACK_HI3",
                 (undefined **)&DAT_00000090,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_ATTACK_LW3",
                 (undefined **)&DAT_000000a0,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_ATTACK_S4",
                 (undefined **)&DAT_000000b0,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_ATTACK_HI4",
                 (undefined **)&DAT_000000c0,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_ATTACK_LW4",
                 (undefined **)&DAT_000000d0,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_ATTACK_AIR_N",
                 (undefined **)&DAT_000000e0,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_ATTACK_AIR_F",
                 (undefined **)&DAT_000000f0,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_ATTACK_AIR_F2",
                 (undefined **)&DAT_00000100,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_ATTACK_AIR_F3",
                 (undefined **)&DAT_00000110,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_ATTACK_AIR_B",
                 (undefined **)&DAT_00000120,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_ATTACK_AIR_HI",
                 (undefined **)&DAT_00000130,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_ATTACK_AIR_LW",
                 (undefined **)&DAT_00000140,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_ATTACK11_W",
                 (undefined **)&DAT_00000150,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_ATTACK_S3_W",
                 (undefined **)&DAT_00000160,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_ATTACK_HI3_W",
                 (undefined **)&DAT_00000170,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_ATTACK_LW3_W",
                 (undefined **)&DAT_00000180,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_ATTACK_NEAR",
                 (undefined **)&DAT_00000190,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_ATTACK_NEAR_W",
                 (undefined **)&DAT_000001a0,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_ATTACK_COMMAND1",
                 (undefined **)&DAT_000001b0,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_ATTACK_COMMAND2",
                 (undefined **)&DAT_000001c0,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_ATTACK_COMMAND3",
                 (undefined **)&DAT_000001d0,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_SPECIAL_N",
                 (undefined **)&DAT_000001e0,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_SPECIAL_N_COMMAND",
                 (undefined **)&DAT_000001f0,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_SPECIAL_N2_COMMAND",
                 (undefined **)&DAT_00000200,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_SPECIAL_S",
                 (undefined **)&DAT_00000210,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_SPECIAL_S_COMMAND",
                 (undefined **)0x220,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_SPECIAL_HI",
                 (undefined **)0x230,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_SPECIAL_HI_COMMAND",
                 (undefined **)0x240,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_SPECIAL_LW",
                 (undefined **)0x250,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_FINAL",(undefined **)0x260,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_FINAL2",(undefined **)0x270,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_DOWN_ATTACK_U",
                 (undefined **)0x280,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_DOWN_ATTACK_D",
                 (undefined **)0x290,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_CATCH",(undefined **)0x2a0,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_CATCH_ATTACK",
                 (undefined **)0x2b0,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_THROW_F",
                 (undefined **)&DAT_000002c0,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_THROW_B",(undefined **)0x2d0,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_THROW_HI",(undefined **)0x2e0,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_THROW_LW",(undefined **)0x2f0,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_THROW_LIFT_F",
                 (undefined **)0x300,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_THROW_LIFT_B",
                 (undefined **)0x310,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_THROW_LIFT_HI",
                 (undefined **)0x320,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_THROW_LIFT_LW",
                 (undefined **)0x330,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_CLIFF_ATTACK_SLOW",
                 (undefined **)&DAT_00000340,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_CLIFF_ATTACK_QUICK",
                 (undefined **)0x350,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_APPEAL_ATTACK",
                 (undefined **)0x360,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_SLIP_STAND_ATTACK",
                 (undefined **)&DAT_00000370,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_SWORD_SWING1",
                 (undefined **)0x380,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_SWORD_SWING3",
                 (undefined **)0x390,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_SWORD_SWING4",
                 (undefined **)0x3a0,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_SWORD_SWING_DASH",
                 (undefined **)&DAT_000003b0,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_BAT_SWING1",
                 (undefined **)&DAT_000003c0,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_BAT_SWING3",
                 (undefined **)0x3d0,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_BAT_SWING4",
                 (undefined **)0x3e0,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_BAT_SWING_DASH",
                 (undefined **)0x3f0,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_HARISEN_SWING1",
                 (undefined **)&DAT_00000400,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_HARISEN_SWING3",
                 (undefined **)0x410,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_HARISEN_SWING4",
                 (undefined **)0x420,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_HARISEN_SWING_DASH",
                 (undefined **)0x430,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_STAR_ROD_SWING1",
                 (undefined **)&DAT_00000440,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_STAR_ROD_SWING3",
                 (undefined **)0x450,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_STAR_ROD_SWING4",
                 (undefined **)0x460,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_STAR_ROD_SWING_DASH",
                 (undefined **)0x470,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_LIP_STICK_SWING1",
                 (undefined **)0x480,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_LIP_STICK_SWING3",
                 (undefined **)0x490,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_LIP_STICK_SWING4",
                 (undefined **)0x4a0,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_LIP_STICK_SWING_DASH",
                 (undefined **)0x4b0,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_FIREBAR_SWING1",
                 (undefined **)0x4c0,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_FIREBAR_SWING3",
                 (undefined **)0x4d0,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_FIREBAR_SWING4",
                 (undefined **)0x4e0,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_FIREBAR_SWING_DASH",
                 (undefined **)0x4f0,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_CLUB_SWING1",
                 (undefined **)0x500,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_CLUB_SWING3",
                 (undefined **)0x510,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_CLUB_SWING4",
                 (undefined **)0x520,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_CLUB_SWING_DASH",
                 (undefined **)0x530,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_KILLSWORD_SWING1",
                 (undefined **)0x540,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_KILLSWORD_SWING3",
                 (undefined **)0x550,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_KILLSWORD_SWING4",
                 (undefined **)0x560,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_KILLSWORD_SWING_DASH",
                 (undefined **)0x570,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_DEATHSCYTHE_SWING1",
                 (undefined **)0x580,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_DEATHSCYTHE_SWING3",
                 (undefined **)0x590,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_DEATHSCYTHE_SWING4",
                 (undefined **)0x5a0,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_DEATHSCYTHE_SWING_DASH",
                 (undefined **)0x5b0,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_RAY_GUN_SHOOT",
                 (undefined **)0x5c0,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_FIRE_FLOWER_SHOOT",
                 (undefined **)0x5d0,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_CLACKER_SHOOT",
                 (undefined **)0x5e0,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_SCOPE_RAPID",
                 (undefined **)0x5f0,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_SCOPE_FIRE",
                 (undefined **)0x600,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_SCREW",(undefined **)0x610,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_HAMMER",(undefined **)0x620,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_WARP_STAR",(undefined **)0x630
                 ,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_DRAGOON",(undefined **)0x640,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_ITEM_ATTACK",
                 (undefined **)0x650,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_POKEMON_ATTACK",
                 (undefined **)0x660,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_ASSIST_ATTACK",
                 (undefined **)0x670,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_BOMB_ATTACK",
                 (undefined **)0x680,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_THROW_ITEM",
                 (undefined **)0x690,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_GENESIS_SHOOT",
                 (undefined **)0x6a0,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_DRILL_SHOOT",
                 (undefined **)0x6b0,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_MAGICPOT_SHOOT",
                 (undefined **)0x6c0,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_STEEL_DIVER_SHOOT",
                 (undefined **)0x6d0,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_KILLER",(undefined **)0x6e0,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_AIR_LASSO",(undefined **)0x6f0
                 ,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_STAFF_SHOOT",
                 (undefined **)0x700,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_REVENGESHOOTER_SHOOT",
                 (undefined **)0x710,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_ADDITIONS_ATTACK_01",
                 (undefined **)0x720,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_ADDITIONS_ATTACK_02",
                 (undefined **)0x730,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_ADDITIONS_ATTACK_03",
                 (undefined **)0x740,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_ADDITIONS_ATTACK_04",
                 (undefined **)0x750,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_ADDITIONS_ATTACK_05",
                 (undefined **)0x760,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_ADDITIONS_ATTACK_06",
                 (undefined **)0x770,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_ADDITIONS_ATTACK_07",
                 (undefined **)0x780,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_ADDITIONS_ATTACK_08",
                 (undefined **)0x790,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_ADDITIONS_ATTACK_09",
                 (undefined **)0x7a0,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_ADDITIONS_ATTACK_10",
                 (undefined **)0x7b0,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_ADDITIONS_ATTACK_11",
                 (undefined **)0x7c0,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_ADDITIONS_ATTACK_12",
                 (undefined **)0x7d0,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_ADDITIONS_ATTACK_13",
                 (undefined **)0x7e0,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_ADDITIONS_ATTACK_14",
                 (undefined **)0x7f0,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_ADDITIONS_ATTACK_15",
                 (undefined **)0x800,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_ADDITIONS_ATTACK_16",
                 (undefined **)0x810,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_NONE",(undefined **)0x0,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ACTION_TRIGGER_OFF",(undefined **)0x0,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_ACTION_TRIGGER_ON",
                 (undefined **)&DAT_00001000,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_DIST_MEASURE_SWIM",(undefined **)0x2000,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_SHOOT",(undefined **)0x10000,in_x3,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_HAJIKI",(undefined **)0x20000,in_x3,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_THROW",(undefined **)0x40000,in_x3,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_MASK_FLAG_NO_FINAL",(undefined **)0x80000,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  if ((local_80 != 0) && (local_78 != 0)) {
    FUN_71038f55d0(local_80,local_70);
  }
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_VISUAL_SCENE_MAX_FIGHTER_WORK",
                 (undefined **)&DAT_00000010,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_VISUAL_SCENE_MAX_WEAPON_WORK",
                 (undefined **)&DAT_00000040,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_VISUAL_SCENE_MAX_ENEMY_WORK",(undefined **)&DAT_00000040
                 ,in_x3,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = -3;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_VISUAL_SCENE_MODULE_START_INIT",(undefined **)0x0,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_VISUAL_SCENE_MODULE_START_EXIT",(undefined **)0x1,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_VISUAL_SCENE_MODULE_READY_INIT",(undefined **)0x2,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_VISUAL_SCENE_MODULE_READY_EXEC",(undefined **)0x3,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_VISUAL_SCENE_MODULE_READY_EXIT_PRE",
                 (undefined **)&DAT_00000004,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_VISUAL_SCENE_MODULE_READY_EXIT",(undefined **)0x5,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_VISUAL_SCENE_MODULE_SCENE_01_INIT",(undefined **)0x6,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_VISUAL_SCENE_MODULE_SCENE_01_EXEC_STATUS",
                 (undefined **)&DAT_00000007,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_VISUAL_SCENE_MODULE_SCENE_01_EXIT",
                 (undefined **)&DAT_00000008,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_VISUAL_SCENE_MODULE_SCENE_02_INIT",
                 (undefined **)&DAT_00000009,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_VISUAL_SCENE_MODULE_SCENE_02_EXIT",(undefined **)0xa,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_VISUAL_SCENE_MODULE_SCENE_03_INIT",(undefined **)0xb,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_VISUAL_SCENE_MODULE_SCENE_03_EXIT",
                 (undefined **)&DAT_0000000c,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_VISUAL_SCENE_MODULE_SCENE_04_INIT",
                 (undefined **)&DAT_0000000d,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_VISUAL_SCENE_MODULE_SCENE_04_EXEC_STATUS",
                 (undefined **)&DAT_0000000e,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_VISUAL_SCENE_MODULE_SCENE_04_EXIT",
                 (undefined **)&DAT_0000000f,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_VISUAL_SCENE_MODULE_SCENE_05_INIT",
                 (undefined **)&DAT_00000010,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_VISUAL_SCENE_MODULE_SCENE_05_EXEC_FIX_POS",
                 (undefined **)&DAT_00000011,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_VISUAL_SCENE_MODULE_SCENE_05_EXIT",
                 (undefined **)&DAT_00000012,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_VISUAL_SCENE_MODULE_END_INIT",
                 (undefined **)&DAT_00000013,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_VISUAL_SCENE_MODULE_END_EXEC",
                 (undefined **)&DAT_00000014,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_VISUAL_SCENE_MODULE_END_EXIT",
                 (undefined **)&DAT_00000015,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_VISUAL_SCENE_MODULE_NUM",(undefined **)0x16,in_x3,in_x4,
                 in_x5,in_x6,in_x7);
  if ((local_80 != 0) && (local_78 != 0)) {
    FUN_71038f55d0(local_80,local_70);
  }
  local_70 = -3;
  local_80 = 0;
  local_78 = 0;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_VISUAL_SCENE_LINK_NO_FINAL_TARGET_START",
                 (undefined **)0xb,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_VISUAL_SCENE_LINK_NO_FINAL_TARGET_0",(undefined **)0xb,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_VISUAL_SCENE_LINK_NO_FINAL_TARGET_1",
                 (undefined **)&DAT_0000000c,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_VISUAL_SCENE_LINK_NO_FINAL_TARGET_2",
                 (undefined **)&DAT_0000000d,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_VISUAL_SCENE_LINK_NO_FINAL_TARGET_3",
                 (undefined **)&DAT_0000000e,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_VISUAL_SCENE_LINK_NO_FINAL_TARGET_4",
                 (undefined **)&DAT_0000000f,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_VISUAL_SCENE_LINK_NO_FINAL_TARGET_5",
                 (undefined **)&DAT_00000010,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_VISUAL_SCENE_LINK_NO_FINAL_TARGET_6",
                 (undefined **)&DAT_00000011,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_VISUAL_SCENE_LINK_NO_FINAL_TARGET_7",
                 (undefined **)&DAT_00000012,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_VISUAL_SCENE_LINK_NO_FINAL_TARGET_8",
                 (undefined **)&DAT_00000013,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_VISUAL_SCENE_LINK_NO_FINAL_TARGET_9",
                 (undefined **)&DAT_00000014,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_VISUAL_SCENE_LINK_NO_FINAL_TARGET_10",
                 (undefined **)&DAT_00000015,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_VISUAL_SCENE_LINK_NO_FINAL_TARGET_11",(undefined **)0x16
                 ,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_VISUAL_SCENE_LINK_NO_FINAL_TARGET_12",(undefined **)0x17
                 ,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_VISUAL_SCENE_LINK_NO_FINAL_TARGET_13",
                 (undefined **)&SUB_00000018,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_VISUAL_SCENE_LINK_NO_FINAL_TARGET_14",
                 (undefined **)&DAT_00000019,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_VISUAL_SCENE_LINK_NO_FINAL_TARGET_15",
                 (undefined **)&DAT_0000001a,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_VISUAL_SCENE_LINK_NO_FINAL_TARGET_END",
                 (undefined **)&DAT_0000001b,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_VISUAL_SCENE_LINK_NO_TERM",(undefined **)&DAT_0000001c,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  if ((local_80 != 0) && (local_78 != 0)) {
    FUN_71038f55d0(local_80,local_70);
  }
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_ATTACK_KIND_VISUAL_SCENE",(undefined **)0x0,in_x3,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_ATTACK_KIND_VISUAL_SCENE_TERM",(undefined **)0x1,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = -3;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_ATTACK_ABSOLUTE_KIND_VISUAL_SCENE",(undefined **)0x0,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  ppppbVar1 = (byte ****)0xfffffffd;
  FUN_7103728630(&local_80,0,(undefined **)"FighterPowerUpKind",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)&DAT_710437f73b,(undefined **)0x0,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_71037289c0(&local_80,(uint *)&DAT_71042c83df,(undefined **)0x1,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_71037289c0(&local_80,(uint *)"ATTACK",(undefined **)0x2,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"SPECIAL",(undefined **)0x3,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)&DAT_71042b7753,(undefined **)&DAT_00000004,ppppbVar1,in_x4,in_x5
                 ,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"DEFENSE",(undefined **)0x5,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)&DAT_710427302d,(undefined **)0x6,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_71037289c0(&local_80,(uint *)"RANDOM",(undefined **)&DAT_00000007,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_71037289c0(&local_80,(uint *)&DAT_71042a1e2d,(undefined **)&DAT_00000008,ppppbVar1,in_x4,in_x5
                 ,in_x6,in_x7);
  if ((local_80 != 0) && (local_78 != 0)) {
    FUN_71038f55d0(local_80,local_70);
  }
  local_70 = -3;
  local_80 = 0;
  local_78 = 0;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_POWER_UP_ATTACK_KIND_ATTACK_1",(undefined **)0x0,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_POWER_UP_ATTACK_KIND_ATTACK_3",(undefined **)0x1,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_POWER_UP_ATTACK_KIND_ATTACK_DASH",(undefined **)0x2,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_POWER_UP_ATTACK_KIND_ATTACK_AIR",(undefined **)0x3,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_POWER_UP_ATTACK_KIND_ATTACK_CLIFF",
                 (undefined **)&DAT_00000004,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_POWER_UP_ATTACK_KIND_ATTACK_DOWN_STAND",
                 (undefined **)0x5,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_POWER_UP_ATTACK_KIND_ATTACK_4",(undefined **)0x6,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_POWER_UP_ATTACK_KIND_SPECIAL_N",
                 (undefined **)&DAT_00000007,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_POWER_UP_ATTACK_KIND_SPECIAL_HI",
                 (undefined **)&DAT_00000008,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_POWER_UP_ATTACK_KIND_SPECIAL_S",
                 (undefined **)&DAT_00000009,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_POWER_UP_ATTACK_KIND_SPECIAL_LW",(undefined **)0xa,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_POWER_UP_ATTACK_KIND_ITEM",(undefined **)0xb,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_POWER_UP_ATTACK_KIND_CATCH",(undefined **)&DAT_0000000c,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_POWER_UP_ATTACK_KIND_THROW",(undefined **)&DAT_0000000d,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_POWER_UP_ATTACK_KIND_ITEM_SHOOT",
                 (undefined **)&DAT_0000000e,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_POWER_UP_ATTACK_KIND_ITEM_DASH",
                 (undefined **)&DAT_0000000f,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_POWER_UP_ATTACK_KIND_FINAL",(undefined **)&DAT_00000010,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_POWER_UP_ATTACK_KIND_TERM",(undefined **)&DAT_00000011,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  if ((local_80 != 0) && (local_78 != 0)) {
    FUN_71038f55d0(local_80,local_70);
  }
  local_80 = 0;
  local_78 = 0;
  local_70 = -3;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_POWER_UP_ATTACK_BIT_ATTACK_1",(undefined **)0x1,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_POWER_UP_ATTACK_BIT_ATTACK_3",(undefined **)0x2,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_POWER_UP_ATTACK_BIT_ATTACK_DASH",
                 (undefined **)&DAT_00000004,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_POWER_UP_ATTACK_BIT_ATTACK_AIR",
                 (undefined **)&DAT_00000008,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_POWER_UP_ATTACK_BIT_ATTACK_CLIFF",
                 (undefined **)&DAT_00000010,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_POWER_UP_ATTACK_BIT_ATTACK_DOWN_STAND",
                 (undefined **)&SUB_00000020,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_POWER_UP_ATTACK_BIT_ATTACK_4",
                 (undefined **)&DAT_00000040,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_POWER_UP_ATTACK_BIT_SPECIAL_N",
                 (undefined **)&DAT_00000080,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_POWER_UP_ATTACK_BIT_SPECIAL_HI",
                 (undefined **)&DAT_00000100,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_POWER_UP_ATTACK_BIT_SPECIAL_S",
                 (undefined **)&DAT_00000200,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_POWER_UP_ATTACK_BIT_SPECIAL_LW",
                 (undefined **)&DAT_00000400,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_POWER_UP_ATTACK_BIT_ITEM",(undefined **)0x800,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_POWER_UP_ATTACK_BIT_CATCH",(undefined **)&DAT_00001000,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_POWER_UP_ATTACK_BIT_THROW",(undefined **)0x2000,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_POWER_UP_ATTACK_BIT_ITEM_SHOOT",(undefined **)0x4000,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_POWER_UP_ATTACK_BIT_ITEM_DASH",(undefined **)0x8000,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_POWER_UP_ATTACK_BIT_FINAL",(undefined **)0x10000,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_POWER_UP_ATTACK_BIT_RANDOM",(undefined **)0x1ffff,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_POWER_UP_ATTACK_BIT_TERM",(undefined **)0x20000,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  if ((local_80 != 0) && (local_78 != 0)) {
    FUN_71038f55d0(local_80,local_70);
  }
  ppppbVar1 = (byte ****)0xfffffffd;
  FUN_7103728630(&local_80,0,(undefined **)"FighterPowerUpTempKind",0xfffffffd,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_71037289c0(&local_80,(uint *)&DAT_71042b7753,(undefined **)0x0,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_71037289c0(&local_80,(uint *)"EVENT",(undefined **)0x1,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)&DAT_710427302d,(undefined **)0x2,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  if ((local_80 != 0) && (local_78 != 0)) {
    FUN_71038f55d0(local_80,local_70);
  }
  ppppbVar1 = (byte ****)0xfffffffd;
  FUN_7103728630(&local_80,0,(undefined **)"FighterPowerUpTempKindSpirits",0xfffffffd,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"EVENT",(undefined **)0x0,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)&DAT_710427302d,(undefined **)0x1,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  if ((local_80 != 0) && (local_78 != 0)) {
    FUN_71038f55d0(local_80,local_70);
  }
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_POWER_UP_KIND_TERM",(undefined **)0x6,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_POWER_UP_KIND_SPIRITS_TERM",(undefined **)0x1,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  local_70 = 0xfffffffd;
  local_80 = 0;
  local_78 = 0;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_COMBO_KIND_NONE",(undefined **)&DAT_ffffffff,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_COMBO_KIND_S1",(undefined **)0x0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_COMBO_KIND_S3",(undefined **)0x1,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_COMBO_KIND_S4",(undefined **)0x2,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_COMBO_KIND_AIR_F",(undefined **)0x3,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_COMBO_KIND_S3_COMBINATION",(undefined **)&DAT_00000004,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_COMBO_KIND_AIR_F_COMBINATION",(undefined **)0x5,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_COMBO_KIND_AIR_N_COMBINATION",(undefined **)0x6,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_COMBO_KIND_TERM",(undefined **)&DAT_00000007,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_COMBO_TYPE_NONE",(undefined **)0x0,ppppbVar1,in_x4,in_x5
                 ,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_COMBO_TYPE_HIT",(undefined **)0x1,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_COMBO_TYPE_SUCCEED",(undefined **)0x2,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_COMBO_TYPE_UNIQ_DANCE",(undefined **)0x3,ppppbVar1,in_x4
                 ,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_COMBO_TYPE_TERM",(undefined **)&DAT_00000004,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"BODY_TYPE_MOTION_INVALID",(undefined **)0x0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"BODY_TYPE_MOTION_GIRL",(undefined **)0x1,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"BODY_TYPE_MOTION_DX",(undefined **)0x2,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"BODY_TYPE_MOTION_BIG",(undefined **)0x3,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"BODY_TYPE_MOTION_SMALL",(undefined **)&DAT_00000004,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"BODY_TYPE_MOTION_LAY_DOWN",(undefined **)0x5,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = -3;
  FUN_71037289c0(&local_80,(uint *)"ENERGY_CONTROLLER_RESET_TYPE_NONE",(undefined **)&DAT_ffffffff,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"ENERGY_CONTROLLER_RESET_TYPE_FALL_ADJUST",(undefined **)0x0,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"ENERGY_CONTROLLER_RESET_TYPE_FALL_ADJUST_NO_CAP",
                 (undefined **)0x1,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"ENERGY_CONTROLLER_RESET_TYPE_STOP_CEIL",(undefined **)0x2,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"ENERGY_CONTROLLER_RESET_TYPE_WALL_JUMP",(undefined **)0x3,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"ENERGY_CONTROLLER_RESET_TYPE_FLY_ADJUST",
                 (undefined **)&DAT_00000004,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"ENERGY_CONTROLLER_RESET_TYPE_DASH",(undefined **)0x5,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"ENERGY_CONTROLLER_RESET_TYPE_SHOOT_DASH",(undefined **)0x6,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"ENERGY_CONTROLLER_RESET_TYPE_SHOOT_BACK_DASH",
                 (undefined **)&DAT_00000007,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"ENERGY_CONTROLLER_RESET_TYPE_TURN_RUN",
                 (undefined **)&DAT_00000008,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"ENERGY_CONTROLLER_RESET_TYPE_REVOLVE_SLASH_AIR",
                 (undefined **)&DAT_00000009,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"ENERGY_CONTROLLER_RESET_TYPE_TURN",(undefined **)0xa,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"ENERGY_CONTROLLER_RESET_TYPE_FREE",(undefined **)0xb,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"ENERGY_CONTROLLER_RESET_TYPE_FREE_TEST",
                 (undefined **)&DAT_0000000c,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"ENERGY_CONTROLLER_RESET_TYPE_ITEM_LIFT",
                 (undefined **)&DAT_0000000d,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"ENERGY_CONTROLLER_RESET_TYPE_SWIM_RISE",
                 (undefined **)&DAT_0000000e,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"ENERGY_CONTROLLER_RESET_TYPE_SWIM",(undefined **)&DAT_0000000f,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"ENERGY_CONTROLLER_RESET_TYPE_SWIM_DROWN",
                 (undefined **)&DAT_00000010,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"ENERGY_CONTROLLER_RESET_TYPE_MOVE_GROUND",
                 (undefined **)&DAT_00000011,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"ENERGY_CONTROLLER_RESET_TYPE_MOVE_AIR",
                 (undefined **)&DAT_00000012,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"ENERGY_CONTROLLER_RESET_TYPE_TURN_NO_STOP",
                 (undefined **)&DAT_00000013,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"ENERGY_CONTROLLER_RESET_TYPE_TURN_NO_STOP_AIR",
                 (undefined **)&DAT_00000014,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"ENERGY_CONTROLLER_RESET_TYPE_LADDER",(undefined **)&DAT_00000015
                 ,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"ENERGY_CONTROLLER_RESET_TYPE_DASH_BACK",(undefined **)0x16,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"ENERGY_CONTROLLER_RESET_TYPE_NUM",(undefined **)0x17,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  if ((local_80 != 0) && (local_78 != 0)) {
    FUN_71038f55d0(local_80,local_70);
  }
  local_70 = 0xfffffffd;
  local_80 = 0;
  local_78 = 0;
  FUN_71037289c0(&local_80,(uint *)"ENERGY_GRAVITY_RESET_TYPE_NONE",(undefined **)&DAT_ffffffff,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"ENERGY_GRAVITY_RESET_TYPE_GRAVITY",(undefined **)0x0,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"ENERGY_GRAVITY_RESET_TYPE_BUOYANCY",(undefined **)0x1,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"ENERGY_GRAVITY_RESET_TYPE_SWIM_RIZE",(undefined **)0x2,ppppbVar1
                 ,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"ENERGY_GRAVITY_RESET_TYPE_SWIM_JUMP_CHARGE",(undefined **)0x3,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"ENERGY_GRAVITY_RESET_TYPE_SWIM_DROWN_OUT",
                 (undefined **)&DAT_00000004,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"ENERGY_GRAVITY_RESET_TYPE_SUPER_JUMP_PUNCH",(undefined **)0x5,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"ENERGY_GRAVITY_RESET_TYPE_ICE",(undefined **)0x6,ppppbVar1,in_x4
                 ,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"ENERGY_GRAVITY_RESET_TYPE_GLIDE_START",
                 (undefined **)&DAT_00000007,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"ENERGY_GRAVITY_RESET_TYPE_PIT_FALL",(undefined **)&DAT_00000008,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"ENERGY_GRAVITY_RESET_TYPE_JUMP_INITIAL",
                 (undefined **)&DAT_00000009,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"ENERGY_GRAVITY_RESET_TYPE_NUM",(undefined **)0xa,ppppbVar1,in_x4
                 ,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"ENERGY_MOTION_RESET_TYPE_NONE",(undefined **)&DAT_ffffffff,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"ENERGY_MOTION_RESET_TYPE_GROUND_TRANS_LOOP",(undefined **)0x0,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"ENERGY_MOTION_RESET_TYPE_GROUND_TRANS_LOOP_GEKIKARA",
                 (undefined **)0x1,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"ENERGY_MOTION_RESET_TYPE_GROUND_TRANS",(undefined **)0x2,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"ENERGY_MOTION_RESET_TYPE_GROUND_TRANS_IGNORE_NORMAL",
                 (undefined **)0x3,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"ENERGY_MOTION_RESET_TYPE_AIR_TRANS",(undefined **)&DAT_00000004,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"ENERGY_MOTION_RESET_TYPE_AIR_TRANS_ANGLE",(undefined **)0x5,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"ENERGY_MOTION_RESET_TYPE_AIR_TRANS_Y",(undefined **)0x6,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"ENERGY_MOTION_RESET_TYPE_AIR_TRANS_ANGLE_SUPER_JUMP_PUNCH",
                 (undefined **)&DAT_00000007,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"ENERGY_MOTION_RESET_TYPE_AIR_TRANS_2ND",
                 (undefined **)&DAT_00000008,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"ENERGY_MOTION_RESET_TYPE_CLIFF_TRANS_INTP",
                 (undefined **)&DAT_00000009,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"ENERGY_MOTION_RESET_TYPE_CLIFF_TRANS",(undefined **)0xa,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"ENERGY_MOTION_RESET_TYPE_CLIFF_TRANS_GROUND",(undefined **)0xb,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"ENERGY_MOTION_RESET_TYPE_LADDER_MOVE",
                 (undefined **)&DAT_0000000c,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"ENERGY_MOTION_RESET_TYPE_LADDER_TRANS",
                 (undefined **)&DAT_0000000d,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"ENERGY_MOTION_RESET_TYPE_NUM",(undefined **)&DAT_0000000e,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  if ((local_80 != 0) && (local_78 != 0)) {
    FUN_71038f55d0(local_80,-3);
  }
  local_80 = 0;
  local_78 = 0;
  local_70 = -3;
  FUN_71037289c0(&local_80,(uint *)"ENERGY_STOP_RESET_TYPE_NONE",(undefined **)&DAT_ffffffff,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"ENERGY_STOP_RESET_TYPE_GROUND",(undefined **)0x0,ppppbVar1,in_x4
                 ,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"ENERGY_STOP_RESET_TYPE_DAMAGE_GROUND",(undefined **)0x1,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"ENERGY_STOP_RESET_TYPE_DAMAGE_AIR",(undefined **)0x2,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"ENERGY_STOP_RESET_TYPE_DAMAGE_AIR_ICE",(undefined **)0x3,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"ENERGY_STOP_RESET_TYPE_DAMAGE_OTHER",(undefined **)&DAT_00000004
                 ,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"ENERGY_STOP_RESET_TYPE_DAMAGE_KNOCK_BACK",(undefined **)0x5,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"ENERGY_STOP_RESET_TYPE_GLIDE_LANDING",(undefined **)0x6,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"ENERGY_STOP_RESET_TYPE_AIR",(undefined **)&DAT_00000007,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"ENERGY_STOP_RESET_TYPE_AIR_X_NORMAL_MAX",
                 (undefined **)&DAT_00000008,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"ENERGY_STOP_RESET_TYPE_AIR_ESCAPE",(undefined **)&DAT_00000009,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"ENERGY_STOP_RESET_TYPE_AIR_BRAKE",(undefined **)0xa,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"ENERGY_STOP_RESET_TYPE_AIR_BRAKE_ALWAYS",(undefined **)0xb,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"ENERGY_STOP_RESET_TYPE_GUARD_DAMAGE",(undefined **)&DAT_0000000c
                 ,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"ENERGY_STOP_RESET_TYPE_CAPTURE",(undefined **)&DAT_0000000d,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"ENERGY_STOP_RESET_TYPE_CATCH_CUT",(undefined **)&DAT_0000000e,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"ENERGY_STOP_RESET_TYPE_ITEM_SWING_DASH",
                 (undefined **)&DAT_0000000f,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"ENERGY_STOP_RESET_TYPE_ITEM_DASH_THROW",
                 (undefined **)&DAT_00000010,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"ENERGY_STOP_RESET_TYPE_SWIM_BRAKE",(undefined **)&DAT_00000011,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"ENERGY_STOP_RESET_TYPE_RUN",(undefined **)&DAT_00000012,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"ENERGY_STOP_RESET_TYPE_RUN_BRAKE",(undefined **)&DAT_00000013,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"ENERGY_STOP_RESET_TYPE_GLIDE_START",(undefined **)&DAT_00000014,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"ENERGY_STOP_RESET_TYPE_CATCH_DASH",(undefined **)&DAT_00000015,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"ENERGY_STOP_RESET_TYPE_SHIELD_REBOUND",(undefined **)0x16,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"ENERGY_STOP_RESET_TYPE_FREE",(undefined **)0x17,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"ENERGY_STOP_RESET_TYPE_CAPTURE_BEETLE",
                 (undefined **)&SUB_00000018,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"ENERGY_STOP_RESET_TYPE_AIR_LASSO_HANG",
                 (undefined **)&DAT_00000019,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"ENERGY_STOP_RESET_TYPE_AIR_LASSO_REWIND",
                 (undefined **)&DAT_0000001a,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"ENERGY_STOP_RESET_TYPE_ESCAPE_AIR_SLIDE",
                 (undefined **)&DAT_0000001b,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"ENERGY_STOP_RESET_TYPE_DAMAGE_GROUND_ORBIT",
                 (undefined **)&DAT_0000001c,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"ENERGY_STOP_RESET_TYPE_DAMAGE_AIR_ORBIT",
                 (undefined **)&DAT_0000001d,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"ENERGY_STOP_RESET_TYPE_NUM",(undefined **)&DAT_0000001e,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  if ((local_80 != 0) && (local_78 != 0)) {
    FUN_71038f55d0(local_80,local_70);
  }
  local_70 = 0xfffffffd;
  local_80 = 0;
  local_78 = 0;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_SHIELD_INSTANCE_WORK_ID_INT_START",
                 (undefined **)0x100000bd,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_SHIELD_INSTANCE_WORK_ID_INT_WAIT_OPPONENT_OBJECT_ID",
                 (undefined **)0x100000be,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_SHIELD_INSTANCE_WORK_ID_INT_TERM",
                 (undefined **)0x100000bf,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_SHIELD_INSTANCE_WORK_ID_FLOAT_START",
                 (undefined **)&DAT_0000004c,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_SHIELD_INSTANCE_WORK_ID_FLOAT_WAIT_SHIELD_DAMAGE",
                 (undefined **)0x4d,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,
                 (uint *)"FIGHTER_SHIELD_INSTANCE_WORK_ID_FLOAT_WAIT_SHIELD_HIT_STOP_FRAME",
                 (undefined **)&DAT_0000004e,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_SHIELD_INSTANCE_WORK_ID_FLOAT_WAIT_SHIELD_LR",
                 (undefined **)0x4f,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_SHIELD_INSTANCE_WORK_ID_FLOAT_DELAY_MUL",
                 (undefined **)&DAT_00000050,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_SHIELD_INSTANCE_WORK_ID_FLOAT_TERM",
                 (undefined **)&DAT_00000051,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_70 = 0xfffffffd;
  local_80 = 0;
  local_78 = 0;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_SHIELD_INSTANCE_WORK_ID_FLAG_START",
                 (undefined **)0x200000e0,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_SHIELD_INSTANCE_WORK_ID_FLAG_SHIELD",
                 (undefined **)0x200000e1,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_SHIELD_INSTANCE_WORK_ID_FLAG_WAIT_SHIELD",
                 (undefined **)0x200000e2,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_SHIELD_INSTANCE_WORK_ID_FLAG_IS_SHIELD_GUARD_REQUESTED",
                 (undefined **)0x200000e3,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_SHIELD_INSTANCE_WORK_ID_FLAG_TERM",
                 (undefined **)0x200000e4,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_SHIELD_SHIELD_GROUP_KIND_START",(undefined **)0x0,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_SHIELD_SHIELD_GROUP_KIND_WAIT",(undefined **)0x1,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_SHIELD_SHIELD_GROUP_KIND_TERM",(undefined **)0x2,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = -3;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_AIR_LASSO_FLAG_START",(undefined **)0x2100000b,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_AIR_LASSO_FLAG_NOT_ARM",(undefined **)0x2100000c,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_AIR_LASSO_FLAG_CHECK",(undefined **)0x2100000d,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_AIR_LASSO_FLAG_IS_CHECK",(undefined **)0x2100000e
                 ,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_AIR_LASSO_FLAG_LANDING",(undefined **)0x2100000f,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_AIR_LASSO_FLAG_MAP_COLL_OFFSET",
                 (undefined **)0x21000010,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_AIR_LASSO_FLAG_HANG_IMMIDIATE",
                 (undefined **)0x21000011,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_AIR_LASSO_FLAG_TERM",(undefined **)0x21000012,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_AIR_LASSO_WORK_FLOAT_START",
                 (undefined **)0x1000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_AIR_LASSO_WORK_FLOAT_MAP_COLL_OFFSET_X",
                 (undefined **)0x1000007,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_AIR_LASSO_WORK_FLOAT_MAP_COLL_OFFSET_Y",
                 (undefined **)0x1000008,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_AIR_LASSO_WORK_FLOAT_MAP_COLL_OFFSET_Z",
                 (undefined **)0x1000009,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_AIR_LASSO_WORK_FLOAT_TERM",
                 (undefined **)0x100000a,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_AIR_LASSO_WORK_INT_START",
                 (undefined **)0x11000004,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_AIR_LASSO_WORK_INT_ARTICLE_ID",
                 (undefined **)0x11000005,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_AIR_LASSO_WORK_INT_ARTICLE2_ID",
                 (undefined **)0x11000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_AIR_LASSO_WORK_INT_FRAME",
                 (undefined **)0x11000007,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_AIR_LASSO_WORK_INT_TERM",(undefined **)0x11000008
                 ,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  if ((local_80 != 0) && (local_78 != 0)) {
    FUN_71038f55d0(local_80,local_70);
  }
  local_70 = -3;
  local_80 = 0;
  local_78 = 0;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_AIR_LASSO_REACH_FLAG_START",
                 (undefined **)0x21000011,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_AIR_LASSO_REACH_FLAG_TOUCH",
                 (undefined **)0x21000012,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_AIR_LASSO_REACH_FLAG_RAY_CHECK",
                 (undefined **)0x21000013,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_AIR_LASSO_REACH_FLAG_TERM",
                 (undefined **)0x21000014,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_AIR_LASSO_REACH_WORK_FLOAT_START",
                 (undefined **)0x1000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_AIR_LASSO_REACH_WORK_FLOAT_MAP_COLL_OFFSET_X",
                 (undefined **)0x1000007,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_AIR_LASSO_REACH_WORK_FLOAT_MAP_COLL_OFFSET_Y",
                 (undefined **)0x1000008,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_AIR_LASSO_REACH_WORK_FLOAT_MAP_COLL_OFFSET_Z",
                 (undefined **)0x1000009,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_AIR_LASSO_REACH_WORK_FLOAT_CLIFF_POS_X",
                 (undefined **)0x100000a,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_AIR_LASSO_REACH_WORK_FLOAT_CLIFF_POS_Y",
                 (undefined **)0x100000b,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_AIR_LASSO_REACH_WORK_FLOAT_TERM",
                 (undefined **)0x100000c,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_AIR_LASSO_REACH_WORK_INT_START",
                 (undefined **)0x11000004,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_AIR_LASSO_REACH_WORK_INT_ARTICLE_ID",
                 (undefined **)0x11000005,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_AIR_LASSO_REACH_WORK_INT_ARTICLE2_ID",
                 (undefined **)0x11000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_AIR_LASSO_REACH_WORK_INT_FRAME",
                 (undefined **)0x11000007,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_AIR_LASSO_REACH_WORK_INT_ARTICLE_STATUS",
                 (undefined **)0x11000008,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_AIR_LASSO_REACH_WORK_INT_MOTION_KIND_FAILURE",
                 (undefined **)0x11000009,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_AIR_LASSO_REACH_WORK_INT_TERM",
                 (undefined **)0x1100000a,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  if ((local_80 != 0) && (local_78 != 0)) {
    FUN_71038f55d0(local_80,local_70);
  }
  local_70 = 0xfffffffd;
  local_80 = 0;
  local_78 = 0;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_AIR_LASSO_REACH_FLAG",
                 (undefined **)0x30000,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_AIR_LASSO_REACH_INT",
                 (undefined **)&DAT_000000e0,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_AIR_LASSO_REACH_FLOAT",
                 (undefined **)0x380,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_70 = -3;
  local_80 = 0;
  local_78 = 0;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_AIR_LASSO_HANG_FLAG_START",
                 (undefined **)0x2100000b,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_AIR_LASSO_HANG_FLAG_NOT_ARM",
                 (undefined **)0x2100000c,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_AIR_LASSO_HANG_FLAG_TOUCH",
                 (undefined **)0x21000012,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_AIR_LASSO_HANG_FLAG_ACTIVE_LOOK_AT",
                 (undefined **)0x21000013,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_AIR_LASSO_HANG_FLAG_ACTIVE_LOOK_AT_L",
                 (undefined **)0x21000014,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_AIR_LASSO_HANG_FLAG_BRAKE",
                 (undefined **)0x21000015,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_AIR_LASSO_HANG_FLAG_FALL_ENABLE",
                 (undefined **)0x21000016,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_AIR_LASSO_HANG_FLAG_EXTEND_ARM",
                 (undefined **)0x21000017,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_AIR_LASSO_HANG_FLAG_LANDING",
                 (undefined **)0x21000018,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_AIR_LASSO_HANG_FLAG_CATCH_SAME_CLIFF",
                 (undefined **)0x21000019,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_AIR_LASSO_HANG_WORK_FLOAT_START",
                 (undefined **)0x1000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_AIR_LASSO_HANG_WORK_FLOAT_CLIFF_POS_X",
                 (undefined **)0x100000a,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_AIR_LASSO_HANG_WORK_FLOAT_CLIFF_POS_Y",
                 (undefined **)0x100000b,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_AIR_LASSO_HANG_WORK_FLOAT_BODY_ANGLE",
                 (undefined **)0x100000c,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_AIR_LASSO_HANG_WORK_FLOAT_UP_Z",
                 (undefined **)0x100000d,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_AIR_LASSO_HANG_WORK_FLOAT_SPEED_X",
                 (undefined **)0x100000e,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_AIR_LASSO_HANG_WORK_FLOAT_SPEED_Y",
                 (undefined **)&DAT_0100000f,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_AIR_LASSO_HANG_WORK_FLOAT_BODY_OFFSET",
                 (undefined **)0x1000010,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_AIR_LASSO_HANG_WORK_FLOAT_ROT_X_PREV",
                 (undefined **)0x1000011,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_AIR_LASSO_HANG_WORK_FLOAT_HIP_X_PREV",
                 (undefined **)0x1000012,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_AIR_LASSO_HANG_WORK_INT_START",
                 (undefined **)0x11000004,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_AIR_LASSO_HANG_WORK_INT_ARTICLE_ID",
                 (undefined **)0x11000005,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_AIR_LASSO_HANG_WORK_INT_ARTICLE2_ID",
                 (undefined **)0x11000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_AIR_LASSO_HANG_WORK_INT_FRAME",
                 (undefined **)0x11000007,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_AIR_LASSO_HANG_WORK_INT_ARTICLE_TIP_NODE_ID",
                 (undefined **)0x11000008,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_AIR_LASSO_HANG_WORK_INT_BODY_FLIP",
                 (undefined **)0x11000009,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_AIR_LASSO_HANG_WORK_INT_BODY_ANGLE_INTP",
                 (undefined **)0x1100000a,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_AIR_LASSO_HANG_WORK_INT_BODY_ANGLE_INTP_MAX",
                 (undefined **)0x1100000b,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_AIR_LASSO_HANG_WORK_INT_CHECK_CLIFF_JOINT_ID",
                 (undefined **)0x1100000c,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_AIR_LASSO_HANG_TERM",(undefined **)0x1100000d,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  if ((local_80 != 0) && (local_78 != 0)) {
    FUN_71038f55d0(local_80,local_70);
  }
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_AIR_LASSO_HANG_FLAG",
                 (undefined **)0x0,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_AIR_LASSO_HANG_INT",
                 (undefined **)&DAT_000000e0,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_AIR_LASSO_HANG_FLOAT",
                 (undefined **)&DAT_00000c00,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_70 = -3;
  local_80 = 0;
  local_78 = 0;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_AIR_LASSO_REWIND_FLAG_START",
                 (undefined **)0x2100000b,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_AIR_LASSO_REWIND_FLAG_NOT_ARM",
                 (undefined **)0x2100000c,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_AIR_LASSO_REWIND_FLAG_TOUCH",
                 (undefined **)0x21000012,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_AIR_LASSO_REWIND_FLAG_ACTIVE_LOOK_AT",
                 (undefined **)0x21000013,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_AIR_LASSO_REWIND_FLAG_BRAKE",
                 (undefined **)0x21000015,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_AIR_LASSO_REWIND_FLAG_TURN_LSHOULDER",
                 (undefined **)0x21000016,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_AIR_LASSO_REWIND_WORK_FLOAT_START",
                 (undefined **)0x1000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_AIR_LASSO_REWIND_WORK_FLOAT_JUMP_SPEED_Y_MUL",
                 (undefined **)0x1000007,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_AIR_LASSO_REWIND_WORK_FLOAT_BODY_ANGLE",
                 (undefined **)0x100000c,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_AIR_LASSO_REWIND_WORK_FLOAT_UP_Z",
                 (undefined **)0x100000d,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_AIR_LASSO_REWIND_WORK_INT_START",
                 (undefined **)0x11000004,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_AIR_LASSO_REWIND_WORK_INT_ARTICLE_ID",
                 (undefined **)0x11000005,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_AIR_LASSO_REWIND_WORK_INT_ARTICLE2_ID",
                 (undefined **)0x11000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_AIR_LASSO_REWIND_WORK_INT_ARTICLE_TIP_NODE_ID",
                 (undefined **)0x11000008,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_AIR_LASSO_REWIND_WORK_INT_BODY_FLIP",
                 (undefined **)0x11000009,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_AIR_LASSO_REWIND_WORK_INT_BODY_ANGLE_INTP",
                 (undefined **)0x1100000a,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_AIR_LASSO_REWIND_WORK_INT_BODY_ANGLE_INTP_MAX",
                 (undefined **)0x1100000b,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_AIR_LASSO_REWIND_WORK_INT_FRAME",
                 (undefined **)0x1100000c,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_AIR_LASSO_REWIND_WORK_INT_MOTION_START_FRAME",
                 (undefined **)0x1100000d,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_AIR_LASSO_REWIND_TERM",(undefined **)0x1100000e,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  if ((local_80 != 0) && (local_78 != 0)) {
    FUN_71038f55d0(local_80,local_70);
  }
  local_70 = 0xfffffffd;
  local_80 = 0;
  local_78 = 0;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_AIR_LASSO_REWIND_FLAG",
                 (undefined **)0x281000,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_AIR_LASSO_REWIND_INT",
                 (undefined **)0x360,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_AIR_LASSO_REWIND_FLOAT",
                 (undefined **)0x3000,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_70 = 0xfffffffd;
  local_80 = 0;
  local_78 = 0;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_AIR_LASSO_FAILURE_WORK_FLAG_START",
                 (undefined **)0x21000011,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_AIR_LASSO_FAILURE_WORK_FLAG_CHANGE_MOTION",
                 (undefined **)0x21000012,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_AIR_LASSO_FAILURE_WORK_FLAG_REWIND",
                 (undefined **)0x21000013,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_AIR_LASSO_FAILURE_WORK_FLOAT_START",
                 (undefined **)0x1000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_AIR_LASSO_FAILURE_WORK_INT_START",
                 (undefined **)0x11000004,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_AIR_LASSO_FAILURE_WORK_INT_ARTICLE_ID",
                 (undefined **)0x11000005,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_AIR_LASSO_FAILURE_WORK_INT_ARTICLE2_ID",
                 (undefined **)0x11000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_AIR_LASSO_FAILURE_WORK_INT_MOTION_KIND",
                 (undefined **)0x11000009,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_AIR_LASSO_FAILURE_WORK_INT_REWIND_START_FRAME",
                 (undefined **)0x1100000a,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_AIR_LASSO_FAILURE_WORK_INT_WAIT_FRAME",
                 (undefined **)0x1100000b,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_AIR_LASSO_FAILURE_TERM",(undefined **)0x1100000c,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_AIR_LASSO_FAILURE_FLAG",
                 (undefined **)0x0,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_AIR_LASSO_FAILURE_INT",
                 (undefined **)0x260,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_AIR_LASSO_FAILURE_FLOAT",
                 (undefined **)0x0,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_AIR_LASSO_BODY_FLIP_NONE",(undefined **)0x0,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_AIR_LASSO_BODY_FLIP_X",(undefined **)0x1,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_AIR_LASSO_BODY_FLIP_Y",(undefined **)0x2,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_AIR_LASSO_LANDING_FLAG_START",
                 (undefined **)0x21000013,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_AIR_LASSO_LANDING_FLAG_TERM",
                 (undefined **)0x21000014,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_AIR_LASSO_LANDING_WORK_FLOAT_START",
                 (undefined **)0x100000b,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_AIR_LASSO_LANDING_WORK_FLOAT_TERM",
                 (undefined **)0x100000c,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_AIR_LASSO_LANDING_WORK_INT_START",
                 (undefined **)0x11000009,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_AIR_LASSO_LANDING_WORK_INT_TERM",
                 (undefined **)0x1100000a,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_APPEAL_FLAG_START",(undefined **)0x2100000b,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_APPEAL_FLAG_TO_SMASH_APPEAL",
                 (undefined **)0x2100000c,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_APPEAL_FLAG_TERM",(undefined **)0x2100000d,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_APPEAL_WORK_INT_START",(undefined **)0x11000004,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_APPEAL_WORK_INT_MOTION_KIND_R",
                 (undefined **)0x11000005,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_APPEAL_WORK_INT_MOTION_KIND_L",
                 (undefined **)0x11000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_APPEAL_WORK_INT_TERM",(undefined **)0x11000007,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_APPEAL_WORK_FLOAT_START",(undefined **)0x1000006,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_APPEAL_FLAG",(undefined **)0x0,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_APPEAL_INT",(undefined **)0x0,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_APPEAL_FLOAT",(undefined **)0x0,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ATTACK_AIR_WORK_INT_START",
                 (undefined **)0x11000004,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ATTACK_AIR_WORK_INT_MOTION_KIND",
                 (undefined **)0x11000005,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ATTACK_AIR_WORK_INT_FRAME",
                 (undefined **)0x11000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ATTACK_AIR_WORK_INT_TERM",
                 (undefined **)0x11000007,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ATTACK_AIR_WORK_FLOAT_START",
                 (undefined **)0x1000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ATTACK_AIR_WORK_FLOAT_TERM",
                 (undefined **)0x1000007,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ATTACK_AIR_FLAG_START",(undefined **)0x2100000b,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ATTACK_AIR_FLAG_ENABLE_LANDING",
                 (undefined **)0x2100000c,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ATTACK_AIR_FLAG_LANDING_CLEAR_SPEED",
                 (undefined **)0x2100000d,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ATTACK_AIR_FLAG_KEEP_AIR",
                 (undefined **)0x2100000e,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ATTACK_AIR_FLAG_TERM",(undefined **)0x2100000f,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_ATTACK_AIR_FLAG",(undefined **)0xa
                 ,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_ATTACK_AIR_INT",(undefined **)0x0,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_ATTACK_AIR_FLOAT",
                 (undefined **)0x0,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_LANDING_ATTACK_AIR_FLAG",
                 (undefined **)0x0,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_LANDING_ATTACK_AIR_INT",
                 (undefined **)&SUB_00000020,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_LANDING_ATTACK_AIR_FLOAT",
                 (undefined **)0x0,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ATTACK_DASH_WORK_INT_START",
                 (undefined **)0x11000004,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ATTACK_DASH_WORK_INT_CATCH_FRAME",
                 (undefined **)0x11000005,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ATTACK_DASH_WORK_INT_FRAME",
                 (undefined **)0x11000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ATTACK_DASH_WORK_INT_TERM",
                 (undefined **)0x11000007,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ATTACK_DASH_WORK_FLOAT_START",
                 (undefined **)0x1000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ATTACK_DASH_WORK_FLOAT_TERM",
                 (undefined **)0x1000007,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ATTACK_DASH_FLAG_START",(undefined **)0x2100000b,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ATTACK_DASH_FLAG_ATTACK_HI4_DISABLE",
                 (undefined **)0x2100000c,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ATTACK_DASH_FLAG_TERM",(undefined **)0x2100000d,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ATTACK_DASH_WORK_TERM",(undefined **)0x2100000e,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_ATTACK_DASH_TYPE_WAIT",(undefined **)0x0,ppppbVar1,in_x4
                 ,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_ATTACK_DASH_TYPE_SQUAT_WAIT",(undefined **)0x1,ppppbVar1
                 ,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_ATTACK_DASH_TYPE_TERM",(undefined **)0x2,ppppbVar1,in_x4
                 ,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = -3;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ATTACK_WORK_INT_START",(undefined **)0x11000004,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ATTACK_WORK_INT_MOTION_KIND",
                 (undefined **)0x11000005,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ATTACK_WORK_INT_100_COUNT",
                 (undefined **)0x11000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ATTACK_WORK_INT_100_CONTINUE_COUNT",
                 (undefined **)0x11000007,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ATTACK_WORK_INT_SMASH_LOOP_FRAME",
                 (undefined **)0x11000008,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ATTACK_WORK_INT_SMASH_HOLD_KEEP_FRAME",
                 (undefined **)0x11000009,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ATTACK_WORK_INT_100_HIT_NEAR_COUNT",
                 (undefined **)0x1100000a,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ATTACK_WORK_INT_100_STEP",
                 (undefined **)0x1100000b,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ATTACK_WORK_INT_SMASH_LOOP_BASE_FRAME",
                 (undefined **)0x1100000c,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ATTACK_WORK_INT_SMASH_LOOP_TOTAL_FRAME",
                 (undefined **)0x1100000d,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ATTACK_WORK_INT_100_HIT_NEAR_COUNT_CLIFF_STOP",
                 (undefined **)0x1100000e,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ATTACK_WORK_INT_ATTACK11_MOTION",
                 (undefined **)0x1100000f,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ATTACK_WORK_INT_FRAME",(undefined **)0x11000010,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ATTACK_WORK_INT_TERM",(undefined **)0x11000011,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ATTACK_WORK_FLOAT_START",(undefined **)0x1000006,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ATTACK_WORK_FLOAT_SMASH_RESTART_FRAME",
                 (undefined **)0x1000007,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ATTACK_WORK_FLOAT_SMASH_PREV_LR",
                 (undefined **)0x1000008,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ATTACK_WORK_FLOAT_SMASH_TARGET_LR",
                 (undefined **)0x1000009,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ATTACK_WORK_FLOAT_TERM",(undefined **)0x100000a,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ATTACK_FLAG_START",(undefined **)0x2100000b,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ATTACK_FLAG_HOLD",(undefined **)0x2100000c,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ATTACK_FLAG_ENABLE_COMBO",
                 (undefined **)0x2100000d,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ATTACK_FLAG_ENABLE_NO_HIT_COMBO",
                 (undefined **)0x2100000e,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ATTACK_FLAG_ENABLE_COMBO_INPUT",
                 (undefined **)0x2100000f,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ATTACK_FLAG_ENABLE_COMBO_PRECEDE",
                 (undefined **)0x21000010,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ATTACK_FLAG_ENABLE_100",(undefined **)0x21000011,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ATTACK_FLAG_CONNECT_COMBO",
                 (undefined **)0x21000012,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ATTACK_FLAG_ENABLE_RESTART",
                 (undefined **)0x21000013,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ATTACK_FLAG_REVERSE_LR",(undefined **)0x21000014,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ATTACK_FLAG_100_CONTINUE",
                 (undefined **)0x21000015,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ATTACK_FLAG_100_CONTINUE_CHECK",
                 (undefined **)0x21000016,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ATTACK_FLAG_100_CONTINUE_INPUT",
                 (undefined **)0x21000017,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ATTACK_FLAG_100_LOOPED",(undefined **)0x21000018,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ATTACK_FLAG_RELEASE_BUTTON",
                 (undefined **)0x21000019,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ATTACK_FLAG_RESTART",(undefined **)0x2100001a,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ATTACK_FLAG_START_SMASH_HOLD",
                 (undefined **)0x2100001b,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ATTACK_FLAG_SMASH_SMASH_HOLD_TO_ATTACK",
                 (undefined **)0x2100001c,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ATTACK_FLAG_RESTART_COMBO",
                 (undefined **)0x2100001d,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ATTACK_FLAG_RESTART_ATTACK",
                 (undefined **)0x2100001e,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ATTACK_FLAG_ENABLE_NO_HIT_COMBO_TRIGGER",
                 (undefined **)0x2100001f,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ATTACK_FLAG_100_CHECK_COMBO_NUM",
                 (undefined **)0x21000020,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ATTACK_FLAG_TERM",(undefined **)0x21000021,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ATTACK_WORK_TERM",(undefined **)0x21000022,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  if ((local_80 != 0) && (local_78 != 0)) {
    FUN_71038f55d0(local_80,local_70);
  }
  local_70 = 0xfffffffd;
  local_80 = 0;
  local_78 = 0;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_ATTACK_FLAG",
                 (undefined **)0x40000000,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_ATTACK_INT",(undefined **)0x4400,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_ATTACK_FLOAT",(undefined **)0x0,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_ATTACK_100_FLAG",(undefined **)0x0
                 ,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_ATTACK_100_INT",(undefined **)0x0,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_ATTACK_100_FLOAT",
                 (undefined **)0x0,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_ATTACK_4_START_FLAG",
                 (undefined **)0x0,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_ATTACK_4_START_INT",
                 (undefined **)0x0,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_ATTACK_4_START_FLOAT",
                 (undefined **)0x300,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_ATTACK_4_HOLD_FLAG",
                 (undefined **)0x800,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_ATTACK_4_HOLD_INT",
                 (undefined **)&DAT_00000038,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_ATTACK_4_HOLD_FLOAT",
                 (undefined **)0x380,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_ATTACK_4_FLAG",
                 (undefined **)&DAT_00001000,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_ATTACK_4_INT",
                 (undefined **)&SUB_00000020,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_ATTACK_4_FLOAT",
                 (undefined **)0x381,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ATTACK_100_STEP_START",(undefined **)0x0,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ATTACK_100_STEP_LOOP",(undefined **)0x1,ppppbVar1
                 ,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ATTACK_100_STEP_END",(undefined **)0x2,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  local_70 = 0xfffffffd;
  local_80 = 0;
  local_78 = 0;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ATTACH_WALL_START",(undefined **)0x2100000b,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ATTACH_WALL_FLAG_MOT_STOP",
                 (undefined **)0x2100000c,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ATTACH_WALL_FLAG_STICK_Y_NEUTRAL",
                 (undefined **)0x2100000d,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ATTACH_WALL_FLAG_TERM",(undefined **)0x2100000e,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ATTACH_WALL_WORK_FLOAT_START",
                 (undefined **)0x1000008,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ATTACH_WALL_WORK_FLOAT_TERM",
                 (undefined **)0x1000009,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ATTACH_WALL_WORK_INT_START",
                 (undefined **)0x11000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ATTACH_WALL_WORK_INT_FRAME",
                 (undefined **)0x11000007,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ATTACH_WALL_WORK_INT_TERM",
                 (undefined **)0x11000008,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ATTACH_WALL_TERM",(undefined **)0x11000009,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_BURY_WORK_INT_START",(undefined **)0x11000004,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_BURY_WORK_INT_FRAME",(undefined **)0x11000005,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_BURY_WORK_INT_MERIKOMI_EFFECT_HANDLE",
                 (undefined **)0x11000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_BURY_WORK_INT_SMOKE_EFFECT_FRAME",
                 (undefined **)0x11000007,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_BURY_WORK_INT_SMOKE2_EFFECT_FRAME",
                 (undefined **)0x11000008,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_BURY_WORK_FLOAT_START",(undefined **)0x1000006,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_BURY_WORK_FLOAT_SPEED_Y",(undefined **)0x1000007,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_BURY_WORK_FLOAT_OFFSET_Y",(undefined **)0x1000008
                 ,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_BURY_WORK_FLOAT_JUMP_FRAME",
                 (undefined **)0x1000009,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_BURY_WORK_FLOAT_START_CLATTER_TIME",
                 (undefined **)0x100000a,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_BURY_WORK_FLAG_START",(undefined **)0x2100000b,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_BURY_WORK_FLAG_INVALID_NO_REACTION",
                 (undefined **)0x2100000c,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_BURY_WORK_FLAG_RECOVERY",(undefined **)0x2100000d
                 ,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_BURY_WORK_FLAG_FEW_REMAINING_CLATTER_TIME_EFFECT"
                 ,(undefined **)0x2100000e,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_BURY_WORK_FLAG_SWING_BINDPOSE_SKIRT",
                 (undefined **)0x2100000f,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_BURY_WORK_TERM",(undefined **)0x21000010,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  if ((local_80 != 0) && (local_78 != 0)) {
    FUN_71038f55d0(local_80,-3);
  }
  local_70 = 0xfffffffd;
  local_80 = 0;
  local_78 = 0;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_BURY_FLAG",(undefined **)0x0,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_BURY_INT",(undefined **)0x0,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_BURY_FLOAT",(undefined **)0x480,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_70 = 0xfffffffd;
  local_80 = 0;
  local_78 = 0;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_BLACKHOLE_WORK_ID_FLAG_START",
                 (undefined **)0x2100000b,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_BLACKHOLE_WORK_ID_FLAG_END",
                 (undefined **)0x2100000c,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_BLACKHOLE_WORK_ID_FLAG_TERM",
                 (undefined **)0x2100000d,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_BLACKHOLE_WORK_ID_INT_START",
                 (undefined **)0x11000004,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,
                 (uint *)"FIGHTER_STATUS_CAPTURE_BLACKHOLE_WORK_ID_INT_PARAM_SCALING_FRAME",
                 (undefined **)0x11000005,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_BLACKHOLE_WORK_ID_INT_FRAME_COUNT",
                 (undefined **)0x11000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,
                 (uint *)"FIGHTER_STATUS_CAPTURE_BLACKHOLE_WORK_ID_INT_END_INVINCIBLE_FRAME",
                 (undefined **)0x11000007,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_BLACKHOLE_WORK_ID_INT_CATCH_NODE",
                 (undefined **)0x11000008,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_BLACKHOLE_WORK_ID_INT_TERM",
                 (undefined **)0x11000009,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_BLACKHOLE_WORK_ID_FLOAT_START",
                 (undefined **)0x1000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_BLACKHOLE_WORK_ID_FLOAT_SCALE_BACKUP",
                 (undefined **)0x1000007,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_BLACKHOLE_WORK_ID_FLOAT_CATCH_POS_X",
                 (undefined **)0x1000008,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_BLACKHOLE_WORK_ID_FLOAT_CATCH_POS_Y",
                 (undefined **)0x1000009,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_BLACKHOLE_WORK_ID_FLOAT_CATCH_POS_Z",
                 (undefined **)0x100000a,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_BLACKHOLE_WORK_ID_FLOAT_INHALE_SPEED",
                 (undefined **)0x100000b,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_BLACKHOLE_WORK_ID_FLOAT_TERM",
                 (undefined **)0x100000c,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  if ((local_80 != 0) && (local_78 != 0)) {
    FUN_71038f55d0(local_80,-3);
  }
  local_70 = 0xfffffffd;
  local_80 = 0;
  local_78 = 0;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_ITEM_WORK_ID_FLAG_START",
                 (undefined **)0x2100000b,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_ITEM_WORK_ID_FLAG_CLATTER",
                 (undefined **)0x2100000c,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_ITEM_WORK_ID_FLAG_TERM",
                 (undefined **)0x2100000d,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_ITEM_WORK_ID_INT_START",
                 (undefined **)0x11000004,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_ITEM_WORK_ID_INT_CAPTURE_NODE_BACKUP",
                 (undefined **)0x11000005,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_ITEM_WORK_ID_INT_TERM",
                 (undefined **)0x11000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_ITEM_WORK_ID_FLOAT_START",
                 (undefined **)0x1000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_ITEM_WORK_ID_FLOAT_CAPTURE_JUMP_SPEED_X",
                 (undefined **)0x1000007,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_ITEM_WORK_ID_FLOAT_CAPTURE_JUMP_SPEED_Y",
                 (undefined **)0x1000008,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_ITEM_WORK_ID_FLOAT_CAPTURE_SCALE_BACKUP",
                 (undefined **)0x1000009,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_ITEM_WORK_ID_FLOAT_TERM",
                 (undefined **)0x100000a,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_70 = 0xfffffffd;
  local_80 = 0;
  local_78 = 0;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_MIMIKKYU_WORK_ID_FLAG_START",
                 (undefined **)0x2100000b,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_MIMIKKYU_WORK_ID_FLAG_CLATTER_END",
                 (undefined **)0x2100000c,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_MIMIKKYU_WORK_ID_FLAG_TERM",
                 (undefined **)0x2100000d,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_BOSSGALAGA_WORK_ID_FLAG_START",
                 (undefined **)0x2100000b,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,
                 (uint *)"FIGHTER_STATUS_CAPTURE_BOSSGALAGA_WORK_ID_FLAG_REQUEST_START_CLATTER",
                 (undefined **)0x2100000c,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_BOSSGALAGA_WORK_ID_FLAG_STARTED_CLATTER",
                 (undefined **)0x2100000d,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_BOSSGALAGA_WORK_ID_FLAG_TERM",
                 (undefined **)0x2100000e,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_BOSSGALAGA_WORK_ID_INT_START",
                 (undefined **)0x11000004,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,
                 (uint *)"FIGHTER_STATUS_CAPTURE_BOSSGALAGA_WORK_ID_INT_CAPTURE_NODE_BACKUP",
                 (undefined **)0x11000005,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_BOSSGALAGA_WORK_ID_INT_TERM",
                 (undefined **)0x11000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_BOSSGALAGA_WORK_ID_FLOAT_START",
                 (undefined **)0x1000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_BOSSGALAGA_WORK_ID_FLOAT_TERM",
                 (undefined **)0x1000007,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_BEITCRANE_WORK_ID_FLAG_START",
                 (undefined **)0x2100000b,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_BEITCRANE_WORK_ID_FLAG_TERM",
                 (undefined **)0x2100000c,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_BEITCRANE_WORK_ID_INT_START",
                 (undefined **)0x11000004,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,
                 (uint *)"FIGHTER_STATUS_CAPTURE_BEITCRANE_WORK_ID_INT_CAPTURE_NODE_BACKUP",
                 (undefined **)0x11000005,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_BEITCRANE_WORK_ID_INT_TERM",
                 (undefined **)0x11000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_BEITCRANE_WORK_ID_FLOAT_START",
                 (undefined **)0x1000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_BEITCRANE_WORK_ID_FLOAT_TERM",
                 (undefined **)0x1000007,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = -3;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_PULLED_WORK_FLAG_START",
                 (undefined **)0x2100000b,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_PULLED_WORK_FLAG_FIRST",
                 (undefined **)0x2100000c,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_PULLED_WORK_FLAG_JUMP",
                 (undefined **)0x2100000d,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_PULLED_WORK_FLAG_STOP_PULL",
                 (undefined **)0x2100000e,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_PULLED_WORK_FLAG_ADJUST_BUTTERFLYNET",
                 (undefined **)0x2100000f,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_PULLED_WORK_FLAG_AIR",
                 (undefined **)0x21000010,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_PULLED_WORK_FLAG_GET_MOTION_KIND_RESULT",
                 (undefined **)0x21000011,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_PULLED_WORK_FLAG_MOTION_END_FLAG",
                 (undefined **)0x21000012,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_PULLED_WORK_FLAG_TERM",
                 (undefined **)0x21000013,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_PULLED_WORK_INT_START",
                 (undefined **)0x11000004,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_PULLED_WORK_INT_MOTION_KIND_GROUND",
                 (undefined **)0x11000005,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_PULLED_WORK_INT_MOTION_KIND_OFFSET",
                 (undefined **)0x11000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_PULLED_WORK_INT_MOTION_KIND_OFFSET_LW",
                 (undefined **)0x11000007,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_PULLED_WORK_INT_JUMP_BUTTON_COUNT",
                 (undefined **)0x11000008,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_PULLED_WORK_INT_SITUATION",
                 (undefined **)0x11000009,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_PULLED_WORK_TERM",
                 (undefined **)0x1100000a,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_PULLED_WORK_INT_TERM",
                 (undefined **)0x1100000a,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  if ((local_80 != 0) && (local_78 != 0)) {
    FUN_71038f55d0(local_80,local_70);
  }
  local_70 = 0xfffffffd;
  local_80 = 0;
  local_78 = 0;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_WAIT_WORK_FLAG_START",
                 (undefined **)0x2100000b,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_WAIT_WORK_FLAG_FIRST",
                 (undefined **)0x2100000c,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_WAIT_WORK_FLAG_JUMP",
                 (undefined **)0x2100000d,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_WAIT_WORK_FLAG_STOP_PULL",
                 (undefined **)0x2100000e,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_WAIT_WORK_FLAG_ADJUST_BUTTERFLYNET",
                 (undefined **)0x2100000f,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_WAIT_WORK_FLAG_AIR",
                 (undefined **)0x21000010,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_WAIT_WORK_INT_START",
                 (undefined **)0x11000004,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_WAIT_WORK_INT_MOTION_KIND_GROUND",
                 (undefined **)0x11000005,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_WAIT_WORK_INT_MOTION_KIND_OFFSET",
                 (undefined **)0x11000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_WAIT_WORK_INT_MOTION_KIND_OFFSET_LW",
                 (undefined **)0x11000007,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_WAIT_WORK_INT_JUMP_BUTTON_COUNT",
                 (undefined **)0x11000008,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_WAIT_WORK_INT_SITUATION",
                 (undefined **)0x11000009,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_WAIT_WORK_TERM",(undefined **)0x1100000a,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_70 = 0xfffffffd;
  local_80 = 0;
  local_78 = 0;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_CAPTURE_WAIT_FLAG",
                 (undefined **)0x1e000,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_CAPTURE_WAIT_INT",
                 (undefined **)&DAT_000001e0,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_CAPTURE_WAIT_FLOAT",
                 (undefined **)0x0,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_70 = 0xfffffffd;
  local_80 = 0;
  local_78 = 0;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_DAMAGE_WORK_FLAG_START",
                 (undefined **)0x2100000b,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_DAMAGE_WORK_FLAG_FIRST",
                 (undefined **)0x2100000c,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_DAMAGE_WORK_FLAG_JUMP",
                 (undefined **)0x2100000d,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_DAMAGE_WORK_FLAG_STOP_PULL",
                 (undefined **)0x2100000e,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_DAMAGE_WORK_FLAG_ADJUST_BUTTERFLYNET",
                 (undefined **)0x2100000f,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_DAMAGE_WORK_FLAG_AIR",
                 (undefined **)0x21000010,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_DAMAGE_WORK_INT_START",
                 (undefined **)0x11000004,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_DAMAGE_WORK_INT_MOTION_KIND_GROUND",
                 (undefined **)0x11000005,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_DAMAGE_WORK_INT_MOTION_KIND_OFFSET",
                 (undefined **)0x11000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_DAMAGE_WORK_INT_MOTION_KIND_OFFSET_LW",
                 (undefined **)0x11000007,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_DAMAGE_WORK_INT_JUMP_BUTTON_COUNT",
                 (undefined **)0x11000008,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_DAMAGE_WORK_INT_SITUATION",
                 (undefined **)0x11000009,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_DAMAGE_WORK_TERM",
                 (undefined **)0x1100000a,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_70 = 0xfffffffd;
  local_80 = 0;
  local_78 = 0;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_CAPTURE_DAMAGE_FLAG",
                 (undefined **)0x1e000,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_CAPTURE_DAMAGE_INT",
                 (undefined **)&DAT_000001e0,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_CAPTURE_DAMAGE_FLOAT",
                 (undefined **)0x0,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_70 = 0xfffffffd;
  local_80 = 0;
  local_78 = 0;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_CUT_WORK_FLAG_START",
                 (undefined **)0x2100000b,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_CUT_WORK_INT_START",
                 (undefined **)0x11000004,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_CUT_WORK_INT_SITUATION",
                 (undefined **)0x11000005,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_CUT_WORK_TERM",(undefined **)0x11000006,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_JUMP_WORK_FLAG_START",
                 (undefined **)0x2100000b,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_JUMP_WORK_INT_START",
                 (undefined **)0x11000004,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_JUMP_WORK_INT_NO_ATTACK_FRAME",
                 (undefined **)0x11000005,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_MASTERHAND_WORK_FLAG_START",
                 (undefined **)0x2100000b,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_MASTERHAND_WORK_FLAG_ENABLE_CLATTER",
                 (undefined **)0x2100000c,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_MASTERHAND_WORK_TERM",
                 (undefined **)0x2100000d,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_MASTERCORE_WORK_INT_START",
                 (undefined **)0x11000004,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_MASTERCORE_WORK_TERM",
                 (undefined **)0x11000005,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_NABBIT_WORK_INT_START",
                 (undefined **)0x11000004,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_NABBIT_WORK_INT_INVINCIBLE_FRAME",
                 (undefined **)0x11000005,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_NABBIT_WORK_TERM",
                 (undefined **)0x11000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLAG_START",
                 (undefined **)0x2100000b,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CATCHED_RIDLEY_WORK_INT_START",
                 (undefined **)0x11000004,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CATCHED_RIDLEY_WORK_INT_OFFSET_COUNT",
                 (undefined **)0x11000005,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_START",
                 (undefined **)0x1000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X",
                 (undefined **)0x1000007,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_Y",
                 (undefined **)0x1000008,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_Z",
                 (undefined **)0x1000009,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_CAPTURE_CUT_SPEED_X",
                 (undefined **)0x100000a,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_SPEED_X",
                 (undefined **)0x100000b,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CATCHED_RIDLEY_WORK_TERM",(undefined **)0x100000c
                 ,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CATCH_FLAG_START",(undefined **)0x2100000b,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CATCH_FLAG_CATCH_WAIT",(undefined **)0x2100000c,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CATCH_FLAG_REVERSE_LR",(undefined **)0x2100000d,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CATCH_FLAG_CATCH_TERM",(undefined **)0x2100000e,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CATCH_WORK_INT_START",(undefined **)0x11000004,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CATCH_WORK_INT_TERM",(undefined **)0x11000005,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CATCH_WORK_FLOAT_START",(undefined **)0x1000006,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CATCH_WORK_FLOAT_TERM",(undefined **)0x1000007,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CATCH_DASH_FLAG_START",(undefined **)0x2100000e,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CATCH_DASH_FLAG_TERM",(undefined **)0x2100000f,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CATCH_DASH_WORK_INT_START",
                 (undefined **)0x11000004,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CATCH_DASH_WORK_INT_CATCH_TURN_FRAME",
                 (undefined **)0x11000005,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CATCH_DASH_WORK_INT_TERM",
                 (undefined **)0x11000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CATCH_DASH_WORK_FLOAT_START",
                 (undefined **)0x1000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CATCH_DASH_WORK_FLOAT_TERM",
                 (undefined **)0x1000007,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CATCH_WAIT_FLAG_START",(undefined **)0x2100000b,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CATCH_WAIT_FLAG_ENEMY",(undefined **)0x2100000c,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CATCH_WAIT_WORK_INT_START",
                 (undefined **)0x11000004,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CATCH_WAIT_WORK_INT_MOTION_KIND",
                 (undefined **)0x11000005,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CATCH_WAIT_WORK_INT_LAST_STRANS",
                 (undefined **)0x11000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CATCH_WAIT_WORK_INT_IK_LEFT_JOINT_ID",
                 (undefined **)0x11000007,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CATCH_WAIT_WORK_INT_IK_RIGHT_JOINT_ID",
                 (undefined **)0x11000008,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CATCH_WAIT_WORK_INT_TERM",
                 (undefined **)0x11000009,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_70 = 0xfffffffd;
  local_80 = 0;
  local_78 = 0;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CATCH_ATTACK_FLAG_START",(undefined **)0x2100000b
                 ,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CATCH_ATTACK_WORK_INT_START",
                 (undefined **)0x11000004,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CATCH_ATTACK_WORK_INT_MOTION_KIND",
                 (undefined **)0x11000005,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CATCH_TURN_FLAG_START",(undefined **)0x2100000d,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CATCH_TURN_FLAG_TERM",(undefined **)0x2100000e,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CATCH_TURN_WORK_FLOAT_START",
                 (undefined **)0x1000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CATCH_TURN_WORK_FLOAT_MOTION_FRAME",
                 (undefined **)0x1000007,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CATCH_TURN_WORK_FLOAT_TERM",
                 (undefined **)0x1000008,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CATCH_TURN_WORK_INT_START",
                 (undefined **)0x11000005,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CATCH_TURN_WORK_INT_TERM",
                 (undefined **)0x11000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CATCH_PULL_FLAG_START",(undefined **)0x2100000b,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CATCH_PULL_FLAG_UNNECESSARY_CLEAR_TRANS",
                 (undefined **)0x2100000c,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CATCH_PULL_FLAG_TERM",(undefined **)0x2100000d,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CATCH_PULL_WORK_INT_START",
                 (undefined **)0x11000004,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CATCH_PULL_WORK_INT_MOTION_KIND",
                 (undefined **)0x11000005,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CATCH_PULL_WORK_INT_TERM",
                 (undefined **)0x11000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CATCH_PULL_FLAG_CATCH_TERM",
                 (undefined **)0x11000007,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CATCH_CUT_FLAG_START",(undefined **)0x2100000e,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CATCH_CUT_WORK_INT_START",
                 (undefined **)0x11000004,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CATCH_CUT_WORK_INT_SITUATION",
                 (undefined **)0x11000005,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CLIFF_CATCH_MOVE_WORK_INT_START",
                 (undefined **)0x11000004,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CLIFF_CATCH_MOVE_WORK_INT_FRAME",
                 (undefined **)0x11000005,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CLIFF_CATCH_MOVE_FLAG_START",
                 (undefined **)0x2100000b,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CLIFF_CATCH_MOVE_FLAG_END",
                 (undefined **)0x2100000c,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CLIFF_CATCH_MOVE_FLAG_AIR_LASSO_CATCH",
                 (undefined **)0x21000019,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CLIFF_CATCH_MOVE_WORK_TERM",
                 (undefined **)0x2100001a,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_CLIFF_CATCH_MOVE_FLAG",
                 (undefined **)0x2000000,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CLIFF_CATCH_FLAG_START",(undefined **)0x2100000b,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CLIFF_CATCH_FLAG_END",(undefined **)0x2100000c,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CLIFF_CATCH_WORK_TERM",(undefined **)0x2100000d,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = -3;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CLIFF_FLAG_START",(undefined **)0x2100000b,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CLIFF_FLAG_TO_CLIMB",(undefined **)0x2100000c,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CLIFF_FLAG_TO_FALL",(undefined **)0x2100000d,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CLIFF_FLAG_TO_DAMAGE_FALL",
                 (undefined **)0x2100000e,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CLIFF_FLAG_NEUTRAL",(undefined **)0x2100000f,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CLIFF_FLAG_TO_JUMP",(undefined **)0x21000010,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CLIFF_FLAG_TO_GROUND",(undefined **)0x21000011,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CLIFF_FLAG_TO_ROB",(undefined **)0x21000012,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CLIFF_FLAG_TO_RELEASE",(undefined **)0x21000013,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CLIFF_FLAG_END",(undefined **)0x21000014,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CLIFF_WORK_INT_START",(undefined **)0x11000004,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CLIFF_WORK_INT_CATCH_REST_TIME",
                 (undefined **)0x11000005,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CLIFF_WORK_INT_WAIT_FRAME",
                 (undefined **)0x11000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CLIFF_WORK_INT_TERM",(undefined **)0x11000007,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CLIFF_WORK_FLOAT_START",(undefined **)0x1000006,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CLIFF_WORK_FLOAT_HIT_NORMAL_FRAME",
                 (undefined **)0x1000007,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CLIFF_WORK_FLOAT_TERM",(undefined **)0x1000008,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CLIFF_WORK_TERM",(undefined **)0x1000009,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  if ((local_80 != 0) && (local_78 != 0)) {
    FUN_71038f55d0(local_80,local_70);
  }
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_CLIFF_WAIT_FLAG",
                 (undefined **)0x91000,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_CLIFF_WAIT_INT",(undefined **)0x0,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_CLIFF_WAIT_FLOAT",
                 (undefined **)0x0,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_70 = 0xfffffffd;
  local_80 = 0;
  local_78 = 0;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CLIFF_JUMP_WORK_INT_START",
                 (undefined **)0x11000004,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CLIFF_JUMP_WORK_INT_FRAME",
                 (undefined **)0x11000005,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CLIFF_JUMP_FLAG_START",(undefined **)0x2100000b,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CLIFF_JUMP_FLOAT_START",(undefined **)0x1000005,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CLIFF_JUMP_WORK_TERM",(undefined **)0x1000006,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CLUNG_DIDDY_FLAG_START",(undefined **)0x2100000b,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CLUNG_DIDDY_FLAG_USE_DX_MOTION",
                 (undefined **)0x2100000c,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CLUNG_DIDDY_FLAG_CAPTURE_CUT_JUMP",
                 (undefined **)0x2100000d,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CLUNG_DIDDY_FLAG_CLUNG_THROWN_ATTACK_DIDDY",
                 (undefined **)0x2100000e,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CLUNG_DIDDY_WORK_INT_START",
                 (undefined **)0x11000004,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CLUNG_DIDDY_WORK_INT_MOTION_KIND",
                 (undefined **)0x11000005,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CLUNG_DIDDY_WORK_INT_THROWN_FRAME",
                 (undefined **)0x11000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CLUNG_DIDDY_WORK_FLOAT_START",
                 (undefined **)0x1000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CLUNG_DIDDY_WORK_FLOAT_CLATTER_FRAME_GROUND",
                 (undefined **)0x1000007,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CLUNG_DIDDY_WORK_FLOAT_CLATTER_FRAME_AIR",
                 (undefined **)0x1000008,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CLUNG_DIDDY_TERM",(undefined **)0x1000009,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = -3;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DAMAGE_FLAG_START",(undefined **)0x2100000b,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DAMAGE_FLAG_REACTION_CANCEL",
                 (undefined **)0x2100000c,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DAMAGE_FLAG_END_REACTION",
                 (undefined **)0x2100000d,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DAMAGE_FLAG_DEAD_EFFECT",(undefined **)0x2100000e
                 ,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DAMAGE_FLAG_ELEC",(undefined **)0x2100000f,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DAMAGE_FLAG_ENABLE_KINE_GRAVITY",
                 (undefined **)0x21000010,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DAMAGE_FLAG_ENABLE_DOWN",(undefined **)0x21000011
                 ,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DAMAGE_FLAG_ADJUST_VECTOR",
                 (undefined **)0x21000012,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DAMAGE_FLAG_FALLING",(undefined **)0x21000013,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DAMAGE_FLAG_DAMAGE_REFLECT_STOP",
                 (undefined **)0x21000014,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DAMAGE_FLAG_FLY_ROLL_SET_ANGLE",
                 (undefined **)0x21000015,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DAMAGE_FLAG_FLY_DISABLE_PASSIVE",
                 (undefined **)0x21000016,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DAMAGE_FLAG_GROUND",(undefined **)0x21000017,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DAMAGE_FLAG_PREVIOUS_DOWN",
                 (undefined **)0x21000018,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DAMAGE_FLAG_NO_DROP_ITEM",
                 (undefined **)0x21000019,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DAMAGE_FLAG_FLY_ROLL_ANGLE_RETURN",
                 (undefined **)0x2100001a,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DAMAGE_FLAG_NO_SMOKE",(undefined **)0x2100001b,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DAMAGE_DISABLE_CLOUD_THROUGH",
                 (undefined **)0x2100001c,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DAMAGE_FLAG_TERM",(undefined **)0x2100001d,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DAMAGE_WORK_FLOAT_START",(undefined **)0x1000006,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DAMAGE_WORK_FLOAT_METEOR_FRAME",
                 (undefined **)0x1000007,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DAMAGE_WORK_FLOAT_FLY_DIST",
                 (undefined **)0x1000008,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DAMAGE_WORK_FLOAT_START_FALL_Y",
                 (undefined **)0x1000009,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DAMAGE_WORK_FLOAT_DAMAGE_REFLECT_MOTION_RATE",
                 (undefined **)0x100000a,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DAMAGE_WORK_FLOAT_DAMAGE_MOTION_RATE",
                 (undefined **)0x100000b,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DAMAGE_WORK_FLOAT_ROT_ANGLE",
                 (undefined **)0x100000c,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DAMAGE_WORK_FLOAT_FLY_ROLL_ANGLE_RETURN_FRAME",
                 (undefined **)0x100000d,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DAMAGE_WORK_FLOAT_CORRECT_DAMAGE_VECTOR_ANGLE",
                 (undefined **)0x100000e,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DAMAGE_WORK_FLOAT_REACTION_FRAME",
                 (undefined **)&DAT_0100000f,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DAMAGE_WORK_FLOAT_VECOR_CORRECT_STICK_X",
                 (undefined **)0x1000010,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DAMAGE_WORK_FLOAT_VECOR_CORRECT_STICK_Y",
                 (undefined **)0x1000011,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DAMAGE_WORK_FLOAT_TERM",(undefined **)0x1000012,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DAMAGE_WORK_INT_START",(undefined **)0x11000004,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DAMAGE_WORK_INT_EFFECT_ID",
                 (undefined **)0x11000005,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DAMAGE_WORK_INT_HIT_STOP_FRAME",
                 (undefined **)0x11000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DAMAGE_WORK_INT_FRAME",(undefined **)0x11000007,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DAMAGE_WORK_INT_FLY_SE_KIND",
                 (undefined **)0x11000008,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DAMAGE_WORK_INT_ATTACK_DISABLE_FRAME",
                 (undefined **)0x11000009,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DAMAGE_WORK_INT_ESCAPE_DISABLE_FRAME",
                 (undefined **)0x1100000a,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DAMAGE_WORK_INT_AURA_EFFECT_ID",
                 (undefined **)0x1100000b,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DAMAGE_WORK_INT_AURA_FRAME",
                 (undefined **)0x1100000c,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DAMAGE_WORK_INT_ATTACKER_COLOR",
                 (undefined **)0x1100000d,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DAMAGE_WORK_INT_DAMAGE_REFLECT_STOP_FRAME",
                 (undefined **)0x1100000e,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DAMAGE_WORK_INT_MOTION_KIND",
                 (undefined **)0x1100000f,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DAMAGE_WORK_INT_FIX_GRAVITY_ACCEL_FRAME",
                 (undefined **)0x11000010,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DAMAGE_WORK_INT_DAMAGE_MOTION_KIND",
                 (undefined **)0x11000011,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DAMAGE_WORK_INT_STOP_RELEASE_ACTION",
                 (undefined **)0x11000012,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,
                 (uint *)"FIGHTER_STATUS_DAMAGE_WORK_INT_WALL_DAMAGE_REFLECT_MOTION_STOP_FRAME",
                 (undefined **)0x11000013,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DAMAGE_WORK_INT_CORRECT_DAMAGE_VECTOR_EFFECT_ID",
                 (undefined **)0x11000014,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DAMAGE_WORK_INT_TERM",(undefined **)0x11000015,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DAMAGE_TERM",(undefined **)0x11000016,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  if ((local_80 != 0) && (local_78 != 0)) {
    FUN_71038f55d0(local_80,local_70);
  }
  local_70 = 0xfffffffd;
  local_80 = 0;
  local_78 = 0;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DAMAGE_STOP_RELEASE_ACTION_NONE",
                 (undefined **)0x0,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DAMAGE_STOP_RELEASE_ACTION_GROUND_TO_GROUND",
                 (undefined **)0x1,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DAMAGE_STOP_RELEASE_ACTION_GROUND_TO_AIR",
                 (undefined **)0x2,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DAMAGE_FLY_SE_KIND_NONE",(undefined **)0x0,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DAMAGE_FLY_SE_KIND_S",(undefined **)0x1,ppppbVar1
                 ,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DAMAGE_FLY_SE_KIND_M",(undefined **)0x2,ppppbVar1
                 ,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DAMAGE_FLY_SE_KIND_L",(undefined **)0x3,ppppbVar1
                 ,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DAMAGE_FLY_SE_KIND_LL",
                 (undefined **)&DAT_00000004,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DAMAGE_REFLECT_DIR_NONE",(undefined **)0x0,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DAMAGE_REFLECT_DIR_LEFT",(undefined **)0x1,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DAMAGE_REFLECT_DIR_RIGHT",(undefined **)0x2,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DAMAGE_REFLECT_DIR_UP",(undefined **)0x3,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DAMAGE_REFLECT_DIR_DOWN",
                 (undefined **)&DAT_00000004,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DAMAGE_REFLECT_DIR_TERM",(undefined **)0x5,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DAMAGE_FLY_REFLECT_WORK_INT_START",
                 (undefined **)0x11000014,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DAMAGE_FLY_REFLECT_WORK_INT_BUTTON_ON_FRAME",
                 (undefined **)0x11000015,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DAMAGE_FLY_REFLECT_WORK_INT_TERM",
                 (undefined **)0x11000016,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DAMAGE_FLY_REFLECT_WORK_FLOAT_START",
                 (undefined **)0x1000011,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DAMAGE_FLY_REFLECT_WORK_FLOAT_REFLECT_CHK_FRAME",
                 (undefined **)0x1000012,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DAMAGE_FLY_REFLECT_WORK_FLOAT_TERM",
                 (undefined **)0x1000013,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DAMAGE_FLY_REFLECT_WORK_TERM",
                 (undefined **)0x1000014,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_DAMAGE_FLAG",(undefined **)0x0,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_DAMAGE_INT",(undefined **)0x0,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_DAMAGE_FLOAT",
                 (undefined **)&DAT_00000040,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_DAMAGE_FLY_FLAG",
                 (undefined **)0x2400000,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_DAMAGE_FLY_INT",(undefined **)0x0,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_DAMAGE_FLY_FLOAT",
                 (undefined **)&DAT_00000040,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_DAMAGE_FLY_REFLECT_FLAG",
                 (undefined **)0x402000,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_DAMAGE_FLY_REFLECT_INT",
                 (undefined **)0x6a6,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_DAMAGE_FLY_REFLECT_FLOAT",
                 (undefined **)0x0,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_70 = 0xfffffffd;
  local_80 = 0;
  local_78 = 0;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DAMAGE_FALL_FLAG_START",(undefined **)0x2100000b,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DAMAGE_FALL_FLAG_PREV_NO_COMP",
                 (undefined **)0x2100000c,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DAMAGE_FALL_FLAG_TRANSITION",
                 (undefined **)0x2100000d,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DAMAGE_FALL_FLAG_REVERSE_MOTION",
                 (undefined **)0x2100000e,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DAMAGE_FALL_FLAG_DISABLE_MOTION_RATE_TRANS",
                 (undefined **)0x2100000f,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DAMAGE_FALL_WORK_INT_START",
                 (undefined **)0x11000004,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DAMAGE_FALL_WORK_INT_NO_TRANSITION_FRAME",
                 (undefined **)0x11000005,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DAMAGE_FALL_WORK_FLOAT_START",
                 (undefined **)0x1000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DAMAGE_FALL_WORK_FLOAT_MOT_RATE_COUNTER",
                 (undefined **)0x1000007,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DAMAGE_FALL_WORK_FLOAT_PREV_MOT_RATE",
                 (undefined **)0x1000008,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DAMAGE_FALL_TERM",(undefined **)0x1000009,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_DAMAGE_FALL_FLAG",
                 (undefined **)0x2,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_DAMAGE_FALL_INT",
                 (undefined **)&DAT_00000004,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_DAMAGE_FALL_FLOAT",
                 (undefined **)0x0,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = -3;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DASH_WORK_INT_START",(undefined **)0x11000004,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DASH_WORK_INT_COUNT",(undefined **)0x11000005,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DASH_WORK_INT_TURN_DASH_FRAME",
                 (undefined **)0x11000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DASH_WORK_INT_RETRY_TURN_DASH_FRAME",
                 (undefined **)0x11000007,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DASH_WORK_INT_ENABLE_ATTACK_FRAME",
                 (undefined **)0x11000008,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DASH_WORK_INT_DASH_TO_RUN_FRAME",
                 (undefined **)0x11000009,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DASH_WORK_INT_INVALID_ATTACK_ESCAPE_FRAME",
                 (undefined **)0x1100000a,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DASH_WORK_INT_TURN_DASH_FROM_DASH_COUNT",
                 (undefined **)0x1100000b,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DASH_WORK_INT_TERM",(undefined **)0x1100000c,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DASH_WORK_FLOAT_START",(undefined **)0x1000006,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DASH_WORK_FLOAT_TERM",(undefined **)0x1000007,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DASH_FLAG_START",(undefined **)0x2100000b,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DASH_FLAG_NO_S4",(undefined **)0x2100000c,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DASH_FLAG_NO_ESCAPE",(undefined **)0x2100000d,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DASH_FLAG_NO_ATTACK",(undefined **)0x2100000e,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DASH_FLAG_NO_SLIP",(undefined **)0x2100000f,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DASH_FLAG_ENABLE_RUN",(undefined **)0x21000010,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DASH_FLAG_INPUT_ATTACK",(undefined **)0x21000011,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DASH_FLAG_INPUT_SPECIAL_S",
                 (undefined **)0x21000012,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DASH_FLAG_TURN_DASH",(undefined **)0x21000013,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DASH_FLAG_TURN_DASH_ON",(undefined **)0x21000014,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DASH_FLAG_TERM",(undefined **)0x21000015,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DASH_WORK_TERM",(undefined **)0x21000016,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  if ((local_80 != 0) && (local_78 != 0)) {
    FUN_71038f55d0(local_80,local_70);
  }
  local_70 = -3;
  local_80 = 0;
  local_78 = 0;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DEAD_FLAG_START",(undefined **)0x2100000b,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DEAD_FLAG_END_ACTION",(undefined **)0x2100000c,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DEAD_FLAG_CAMERA_FOLLOW",(undefined **)0x2100000d
                 ,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DEAD_FLAG_CRACK_EFFECT",(undefined **)0x2100000e,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DEAD_FLAG_CAMERA_FOLLOW_EXEC",
                 (undefined **)0x2100000f,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DEAD_FLAG_TERM",(undefined **)0x21000010,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DEAD_WORK_INT_START",(undefined **)0x11000004,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DEAD_WORK_INT_DEAD_UP_STEP",
                 (undefined **)0x11000005,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DEAD_WORK_INT_FRAME",(undefined **)0x11000006,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DEAD_WORK_INT_MOVE_FRAME",
                 (undefined **)0x11000007,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DEAD_WORK_INT_ICE_EFFECT",
                 (undefined **)0x11000008,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DEAD_WORK_INT_PHASE",(undefined **)0x11000009,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DEAD_WORK_INT_PREV_CAMERA_TYPE",
                 (undefined **)0x1100000a,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DEAD_WORK_INT_OFFSET_X_FIRST_RAND",
                 (undefined **)0x1100000b,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DEAD_WORK_INT_ROT_Z_FIRST_RAND",
                 (undefined **)0x1100000c,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DEAD_WORK_INT_FIRST_DISTANCE_GROUP",
                 (undefined **)0x1100000d,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DEAD_WORK_INT_TERM",(undefined **)0x1100000e,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DEAD_WORK_FLOAT_START",(undefined **)0x1000006,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DEAD_WORK_FLOAT_SPEED_X",(undefined **)0x1000007,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DEAD_WORK_FLOAT_SPEED_Y",(undefined **)0x1000008,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DEAD_WORK_FLOAT_SPEED_Z",(undefined **)0x1000009,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DEAD_WORK_FLOAT_ROT_X",(undefined **)0x100000a,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DEAD_WORK_FLOAT_OFFSET_X",(undefined **)0x100000b
                 ,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DEAD_WORK_FLOAT_OFFSET_Y",(undefined **)0x100000c
                 ,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DEAD_WORK_FLOAT_OFFSET_Z",(undefined **)0x100000d
                 ,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DEAD_WORK_FLOAT_ROT_X_OFFSET",
                 (undefined **)0x100000e,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DEAD_WORK_FLOAT_ROT_Z_RANDOM_OFFSET",
                 (undefined **)&DAT_0100000f,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DEAD_WORK_FLOAT_FIRST_DISTANCE",
                 (undefined **)0x1000010,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DEAD_WORK_FLOAT_POS_Y",(undefined **)0x1000011,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DEAD_WORK_FLOAT_SCALE_BACKUP",
                 (undefined **)0x1000012,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DEAD_WORK_FLOAT_RADIUS",(undefined **)0x1000013,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DEAD_WORK_FLOAT_SPEED_DEG",
                 (undefined **)0x1000014,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DEAD_WORK_FLOAT_LAST_FOLLOW_POS_X",
                 (undefined **)0x1000015,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DEAD_WORK_FLOAT_LAST_FOLLOW_POS_Y",
                 (undefined **)0x1000016,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DEAD_WORK_FLOAT_LAST_FOLLOW_POS_Z",
                 (undefined **)&DAT_01000017,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DEAD_TERM",(undefined **)0x1000018,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  if ((local_80 != 0) && (local_78 != 0)) {
    FUN_71038f55d0(local_80,local_70);
  }
  local_70 = 0xfffffffd;
  local_80 = 0;
  local_78 = 0;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_BOSS_DEAD_FLAG_CHANGED_MOTION",
                 (undefined **)0x21000010,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_BOSS_DEAD_FLAG_KEYOFF_BGM",
                 (undefined **)0x21000011,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_BOSS_DEAD_FLAG_BOSS_STOP_SE",
                 (undefined **)0x21000012,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_BOSS_DEAD_FLAG_FINISH",(undefined **)0x21000013,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_BOSS_DEAD_WORK_INT_SITUATION_KIND_PREVIOUS",
                 (undefined **)0x1100000e,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = -3;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DOWN_FLAG_START",(undefined **)0x2100001c,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DOWN_FLAG_UP",(undefined **)0x2100001d,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DOWN_FLAG_DAMAGE_3",(undefined **)0x2100001e,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DOWN_FLAG_NO_DOWN_DAMAGE",
                 (undefined **)0x2100001f,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DOWN_FLAG_SET_POS",(undefined **)0x21000020,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DOWN_FLAG_GROUND",(undefined **)0x21000021,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DOWN_FLAG_PREV_STATUS_DOWN_EAT",
                 (undefined **)0x21000022,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DOWN_FLAG_WHOLE_HIT_XLU_END",
                 (undefined **)0x21000023,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DOWN_FLAG_TERM",(undefined **)0x21000024,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DOWN_WORK_FLOAT_START",(undefined **)0x1000011,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DOWN_WORK_FLOAT_RAGDOLL_FRAME",
                 (undefined **)0x1000012,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DOWN_WORK_FLOAT_DOWN_FRAME",
                 (undefined **)0x1000013,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DOWN_WORK_FLOAT_POS_X",(undefined **)0x1000014,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DOWN_WORK_FLOAT_POS_Y",(undefined **)0x1000015,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DOWN_WORK_FLOAT_TERM",(undefined **)0x1000016,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DOWN_WORK_INT_START",(undefined **)0x11000014,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DOWN_WORK_INT_MOTION_KIND",
                 (undefined **)0x11000015,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DOWN_WORK_INT_NO_ACTION_FRAME",
                 (undefined **)0x11000016,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DOWN_WORK_INT_TERMINATE_XLU_COUNT",
                 (undefined **)0x11000017,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DOWN_WORK_INT_TERM",(undefined **)0x11000018,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DOWN_TERM",(undefined **)0x11000019,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  if ((local_80 != 0) && (local_78 != 0)) {
    FUN_71038f55d0(local_80,local_70);
  }
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_DOWN_FLAG",
                 (undefined **)0xa0000000,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_DOWN_INT",(undefined **)0xc00000,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_DOWN_FLOAT",(undefined **)0x80000,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DOWN_DAMAGE_FLAG_START",(undefined **)0x21000023,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DOWN_DAMAGE_FLAG_START_AIR",
                 (undefined **)0x21000024,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DOWN_DAMAGE_FLAG_SITUATION_CHANGE",
                 (undefined **)0x21000025,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DOWN_DAMAGE_FLAG_TERM",(undefined **)0x21000026,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DOWN_DAMAGE_WORK_INT_START",
                 (undefined **)0x11000017,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DOWN_DAMAGE_WORK_INT_TERM",
                 (undefined **)0x11000018,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DOWN_DAMAGE_TERM",(undefined **)0x11000019,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_DOWN_DAMAGE_FLAG",
                 (undefined **)0x60000000,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_DOWN_DAMAGE_INT",
                 (undefined **)0x400000,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_DOWN_DAMAGE_FLOAT",
                 (undefined **)0x80000,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_DOWN_REFLECT_FLAG",
                 (undefined **)0x60000000,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_DOWN_REFLECT_INT",
                 (undefined **)0x2,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_DOWN_REFLECT_FLOAT",
                 (undefined **)0x80000,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_FURAFURA_STAND_WORK_FLAG_START",
                 (undefined **)0x21000023,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_FURAFURA_STAND_WORK_FLAG_WHOLE_HIT_XLU_END",
                 (undefined **)0x21000023,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_FURAFURA_STAND_WORK_FLAG_TERM",
                 (undefined **)0x21000024,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_FURAFURA_STAND_WORK_FLOAT_START",
                 (undefined **)0x1000015,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_FURAFURA_STAND_WORK_FLOAT_TERM",
                 (undefined **)0x1000016,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_FURAFURA_STAND_WORK_INT_START",
                 (undefined **)0x11000017,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_FURAFURA_STAND_WORK_INT_TERMINATE_XLU_COUNT",
                 (undefined **)0x11000017,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_FURAFURA_STAND_WORK_INT_FRAME_COUNT",
                 (undefined **)0x11000018,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_FURAFURA_STAND_WORK_INT_TERM",
                 (undefined **)0x11000019,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_FURAFURA_FLAG",
                 (undefined **)0x80000000,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_FURAFURA_INT",
                 (undefined **)0x800000,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_FURAFURA_FLOAT",(undefined **)0x0,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = -3;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ESCAPE_FLAG_START",(undefined **)0x2100000b,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ESCAPE_FLAG_MOTION_RATE_PENALTY",
                 (undefined **)0x2100000c,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ESCAPE_FLAG_HIT_XLU",(undefined **)0x2100000d,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ESCAPE_AIR_FLAG_FALL",(undefined **)0x2100000e,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ESCAPE_AIR_FLAG_KINE_FALL",
                 (undefined **)0x2100000f,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ESCAPE_AIR_FLAG_PREV_STATUS_PASSIVE_GROUND",
                 (undefined **)0x21000010,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ESCAPE_AIR_FLAG_PREV_STATUS_PASSIVE_AIR",
                 (undefined **)0x21000011,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ESCAPE_AIR_FLAG_SLIDE",(undefined **)0x21000012,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ESCAPE_AIR_FLAG_SLIDE_ENABLE_CONTROL",
                 (undefined **)0x21000013,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ESCAPE_AIR_FLAG_SLIDE_ENABLE_GRAVITY",
                 (undefined **)0x21000014,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ESCAPE_AIR_FLAG_STIFF",(undefined **)0x21000015,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ESCAPE_AIR_FLAG_END_STIFF",
                 (undefined **)0x21000016,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ESCAPE_AIR_FLAG_SLIDE_KEEP_AIR_TURNED_OFF",
                 (undefined **)0x21000017,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ESCAPE_FLAG_TERM",(undefined **)0x21000018,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ESCAPE_WORK_INT_START",(undefined **)0x11000004,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ESCAPE_WORK_INT_FRAME",(undefined **)0x11000005,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ESCAPE_WORK_INT_CATCH_FRAME",
                 (undefined **)0x11000007,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ESCAPE_WORK_INT_ESCAPE_ATTACK",
                 (undefined **)0x11000008,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ESCAPE_WORK_INT_HIT_XLU_FRAME",
                 (undefined **)0x11000009,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ESCAPE_WORK_INT_HIT_NORMAL_FRAME",
                 (undefined **)0x1100000a,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ESCAPE_AIR_ADD_XLU_START_FRAME",
                 (undefined **)0x1100000b,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ESCAPE_AIR_SLIDE_WORK_INT_SLIDE_FRAME",
                 (undefined **)0x1100000c,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ESCAPE_AIR_SLIDE_WORK_INT_SLIDE_STEP",
                 (undefined **)0x1100000d,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ESCAPE_AIR_SLIDE_WORK_INT_SLIDE_BACK_END_FRAME",
                 (undefined **)0x1100000e,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ESCAPE_WORK_INT_TERM",(undefined **)0x1100000f,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ESCAPE_WORK_FLOAT_START",(undefined **)0x1000006,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ESCAPE_AIR_SLIDE_WORK_FLOAT_DIR_X",
                 (undefined **)0x1000007,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ESCAPE_AIR_SLIDE_WORK_FLOAT_DIR_Y",
                 (undefined **)0x1000008,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ESCAPE_WORK_FLOAT_MOTION_RATE_PENALTY",
                 (undefined **)0x1000009,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ESCAPE_AIR_SLIDE_WORK_FLOAT_BACK_ACCEL",
                 (undefined **)0x100000a,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ESCAPE_AIR_STIFF_START_FRAME",
                 (undefined **)0x100000b,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ESCAPE_AIR_STIFF_FRAME",(undefined **)0x100000c,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ESCAPE_WORK_FLOAT_TERM",(undefined **)0x100000d,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ESCAPE_TERM",(undefined **)0x100000e,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  if ((local_80 != 0) && (local_78 != 0)) {
    FUN_71038f55d0(local_80,local_70);
  }
  local_70 = 0xfffffffd;
  local_80 = 0;
  local_78 = 0;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_ESCAPE_FLAG",(undefined **)0x0,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_ESCAPE_INT",
                 (undefined **)&DAT_00000080,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_ESCAPE_FLOAT",(undefined **)0x0,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_ESCAPE_ATTACK_MODE_UNABLE",(undefined **)0x0,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_ESCAPE_ATTACK_MODE_ENABLE",(undefined **)0x1,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  local_70 = 0xfffffffd;
  local_80 = 0;
  local_78 = 0;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_FALL_WORK_INT_START",(undefined **)0x11000004,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_FALL_WORK_INT_MOTION_KIND_F",
                 (undefined **)0x11000005,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_FALL_WORK_INT_MOTION_KIND_B",
                 (undefined **)0x11000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_FALL_WORK_INT_MOTION_KIND_2ND",
                 (undefined **)0x11000007,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_FALL_WORK_INT_FRAME",(undefined **)0x11000008,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_FALL_WORK_INT_TERM",(undefined **)0x11000009,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_FALL_WORK_FLOAT_START",(undefined **)0x1000006,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_FALL_WORK_FLOAT_MOTION_VALUE",
                 (undefined **)0x1000007,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_FALL_WORK_FLOAT_TERM",(undefined **)0x1000008,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_FALL_FLAG_START",(undefined **)0x2100000b,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_FALL_FLAG_FROM_GROUND",(undefined **)0x2100000c,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_FALL_FLAG_DISABLE_MOTION_INTP",
                 (undefined **)0x2100000d,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_FALL_FLAG_TERM",(undefined **)0x2100000e,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_FALL_TERM",(undefined **)0x2100000f,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_FALL_FLAG",
                 (undefined **)&DAT_00000022,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_FALL_INT",(undefined **)0x0,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_FALL_FLOAT",(undefined **)0x0,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GENESIS_GET_WORK_INT_START",
                 (undefined **)0x11000004,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GENESIS_GET_WORK_INT_FRAME",
                 (undefined **)0x11000005,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GENESIS_GET_WORK_FLOAT_START",
                 (undefined **)0x1000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GENESIS_GET_FLAG_START",(undefined **)0x2100000b,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GENESIS_GET_FLAG_FIRST",(undefined **)0x2100000c,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GENESIS_SHOOT_WORK_INT_START",
                 (undefined **)0x11000004,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GENESIS_SHOOT_WORK_INT_SHOOT_FRAME",
                 (undefined **)0x11000005,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GENESIS_SHOOT_WORK_FLOAT_START",
                 (undefined **)0x1000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GENESIS_SHOOT_FLAG_START",
                 (undefined **)0x2100000b,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GENESIS_SHOOT_FLAG_FIRST",
                 (undefined **)0x2100000c,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GENESIS_SHOOT_FLAG_TURN",(undefined **)0x2100000d
                 ,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GENESIS_SHOOT_FLAG_REQUEST_RADIATING",
                 (undefined **)0x2100000e,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GENESIS_SHOOT_FLAG_RADIATING",
                 (undefined **)0x2100000f,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GIMMICK_WORK_INT_START",(undefined **)0x11000004,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GIMMICK_WORK_INT_TERM",(undefined **)0x11000005,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GIMMICK_WORK_FLOAT_START",(undefined **)0x1000006
                 ,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GIMMICK_WORK_FLOAT_TERM",(undefined **)0x1000007,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GIMMICK_FLAG_START",(undefined **)0x2100000b,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GIMMICK_FLAG_TERM",(undefined **)0x2100000c,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GIMMICK_WORK_TERM",(undefined **)0x2100000d,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_ID_KEEP_FLAG_GIMMICK_FLAG",(undefined **)0x0
                 ,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_ID_KEEP_FLAG_GIMMICK_INT",(undefined **)0x0,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_ID_KEEP_FLAG_GIMMICK_FLOAT",
                 (undefined **)0x0,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_LADDER_WORK_INT_START",(undefined **)0x11000006,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_LADDER_WORK_INT_STICK_X",(undefined **)0x11000007
                 ,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_LADDER_WORK_FLOAT_START",(undefined **)0x1000006,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_LADDER_WORK_FLOAT_LADDER_UPPER_X",
                 (undefined **)0x1000007,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_LADDER_WORK_FLOAT_LADDER_UPPER_Y",
                 (undefined **)0x1000008,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_LADDER_WORK_FLOAT_LADDER_END_X",
                 (undefined **)0x1000009,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_LADDER_WORK_FLOAT_LADDER_END_Y",
                 (undefined **)0x100000a,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_LADDER_WORK_FLOAT_LADDER_END_START_X",
                 (undefined **)0x100000b,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_LADDER_WORK_FLOAT_LADDER_END_START_Y",
                 (undefined **)0x100000c,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_LADDER_WORK_FLOAT_LADDER_START_LR_BACKUP",
                 (undefined **)0x100000d,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_LADDER_FLAG_START",(undefined **)0x2100000e,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_LADDER_FLAG_FALL",(undefined **)0x2100000f,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_LADDER_FLAG_DONE_INIT_LADDER_LOOP",
                 (undefined **)0x21000010,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_LADDER_FLAG_INHERIT_MOTION",
                 (undefined **)0x21000011,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_LADDER_FLAG_ATTACK_FALL",(undefined **)0x21000012
                 ,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_LADDER_WORK_TERM",(undefined **)0x21000013,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  if ((local_80 != 0) && (local_78 != 0)) {
    FUN_71038f55d0(local_80,-3);
  }
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_ID_KEEP_FLAG_GIMMICK_LADDER_FLAG",
                 (undefined **)0x0,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_ID_KEEP_FLAG_GIMMICK_LADDER_INT",
                 (undefined **)0x0,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_ID_KEEP_FLAG_GIMMICK_LADDER_FLOAT",
                 (undefined **)0x2180,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_70 = -3;
  local_80 = 0;
  local_78 = 0;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GIMMICK_BARREL_WORK_INT_START",
                 (undefined **)0x11000004,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GIMMICK_BARREL_WORK_INT_STEP",
                 (undefined **)0x11000005,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GIMMICK_BARREL_WORK_INT_NO_CATCH_BARREL",
                 (undefined **)0x11000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GIMMICK_BARREL_WORK_INT_BREAK_HITSTOP_FRAME",
                 (undefined **)0x11000007,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GIMMICK_BARREL_WORK_INT_EFFECT_ID",
                 (undefined **)0x11000008,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GIMMICK_BARREL_WORK_INT_SOOT_FRAME",
                 (undefined **)0x11000009,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GIMMICK_BARREL_WORK_INT_GROUND_FLAG",
                 (undefined **)0x1100000a,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GIMMICK_BARREL_WORK_FLOAT_START",
                 (undefined **)0x1000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GIMMICK_BARREL_WORK_FLOAT_FALL_SPEED",
                 (undefined **)0x1000007,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GIMMICK_BARREL_WORK_FLOAT_SHOOT_OFFSET_X",
                 (undefined **)0x1000008,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GIMMICK_BARREL_WORK_FLOAT_SHOOT_OFFSET_Y",
                 (undefined **)0x1000009,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GIMMICK_BARREL_WORK_FLOAT_SHOOT_SPEED_Z",
                 (undefined **)0x100000a,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GIMMICK_BARREL_WORK_FLOAT_SHOOT_SPEED_CONTROL",
                 (undefined **)0x100000b,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GIMMICK_BARREL_WORK_FLOAT_ARRIVAL_Z",
                 (undefined **)0x100000c,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GIMMICK_BARREL_WORK_FLOAT_HIT_Z",
                 (undefined **)0x100000d,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GIMMICK_BARREL_WORK_FLOAT_DAMAGE_REACTION_FRAME",
                 (undefined **)0x100000e,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GIMMICK_BARREL_FLAG_START",
                 (undefined **)0x2100000b,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GIMMICK_BARREL_FLAG_END_SPEED",
                 (undefined **)0x2100000c,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GIMMICK_BARREL_FLAG_MOVE_3D",
                 (undefined **)0x2100000d,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GIMMICK_BARREL_FLAG_MOVE_3D_END",
                 (undefined **)0x2100000e,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GIMMICK_BARREL_FLAG_UPDATE_DIRECTION",
                 (undefined **)0x2100000f,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GIMMICK_BARREL_FLAG_REMOVE_EFFECT",
                 (undefined **)0x21000010,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GIMMICK_BARREL_FLAG_END_BOUND",
                 (undefined **)0x21000011,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GIMMICK_BARREL_WORK_TERM",
                 (undefined **)0x21000012,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  if ((local_80 != 0) && (local_78 != 0)) {
    FUN_71038f55d0(local_80,local_70);
  }
  local_70 = 0xfffffffd;
  local_80 = 0;
  local_78 = 0;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GIMMICK_BARREL_STEP_IN",(undefined **)0x0,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GIMMICK_BARREL_STEP_SHOOT_WAIT",(undefined **)0x1
                 ,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GIMMICK_BARREL_STEP_SHOOT",(undefined **)0x2,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GIMMICK_BARREL_STEP_TERM",(undefined **)0x3,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_70 = 0xfffffffd;
  local_80 = 0;
  local_78 = 0;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GIMMICK_DOOR_WORK_INT_START",
                 (undefined **)0x11000004,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GIMMICK_DOOR_WORK_INT_STEP",
                 (undefined **)0x11000005,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GIMMICK_DOOR_WORK_FLOAT_START",
                 (undefined **)0x1000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GIMMICK_DOOR_WORK_FLOAT_CENTER_X",
                 (undefined **)0x1000007,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GIMMICK_DOOR_WORK_FLOAT_CENTER_Y",
                 (undefined **)0x1000008,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GIMMICK_DOOR_FLAG_START",(undefined **)0x2100000b
                 ,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GIMMICK_DOOR_FLAG_NO_INTO",
                 (undefined **)0x2100000c,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GIMMICK_DOOR_WORK_TERM",(undefined **)0x2100000d,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GIMMICK_SPRING_WORK_INT_START",
                 (undefined **)0x11000004,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GIMMICK_SPRING_WORK_INT_TERM",
                 (undefined **)0x11000005,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GIMMICK_SPRING_WORK_FLOAT_START",
                 (undefined **)0x1000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GIMMICK_SPRING_WORK_FLOAT_SHOOT_SPEED_Y",
                 (undefined **)0x1000007,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GIMMICK_SPRING_WORK_FLOAT_SHOOT_ANGLE",
                 (undefined **)0x1000008,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GIMMICK_SPRING_WORK_FLOAT_SAFE_POS_X",
                 (undefined **)0x1000009,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GIMMICK_SPRING_WORK_FLOAT_SAFE_POS_Y",
                 (undefined **)0x100000a,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GIMMICK_SPRING_WORK_FLOAT_TERM",
                 (undefined **)0x100000b,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GIMMICK_SPRING_FLAG_START",
                 (undefined **)0x2100000b,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GIMMICK_SPRING_FLAG_USE_SAFE_POS",
                 (undefined **)0x2100000c,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GIMMICK_SPRING_FLAG_TERM",
                 (undefined **)0x2100000d,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GIMMICK_SPRING_WORK_TERM",
                 (undefined **)0x2100000e,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_ID_KEEP_FLAG_GIMMICK_SPRING_JUMP_FLAG",
                 (undefined **)0x101000,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_ID_KEEP_FLAG_GIMMICK_SPRING_JUMP_INT",
                 (undefined **)0x0,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_ID_KEEP_FLAG_GIMMICK_SPRING_JUMP_FLOAT",
                 (undefined **)0x600,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GIMMICK_TRUCK_WORK_INT_START",
                 (undefined **)0x11000004,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GIMMICK_TRUCK_WORK_FLOAT_START",
                 (undefined **)0x1000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GIMMICK_TRUCK_WORK_FLOAT_SPEED_X",
                 (undefined **)0x1000007,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GIMMICK_TRUCK_WORK_FLOAT_SPEED_Y",
                 (undefined **)0x1000008,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GIMMICK_TRUCK_FLAG_START",
                 (undefined **)0x2100000b,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GIMMICK_TRUCK_FLAG_RUN",(undefined **)0x2100000c,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GIMMICK_TRUCK_WORK_TERM",(undefined **)0x2100000d
                 ,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GIMMICK_PIPE_WORK_INT_START",
                 (undefined **)0x11000004,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GIMMICK_PIPE_WORK_INT_STEP",
                 (undefined **)0x11000005,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GIMMICK_PIPE_WORK_INT_STOP_FRAME",
                 (undefined **)0x11000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GIMMICK_PIPE_WORK_INT_END_CHECK",
                 (undefined **)0x11000007,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GIMMICK_PIPE_WORK_INT_TERM",
                 (undefined **)0x11000008,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GIMMICK_PIPE_WORK_FLOAT_START",
                 (undefined **)0x1000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GIMMICK_PIPE_WORK_FLOAT_PLANE_X",
                 (undefined **)0x1000007,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GIMMICK_PIPE_WORK_FLOAT_PLANE_Y",
                 (undefined **)0x1000008,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GIMMICK_PIPE_WORK_FLOAT_PLANE_W",
                 (undefined **)0x1000009,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GIMMICK_PIPE_WORK_FLOAT_SCALE_FRAME",
                 (undefined **)0x100000a,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GIMMICK_PIPE_WORK_FLOAT_TERM",
                 (undefined **)0x100000b,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GIMMICK_PIPE_FLAG_START",(undefined **)0x2100000b
                 ,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GIMMICK_PIPE_FLAG_FALL",(undefined **)0x2100000c,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GIMMICK_PIPE_FLAG_TERM",(undefined **)0x2100000d,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GIMMICK_PIPE_WORK_TERM",(undefined **)0x2100000e,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_70 = 0xfffffffd;
  local_80 = 0;
  local_78 = 0;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GIMMICK_PIPE_STEP_START",(undefined **)0x0,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GIMMICK_PIPE_STEP_IN",(undefined **)0x1,ppppbVar1
                 ,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GIMMICK_PIPE_STEP_WAIT",(undefined **)0x2,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GIMMICK_PIPE_STEP_OUT",(undefined **)0x3,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_70 = 0xfffffffd;
  local_80 = 0;
  local_78 = 0;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GIMMICK_TORNADO_WORK_INT_START",
                 (undefined **)0x11000004,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GIMMICK_TORNADO_WORK_INT_REACTION_FRAME",
                 (undefined **)0x11000005,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GIMMICK_TORNADO_WORK_INT_TOUCH_CHECK_FRAME",
                 (undefined **)0x11000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GIMMICK_TORNADO_WORK_INT_SHOOT_LIMIT_FRAME",
                 (undefined **)0x11000007,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GIMMICK_TORNADO_WORK_INT_TERM",
                 (undefined **)0x11000008,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GIMMICK_TORNADO_WORK_FLOAT_START",
                 (undefined **)0x1000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GIMMICK_TORNADO_WORK_FLOAT_ANGLE",
                 (undefined **)0x1000007,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GIMMICK_TORNADO_WORK_FLOAT_TERM",
                 (undefined **)0x1000008,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GIMMICK_TORNADO_FLAG_START",
                 (undefined **)0x2100000b,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GIMMICK_TORNADO_FLAG_CHANGE_MOTION",
                 (undefined **)0x2100000c,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GIMMICK_TORNADO_FLAG_SHOOT",
                 (undefined **)0x2100000d,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GIMMICK_TORNADO_FLAG_TERM",
                 (undefined **)0x2100000e,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GIMMICK_TORNADO_WORK_TERM",
                 (undefined **)0x2100000f,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_70 = 0xfffffffd;
  local_80 = 0;
  local_78 = 0;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DRUM_WORK_INT_START",(undefined **)0x11000004,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DRUM_WORK_FLOAT_START",(undefined **)0x1000006,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DRUM_WORK_FLOAT_CLATTER_TIME",
                 (undefined **)0x1000007,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DRUM_FLAG_START",(undefined **)0x2100000b,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DRUM_FLAG_IS_EXIT_CLATTER",
                 (undefined **)0x2100000c,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DRUM_FLAG_IS_BROKEN_DRUM",
                 (undefined **)0x2100000d,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DRUM_FLAG_IS_HIDE",(undefined **)0x2100000e,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DRUM_FLAG_IS_NEED_BIND",(undefined **)0x2100000f,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DRUM_WORK_TERM",(undefined **)0x21000010,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_70 = 0xfffffffd;
  local_80 = 0;
  local_78 = 0;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GIMMICK_ODIN_SLASHED_WORK_INT_START",
                 (undefined **)0x11000004,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GIMMICK_ODIN_SLASHED_WORK_FLOAT_START",
                 (undefined **)0x1000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GIMMICK_ODIN_SLASHED_FLAG_START",
                 (undefined **)0x2100000b,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GIMMICK_ODIN_SLASHED_FLAG_EXIT_STATUS",
                 (undefined **)0x2100000c,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ODIN_SLASHED_WORK_TERM",(undefined **)0x2100000d,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DOLLY_STAGE_DEAD_WORK_INT_START",
                 (undefined **)0x11000004,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DOLLY_STAGE_DEAD_WORK_FLOAT_START",
                 (undefined **)0x1000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DOLLY_STAGE_DEAD_WORK_FLOAT_ROT_X",
                 (undefined **)0x1000007,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DOLLY_STAGE_DEAD_WORK_FLOAT_START_DAMAGE_SPEED_X"
                 ,(undefined **)0x1000008,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DOLLY_STAGE_DEAD_WORK_FLOAT_START_DAMAGE_SPEED_Y"
                 ,(undefined **)0x1000009,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,
                 (uint *)"FIGHTER_STATUS_DOLLY_STAGE_DEAD_WORK_FLOAT_START_GRAVITY_SPEED_Y",
                 (undefined **)0x100000a,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DOLLY_STAGE_DEAD_WORK_FLAG_START",
                 (undefined **)0x2100000b,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,
                 (uint *)"FIGHTER_STATUS_DOLLY_STAGE_DEAD_WORK_FLAG_START_SHAKE_AFTER_STOP",
                 (undefined **)0x2100000c,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,
                 (uint *)"FIGHTER_STATUS_DOLLY_STAGE_DEAD_WORK_FLAG_REVERT_SPEED_AFTER_CUTIN",
                 (undefined **)0x2100000d,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DOLLY_STAGE_DEAD_WORK_TERM",
                 (undefined **)0x2100000e,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GIMMICK_JUMP_BOARD_WORK_INT_START",
                 (undefined **)0x11000004,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GIMMICK_JUMP_BOARD_WORK_INT_XLU_FRAME",
                 (undefined **)0x11000005,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GIMMICK_JUMP_BOARD_WORK_INT_ATTACK_COUNT",
                 (undefined **)0x11000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GIMMICK_JUMP_BOARD_WORK_INT_ACCEL_CHANGE_COUNT",
                 (undefined **)0x11000007,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GIMMICK_JUMP_BOARD_WORK_INT_JUMP_EFFECT_HANDLE_A"
                 ,(undefined **)0x11000008,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,
                 (uint *)"FIGHTER_STATUS_GIMMICK_JUMP_BOARD_WORK_INT_JUMP_EFFECT_HANDLE_STAR",
                 (undefined **)0x11000009,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GIMMICK_JUMP_BOARD_WORK_FLOAT_START",
                 (undefined **)0x100000a,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GIMMICK_JUMP_BOARD_WORK_FLOAT_HEIGHT",
                 (undefined **)0x100000b,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GIMMICK_JUMP_BOARD_WORK_FLOAT_ACCEL_Y",
                 (undefined **)0x100000c,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GIMMICK_JUMP_BOARD_WORK_FLOAT_AFTER_ACCEL_Y",
                 (undefined **)0x100000d,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GIMMICK_JUMP_BOARD_WORK_FLAG_START",
                 (undefined **)0x2100000c,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GIMMICK_JUMP_BOARD_WORK_FLAG_TO_JUMP",
                 (undefined **)0x2100000d,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GIMMICK_JUMP_BOARD_WORK_FLAG_JUMP_MINI",
                 (undefined **)0x2100000e,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GIMMICK_JUMP_BOARD_WORK_TERM",
                 (undefined **)0x2100000f,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_ID_KEEP_FLAG_GIMMICK_JUMP_BOARD_JUMP_FLAG",
                 (undefined **)0x105000,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_ID_KEEP_FLAG_GIMMICK_JUMP_BOARD_JUMP_INT",
                 (undefined **)&DAT_000000e0,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_ID_KEEP_FLAG_GIMMICK_JUMP_BOARD_JUMP_FLOAT",
                 (undefined **)0x3f00,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_70 = 0xfffffffd;
  local_80 = 0;
  local_78 = 0;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GLIDE_FLAG_START",(undefined **)0x2100000b,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GLIDE_FLAG_STOP",(undefined **)0x2100000c,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GLIDE_FLAG_LANDING",(undefined **)0x2100000d,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GLIDE_FLAG_RAPID_FALL",(undefined **)0x2100000e,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GLIDE_FLAG_TOUCH_GROUND",(undefined **)0x2100000f
                 ,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GLIDE_WORK_FLOAT_START",(undefined **)0x1000006,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GLIDE_WORK_FLOAT_ANGLE",(undefined **)0x1000007,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GLIDE_WORK_FLOAT_POWER",(undefined **)0x1000008,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GLIDE_WORK_FLOAT_GRAVITY",(undefined **)0x1000009
                 ,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GLIDE_WORK_FLOAT_ANGLE_SPEED",
                 (undefined **)0x100000a,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GLIDE_WORK_INT_START",(undefined **)0x11000004,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GLIDE_WORK_RAPID_FALL_COUNT",
                 (undefined **)0x11000005,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GLIDE_WORK_TERM",(undefined **)0x11000006,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_70 = -3;
  local_80 = 0;
  local_78 = 0;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GUARD_ON_WORK_INT_START",(undefined **)0x11000004
                 ,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GUARD_ON_WORK_INT_MIN_FRAME",
                 (undefined **)0x11000005,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GUARD_ON_WORK_INT_JUST_FRAME",
                 (undefined **)0x11000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GUARD_ON_WORK_INT_CATCH_FRAME",
                 (undefined **)0x11000007,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GUARD_ON_WORK_INT_LANDING_EFFECT_FRAME",
                 (undefined **)0x11000008,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GUARD_ON_WORK_INT_JUST_SHEILD_COUNT",
                 (undefined **)0x11000009,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GUARD_ON_WORK_INT_SHIELD_DAMAGE_EFFECT_HANDLE",
                 (undefined **)0x1100000a,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GUARD_ON_WORK_INT_SHIELD_DAMAGE2_EFFECT_HANDLE",
                 (undefined **)0x1100000b,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GUARD_ON_WORK_INT_SCALE_FADE_START_FRAME",
                 (undefined **)0x1100000c,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GUARD_ON_WORK_INT_TERM",(undefined **)0x1100000d,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GUARD_ON_WORK_FLOAT_START",
                 (undefined **)0x1000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GUARD_ON_WORK_FLOAT_PREV_X",
                 (undefined **)0x1000007,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GUARD_ON_WORK_FLOAT_PREV_Y",
                 (undefined **)0x1000008,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GUARD_ON_WORK_FLOAT_REACH_PREV_X",
                 (undefined **)0x1000009,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GUARD_ON_WORK_FLOAT_REACH_PREV_Y",
                 (undefined **)0x100000a,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GUARD_ON_WORK_FLOAT_DELAY_MUL",
                 (undefined **)0x100000b,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GUARD_ON_WORK_FLOAT_TERM",(undefined **)0x100000c
                 ,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GUARD_ON_WORK_FLAG_START",
                 (undefined **)0x2100000b,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GUARD_ON_WORK_FLAG_EFFECT",
                 (undefined **)0x2100000c,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GUARD_ON_WORK_FLAG_IS_DONE_GUARD_DAMAGE_NUM",
                 (undefined **)0x2100000d,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GUARD_ON_WORK_FLAG_JUST_SHIELD",
                 (undefined **)0x2100000e,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GUARD_ON_WORK_FLAG_DISABLE_HIT_STOP_DELAY_STICK",
                 (undefined **)0x2100000f,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GUARD_ON_WORK_FLAG_HIT_XLU",
                 (undefined **)0x21000010,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GUARD_ON_WORK_FLAG_JUST_SHIELD_SLOW_WHOLE",
                 (undefined **)0x21000011,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GUARD_ON_WORK_FLAG_SPECIAL_HI",
                 (undefined **)0x21000012,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GUARD_ON_WORK_FLAG_TERM",(undefined **)0x21000013
                 ,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  if ((local_80 != 0) && (local_78 != 0)) {
    FUN_71038f55d0(local_80,local_70);
  }
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_GUARD_FLAG",(undefined **)0x42000,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_GUARD_INT",
                 (undefined **)&DAT_00000120,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_GUARD_FLOAT",(undefined **)0x780,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GUARD_OFF_WORK_INT_START",
                 (undefined **)0x1100000d,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GUARD_OFF_WORK_INT_CANCEL_FRAME",
                 (undefined **)0x1100000e,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GUARD_OFF_TERM",(undefined **)0x1100000f,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_GUARD_OFF_FLAG",(undefined **)0x0,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_GUARD_OFF_INT",(undefined **)0x0,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_GUARD_OFF_FLOAT",(undefined **)0x0
                 ,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GUARD_DAMAGE_WORK_FLAG_START",
                 (undefined **)0x21000013,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GUARD_DAMAGE_WORK_FLAG_GOLD_EYE",
                 (undefined **)0x21000014,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GUARD_DAMAGE_WORK_INT_START",
                 (undefined **)0x1100000d,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GUARD_DAMAGE_WORK_INT_STIFF_FRAME",
                 (undefined **)0x1100000e,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GUARD_DAMAGE_WORK_INT_OBJECT_ID",
                 (undefined **)0x1100000f,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GUARD_DAMAGE_WORK_INT_DAMAGE",
                 (undefined **)0x11000010,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GUARD_DAMAGE_WORK_INT_PREV_SHIELD_SCALE_FRAME",
                 (undefined **)0x11000011,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GUARD_DAMAGE_WORK_FLOAT_START",
                 (undefined **)0x100000c,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GUARD_DAMAGE_WORK_FLOAT_SHIELD_POWER",
                 (undefined **)0x100000d,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GUARD_DAMAGE_WORK_FLOAT_SHIELD_LR",
                 (undefined **)0x100000e,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GUARD_DAMAGE_WORK_FLOAT_PREV_SHIELD",
                 (undefined **)&DAT_0100000f,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GUARD_DAMAGE_WORK_FLOAT_HIT_STOP_FRAME",
                 (undefined **)0x1000010,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GUARD_DAMAGE_WORK_FLOAT_SHIELD_SETOFF_MUL",
                 (undefined **)0x1000011,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GUARD_DAMAGE_WORK_FLOAT_DELAY_MUL",
                 (undefined **)0x100000b,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_GUARD_DAMAGE_TERM",(undefined **)0x100000c,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_GUARD_DAMAGE_FLAG",
                 (undefined **)0x6000,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_GUARD_DAMAGE_INT",
                 (undefined **)0x18360,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_GUARD_DAMAGE_FLOAT",
                 (undefined **)0x3ef80,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SHIELD_GUARD_WORK_INT_START",
                 (undefined **)0x11000004,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SHIELD_GUARD_WORK_INT_DUMMY",
                 (undefined **)0x1100000e,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SHIELD_GUARD_WORK_INT_FRAME",
                 (undefined **)0x1100000f,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SHIELD_GUARD_WORK_FLAG_START",
                 (undefined **)0x2100000b,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SHIELD_GUARD_WORK_FLAG_DUMMY",
                 (undefined **)0x21000015,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SHIELD_GUARD_WORK_FLAG_SQUAT",
                 (undefined **)0x21000016,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SHIELD_GUARD_WORK_INT_TERM",
                 (undefined **)0x21000017,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_HAMMER_FLAG_START",(undefined **)0x2100000b,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_HAMMER_FLAG_BUTTON_JUMP",(undefined **)0x2100000c
                 ,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_HAMMER_FLAG_CHANGE_COLANIM",
                 (undefined **)0x2100000d,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_HAMMER_FLAG_BLINK_HAMMER",
                 (undefined **)0x2100000e,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_HAMMER_FLAG_BGM_STARTED",(undefined **)0x2100000f
                 ,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_HAMMER_INT_START",(undefined **)0x11000004,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_HAMMER_INT_COUNTER",(undefined **)0x11000005,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_HAMMER_INT_DISCONNECT_FRAME",
                 (undefined **)0x11000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_HAMMER_INT_DRIFT_FRAME",(undefined **)0x11000007,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_HAMMER_INT_DRIFT_PAST_FRAME",
                 (undefined **)0x11000008,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_HAMMER_INT_DRIFT_DEC_COUNT",
                 (undefined **)0x11000009,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_HAMMER_INT_MOTION_KIND",(undefined **)0x1100000a,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_HAMMER_FLOAT_START",(undefined **)0x1000006,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_HAMMER_WALK_FLOAT_SPEED",(undefined **)0x1000007,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_HAMMER_TERM",(undefined **)0x1000008,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  local_70 = 0xfffffffd;
  local_80 = 0;
  local_78 = 0;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_HAMMER_FLAG",(undefined **)0xe000,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_HAMMER_INT",
                 (undefined **)&DAT_000000c0,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_HAMMER_FLOAT",(undefined **)0x0,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ICE_WORK_INT_START",(undefined **)0x11000004,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ICE_WORK_INT_FRAME",(undefined **)0x11000005,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ICE_WORK_INT_EFFECT",(undefined **)0x11000006,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ICE_WORK_INT_NO_GROUND_FRAME",
                 (undefined **)0x11000007,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ICE_WORK_INT_PREV_SHAPE_KIND",
                 (undefined **)0x11000008,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ICE_WORK_FLOAT_START",(undefined **)0x1000006,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ICE_WORK_FLOAT_ROT_X",(undefined **)0x1000007,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ICE_WORK_FLOAT_ROT_X_SPEED",
                 (undefined **)0x1000008,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ICE_FLAG_START",(undefined **)0x2100000b,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ICE_FLAG_CONTINUE",(undefined **)0x2100000c,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ICE_FLAG_TOUCH_GROUND",(undefined **)0x2100000d,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ICE_FLAG_MTRANS_AIR",(undefined **)0x2100000e,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ICE_WORK_TERM",(undefined **)0x2100000f,ppppbVar1
                 ,in_x4,in_x5,in_x6,in_x7);
  local_70 = 0xfffffffd;
  local_80 = 0;
  local_78 = 0;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_ICE_FLAG",
                 (undefined **)&DAT_00001000,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_ICE_INT",
                 (undefined **)&DAT_00000160,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_ICE_FLOAT",
                 (undefined **)&DAT_00000080,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_70 = 0xfffffffd;
  local_80 = 0;
  local_78 = 0;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_GRASS_PULL_WORK_INT_START",
                 (undefined **)0x11000004,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_GRASS_PULL_WORK_INT_STEP",
                 (undefined **)0x11000005,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_GRASS_PULL_WORK_INT_NEXT_STEP",
                 (undefined **)0x11000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,
                 (uint *)"FIGHTER_STATUS_ITEM_GRASS_PULL_WORK_INT_PICKABLE_ITEM_GRASS_OBJECT_ID",
                 (undefined **)0x11000007,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_GRASS_PULL_WORK_INT_ITEM_POINTER",
                 (undefined **)0x11000008,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,
                 (uint *)"FIGHTER_STATUS_ITEM_GRASS_PULL_WORK_INT_THROW_N_OFFSET_ANIM_FRAME_COUNT",
                 (undefined **)0x11000009,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,
                 (uint *)
                 "FIGHTER_STATUS_ITEM_GRASS_PULL_WORK_INT_THROW_N_OFFSET_ANIM_FRAME_COUNT_MAX",
                 (undefined **)0x1100000a,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_GRASS_PULL_WORK_FLOAT_START",
                 (undefined **)0x1000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,
                 (uint *)
                 "FIGHTER_STATUS_ITEM_GRASS_PULL_WORK_FLOAT_THROW_N_OFFSET_ANIM_START_MOT_FRAME",
                 (undefined **)0x1000007,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_GRASS_PULL_FLAG_START",
                 (undefined **)0x2100000b,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_GRASS_PULL_FLAG_PICKUP_FAILED",
                 (undefined **)0x2100000c,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_GRASS_PULL_FLAG_STTUS_END_IF_PICKUP_FAILED",
                 (undefined **)0x2100000d,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_70 = 0xfffffffd;
  local_80 = 0;
  local_78 = 0;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_ITEM_GRASS_PULL_STEP_NONE",(undefined **)0x0,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_ITEM_GRASS_PULL_STEP_START",(undefined **)0x1,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_ITEM_GRASS_PULL_STEP_PICKUP",(undefined **)0x2,ppppbVar1
                 ,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_ITEM_GRASS_PULL_STEP_PULL",(undefined **)0x3,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_ITEM_GRASS_PULL_STEP_HOIST",(undefined **)&DAT_00000004,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_ITEM_GRASS_PULL_STEP_END",(undefined **)0x5,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_ROCKETBELT_HOVER_WORK_INT_START",
                 (undefined **)0x11000004,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_ROCKETBELT_HOVER_WORK_INT_HOVER_FRAME",
                 (undefined **)0x11000005,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_ROCKETBELT_HOVER_WORK_FLOAT_START",
                 (undefined **)0x1000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_ROCKETBELT_HOVER_FLAG_START",
                 (undefined **)0x2100000b,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_ROCKETBELT_HOVER_FLAG_PUSH_BUTTON",
                 (undefined **)0x2100000c,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_ROCKETBELT_HOVER_FLAG_FIRST_SUB_ENERGY",
                 (undefined **)0x2100000d,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_ROCKETBELT_HOVER_FLAG_FIRE",
                 (undefined **)0x2100000e,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_ROCKETBELT_HOVER_FLAG_SMOKE",
                 (undefined **)0x2100000f,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_ROCKETBELT_HOVER_FLAG_JET_ON",
                 (undefined **)0x21000010,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_ROCKETBELT_HOVER_FLAG_ROCKETBELT_REPLACE",
                 (undefined **)0x21000011,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = -3;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SHOOT_WORK_FLAG_START",
                 (undefined **)0x2100000b,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SHOOT_WORK_FLAG_PASS",
                 (undefined **)0x2100000c,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SHOOT_WORK_FLAG_JUMP_FLAG_BUTTON",
                 (undefined **)0x2100000d,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SHOOT_WORK_FLAG_TO_DASH",
                 (undefined **)0x2100000e,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SHOOT_WORK_FLAG_FROM_TURN_RUN",
                 (undefined **)0x2100000f,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SHOOT_WORK_FLAG_JUMP_FLY_NEXT",
                 (undefined **)0x21000010,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SHOOT_WORK_FLAG_CANCEL",
                 (undefined **)0x21000011,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SHOOT_WORK_FLAG_COMMON_TERM",
                 (undefined **)0x21000012,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SHOOT_WORK_FLAG_RESERVED_START",
                 (undefined **)0x21000011,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SHOOT_WORK_FLAG_RESERVED_0",
                 (undefined **)0x21000012,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SHOOT_WORK_FLAG_RESERVED_1",
                 (undefined **)0x21000013,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SHOOT_WORK_FLAG_RESERVED_2",
                 (undefined **)0x21000014,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SHOOT_WORK_FLAG_RESERVED_3",
                 (undefined **)0x21000015,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SHOOT_WORK_FLAG_TERM",
                 (undefined **)0x21000016,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SHOOT_WORK_FLAG_LGUN_START",
                 (undefined **)0x21000011,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SHOOT_WORK_FLAG_LGUN_TERM",
                 (undefined **)0x21000012,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SHOOT_WORK_FLAG_FFLOWER_START",
                 (undefined **)0x21000011,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SHOOT_WORK_FLAG_FFLOWER_SHOOT",
                 (undefined **)0x21000012,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SHOOT_WORK_FLAG_FFLOWER_RELEASE",
                 (undefined **)0x21000013,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SHOOT_WORK_FLAG_FFLOWER_TERM",
                 (undefined **)0x21000014,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SHOOT_WORK_FLAG_SSCOPE_START",
                 (undefined **)0x21000011,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SHOOT_WORK_FLAG_SSCOPE_RELEASE",
                 (undefined **)0x21000012,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SHOOT_WORK_FLAG_SSCOPE_SHOOT",
                 (undefined **)0x21000013,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SHOOT_WORK_FLAG_SSCOPE_AERIAL_REQ_EFFECT",
                 (undefined **)0x21000014,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SHOOT_WORK_FLAG_SSCOPE_AERIAL_REQ_SOUND",
                 (undefined **)0x21000015,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SHOOT_WORK_FLAG_SSCOPE_TERM",
                 (undefined **)0x21000016,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SHOOT_WORK_FLAG_CLAUNCHER_START",
                 (undefined **)0x21000011,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SHOOT_WORK_FLAG_CLAUNCHER_ROT_WHOLE",
                 (undefined **)0x21000012,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SHOOT_WORK_FLAG_CLAUNCHER_TERM",
                 (undefined **)0x21000013,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SHOOT_WORK_FLAG_MAGICPOT_START",
                 (undefined **)0x21000011,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SHOOT_WORK_FLAG_MAGICPOT_RELEASE",
                 (undefined **)0x21000012,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SHOOT_WORK_FLAG_FIRST_SMOKE_EFFECT",
                 (undefined **)0x21000013,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SHOOT_WORK_FLAG_MAGICPOT_TERM",
                 (undefined **)0x21000014,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SHOOT_WORK_FLAG_STAFF_START",
                 (undefined **)0x21000011,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SHOOT_WORK_FLAG_STAFF_MOTION_RATE",
                 (undefined **)0x21000012,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SHOOT_WORK_FLAG_STAFF_STOP",
                 (undefined **)0x21000013,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SHOOT_WORK_FLAG_STAFF_NO_STOP_ONCE",
                 (undefined **)0x21000014,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SHOOT_WORK_FLAG_STAFF_TERM",
                 (undefined **)0x21000015,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SHOOT_WORK_FLAG_REVENGESHOOTER_START",
                 (undefined **)0x21000011,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SHOOT_WORK_FLAG_REVENGESHOOTER_MOTION_RATE",
                 (undefined **)0x21000012,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SHOOT_WORK_FLAG_REVENGESHOOTER_TERM",
                 (undefined **)0x21000013,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SHOOT_WORK_FLAG_GENESIS_START",
                 (undefined **)0x21000011,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,
                 (uint *)"FIGHTER_STATUS_ITEM_SHOOT_WORK_FLAG_GENESIS_INTERRUPTED_CHANGE_STATUS",
                 (undefined **)0x21000012,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SHOOT_WORK_FLAG_GENESIS_TERM",
                 (undefined **)0x21000013,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SHOOT_WORK_FLOAT_START",
                 (undefined **)0x100000a,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SHOOT_WORK_FLOAT_UPPER_FRAME",
                 (undefined **)0x100000b,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SHOOT_WORK_FLOAT_UPPER_RATE",
                 (undefined **)0x100000c,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SHOOT_WORK_FLOAT_HOLD_FRAME",
                 (undefined **)0x100000d,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SHOOT_WORK_FLOAT_COMMON_TERM",
                 (undefined **)0x100000e,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SHOOT_WORK_FLOAT_RESERVED_START",
                 (undefined **)0x100000d,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SHOOT_WORK_FLOAT_RESERVED_0",
                 (undefined **)0x100000e,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SHOOT_WORK_FLOAT_RESERVED_1",
                 (undefined **)&DAT_0100000f,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SHOOT_WORK_FLOAT_TERM",
                 (undefined **)0x1000010,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SHOOT_WORK_FLOAT_LGUN_START",
                 (undefined **)0x100000d,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SHOOT_WORK_FLOAT_LGUN_TERM",
                 (undefined **)0x100000e,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SHOOT_WORK_FLOAT_FFLOWER_START",
                 (undefined **)0x100000d,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SHOOT_WORK_FLOAT_FFLOWER_TERM",
                 (undefined **)0x100000e,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SHOOT_WORK_FLOAT_SSCOPE_START",
                 (undefined **)0x100000d,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SHOOT_WORK_FLOAT_SSCOPE_TERM",
                 (undefined **)0x100000e,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SHOOT_WORK_FLOAT_CLAUNCHER_START",
                 (undefined **)0x100000d,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SHOOT_WORK_FLOAT_CLAUNCHER_ANGLE",
                 (undefined **)0x100000e,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SHOOT_WORK_FLOAT_CLAUNCHER_ANGLE_ADD",
                 (undefined **)&DAT_0100000f,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SHOOT_WORK_FLOAT_CLAUNCHER_TERM",
                 (undefined **)0x1000010,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SHOOT_WORK_FLOAT_MAGICPOT_START",
                 (undefined **)0x100000d,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SHOOT_WORK_FLOAT_MAGICPOT_TERM",
                 (undefined **)0x100000e,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SHOOT_WORK_FLOAT_STAFF_START",
                 (undefined **)0x100000d,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SHOOT_WORK_FLOAT_STAFF_MOTION_RATE",
                 (undefined **)0x100000e,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SHOOT_WORK_FLOAT_STAFF_TERM",
                 (undefined **)&DAT_0100000f,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SHOOT_WORK_FLOAT_REVENGESHOOTER_START",
                 (undefined **)0x100000d,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,
                 (uint *)"FIGHTER_STATUS_ITEM_SHOOT_WORK_FLOAT_REVENGESHOOTER_MIN_MOTION_RATE",
                 (undefined **)0x100000e,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,
                 (uint *)"FIGHTER_STATUS_ITEM_SHOOT_WORK_FLOAT_REVENGESHOOTER_MAX_MOTION_RATE",
                 (undefined **)&DAT_0100000f,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SHOOT_WORK_FLOAT_REVENGESHOOTER_TERM",
                 (undefined **)0x1000010,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SHOOT_WORK_INT_START",
                 (undefined **)0x11000004,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SHOOT_WORK_INT_ITEM_KIND",
                 (undefined **)0x11000005,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SHOOT_WORK_INT_STATUS_KIND_WAIT",
                 (undefined **)0x11000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SHOOT_WORK_INT_STATUS_KIND_WALK_F",
                 (undefined **)0x11000007,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SHOOT_WORK_INT_STATUS_KIND_WALK_B",
                 (undefined **)0x11000008,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SHOOT_WORK_INT_STATUS_KIND_WALK_BRAKE_F",
                 (undefined **)0x11000009,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SHOOT_WORK_INT_STATUS_KIND_WALK_BRAKE_B",
                 (undefined **)0x1100000a,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SHOOT_WORK_INT_STATUS_KIND_DASH_F",
                 (undefined **)0x1100000b,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SHOOT_WORK_INT_STATUS_KIND_DASH_B",
                 (undefined **)0x1100000c,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SHOOT_WORK_INT_STATUS_KIND_TURN",
                 (undefined **)0x1100000d,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SHOOT_WORK_INT_STATUS_KIND_AIR",
                 (undefined **)0x1100000e,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SHOOT_WORK_INT_STATUS_KIND_JUMP",
                 (undefined **)0x1100000f,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SHOOT_WORK_INT_STATUS_KIND_JUMP_SQUAT",
                 (undefined **)0x11000010,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SHOOT_WORK_INT_STATUS_KIND_JUMP_AERIAL",
                 (undefined **)0x11000011,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SHOOT_WORK_INT_STATUS_KIND_FLY",
                 (undefined **)0x11000012,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SHOOT_WORK_INT_STATUS_KIND_LANDING",
                 (undefined **)0x11000013,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SHOOT_WORK_INT_COMMON_TERM",
                 (undefined **)0x11000014,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SHOOT_WORK_INT_RESERVED_START",
                 (undefined **)0x11000013,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SHOOT_WORK_INT_RESERVED_0",
                 (undefined **)0x11000014,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SHOOT_WORK_INT_RESERVED_1",
                 (undefined **)0x11000015,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SHOOT_WORK_INT_RESERVED_2",
                 (undefined **)0x11000016,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SHOOT_WORK_INT_RESERVED_3",
                 (undefined **)0x11000017,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SHOOT_WORK_INT_TERM",
                 (undefined **)0x11000018,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SHOOT_WORK_INT_LGUN_START",
                 (undefined **)0x11000013,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SHOOT_WORK_INT_LGUN_TERM",
                 (undefined **)0x11000014,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SHOOT_WORK_INT_FFLOWER_START",
                 (undefined **)0x11000013,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SHOOT_WORK_INT_FFLOWER_STEP",
                 (undefined **)0x11000014,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SHOOT_WORK_INT_FFLOWER_SHOOT_COUNT",
                 (undefined **)0x11000015,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SHOOT_WORK_INT_FFLOWER_COUNTER",
                 (undefined **)0x11000016,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SHOOT_WORK_INT_FFLOWER_TERM",
                 (undefined **)0x11000017,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SHOOT_WORK_INT_SSCOPE_START",
                 (undefined **)0x11000013,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SHOOT_WORK_INT_SSCOPE_STEP",
                 (undefined **)0x11000014,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SHOOT_WORK_INT_SSCOPE_BULLET",
                 (undefined **)0x11000015,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SHOOT_WORK_INT_SSCOPE_CHARGE",
                 (undefined **)0x11000016,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SHOOT_WORK_INT_SSCOPE_TERM",
                 (undefined **)0x11000017,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SHOOT_WORK_INT_CLAUNCHER_START",
                 (undefined **)0x11000013,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SHOOT_WORK_INT_CLAUNCHER_STEP",
                 (undefined **)0x11000014,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SHOOT_WORK_INT_CLAUNCHER_TERM",
                 (undefined **)0x11000015,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SHOOT_WORK_INT_MAGICPOT_START",
                 (undefined **)0x11000013,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SHOOT_WORK_INT_MAGICPOT_STEP",
                 (undefined **)0x11000014,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SHOOT_WORK_INT_MAGICPOT_SHOOT_COUNT",
                 (undefined **)0x11000015,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SHOOT_WORK_INT_MAGICPOT_COUNTER",
                 (undefined **)0x11000016,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SHOOT_WORK_INT_MAGICPOT_EFFECT_COUNTER",
                 (undefined **)0x11000017,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SHOOT_WORK_INT_MAGICPOT_TERM",
                 (undefined **)0x11000018,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SHOOT_WORK_INT_STAFF_START",
                 (undefined **)0x11000013,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SHOOT_WORK_INT_STAFF_STOP_FRAME",
                 (undefined **)0x11000014,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SHOOT_WORK_INT_STAFF_STOP_FRAME_COUNT",
                 (undefined **)0x11000015,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SHOOT_WORK_INT_STAFF_TERM",
                 (undefined **)0x11000016,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SHOOT_WORK_TERM",(undefined **)0x11000017,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  if ((local_80 != 0) && (local_78 != 0)) {
    FUN_71038f55d0(local_80,local_70);
  }
  local_70 = 0xfffffffd;
  local_80 = 0;
  local_78 = 0;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_ITEM_SHOOT_FLAG",
                 (undefined **)0x1e4008,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_ITEM_SHOOT_INT",
                 (undefined **)0x79dfc0,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_ITEM_SHOOT_FLOAT",
                 (undefined **)0xfc80,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_SSCOPE_STEP_START",(undefined **)0x0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_SSCOPE_STEP_RAPID",(undefined **)0x1,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_SSCOPE_STEP_HOLD",(undefined **)0x2,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_SSCOPE_STEP_HOLD_FIRE",(undefined **)0x3,ppppbVar1,in_x4
                 ,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_SSCOPE_STEP_END",(undefined **)&DAT_00000004,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_SSCOPE_STEP_TERM",(undefined **)0x5,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_FFLOWER_STEP_START",(undefined **)0x0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_FFLOWER_STEP_HOLD",(undefined **)0x1,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_FFLOWER_STEP_END",(undefined **)0x2,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_FFLOWER_STEP_TERM",(undefined **)0x3,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_CLAUNCHER_STEP_HOLD",(undefined **)0x0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_CLAUNCHER_STEP_FIRE",(undefined **)0x1,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_CLAUNCHER_STEP_TERM",(undefined **)0x2,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_MAGICPOT_STEP_START",(undefined **)0x0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_MAGICPOT_STEP_HOLD",(undefined **)0x1,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_MAGICPOT_STEP_END",(undefined **)0x2,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_MAGICPOT_STEP_TERM",(undefined **)0x3,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  local_70 = 0xfffffffd;
  local_80 = 0;
  local_78 = 0;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SPECIALFLAG_HOIST_WORK_INT_START",
                 (undefined **)0x11000004,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SPECIALFLAG_HOIST_WORK_INT_HOST_FRAME",
                 (undefined **)0x11000005,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SPECIALFLAG_HOIST_WORK_FLOAT_START",
                 (undefined **)0x1000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,
                 (uint *)"FIGHTER_STATUS_ITEM_SPECIALFLAG_HOIST_WORK_FLOAT_MOTION_FRAME_BACKUP",
                 (undefined **)0x1000007,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SPECIALFLAG_HOIST_WORK_FLAG_START",
                 (undefined **)0x2100000b,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SPECIALFLAG_HOIST_WORK_FLAG_HOIST_START",
                 (undefined **)0x2100000c,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SPECIALFLAG_HOIST_WORK_FLAG_HOIST_KEEP",
                 (undefined **)0x2100000d,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_SPECIALFLAG_HOIST_WORK_FLAG_HOIST_END",
                 (undefined **)0x2100000e,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_STARRING_WORK_ID_FLAG_START",
                 (undefined **)0x2100000b,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_STARRING_WORK_ID_FLAG_TERM",
                 (undefined **)0x2100000c,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_STARRING_WORK_ID_INT_START",
                 (undefined **)0x11000004,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_STARRING_WORK_ID_INT_SHOOT_NO_INHALE_FRAME",
                 (undefined **)0x11000005,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_STARRING_WORK_ID_INT_SHOOT_FRAME",
                 (undefined **)0x11000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,
                 (uint *)"FIGHTER_STATUS_ITEM_STARRING_WORK_ID_INT_SHOOT_NO_PASSABLE_FRAME",
                 (undefined **)0x11000007,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_STARRING_WORK_ID_INT_TERM",
                 (undefined **)0x11000008,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_STARRING_WORK_ID_FLOAT_START",
                 (undefined **)0x1000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_STARRING_WORK_ID_FLOAT_CATCH_POS_X",
                 (undefined **)0x1000007,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_STARRING_WORK_ID_FLOAT_CATCH_POS_Y",
                 (undefined **)0x1000008,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_STARRING_WORK_ID_FLOAT_INHALE_SPEED",
                 (undefined **)0x1000009,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_STARRING_WORK_ID_FLOAT_SHOOT_SPEED_X",
                 (undefined **)0x100000a,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_STARRING_WORK_ID_FLOAT_SHOOT_SPEED_Y",
                 (undefined **)0x100000b,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,
                 (uint *)"FIGHTER_STATUS_ITEM_STARRING_WORK_ID_FLOAT_GROUND_SAFE_POS_OFFSET_Y",
                 (undefined **)0x100000c,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_STARRING_WORK_ID_FLOAT_ANGLE",
                 (undefined **)0x100000d,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_STARRING_WORK_ID_FLOAT_TERM",
                 (undefined **)0x100000e,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  if ((local_80 != 0) && (local_78 != 0)) {
    FUN_71038f55d0(local_80,-3);
  }
  local_70 = 0xfffffffd;
  local_80 = 0;
  local_78 = 0;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_KAWASAKI_WORK_INT_START",
                 (undefined **)0x11000004,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_KAWASAKI_WORK_INT_FLY_COUNT",
                 (undefined **)0x11000005,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_KAWASAKI_WORK_FLOAT_START",
                 (undefined **)0x1000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_KAWASAKI_WORK_FLOAT_PRE_POT_X",
                 (undefined **)0x1000007,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_KAWASAKI_WORK_FLOAT_PRE_POT_Y",
                 (undefined **)0x1000008,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_KAWASAKI_WORK_FLOAT_PRE_POT_Z",
                 (undefined **)0x1000009,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_KAWASAKI_FLAG_START",
                 (undefined **)0x2100000b,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_KAWASAKI_FLAG_IN_POT",
                 (undefined **)0x2100000c,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_KAWASAKI_FLAG_FALL",(undefined **)0x2100000d
                 ,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = -3;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_DRIVER_WORK_INT_START",
                 (undefined **)0x11000004,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_DRIVER_WORK_INT_JOINT_ID",
                 (undefined **)0x11000005,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_DRIVER_WORK_INT_FLY_COUNT",
                 (undefined **)0x11000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_DRIVER_WORK_INT_XLU_FRAME",
                 (undefined **)0x11000007,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_DRIVER_WORK_INT_START_ACCEL_FRAME",
                 (undefined **)0x11000008,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_DRIVER_WORK_FLOAT_START",
                 (undefined **)0x1000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_DRIVER_WORK_FLOAT_FLY_DEG",
                 (undefined **)0x1000007,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_DRIVER_WORK_FLOAT_CAPTURE_FRAME",
                 (undefined **)0x1000008,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_DRIVER_WORK_FLOAT_CAPTURE_RECOVERY",
                 (undefined **)0x1000009,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_DRIVER_WORK_FLOAT_CLATTER_FRAME",
                 (undefined **)0x100000a,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_DRIVER_WORK_FLOAT_CAPTURE_JUMP_SPEED_X",
                 (undefined **)0x100000b,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_DRIVER_WORK_FLOAT_CAPTURE_JUMP_SPEED_Y",
                 (undefined **)0x100000c,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_DRIVER_WORK_FLOAT_OFFSET_X",
                 (undefined **)0x100000d,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_DRIVER_WORK_FLOAT_OFFSET_Y",
                 (undefined **)0x100000e,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_DRIVER_WORK_FLOAT_OFFSET_Z",
                 (undefined **)&DAT_0100000f,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_DRIVER_WORK_FLOAT_FLY_DISTANCE",
                 (undefined **)0x1000010,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_DRIVER_WORK_FLOAT_MAX_CHANGE_DEGREE",
                 (undefined **)0x1000011,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_DRIVER_WORK_FLOAT_FLY_SPEED",
                 (undefined **)0x1000012,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_DRIVER_WORK_FLOAT_FLY_MAX_SPEED",
                 (undefined **)0x1000013,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_DRIVER_WORK_FLOAT_FLY_ACCEL",
                 (undefined **)0x1000014,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_DRIVER_WORK_FLOAT_DEST_DISTANCE",
                 (undefined **)0x1000015,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_DRIVER_WORK_FLOAT_ROT_Z_SPEED",
                 (undefined **)0x1000016,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_DRIVER_WORK_FLOAT_INIT_X",
                 (undefined **)&DAT_01000017,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_DRIVER_WORK_FLOAT_INIT_Y",
                 (undefined **)0x1000018,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_DRIVER_WORK_FLOAT_ROT_Z",
                 (undefined **)0x1000019,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_DRIVER_WORK_FLOAT_SCALE",
                 (undefined **)0x100001a,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_DRIVER_FLAG_START",(undefined **)0x2100000b,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_DRIVER_FLAG_TO_BUS",(undefined **)0x2100000c
                 ,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ITEM_DRIVER_FLAG_IN_BUS",(undefined **)0x2100000d
                 ,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  if ((local_80 != 0) && (local_78 != 0)) {
    FUN_71038f55d0(local_80,local_70);
  }
  local_70 = -3;
  local_80 = 0;
  local_78 = 0;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_JUMP_FLAG_START",(undefined **)0x2100000b,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_JUMP_FLAG_BUTTON",(undefined **)0x2100000c,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_JUMP_FLAG_FLY_NEXT",(undefined **)0x2100000d,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_JUMP_FLY_NEXT",(undefined **)0x2100000d,ppppbVar1
                 ,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_JUMP_FLAG_AVAILABLE_GLIDE",
                 (undefined **)0x2100000e,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_JUMP_FLAG_GLIDE_ENABLE",(undefined **)0x2100000f,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_JUMP_FLAG_GLIDE_INPUT_BACK",
                 (undefined **)0x21000010,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_JUMP_FLAG_GLIDE_INPUT",(undefined **)0x21000011,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_JUMP_FLAG_POWBLOCK_QUAKE_JUMP",
                 (undefined **)0x21000012,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_JUMP_FLAG_GIMMICK_SPRING_JUMP",
                 (undefined **)0x21000013,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_JUMP_FLAG_GIMMICK_SPRING_JUMP_FROM_RING",
                 (undefined **)0x21000014,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_JUMP_FLAG_RESERVE_ATTACK_BUTTON_ON",
                 (undefined **)0x21000015,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_JUMP_FLAG_GIMMICK_SPRING_JUMP_FROM_SPECIAL",
                 (undefined **)0x21000016,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_JUMP_FLAG_TERM",(undefined **)0x21000017,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_JUMP_WORK_INT_START",(undefined **)0x11000004,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_JUMP_WORK_INT_BUTTON_ON_FRAME",
                 (undefined **)0x11000005,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_JUMP_WORK_INT_TERM",(undefined **)0x11000006,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_JUMP_WORK_FLOAT_START",(undefined **)0x1000006,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_JUMP_WORK_FLOAT_TERM",(undefined **)0x1000007,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_JUMP_TERM",(undefined **)0x1000008,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  if ((local_80 != 0) && (local_78 != 0)) {
    FUN_71038f55d0(local_80,local_70);
  }
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_JUMP_FROM_NONE",(undefined **)0x0,ppppbVar1,in_x4
                 ,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_JUMP_FROM_TREAD",(undefined **)0x1,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_JUMP_FROM_LADDER",(undefined **)0x2,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_JUMP_FROM_SHOOT",(undefined **)0x3,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_JUMP_FROM_WATER",(undefined **)&DAT_00000004,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_JUMP_FROM_SPRING",(undefined **)0x5,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_JUMP_FROM_SQUAT",(undefined **)0x6,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_JUMP_FLAG",
                 (undefined **)&DAT_00000008,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_JUMP_INT",(undefined **)0x0,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_JUMP_FLOAT",(undefined **)0x0,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SCREW_JUMP_COUNT_MAX",(undefined **)0x2,ppppbVar1
                 ,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_FINAL_JUMP_END_FLAG_START",
                 (undefined **)0x21000016,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_FINAL_JUMP_END_FLAG_ENABLE_LANDING",
                 (undefined **)0x21000017,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_FINAL_JUMP_END_FLAG_TERM",
                 (undefined **)0x21000018,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_KAMUI_PIERCE_FLAG_START",(undefined **)0x2100000b
                 ,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_KAMUI_PIERCE_FLAG_UNLINK",
                 (undefined **)0x2100000c,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_KAMUI_PIERCE_FLAG_TERM",(undefined **)0x2100000d,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_KAMUI_PIERCE_WORK_INT_START",
                 (undefined **)0x11000004,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_KAMUI_PIERCE_WORK_INT_TERM",
                 (undefined **)0x11000005,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_KAMUI_PIERCE_WORK_FLOAT_START",
                 (undefined **)0x1000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_KAMUI_PIERCE_WORK_FLOAT_TERM",
                 (undefined **)0x1000007,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_KAMUI_PIERCE_TERM",(undefined **)0x1000008,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_KILLER_WORK_INT_START",(undefined **)0x11000004,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_KILLER_WORK_INT_TERM",(undefined **)0x11000005,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_KILLER_WORK_FLOAT_START",(undefined **)0x1000006,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_KILLER_WORK_FLOAT_ANGLE",(undefined **)0x1000007,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_KILLER_WORK_FLOAT_TERM",(undefined **)0x1000008,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_KILLER_WORK_FLAG_START",(undefined **)0x2100000b,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_KILLER_WORK_FLAG_TERM",(undefined **)0x2100000c,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_KILLER_JUMP_WORK_INT_START",
                 (undefined **)0x11000004,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_KILLER_JUMP_WORK_INT_TERM",
                 (undefined **)0x11000005,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_KILLER_JUMP_WORK_FLOAT_START",
                 (undefined **)0x1000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_KILLER_JUMP_WORK_FLOAT_ANGLE",
                 (undefined **)0x1000007,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_KILLER_JUMP_WORK_FLOAT_TERM",
                 (undefined **)0x1000008,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_KILLER_JUMP_WORK_FLAG_START",
                 (undefined **)0x2100000b,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_KILLER_JUMP_WORK_FLAG_TERM",
                 (undefined **)0x2100000c,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_WORK_FLAG_KILLER_JUMP_FLAG",
                 (undefined **)0x0,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_WORK_FLAG_KILLER_JUMP_INT",
                 (undefined **)0x0,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_WORK_FLAG_KILLER_JUMP_FLOAT",
                 (undefined **)&DAT_00000080,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SCALING_WORK_INT_START",(undefined **)0x11000004,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SCALING_WORK_INT_AIR_NEXT_STAUS",
                 (undefined **)0x11000005,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SCALING_WORK_FLOAT_START",(undefined **)0x1000006
                 ,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SCALING_FLAG_START",(undefined **)0x2100000b,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SCALING_FLAG_SET_MOTION",(undefined **)0x2100000c
                 ,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SCALING_WORK_TERM",(undefined **)0x2100000d,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_SCALING_FLAG",(undefined **)0x2,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_SCALING_INT",(undefined **)0x0,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_SCALING_FLOAT",(undefined **)0x0,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_70 = 0xfffffffd;
  local_80 = 0;
  local_78 = 0;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_KOOPA_DIVED_WORK_INT_START",
                 (undefined **)0x11000007,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_KOOPA_DIVED_WORK_FLOAT_START",
                 (undefined **)0x1000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_KOOPA_DIVED_WORK_FLOAT_INIT_Y",
                 (undefined **)0x1000007,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_KOOPA_DIVED_WORK_FLAG_START",
                 (undefined **)0x2100000b,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_KOOPA_DIVED_WORK_FLAG_CAMERA_UPDATE_POS",
                 (undefined **)0x2100000c,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_KOOPA_DIVED_WORK_TERM",(undefined **)0x2100000d,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_LANDING_FLAG_START",(undefined **)0x2100000b,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_LANDING_FLAG_STIFF_CANCEL",
                 (undefined **)0x2100000c,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_LANDING_FLAG_STIFF_CANCEL_CONT",
                 (undefined **)0x2100000d,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_LANDING_FLAG_SQUAT_WAIT",(undefined **)0x2100000e
                 ,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_LANDING_FLAG_SLIP",(undefined **)0x2100000f,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_LANDING_FLAG_ESCAPE_AIR",(undefined **)0x21000010
                 ,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_LANDING_FLAG_PROG_TURN",(undefined **)0x21000011,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_LANDING_FLAG_PROG_TURN_RESERVE",
                 (undefined **)0x21000012,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_LANDING_WORK_FLAG_TERM",(undefined **)0x21000013,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_LANDING_WORK_INT_START",(undefined **)0x11000006,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_LANDING_WORK_INT_FRAME",(undefined **)0x11000007,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_LANDING_WORK_INT_TERM",(undefined **)0x11000008,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_LANDING_WORK_FLOAT_START",(undefined **)0x1000006
                 ,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_LANDING_WORK_FLOAT_STIFFNESS_FRAME",
                 (undefined **)0x1000007,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_LANDING_WORK_FLOAT_TERM",(undefined **)0x1000008,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_LANDING_TERM",(undefined **)0x1000009,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  if ((local_80 != 0) && (local_78 != 0)) {
    FUN_71038f55d0(local_80,-3);
  }
  local_70 = 0xfffffffd;
  local_80 = 0;
  local_78 = 0;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_OTTOTTO_WORK_INT_START",(undefined **)0x11000004,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_OTTOTTO_WORK_INT_FRAME",(undefined **)0x11000005,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_OTTOTTO_TERM",(undefined **)0x11000006,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  local_70 = 0xfffffffd;
  local_80 = 0;
  local_78 = 0;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_PASS_WORK_FLOAT_START",(undefined **)0x1000006,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_PASS_WORK_FLOAT_TERM",(undefined **)0x1000007,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_PASS_WORK_INT_START",(undefined **)0x11000004,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_PASS_WORK_INT_FRAME",(undefined **)0x11000005,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_PASS_WORK_INT_TERM",(undefined **)0x11000006,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_PASS_FLAG_START",(undefined **)0x2100000b,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_PASS_FLAG_IS_SET_PASS",(undefined **)0x2100000c,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_PASS_FLAG_TERM",(undefined **)0x2100000d,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_70 = 0xfffffffd;
  local_80 = 0;
  local_78 = 0;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_SPECIAL_COMMAND_USER_STATUS_WORK_ID_PASS_FLOAT_START",
                 (undefined **)0x1000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_SPECIAL_COMMAND_USER_STATUS_WORK_ID_PASS_FLOAT_SPEED_Y",
                 (undefined **)0x1000007,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_SPECIAL_COMMAND_USER_STATUS_WORK_ID_PASS_FLOAT_OFFSET_Y"
                 ,(undefined **)0x1000008,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_SPECIAL_COMMAND_USER_STATUS_WORK_ID_PASS_INT_START",
                 (undefined **)0x11000005,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_SPECIAL_COMMAND_USER_STATUS_WORK_ID_PASS_INT_FRAME",
                 (undefined **)0x11000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_SPECIAL_COMMAND_USER_STATUS_WORK_ID_PASS_FLAG_START",
                 (undefined **)0x2100000c,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,
                 (uint *)"FIGHTER_SPECIAL_COMMAND_USER_STATUS_WORK_ID_PASS_FLAG_COMMAND_EXTEND",
                 (undefined **)0x2100000d,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,
                 (uint *)"FIGHTER_SPECIAL_COMMAND_USER_STATUS_WORK_ID_PASS_FLAG_COMMAND_EXTEND2",
                 (undefined **)0x2100000e,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_PASSIVE_START",(undefined **)0x2100000b,ppppbVar1
                 ,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_PASSIVE_FLAG_TERM",(undefined **)0x2100000c,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_PASSIVE_WORK_FLOAT_START",(undefined **)0x1000006
                 ,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_PASSIVE_WORK_FLOAT_WALL_ANGLE",
                 (undefined **)0x1000007,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_PASSIVE_WORK_FLOAT_TOUCH_ANGLE",
                 (undefined **)0x1000008,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_PASSIVE_WORK_FLOAT_TERM",(undefined **)0x1000009,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_PASSIVE_WORK_INT_START",(undefined **)0x11000004,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_PASSIVE_WALL_WORK_INT_STOP_FRAME",
                 (undefined **)0x11000005,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_PASSIVE_WALL_WORK_INT_JUMP_COUNT",
                 (undefined **)0x11000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_PASSIVE_WORK_INT_TERM",(undefined **)0x11000007,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_PASSIVE_TERM",(undefined **)0x11000008,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  local_70 = 0xfffffffd;
  local_80 = 0;
  local_78 = 0;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_PALUTENA_FINAL_BLACKHOLE_FLAG_START",
                 (undefined **)0x2100001c,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_PALUTENA_FINAL_BLACKHOLE_FLAG_IS_BEAM_EXIST",
                 (undefined **)0x2100001d,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_PALUTENA_FINAL_BLACKHOLE_FLAG_IS_BEAM_ATTACK_HIT"
                 ,(undefined **)0x2100001e,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_PALUTENA_FINAL_BLACKHOLE_TERM",
                 (undefined **)0x2100001f,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = -3;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_REBIRTH_FLAG_START",(undefined **)0x2100000b,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_REBIRTH_FLAG_MOVE_END",(undefined **)0x2100000c,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_REBIRTH_FLAG_ENABLE_STRANS",
                 (undefined **)0x2100000d,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_REBIRTH_FLAG_DROP_DRAGOON",
                 (undefined **)0x2100000e,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_REBIRTH_FLAG_NO_MOVE",(undefined **)0x2100000f,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_REBIRTH_FLAG_USE_EFFECT_REBIRTH",
                 (undefined **)0x21000010,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_REBIRTH_FLAG_HAS_EFFECT_REBIRTH",
                 (undefined **)0x21000011,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_REBIRTH_FLAG_AUTO_FALL",(undefined **)0x21000012,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_REBIRTH_FLAG_MOVE_POS",(undefined **)0x21000013,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_REBIRTH_FLAG_TERM",(undefined **)0x21000014,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_REBIRTH_WORK_INT_START",(undefined **)0x11000004,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_REBIRTH_WORK_INT_MOVE_ELAPSED_FRAME",
                 (undefined **)0x11000005,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_REBIRTH_WORK_INT_MOVE_TOTAL_FRAME",
                 (undefined **)0x11000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_REBIRTH_WORK_INT_MOVE_END_FRAME",
                 (undefined **)0x11000007,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_REBIRTH_WORK_INT_FRAME",(undefined **)0x11000008,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_REBIRTH_WORK_INT_PLATE_EFF_ID",
                 (undefined **)0x11000009,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_REBIRTH_WORK_FLOAT_START",(undefined **)0x1000006
                 ,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_REBIRTH_WORK_FLOAT_MOVE_START_X",
                 (undefined **)0x1000007,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_REBIRTH_WORK_FLOAT_MOVE_START_Y",
                 (undefined **)0x1000008,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_REBIRTH_WORK_FLOAT_MOVE_TARGET_X",
                 (undefined **)0x1000009,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_REBIRTH_WORK_FLOAT_MOVE_TARGET_Y",
                 (undefined **)0x100000a,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_REBIRTH_WORK_TERM",(undefined **)0x100000b,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  if ((local_80 != 0) && (local_78 != 0)) {
    FUN_71038f55d0(local_80,local_70);
  }
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_ID_FLAG_CATCH_REBOUND",
                 (undefined **)0x21000009,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_ID_FLAG_CATCH_REBOUND_AIR",
                 (undefined **)0x21000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_REBOUND_STOP_FLAG",
                 (undefined **)&DAT_00000200,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_REBOUND_STOP_INT",
                 (undefined **)0x0,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_REBOUND_STOP_FLOAT",
                 (undefined **)&DAT_0000000e,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_REBOUND_FLAG",
                 (undefined **)&DAT_00000200,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_REBOUND_INT",(undefined **)0x0,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_REBOUND_FLOAT",
                 (undefined **)&DAT_0000000e,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_REBOUND_JUMP_FLAG_START",(undefined **)0x2100000b
                 ,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_REBOUND_JUMP_FLAG_TERM",(undefined **)0x2100000c,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_REBOUND_JUMP_WORK_INT_START",
                 (undefined **)0x11000004,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_REBOUND_JUMP_WORK_INT_CENCEL_FRAME",
                 (undefined **)0x11000005,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_REBOUND_JUMP_WORK_INT_TERM",
                 (undefined **)0x11000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_REBOUND_JUMP_WORK_FLOAT_START",
                 (undefined **)0x1000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_REBOUND_JUMP_WORK_FLOAT_TERM",
                 (undefined **)0x1000007,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_REBOUND_JUMP_TERM",(undefined **)0x1000008,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_70 = 0xfffffffd;
  local_80 = 0;
  local_78 = 0;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_REBOUND_JUMP_FLAG",
                 (undefined **)&DAT_00000200,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_RUN_BRAKE_FLAG_START",(undefined **)0x2100000b,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_RUN_BRAKE_FLAG_STOP",(undefined **)0x2100000c,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_RUN_BRAKE_FLAG_STOP_START",
                 (undefined **)0x2100000d,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_RUN_BRAKE_FLAG_TURN_RUN",(undefined **)0x2100000e
                 ,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_RUN_BRAKE_FLAG_ATTACK_DASH_STRANS_OFF",
                 (undefined **)0x2100000f,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_RUN_BRAKE_FLAG_STOP_SHAKE",
                 (undefined **)0x21000010,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_RUN_BRAKE_FLAG_TERM",(undefined **)0x21000011,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_RUN_BRAKE_WORK_FLOAT_START",
                 (undefined **)0x1000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_RUN_BRAKE_WORK_FLOAT_FRAME",
                 (undefined **)0x1000007,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_RUN_BRAKE_WORK_FLOAT_START_SPEED",
                 (undefined **)0x1000008,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_RUN_BRAKE_WORK_FLOAT_TERM",
                 (undefined **)0x1000009,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_RUN_BRAKE_WORK_INT_START",
                 (undefined **)0x11000004,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_RUN_BRAKE_WORK_INT_FRAME",
                 (undefined **)0x11000005,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_RUN_BRAKE_WORK_INT_TERM",(undefined **)0x11000006
                 ,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_RUN_BRAKE_TERM",(undefined **)0x11000007,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_70 = 0xfffffffd;
  local_80 = 0;
  local_78 = 0;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_RUN_FLAG_START",(undefined **)0x2100000b,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_RUN_FLAG_INIT_SPEED",(undefined **)0x2100000c,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_RUN_FLAG_TERM",(undefined **)0x2100000d,ppppbVar1
                 ,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_RUN_WORK_FLOAT_START",(undefined **)0x1000006,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_RUN_WORK_FLOAT_RUN_FRAME",(undefined **)0x1000007
                 ,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_RUN_WORK_FLOAT_SPEED",(undefined **)0x1000008,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_RUN_WORK_FLOAT_SPEED_MAX_RATIO",
                 (undefined **)0x1000009,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_RUN_WORK_FLOAT_START_FRAME",
                 (undefined **)0x100000a,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_RUN_WORK_FLOAT_TERM",(undefined **)0x100000b,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_RUN_WORK_INT_START",(undefined **)0x11000004,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_RUN_WORK_INT_TERM",(undefined **)0x11000005,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_RUN_TERM",(undefined **)0x11000006,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_RUN_FLOAT",
                 (undefined **)&DAT_00000400,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_70 = 0xfffffffd;
  local_80 = 0;
  local_78 = 0;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SAVING_DAMAGE_WORK_FLAG_START",
                 (undefined **)0x21000023,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SAVING_DAMAGE_WORK_FLAG_DOWN_SPOT",
                 (undefined **)0x21000024,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SAVING_DAMAGE_WORK_FLAG_DOWN_SPOT_SLOW",
                 (undefined **)0x21000025,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SAVING_DAMAGE_WORK_FLAG_DOWN_SPOT_SLOW_START",
                 (undefined **)0x21000026,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SAVING_DAMAGE_WORK_FLAG_TERM",
                 (undefined **)0x21000027,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SAVING_DAMAGE_WORK_INT_START",
                 (undefined **)0x11000017,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SAVING_DAMAGE_WORK_INT_STUN_FRAME",
                 (undefined **)0x11000018,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_70 = 0xfffffffd;
  local_80 = 0;
  local_78 = 0;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_STABBED_DAMAGE_WORK_FLAG_START",
                 (undefined **)0x21000023,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_STABBED_DAMAGE_WORK_FLAG_DOWN_SPOT",
                 (undefined **)0x21000024,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_STABBED_DAMAGE_WORK_FLAG_DOWN_SPOT_SLOW",
                 (undefined **)0x21000025,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_STABBED_DAMAGE_WORK_FLAG_DOWN_SPOT_SLOW_START",
                 (undefined **)0x21000026,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_STABBED_DAMAGE_WORK_FLAG_TERM",
                 (undefined **)0x21000027,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_STABBED_DAMAGE_WORK_INT_START",
                 (undefined **)0x11000017,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_STABBED_DAMAGE_WORK_INT_STUN_FRAME",
                 (undefined **)0x11000018,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_FIST_DOWN_WORK_FLAG_START",
                 (undefined **)0x21000023,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_FIST_DOWN_WORK_FLAG_DOWN_SPOT",
                 (undefined **)0x21000024,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_FIST_DOWN_WORK_FLAG_DOWN_SPOT_SLOW",
                 (undefined **)0x21000025,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_FIST_DOWN_WORK_FLAG_DOWN_SPOT_SLOW_START",
                 (undefined **)0x21000026,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_FIST_DOWN_WORK_FLAG_TERM",
                 (undefined **)0x21000027,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_FIST_DOWN_WORK_INT_START",
                 (undefined **)0x11000017,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_FIST_DOWN_WORK_INT_STUN_FRAME",
                 (undefined **)0x11000018,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_70 = 0xfffffffd;
  local_80 = 0;
  local_78 = 0;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SLIP_FLAG_START",(undefined **)0x2100000b,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SLIP_WORK_INT_START",(undefined **)0x11000004,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SLIP_WORK_INT_DOWN_FRAME",
                 (undefined **)0x11000005,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SLIP_WORK_FLOAT_START",(undefined **)0x1000006,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SLIP_TERM",(undefined **)0x1000007,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SPECIAL_N_WORK_INT_START",
                 (undefined **)0x11000004,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SPECIAL_N_WORK_INT_TERM",(undefined **)0x11000005
                 ,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SPECIAL_N_WORK_FLOAT_START",
                 (undefined **)0x1000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SPECIAL_N_WORK_FLOAT_TERM",
                 (undefined **)0x1000007,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SPECIAL_N_FLAG_START",(undefined **)0x2100000b,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SPECIAL_N_FLAG_FIRST",(undefined **)0x2100000c,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SPECIAL_N_FLAG_TERM",(undefined **)0x2100000d,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SPECIAL_N_TERM",(undefined **)0x2100000e,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SQUAT_FLAG_START",(undefined **)0x2100000b,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SQUAT_FLAG_ENABLE_PASS",(undefined **)0x2100000c,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SQUAT_FLAG_REQUEST_SQUAT_SE",
                 (undefined **)0x2100000d,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SQUAT_WORK_FLAG_TERM",(undefined **)0x2100000e,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SQUAT_WORK_INT_START",(undefined **)0x11000004,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SQUAT_WORK_INT_FRAME",(undefined **)0x11000005,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SQUAT_WORK_INT_COUNT",(undefined **)0x11000006,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SQUAT_WORK_INT_ADD_SQUAT_PASS_FRAME",
                 (undefined **)0x11000007,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SQUAT_WORK_INT_TERM",(undefined **)0x11000008,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SQUAT_TERM",(undefined **)0x11000009,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SQUAT_WALK_WORK_FLOAT_START",
                 (undefined **)0x1000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SQUAT_WALK_WORK_FLOAT_SPEED",
                 (undefined **)0x1000007,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SQUAT_WALK_WORK_FLOAT_SPEED_MAX_RATIO",
                 (undefined **)0x1000008,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SQUAT_WALK_TERM",(undefined **)0x1000009,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_STOP_CEIL_WORK_INT_START",
                 (undefined **)0x11000004,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_STOP_CEIL_WORK_INT_FALL_FRAME",
                 (undefined **)0x11000005,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_STOP_CEIL_WORK_INT_TERM",(undefined **)0x11000006
                 ,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_STOP_CEIL_FLAG_START",(undefined **)0x2100000b,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_STOP_CEIL_FLAG_FALL",(undefined **)0x2100000c,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_STOP_CEIL_FLAG_TERM",(undefined **)0x2100000d,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_STOP_CEIL_TERM",(undefined **)0x2100000e,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = -3;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SUPER_JUMP_PUNCH_FLAG_START",
                 (undefined **)0x2100000b,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SUPER_JUMP_PUNCH_FLAG_MOVE_TRANS",
                 (undefined **)0x2100000c,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SUPER_JUMP_PUNCH_FLAG_CHANGE_KINE",
                 (undefined **)0x2100000d,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SUPER_JUMP_PUNCH_FLAG_REVERSE_LR",
                 (undefined **)0x2100000e,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SUPER_JUMP_PUNCH_FLAG_AIR_MOTION",
                 (undefined **)0x2100000f,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SUPER_JUMP_PUNCH_FLAG_NO_SET_CLIFF_CHECK",
                 (undefined **)0x21000010,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SUPER_JUMP_PUNCH_FLAG_CHANGE_KINE_CONTROL",
                 (undefined **)0x21000011,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SUPER_JUMP_PUNCH_FLAG_TERM",
                 (undefined **)0x21000012,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SUPER_JUMP_PUNCH_WORK_INT_START",
                 (undefined **)0x11000004,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SUPER_JUMP_PUNCH_WORK_INT_MOTION_KIND",
                 (undefined **)0x11000005,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SUPER_JUMP_PUNCH_WORK_INT_MOTION_KIND_AIR",
                 (undefined **)0x11000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SUPER_JUMP_PUNCH_WORK_INT_STATUS_KIND_END",
                 (undefined **)0x11000007,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SUPER_JUMP_PUNCH_WORK_INT_CONST_LANDING_FRAME",
                 (undefined **)0x11000008,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SUPER_JUMP_PUNCH_WORK_INT_TERM",
                 (undefined **)0x11000009,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SUPER_JUMP_PUNCH_WORK_FLOAT_START",
                 (undefined **)0x1000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SUPER_JUMP_PUNCH_WORK_FLOAT_CONST_LR_STICK_X",
                 (undefined **)0x1000007,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SUPER_JUMP_PUNCH_WORK_FLOAT_CONST_DIR_STICK_X",
                 (undefined **)0x1000008,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SUPER_JUMP_PUNCH_WORK_FLOAT_CONST_DIR_MUL",
                 (undefined **)0x1000009,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,
                 (uint *)"FIGHTER_STATUS_SUPER_JUMP_PUNCH_WORK_FLOAT_CONST_AIR_START_X_MUL",
                 (undefined **)0x100000a,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SUPER_JUMP_PUNCH_WORK_FLOAT_CONST_AIR_ACCEL_Y",
                 (undefined **)0x100000b,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SUPER_JUMP_PUNCH_WORK_FLOAT_CONST_AIR_PASS_MUL",
                 (undefined **)0x100000c,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SUPER_JUMP_PUNCH_WORK_FLOAT_CONST_FALL_X_MUL",
                 (undefined **)0x100000d,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SUPER_JUMP_PUNCH_WORK_FLOAT_CONST_PASS_MUL",
                 (undefined **)0x100000e,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,
                 (uint *)"FIGHTER_STATUS_SUPER_JUMP_PUNCH_WORK_FLOAT_MOVE_TRANS_END_SPEED_X_MUL",
                 (undefined **)&DAT_0100000f,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,
                 (uint *)"FIGHTER_STATUS_SUPER_JUMP_PUNCH_WORK_FLOAT_MOVE_TRANS_END_SPEED_Y_MUL",
                 (undefined **)0x1000010,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SUPER_JUMP_PUNCH_WORK_FLOAT_TERM",
                 (undefined **)0x1000011,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SUPER_JUMP_PUNCH_TERM",(undefined **)0x1000012,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  if ((local_80 != 0) && (local_78 != 0)) {
    FUN_71038f55d0(local_80,local_70);
  }
  local_70 = -3;
  local_80 = 0;
  local_78 = 0;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SWALLOWED_FLAG_START",(undefined **)0x2100000b,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SWALLOWED_FLAG_THROWN_COPY",
                 (undefined **)0x2100000c,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SWALLOWED_WORK_FLAG_SPIT_START",
                 (undefined **)0x2100000d,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SWALLOWED_WORK_FLAG_ARRIVAL",
                 (undefined **)0x2100000e,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SWALLOWED_WORK_FLAG_COPY_DEDEDE",
                 (undefined **)0x2100000f,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SWALLOWED_WORK_FLAG_THROW_CUT_DAMAGE",
                 (undefined **)0x21000010,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SWALLOWED_WORK_FLAG_COPY_KROOL",
                 (undefined **)0x21000011,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SWALLOWED_WORK_INT_START",
                 (undefined **)0x11000004,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SWALLOWED_WORK_INT_PARTNER_TASK_ID",
                 (undefined **)0x11000005,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SWALLOWED_WORK_INT_PARTNER_KIND",
                 (undefined **)0x11000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SWALLOWED_WORK_INT_STAR_TASK_ID",
                 (undefined **)0x11000007,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SWALLOWED_WORK_INT_SWALLOWED_MOTION",
                 (undefined **)0x11000008,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SWALLOWED_WORK_FLOAT_START",
                 (undefined **)0x1000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SWALLOWED_WORK_FLOAT_WALL_REFLECTION_LR",
                 (undefined **)0x1000007,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SWALLOWED_WORK_FLOAT_SUM_SPD_X",
                 (undefined **)0x1000008,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SWALLOWED_WORK_FLOAT_SUM_SPD_Y",
                 (undefined **)0x1000009,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SWALLOWED_WORK_FLOAT_OFFSET_X",
                 (undefined **)0x100000a,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SWALLOWED_WORK_FLOAT_OFFSET_Y",
                 (undefined **)0x100000b,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SWALLOWED_WORK_FLOAT_PARTNER_LR",
                 (undefined **)0x100000c,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SWALLOWED_TERM",(undefined **)0x100000d,ppppbVar1
                 ,in_x4,in_x5,in_x6,in_x7);
  if ((local_80 != 0) && (local_78 != 0)) {
    FUN_71038f55d0(local_80,local_70);
  }
  local_70 = 0xfffffffd;
  local_80 = 0;
  local_78 = 0;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SWIM_FLAG_START",(undefined **)0x2100000b,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SWIM_FLAG_DAMAGE",(undefined **)0x2100000c,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SWIM_FLAG_IS_FLIP",(undefined **)0x2100000d,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SWIM_WORK_FLOAT_START",(undefined **)0x1000006,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SWIM_WORK_FLOAT_TRANS_N_OFFSET_Y",
                 (undefined **)0x1000007,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SWIM_WORK_INT_START",(undefined **)0x11000004,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SWIM_WORK_INT_DROWN_FRAME",
                 (undefined **)0x11000005,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SWIM_WORK_INT_COUNTER",(undefined **)0x11000006,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SWIM_WORK_INT_WATER_TASK_ID",
                 (undefined **)0x11000007,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SWIM_WORK_INT_EFF_COUNTER",
                 (undefined **)0x11000008,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SWIM_WORK_INT_NO_WATER_FRAME",
                 (undefined **)0x11000009,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SWIM_TERM",(undefined **)0x1100000a,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  local_70 = 0xfffffffd;
  local_80 = 0;
  local_78 = 0;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_SWIM_FLAG",
                 (undefined **)&DAT_00001000,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_SWIM_INT",
                 (undefined **)&DAT_00000180,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_SWIM_FLOAT",(undefined **)0x0,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TELEPORT_FLAG_START",(undefined **)0x2100000b,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TELEPORT_FLAG_END_EFFECT",
                 (undefined **)0x2100000c,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TELEPORT_FLAG_TERM",(undefined **)0x2100000d,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TELEPORT_WORK_INT_START",(undefined **)0x11000004
                 ,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TELEPORT_WORK_INT_TERM",(undefined **)0x11000005,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TELEPORT_WORK_FLOAT_START",
                 (undefined **)0x1000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TELEPORT_WORK_FLOAT_MOT_RATE",
                 (undefined **)0x1000007,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TELEPORT_WORK_FLOAT_TERM",(undefined **)0x1000008
                 ,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TELEPORT_TERM",(undefined **)0x1000009,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  local_70 = 0xfffffffd;
  local_80 = 0;
  local_78 = 0;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_THROW_WORK_INT_START",(undefined **)0x11000009,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_THROW_WORK_INT_TARGET_OBJECT",
                 (undefined **)0x1100000a,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_THROW_WORK_INT_TARGET_HIT_GROUP",
                 (undefined **)0x1100000b,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_THROW_WORK_INT_TARGET_HIT_NO",
                 (undefined **)0x1100000c,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_THROW_WORK_INT_STOP_FRAME",
                 (undefined **)0x1100000d,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_THROW_WORK_INT_TERM",(undefined **)0x1100000e,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_THROW_WORK_FLOAT_START",(undefined **)0x1000006,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_THROW_WORK_FLOAT_MOTION_RATE",
                 (undefined **)0x1000007,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_THROW_WORK_FLOAT_TERM",(undefined **)0x1000008,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_THROW_FLAG_START",(undefined **)0x2100000b,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_THROW_FLAG_START_AIR",(undefined **)0x2100000c,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_THROW_FLAG_INVINCIBLE",(undefined **)0x2100000d,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_THROW_FLAG_STOP",(undefined **)0x2100000e,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_THROW_FLAG_TERM",(undefined **)0x2100000f,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_THROW_FLAG",(undefined **)0x0,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_THROW_INT",
                 (undefined **)&SUB_00000020,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_THROW_FLOAT",(undefined **)0x0,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_THROWN_WORK_FLAG_START",(undefined **)0x2100000b,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_THROWN_WORK_FLAG_GAMEWATCH_STOCK_ICON",
                 (undefined **)0x2100000c,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_THROWN_WORK_FLAG_DISABLE_PASSIVE",
                 (undefined **)0x2100000d,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_THROWN_WORK_FLAG_TERM",(undefined **)0x2100000e,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_THROWN_WORK_INT_START",(undefined **)0x11000004,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_THROWN_WORK_INT_MOTION_KIND",
                 (undefined **)0x11000005,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_THROWN_WORK_INT_STOP_FRAME",
                 (undefined **)0x11000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_THROWN_WORK_INT_TERM",(undefined **)0x11000007,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_THROWN_WORK_FLOAT_START",(undefined **)0x1000006,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_THROWN_WORK_FLOAT_TERM",(undefined **)0x1000007,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_70 = 0xfffffffd;
  local_80 = 0;
  local_78 = 0;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_THROWN_FLAG",(undefined **)0x2000,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_THROWN_INT",
                 (undefined **)&DAT_00000060,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_THROWN_FLOAT",(undefined **)0x0,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = -3;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TREAD_WORK_INT_START",(undefined **)0x11000004,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TREAD_WORK_INT_LINK_NO",(undefined **)0x11000005,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TREAD_WORK_INT_RECOVERY_FRAME",
                 (undefined **)0x11000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TREAD_WORK_INT_LINK_EVENT_RESULT_0",
                 (undefined **)0x11000007,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TREAD_WORK_INT_TERM",(undefined **)0x11000008,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TREAD_WORK_FLOAT_START",(undefined **)0x1000006,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TREAD_WORK_FLOAT_JUMP_SPEED_MUL",
                 (undefined **)0x1000007,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TREAD_WORK_FLOAT_LINK_EVENT_RESULT_0",
                 (undefined **)0x1000008,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TREAD_WORK_FLOAT_LINK_EVENT_RESULT_1",
                 (undefined **)0x1000009,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TREAD_WORK_FLOAT_LINK_EVENT_RESULT_2",
                 (undefined **)0x100000a,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TREAD_WORK_FLOAT_ATTACK_FRAME",
                 (undefined **)0x100000b,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TREAD_WORK_FLOAT_TERM",(undefined **)0x100000c,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TREAD_FLAG_START",(undefined **)0x2100000b,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TREAD_FLAG_NO_REACTION",(undefined **)0x2100000c,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TREAD_FLAG_BUTTON",(undefined **)0x2100000d,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TREAD_FLAG_RECOVERY",(undefined **)0x2100000e,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TREAD_FLAG_LINK_EVENT_RESULT_0",
                 (undefined **)0x2100000f,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TREAD_FLAG_LINK_EVENT_RESULT_1",
                 (undefined **)0x21000010,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TREAD_FLAG_LINK_EVENT_RESULT_2",
                 (undefined **)0x21000011,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TREAD_FLAG_TERM",(undefined **)0x21000012,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TREAD_TERM",(undefined **)0x21000013,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  if ((local_80 != 0) && (local_78 != 0)) {
    FUN_71038f55d0(local_80,local_70);
  }
  local_70 = 0xfffffffd;
  local_80 = 0;
  local_78 = 0;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TURN_WORK_FLOAT_START",(undefined **)0x1000006,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TURN_WORK_FLOAT_LR",(undefined **)0x1000007,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TURN_WORK_FLOAT_TURN_FRAME",
                 (undefined **)0x1000008,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TURN_FLAG_START",(undefined **)0x2100000b,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TURN_FLAG_DASH",(undefined **)0x2100000c,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TURN_FLAG_REVERSE",(undefined **)0x2100000d,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TURN_FLAG_TURN",(undefined **)0x2100000e,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TURN_FLAG_NO_TURN_TO_ESCAPE",
                 (undefined **)0x2100000f,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TURN_FLAG_TERM",(undefined **)0x21000010,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TURN_TERM",(undefined **)0x21000011,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  local_70 = 0xfffffffd;
  local_80 = 0;
  local_78 = 0;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TURN_RUN_WORK_FLOAT_START",
                 (undefined **)0x1000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TURN_RUN_WORK_FLOAT_TURN_RUN_FRAME",
                 (undefined **)0x1000007,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TURN_RUN_WORK_FLOAT_TURN_LR",
                 (undefined **)0x1000008,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TURN_RUN_WORK_FLOAT_START_SPEED",
                 (undefined **)0x1000009,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TURN_RUN_WORK_INT_START",(undefined **)0x11000004
                 ,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TURN_RUN_WORK_INT_TURN_FRAME",
                 (undefined **)0x11000005,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TURN_RUN_WORK_INT_CATCH_FRAME",
                 (undefined **)0x11000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TURN_RUN_WORK_INT_RUN_BRAKE_FRAME",
                 (undefined **)0x11000007,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TURN_RUN_FLAG_START",(undefined **)0x2100000b,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TURN_RUN_FLAG_STOP",(undefined **)0x2100000c,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TURN_RUN_FLAG_STOP_START",
                 (undefined **)0x2100000d,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TURN_RUN_FLAG_TO_RUN",(undefined **)0x2100000e,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TURN_RUN_FLAG_STOP_SHAKE",
                 (undefined **)0x2100000f,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TURN_RUN_FLAG_TERM",(undefined **)0x21000010,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TURN_RUN_TERM",(undefined **)0x21000011,ppppbVar1
                 ,in_x4,in_x5,in_x6,in_x7);
  local_70 = 0xfffffffd;
  local_80 = 0;
  local_78 = 0;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TURN_RUN_BRAKE_WORK_FLOAT_START",
                 (undefined **)0x1000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TURN_RUN_BRAKE_WORK_FLOAT_TERM",
                 (undefined **)0x1000007,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TURN_RUN_BRAKE_WORK_INT_START",
                 (undefined **)0x11000004,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TURN_RUN_BRAKE_WORK_INT_TERM",
                 (undefined **)0x11000005,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TURN_RUN_BRAKE_FLAG_START",
                 (undefined **)0x2100000b,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TURN_RUN_BRAKE_FLAG_TERM",
                 (undefined **)0x2100000c,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TURN_RUN_BRAKE_TERM",(undefined **)0x2100000d,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WALK_BRAKE_FLAG_START",(undefined **)0x2100000b,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WALK_BRAKE_FLAG_STOP",(undefined **)0x2100000c,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WALK_BRAKE_FLAG_STOP_START",
                 (undefined **)0x2100000d,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WALK_FLAG_START",(undefined **)0x2100000b,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WALK_FLAG_SLIP",(undefined **)0x2100000c,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WALK_FLAG_MOTION_BLEND_MIDDLE_FAST",
                 (undefined **)0x2100000d,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WALK_FLAG_TERM",(undefined **)0x2100000e,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WALK_WORK_FLOAT_START",(undefined **)0x1000006,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WALK_WORK_FLOAT_SPEED",(undefined **)0x1000007,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WALK_WORK_FLOAT_SPEED_SLOW_RATIO",
                 (undefined **)0x1000008,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WALK_WORK_FLOAT_SPEED_MIDDLE_RATIO",
                 (undefined **)0x1000009,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WALK_WORK_FLOAT_SPEED_FAST_RATIO",
                 (undefined **)0x100000a,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WALK_WORK_FLOAT_TERM",(undefined **)0x100000b,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WALK_WORK_INT_START",(undefined **)0x11000004,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WALK_WORK_INT_TERM",(undefined **)0x11000005,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WALK_TERM",(undefined **)0x11000006,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WALL_JUMP_START",(undefined **)0x2100000b,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WALL_JUMP_FLAG_TERM",(undefined **)0x2100000c,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WALL_JUMP_WORK_FLOAT_START",
                 (undefined **)0x1000008,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WALL_JUMP_WORK_FLOAT_TERM",
                 (undefined **)0x1000009,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WALL_JUMP_WORK_INT_START",
                 (undefined **)0x11000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WALL_JUMP_WORK_INT_DISABLE_CONT_FRAME",
                 (undefined **)0x11000007,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WALL_JUMP_WORK_INT_TERM",(undefined **)0x11000008
                 ,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WALL_JUMP_TERM",(undefined **)0x11000009,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WARPSTAR_WORK_INT_START",(undefined **)0x11000004
                 ,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WARPSTAR_WORK_FLOAT_START",
                 (undefined **)0x1000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WARPSTAR_FLAG_START",(undefined **)0x2100000b,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WARPSTAR_FLAG_IS_END",(undefined **)0x2100000c,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WARPSTAR_WORK_TERM",(undefined **)0x2100000d,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WIN_FLAG_START",(undefined **)0x2100000b,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WIN_FLAG_WIN_MOT",(undefined **)0x2100000c,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WIN_FLAG_TERM",(undefined **)0x2100000d,ppppbVar1
                 ,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WIN_WORK_INT_START",(undefined **)0x11000004,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WIN_WORK_INT_KIND",(undefined **)0x11000005,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WIN_WORK_INT_MOTION_KIND",
                 (undefined **)0x11000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WIN_WORK_INT_MOTION_KIND_WAIT",
                 (undefined **)0x11000007,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WIN_WORK_INT_EFFECT_HANDLE",
                 (undefined **)0x11000008,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WIN_WORK_FLOAT_START",(undefined **)0x1000006,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WIN_TERM",(undefined **)0x1000007,ppppbVar1,in_x4
                 ,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_FREE_MOVE_WORK_FLOAT_START",
                 (undefined **)0x1000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_FREE_MOVE_WORK_FLOAT_FREE_MOVE_ROTATE_X",
                 (undefined **)0x1000007,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_FREE_MOVE_WORK_FLOAT_FREE_MOVE_ROTATE_Y",
                 (undefined **)0x1000008,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_FREE_MOVE_WORK_FLOAT_FREE_MOVE_ROTATE_Z",
                 (undefined **)0x1000009,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_FREE_MOVE_TERM",(undefined **)0x100000a,ppppbVar1
                 ,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = -3;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ROULETTE_WORK_INT_START",(undefined **)0x11000004
                 ,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ROULETTE_WORK_INT_DUMMY",(undefined **)0x11000018
                 ,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ROULETTE_WORK_INT_STEP",(undefined **)0x11000019,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ROULETTE_WORK_INT_FRAME",(undefined **)0x1100001a
                 ,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ROULETTE_WORK_INT_SHOOT_FRAME",
                 (undefined **)0x1100001b,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ROULETTE_WORK_INT_TERM",(undefined **)0x1100001c,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ROULETTE_WORK_FLOAT_START",
                 (undefined **)0x1000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ROULETTE_WORK_FLOAT_DUMMY",
                 (undefined **)0x100001a,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ROULETTE_WORK_FLOAT_TERM",(undefined **)0x100001b
                 ,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ROULETTE_WORK_FLAG_START",
                 (undefined **)0x2100000b,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ROULETTE_WORK_FLAG_DUMMY",
                 (undefined **)0x2100001f,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ROULETTE_WORK_FLAG_SHOOTABLE",
                 (undefined **)0x21000020,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ROULETTE_WORK_FLAG_SHOOT",
                 (undefined **)0x21000021,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ROULETTE_WORK_FLAG_SHOOT_END",
                 (undefined **)0x21000022,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ROULETTE_WORK_FLAG_CONTINUE",
                 (undefined **)0x21000023,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ROULETTE_WORK_FLAG_TERM",(undefined **)0x21000024
                 ,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ROULETTE_WORK_TERM",(undefined **)0x21000025,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  if ((local_80 != 0) && (local_78 != 0)) {
    FUN_71038f55d0(local_80,local_70);
  }
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ROULETTE_STEP_NONE",(undefined **)0x0,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ROULETTE_STEP_START",(undefined **)0x1,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ROULETTE_STEP_FALL",(undefined **)0x2,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ROULETTE_STEP_LANDING",(undefined **)0x3,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ROULETTE_STEP_ITEM_GET",
                 (undefined **)&DAT_00000004,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ROULETTE_STEP_WAIT",(undefined **)0x5,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ROULETTE_STEP_SHOOT",(undefined **)0x6,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ROULETTE_STEP_SHOOTING",
                 (undefined **)&DAT_00000007,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_ROULETTE_STEP_END",(undefined **)&DAT_00000008,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_70 = -3;
  local_80 = 0;
  local_78 = 0;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_FINAL_FLAG_START",(undefined **)0x2100000b,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_FINAL_FLAG_FINISH",(undefined **)0x2100000c,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_FINAL_FLAG_VISUAL_ATTACK_OTHER_FLAG_STOP",
                 (undefined **)0x2100000d,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_FINAL_FLAG_VISUAL_ATTACK_OTHER_NAME_CURSOR",
                 (undefined **)0x2100000e,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_FINAL_FLAG_VISUAL_ATTACK_OTHER_PREV_NAME_CURSOR",
                 (undefined **)0x2100000f,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_FINAL_FLAG_PREV_NO_COMP",(undefined **)0x21000010
                 ,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_FINAL_FLAG_TERM",(undefined **)0x21000011,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_FINAL_WORK_INT_START",(undefined **)0x11000004,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_FINAL_WORK_INT_LINK_TASK_ID",
                 (undefined **)0x11000005,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_FINAL_WORK_INT_MOTION_KIND",
                 (undefined **)0x11000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_FINAL_WORK_INT_MOTION_COMP_FRAME",
                 (undefined **)0x11000007,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_FINAL_WORK_INT_SMOKE_EFFECT_HANDLE",
                 (undefined **)0x11000008,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_FINAL_WORK_INT_TERM",(undefined **)0x11000009,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_FINAL_WORK_FLOAT_START",(undefined **)0x1000006,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_FINAL_WORK_FLOAT_PARENT_POS_X",
                 (undefined **)0x1000007,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_FINAL_WORK_FLOAT_PARENT_POS_Y",
                 (undefined **)0x1000008,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_FINAL_WORK_FLOAT_OFFSET_POS_X",
                 (undefined **)0x1000009,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_FINAL_WORK_FLOAT_OFFSET_POS_Y",
                 (undefined **)0x100000a,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_FINAL_WORK_FLOAT_TARGET_POS_X",
                 (undefined **)0x100000b,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_FINAL_WORK_FLOAT_TARGET_POS_Y",
                 (undefined **)0x100000c,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_FINAL_WORK_FLOAT_SPEED",(undefined **)0x100000d,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_FINAL_WORK_FLOAT_PARENT_TO_TARGET_X",
                 (undefined **)0x100000e,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_FINAL_WORK_FLOAT_PARENT_TO_TARGET_Y",
                 (undefined **)&DAT_0100000f,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_FINAL_WORK_FLOAT_TERM",(undefined **)0x1000010,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  if ((local_80 != 0) && (local_78 != 0)) {
    FUN_71038f55d0(local_80,local_70);
  }
  local_70 = 0xfffffffd;
  local_80 = 0;
  local_78 = 0;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_FINAL_DAMAGE_FLY_FLAG",
                 (undefined **)0x0,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_FINAL_DAMAGE_FLY_INT",
                 (undefined **)&DAT_000000e0,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_FINAL_DAMAGE_FLY_FLOAT",
                 (undefined **)0xc200,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_70 = 0xfffffffd;
  local_80 = 0;
  local_78 = 0;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_LINK_FINAL_WORK_INT_START",
                 (undefined **)0x11000004,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_LINK_FINAL_WORK_INT_PHASE",
                 (undefined **)0x11000005,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_LINK_FINAL_WORK_INT_MOTION_KIND",
                 (undefined **)0x11000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_LINK_FINAL_WORK_INT_TERM",
                 (undefined **)0x11000007,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_LINK_FINAL_WORK_FLOAT_START",
                 (undefined **)0x1000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_LINK_FINAL_WORK_FLOAT_TERM",
                 (undefined **)0x1000007,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_LINK_FINAL_FLAG_START",(undefined **)0x2100000b,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_LINK_FINAL_FLAG_ANIM_CMD_RUN",
                 (undefined **)0x2100000c,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_LINK_FINAL_FLAG_FINISH",(undefined **)0x2100000d,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_LINK_FINAL_FLAG_ABORT",(undefined **)0x2100000e,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_LINK_FINAL_FLAG_TERM",(undefined **)0x2100000f,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_LINK_FINAL_MSG_NOTAVAILABLE",(undefined **)0x0,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_LINK_FINAL_MSG_STOP",(undefined **)0x1,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_LINK_FINAL_MSG_MOT_STOP",(undefined **)0x2,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_LINK_FINAL_MSG_MOT_PLAY",(undefined **)0x3,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_LINK_FINAL_MSG_SET_DAMAGE_FLY_N",
                 (undefined **)&DAT_00000004,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_LINK_FINAL_MSG_READY_FINISH",(undefined **)0x5,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_LINK_FINAL_MSG_ABORT",(undefined **)0x6,ppppbVar1
                 ,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_LINK_FINAL_MSG_QUERY_POS",
                 (undefined **)&DAT_00000007,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_LUIGI_FINAL_SHOOT_FLAG_START",
                 (undefined **)0x2100001c,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_LUIGI_FINAL_SHOOT_FLAG_INDIRECT_CHANGED",
                 (undefined **)0x2100001d,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_LUIGI_FINAL_SHOOT_FLAG_TERM",
                 (undefined **)0x2100001e,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_LUIGI_FINAL_SHOOT_FLOAT_START",
                 (undefined **)0x1000011,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_LUIGI_FINAL_SHOOT_FLOAT_INIT_POWER",
                 (undefined **)0x1000012,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_LUIGI_FINAL_SHOOT_FLOAT_PARENT_POS_X",
                 (undefined **)0x1000013,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_LUIGI_FINAL_SHOOT_FLOAT_PARENT_POS_Y",
                 (undefined **)0x1000014,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_LUIGI_FINAL_SHOOT_FLOAT_TERM",
                 (undefined **)0x1000015,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_LUIGI_FINAL_SHOOT_INT_START",
                 (undefined **)0x11000014,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_LUIGI_FINAL_SHOOT_INT_TERM",
                 (undefined **)0x11000015,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_BITTEN_WARIO_WORK_INT_START",
                 (undefined **)0x11000004,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_BITTEN_WARIO_WORK_INT_PARENT_SITUATION",
                 (undefined **)0x11000005,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_BITTEN_WARIO_WORK_INT_MOTION_RATE_FRAME",
                 (undefined **)0x11000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_BITTEN_WARIO_WORK_INT_MOTION_KIND_GROUND",
                 (undefined **)0x11000007,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_BITTEN_WARIO_WORK_INT_MOTION_KIND_AIR",
                 (undefined **)0x11000008,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_BITTEN_WARIO_WORK_FLOAT_START",
                 (undefined **)0x1000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_BITTEN_WARIO_WORK_FLOAT_MOTION_END_FRAME",
                 (undefined **)0x1000007,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_BITTEN_WARIO_TERM",(undefined **)0x1000008,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SHOULDERED_DONKEY_FLAG_START",
                 (undefined **)0x2100000b,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SHOULDERED_DONKEY_WORK_INT_START",
                 (undefined **)0x11000004,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SHOULDERED_DONKEY_WORK_INT_START_LR",
                 (undefined **)0x11000005,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SHOULDERED_DONKEY_WORK_FLOAT_START",
                 (undefined **)0x1000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SHOULDERED_DONKEY_TERM",(undefined **)0x1000007,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = -3;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SWING_GAOGAEN_WORK_INT_START",
                 (undefined **)0x11000005,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SWING_GAOGAEN_WORK_INT_CATCH_CLATTER_FRAME",
                 (undefined **)0x11000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,
                 (uint *)"FIGHTER_STATUS_SWING_GAOGAEN_WORK_INT_CATCH_CLATTER_DAMAGE_MUL_FRAME_ADD",
                 (undefined **)0x11000007,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SWING_GAOGAEN_WORK_INT_CATCH_CLATTER_DEC_FRAME",
                 (undefined **)0x11000008,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SWING_GAOGAEN_WORK_INT_MOVE_CANCEL_FRAME",
                 (undefined **)0x11000009,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,
                 (uint *)"FIGHTER_STATUS_SWING_GAOGAEN_WORK_INT_THROWN_AIR_MOTION_FRAME_FIX",
                 (undefined **)0x1100000a,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,
                 (uint *)"FIGHTER_STATUS_SWING_GAOGAEN_WORK_INT_RETURN_AIR_MOTION_FRAME_FIX",
                 (undefined **)0x1100000b,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SWING_GAOGAEN_WORK_INT_INVALID_CAPTURE_FRAME",
                 (undefined **)0x1100000c,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SWING_GAOGAEN_WORK_INT_GAOGAEN_ID",
                 (undefined **)0x1100000d,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SWING_GAOGAEN_WORK_FLOAT_START",
                 (undefined **)0x1000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SWING_GAOGAEN_WORK_FLOAT_THROWN_SPEED_X",
                 (undefined **)0x1000007,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SWING_GAOGAEN_WORK_FLOAT_RETURN_SPEED_X",
                 (undefined **)0x1000008,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SWING_GAOGAEN_WORK_FLOAT_ROPE_OVER_SPEED_X",
                 (undefined **)0x1000009,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SWING_GAOGAEN_WORK_FLOAT_ROPE_POS_X",
                 (undefined **)0x100000a,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SWING_GAOGAEN_WORK_FLAG_START",
                 (undefined **)0x2100000b,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SWING_GAOGAEN_WORK_FLAG_IS_HIT_LARIAT",
                 (undefined **)0x2100000c,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SWING_GAOGAEN_WORK_FLAG_IS_HIT_SHOULDER",
                 (undefined **)0x2100000d,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SWING_GAOGAEN_WORK_FLAG_IS_HIT_FAILURE",
                 (undefined **)0x2100000e,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SWING_GAOGAEN_WORK_FLAG_IS_ROPE",
                 (undefined **)0x2100000f,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_SWING_GAOGAEN_WORK_TERM",(undefined **)0x21000010
                 ,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  if ((local_80 != 0) && (local_78 != 0)) {
    FUN_71038f55d0(local_80,local_70);
  }
  local_70 = 0xfffffffd;
  local_80 = 0;
  local_78 = 0;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_MIIFIGHTER_THROWN_WORK_INT_START",
                 (undefined **)0x11000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_MIIFIGHTER_THROWN_WORK_INT_OPPONENT_OBJCET_ID",
                 (undefined **)0x11000007,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_MIIFIGHTER_THROWN_WORK_FLOAT_START",
                 (undefined **)0x1000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_MIIFIGHTER_THROWN_WORK_FLAG_START",
                 (undefined **)0x2100000d,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_MIIFIGHTER_THROWN_WORK_TERM",
                 (undefined **)0x2100000e,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = -3;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_FINAL_DAMAGE_FLY_CLOUD_FLAG_START",
                 (undefined **)0x21000010,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_FINAL_DAMAGE_FLY_CLOUD_FLAG_ARRIVAL",
                 (undefined **)0x21000011,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_FINAL_DAMAGE_FLY_CLOUD_FLAG_CHANGE_MOTION",
                 (undefined **)0x21000012,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_FINAL_DAMAGE_FLY_CLOUD_FLAG_TERM",
                 (undefined **)0x21000013,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_FINAL_DAMAGE_FLY_CLOUD_WORK_INT_START",
                 (undefined **)0x11000008,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_FINAL_DAMAGE_FLY_CLOUD_WORK_INT_FRAME",
                 (undefined **)0x11000009,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_FINAL_DAMAGE_FLY_CLOUD_WORK_INT_MOVE_FRAME",
                 (undefined **)0x1100000a,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_FINAL_DAMAGE_FLY_CLOUD_WORK_INT_TERM",
                 (undefined **)0x1100000b,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_FINAL_DAMAGE_FLY_CLOUD_WORK_FLOAT_START",
                 (undefined **)&DAT_0100000f,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_FINAL_DAMAGE_FLY_CLOUD_WORK_FLOAT_POS_X",
                 (undefined **)0x1000010,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_FINAL_DAMAGE_FLY_CLOUD_WORK_FLOAT_POS_Y",
                 (undefined **)0x1000011,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_FINAL_DAMAGE_FLY_CLOUD_WORK_FLOAT_BEZIER_PARAM1",
                 (undefined **)0x1000012,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_FINAL_DAMAGE_FLY_CLOUD_WORK_FLOAT_BEZIER_PARAM2",
                 (undefined **)0x1000013,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_FINAL_WORK_FLOAT_FINAL2_OFFSET_X",
                 (undefined **)0x1000014,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_FINAL_WORK_FLOAT_FINAL2_OFFSET_Y",
                 (undefined **)0x1000015,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_FINAL_WORK_FLOAT_FINAL2_FALL_POS_X",
                 (undefined **)0x1000016,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_FINAL_WORK_FLOAT_FINAL2_FALL_POS_Y",
                 (undefined **)&DAT_01000017,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_FINAL_DAMAGE_FLY_CLOUD_WORK_FLOAT_TERM",
                 (undefined **)0x1000018,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  if ((local_80 != 0) && (local_78 != 0)) {
    FUN_71038f55d0(local_80,local_70);
  }
  local_70 = 0xfffffffd;
  local_80 = 0;
  local_78 = 0;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_MEWTWO_THROWN_WORK_FLOAT_START",
                 (undefined **)0x1000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_MEWTWO_THROWN_WORK_FLOAT_SPEED_Y",
                 (undefined **)0x1000007,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_MEWTWO_THROWN_WORK_FLOAT_TERM",
                 (undefined **)0x1000008,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_70 = 0xfffffffd;
  local_80 = 0;
  local_78 = 0;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_FINAL_DAMAGE_FLY_KOOPA_FLAG_START",
                 (undefined **)0x21000010,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_FINAL_DAMAGE_FLY_KOOPA_FLAG_TERM",
                 (undefined **)0x21000011,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_FINAL_DAMAGE_FLY_KOOPA_WORK_INT_START",
                 (undefined **)0x11000008,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_FINAL_DAMAGE_FLY_KOOPA_WORK_INT_FRAME",
                 (undefined **)0x11000009,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_FINAL_DAMAGE_FLY_KOOPA_WORK_INT_TERM",
                 (undefined **)0x1100000a,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_FINAL_DAMAGE_FLY_KOOPA_WORK_FLOAT_START",
                 (undefined **)&DAT_0100000f,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_FINAL_DAMAGE_FLY_KOOPA_WORK_FLOAT_TERM",
                 (undefined **)0x1000010,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_FISHINGROD_HOOK_WORK_FLAG_START",
                 (undefined **)0x2100000b,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_FISHINGROD_HOOK_WORK_FLAG_INIT_BRAKE",
                 (undefined **)0x2100000c,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_FISHINGROD_HOOK_WORK_FLAG_DAMAGE_CUT",
                 (undefined **)0x2100000d,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_FISHINGROD_HOOK_WORK_FLAG_TERM",
                 (undefined **)0x2100000e,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_FISHINGROD_HOOK_WORK_FLOAT_START",
                 (undefined **)0x1000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_FISHINGROD_HOOK_WORK_FLOAT_TOTAL_DAMAGE",
                 (undefined **)0x1000007,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_FISHINGROD_HOOK_WORK_FLOAT_INIT_SPEED",
                 (undefined **)0x1000008,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_FISHINGROD_HOOK_WORK_FLOAT_BRAKE_MUL",
                 (undefined **)0x1000009,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,
                 (uint *)"FIGHTER_STATUS_CAPTURE_FISHINGROD_HOOK_WORK_FLOAT_GROUND_HIT_SPEED",
                 (undefined **)0x100000a,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_FISHINGROD_HOOK_WORK_FLOAT_TERM",
                 (undefined **)0x100000b,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_FISHINGROD_HOOK_WORK_INT_START",
                 (undefined **)0x11000004,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,
                 (uint *)"FIGHTER_STATUS_CAPTURE_FISHINGROD_HOOK_WORK_INT_GROUND_HIT_COUNT",
                 (undefined **)0x11000005,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,
                 (uint *)"FIGHTER_STATUS_CAPTURE_FISHINGROD_HOOK_WORK_INT_MOTION_KIND_DAMAGE",
                 (undefined **)0x11000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_FISHINGROD_HOOK_WORK_INT_TERM",
                 (undefined **)0x11000007,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_70 = 0xfffffffd;
  local_80 = 0;
  local_78 = 0;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_FINAL_DAMAGE_RYU_FLAG_START",
                 (undefined **)0x21000010,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_FINAL_DAMAGE_RYU_FLAG_SHINSYOURYUKEN",
                 (undefined **)0x21000011,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_FINAL_DAMAGE_RYU_FLAG_TERM",
                 (undefined **)0x21000012,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_FINAL_DAMAGE_RYU_WORK_INT_START",
                 (undefined **)0x11000008,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_FINAL_DAMAGE_RYU_WORK_INT_TERM",
                 (undefined **)0x11000009,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_FINAL_DAMAGE_RYU_WORK_FLOAT_START",
                 (undefined **)&DAT_0100000f,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_FINAL_DAMAGE_RYU_WORK_FLOAT_TERM",
                 (undefined **)0x1000010,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_FINAL_DAMAGE_FLY_RYU_FLAG",
                 (undefined **)0x20000,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_FINAL_DAMAGE_FLY_RYU_INT",
                 (undefined **)&DAT_000000e0,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_WORK_KEEP_FLAG_FINAL_DAMAGE_FLY_RYU_FLOAT",
                 (undefined **)0xc200,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_70 = 0xfffffffd;
  local_80 = 0;
  local_78 = 0;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_VISUAL_SCENE_FLAG_START",(undefined **)0x2100000b
                 ,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_VISUAL_SCENE_FLAG_CLEAR_SLOW",
                 (undefined **)0x2100000c,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_VISUAL_SCENE_FLAG_ABS_HIT",
                 (undefined **)0x2100000d,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_VISUAL_SCENE_FLAG_FINAL_ZOOM_START",
                 (undefined **)0x2100000e,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_VISUAL_SCENE_FLAG_CLEAR_ATTACK",
                 (undefined **)0x2100000f,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_VISUAL_SCENE_FLAG_ABS_SET",
                 (undefined **)0x21000010,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_VISUAL_SCENE_FLAG_END_EXIT",
                 (undefined **)0x21000011,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_VISUAL_SCENE_FLAG_END_EXIT_FINISH",
                 (undefined **)0x21000012,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_VISUAL_SCENE_FLAG_TERM",(undefined **)0x21000013,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_VISUAL_SCENE_WORK_INT_START",
                 (undefined **)0x11000004,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_VISUAL_SCENE_WORK_INT_TERM",
                 (undefined **)0x11000005,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_VISUAL_SCENE_WORK_FLOAT_START",
                 (undefined **)0x1000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_VISUAL_SCENE_WORK_FLOAT_TERM",
                 (undefined **)0x1000007,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_VISUAL_SCENE_TARGET_WORK_INT_START",
                 (undefined **)0x11000004,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_VISUAL_SCENE_TARGET_WORK_INT_POS_OBJECT_ID",
                 (undefined **)0x11000005,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_VISUAL_SCENE_TARGET_WORK_INT_POS_JOINT",
                 (undefined **)0x11000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_VISUAL_SCENE_TARGET_WORK_INT_TERM",
                 (undefined **)0x11000007,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_VISUAL_SCENE_TARGET_WORK_FLOAT_START",
                 (undefined **)0x1000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_VISUAL_SCENE_TARGET_WORK_FLOAT_FALL_SPEED",
                 (undefined **)0x1000007,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_VISUAL_SCENE_TARGET_WORK_FLOAT_END_VX",
                 (undefined **)0x1000008,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_VISUAL_SCENE_TARGET_WORK_FLOAT_END_VY",
                 (undefined **)0x1000009,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_VISUAL_SCENE_TARGET_WORK_FLOAT_PITCH",
                 (undefined **)0x100000a,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_VISUAL_SCENE_TARGET_WORK_FLOAT_INIT_SCALE",
                 (undefined **)0x100000b,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_VISUAL_SCENE_TARGET_WORK_FLOAT_SCALE_BASE",
                 (undefined **)0x100000c,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_VISUAL_SCENE_TARGET_WORK_FLOAT_SCALE_OWNER",
                 (undefined **)0x100000d,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_VISUAL_SCENE_TARGET_WORK_FLOAT_TERM",
                 (undefined **)0x100000e,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_VISUAL_SCENE_TARGET_FLAG_START",
                 (undefined **)0x2100000b,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_VISUAL_SCENE_TARGET_WORK_FLAG_MOT_WAIT",
                 (undefined **)0x2100000c,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_VISUAL_SCENE_TARGET_FLAG_TERM",
                 (undefined **)0x2100000d,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  if ((local_80 != 0) && (local_78 != 0)) {
    FUN_71038f55d0(local_80,-3);
  }
  local_70 = 0xfffffffd;
  local_80 = 0;
  local_78 = 0;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_PACKUN_FINAL_CAPTURE_FLAG_START",
                 (undefined **)0x21000010,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_PACKUN_FINAL_CAPTURE_FLAG_SUSPEND",
                 (undefined **)0x21000011,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_PACKUN_FINAL_CAPTURE_FLAG_TERM",
                 (undefined **)0x21000012,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_PACKUN_FINAL_CAPTURE_WORK_INT_START",
                 (undefined **)0x11000008,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_PACKUN_FINAL_CAPTURE_WORK_INT_TERM",
                 (undefined **)0x11000009,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_PACKUN_FINAL_CAPTURE_WORK_FLOAT_START",
                 (undefined **)&DAT_0100000f,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_PACKUN_FINAL_CAPTURE_WORK_FLOAT_INIT_SCALE",
                 (undefined **)0x1000010,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_PACKUN_FINAL_CAPTURE_WORK_FLOAT_POS_X",
                 (undefined **)0x1000011,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_PACKUN_FINAL_CAPTURE_WORK_FLOAT_POS_Y",
                 (undefined **)0x1000012,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_PACKUN_FINAL_CAPTURE_WORK_FLOAT_ESCAPE_SPEED_X",
                 (undefined **)0x1000013,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_PACKUN_FINAL_CAPTURE_WORK_FLOAT_ESCAPE_SPEED_Y",
                 (undefined **)0x1000014,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_PACKUN_FINAL_CAPTURE_WORK_FLOAT_TERM",
                 (undefined **)0x1000015,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = -3;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_JACK_FINAL_TARGET_INT_START",
                 (undefined **)0x11000004,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_JACK_FINAL_TARGET_INT_EFFECT_FRAME",
                 (undefined **)0x11000005,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_JACK_FINAL_TARGET_FLOAT_START",
                 (undefined **)0x1000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_JACK_FINAL_TARGET_FLOAT_SCALE_BASE",
                 (undefined **)0x1000007,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_JACK_FINAL_TARGET_FLOAT_SCALE_OWNER",
                 (undefined **)0x1000008,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_JACK_FINAL_TARGET_FLAG_START",
                 (undefined **)0x2100000b,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_JACK_FINAL_TARGET_FLAG_FINISH",
                 (undefined **)0x2100000c,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_JACK_FINAL_TARGET_FLAG_TO_SPECIAL_RESULT",
                 (undefined **)0x2100000d,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  ppppbVar1 = (byte ****)0xfffffffd;
  FUN_7103728630(&local_80,0,(undefined **)"FighterEntryStartType",0xfffffffd,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_71037289c0(&local_80,(uint *)&DAT_710433f5ea,(undefined **)0x0,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_71037289c0(&local_80,(uint *)"ENTRY",(undefined **)0x1,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"START",(undefined **)0x2,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"RESTART",(undefined **)0x3,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"STANDBY",(undefined **)&DAT_00000004,ppppbVar1,in_x4,in_x5,in_x6
                 ,in_x7);
  FUN_71037289c0(&local_80,(uint *)"SUDDEN_DEATH",(undefined **)0x5,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_71037289c0(&local_80,(uint *)"RESULT",(undefined **)0x6,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"CHANGE",(undefined **)&DAT_00000007,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_71037289c0(&local_80,(uint *)&DAT_71042eafa2,(undefined **)&DAT_00000008,ppppbVar1,in_x4,in_x5
                 ,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"RESET",(undefined **)&DAT_00000009,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_71037289c0(&local_80,(uint *)"FLYING_PLATE",(undefined **)0xa,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_71037289c0(&local_80,(uint *)"CAMPAIGN",(undefined **)0xb,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"ROULETTE",(undefined **)&DAT_0000000c,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"ROULETTE_FURAFURA",(undefined **)&DAT_0000000d,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"BOSS_ENTRY",(undefined **)&DAT_0000000e,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"STAFF_ROLL",(undefined **)&DAT_0000000f,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  if ((local_80 != 0) && (local_78 != 0)) {
    FUN_71038f55d0(local_80,local_70);
  }
  ppppbVar1 = (byte ****)0xfffffffd;
  FUN_7103728630(&local_80,0,(undefined **)"FighterEntryDescriptionOperatorKind",0xfffffffd,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"HUMAN",(undefined **)0x0,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)&DAT_7104252e8d,(undefined **)0x1,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_71037289c0(&local_80,(uint *)&DAT_710433f5ea,(undefined **)0x2,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  if ((local_80 != 0) && (local_78 != 0)) {
    FUN_71038f55d0(local_80,local_70);
  }
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_ENTRY_DESCRIPTION_COLOR_0",(undefined **)0x0,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_ENTRY_DESCRIPTION_COLOR_1",(undefined **)0x1,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_ENTRY_DESCRIPTION_COLOR_2",(undefined **)0x2,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_ENTRY_DESCRIPTION_COLOR_3",(undefined **)0x3,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_ENTRY_DESCRIPTION_COLOR_4",(undefined **)&DAT_00000004,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_ENTRY_DESCRIPTION_COLOR_5",(undefined **)0x5,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_ENTRY_DESCRIPTION_COLOR_6",(undefined **)0x6,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_ENTRY_DESCRIPTION_COLOR_7",(undefined **)&DAT_00000007,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_ENTRY_DESCRIPTION_NORMAL_COLOR_TERM",
                 (undefined **)&DAT_00000008,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_ENTRY_DESCRIPTION_COLOR_FAKE",
                 (undefined **)&DAT_00000008,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_ENTRY_DESCRIPTION_COLOR_DARK",
                 (undefined **)&DAT_00000009,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_ENTRY_DESCRIPTION_COLOR_TERM",(undefined **)0xa,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_ENTRY_INDEX_CURRENT",(undefined **)&DAT_ffffffff,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = -3;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_ENTRY_NO_1ST",(undefined **)0x0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_ENTRY_NO_2ND",(undefined **)0x1,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_ENTRY_NO_3RD",(undefined **)0x2,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_ENTRY_NO_MAX",(undefined **)0x3,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_ENTRY_NO_INVALID",(undefined **)&DAT_000000ff,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  ppppbVar1 = (byte ****)0xfffffffd;
  FUN_7103728630(&local_80,0,(undefined **)"FighterEntryControlInput",0xfffffffd,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_71037289c0(&local_80,(uint *)&DAT_710433de45,(undefined **)0x0,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_71037289c0(&local_80,(uint *)&DAT_710431c894,(undefined **)0x1,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_71037289c0(&local_80,(uint *)&DAT_71044239c7,(undefined **)0x2,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  if ((local_80 != 0) && (local_78 != 0)) {
    FUN_71038f55d0(local_80,local_70);
  }
  ppppbVar1 = (byte ****)0xfffffffd;
  FUN_7103728630(&local_80,0,(undefined **)"FighterEntryEdgeColorType",0xfffffffd,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_71037289c0(&local_80,(uint *)&DAT_710433f5ea,(undefined **)0x0,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_71037289c0(&local_80,(uint *)"DEFAULT",(undefined **)0x1,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"ITEM_METAL",(undefined **)0x2,ppppbVar1,in_x4,in_x5,in_x6,in_x7)
  ;
  FUN_71037289c0(&local_80,(uint *)"ITEM_TIMER",(undefined **)0x3,ppppbVar1,in_x4,in_x5,in_x6,in_x7)
  ;
  FUN_71037289c0(&local_80,(uint *)"STAGE_GOLD",(undefined **)&DAT_00000004,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"STAGE_STREETPASS_POWER_UP",(undefined **)0x5,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"STAGE_STREETPASS_POWER_DOWN",(undefined **)0x6,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"STAGE_PACMAZE_PELLET",(undefined **)&DAT_00000007,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"POKEMON_XERNEAS_POWER_UP",(undefined **)&DAT_00000008,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"POKEMON_VICTINI_POWER_UP",(undefined **)&DAT_00000009,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"ASSIST_RIKI_POWER_UP",(undefined **)0xa,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"POKEMON_XERNEAS_POWER_DOWN",(undefined **)0xb,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"POKEMON_VICTINI_POWER_DOWN",(undefined **)&DAT_0000000c,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"ASSIST_RIKI_POWER_DOWN",(undefined **)&DAT_0000000d,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FS_POWERUP",(undefined **)&DAT_0000000e,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"TEAM_COLOR",(undefined **)&DAT_0000000f,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FINAL",(undefined **)&DAT_00000010,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_71037289c0(&local_80,(uint *)"METAMON",(undefined **)&DAT_00000011,ppppbVar1,in_x4,in_x5,in_x6
                 ,in_x7);
  FUN_71037289c0(&local_80,(uint *)"LIGHT_DARK",(undefined **)&DAT_00000012,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)&DAT_710433de4a,(undefined **)&DAT_00000013,ppppbVar1,in_x4,in_x5
                 ,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)&DAT_71044239c7,(undefined **)&DAT_00000014,ppppbVar1,in_x4,in_x5
                 ,in_x6,in_x7);
  if ((local_80 != 0) && (local_78 != 0)) {
    FUN_71038f55d0(local_80,local_70);
  }
  ppppbVar1 = (byte ****)0xfffffffd;
  FUN_7103728630(&local_80,0,(undefined **)"FighterCategory",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"NORMAL",(undefined **)0x0,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"METAMON",(undefined **)0x1,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"LIGHT",(undefined **)0x2,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"LIGHT_EYE",(undefined **)0x3,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"LIGHT_EYE_AURA",(undefined **)&DAT_00000004,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)&DAT_71042b818a,(undefined **)0x5,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_71037289c0(&local_80,(uint *)"DARK_EYE",(undefined **)0x6,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"DARK_EYE_AURA",(undefined **)&DAT_00000007,ppppbVar1,in_x4,in_x5
                 ,in_x6,in_x7);
  if ((local_80 != 0) && (local_78 != 0)) {
    FUN_71038f55d0(local_80,local_70);
  }
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"ENTRY_ID_SHAM_FIGHTER1",(undefined **)&DAT_00000004,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"ENTRY_ID_SHAM_FIGHTER2",(undefined **)0x5,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"ENTRY_ID_SHAM_FIGHTER3",(undefined **)0x6,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"ENTRY_ID_SHAM_FIGHTER_MAX",(undefined **)&DAT_00000007,ppppbVar1
                 ,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_DATA_INDEX_1ST",(undefined **)0x0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_DATA_INDEX_2ND",(undefined **)0x1,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_DATA_INDEX_3RD",(undefined **)0x2,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_DATA_INDEX_TERM",(undefined **)0x3,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_DATA_INDEX_MAIN",(undefined **)0x0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_DATA_INDEX_NONE",(undefined **)&DAT_ffffffff,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_LOG_DATA_INDEX_TOTAL",(undefined **)0xfffffffe,ppppbVar1
                 ,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DOLLY_SUPER_SPECIAL2_CAPTURE_WORK_INT_START",
                 (undefined **)0x11000009,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DOLLY_SUPER_SPECIAL2_CAPTURE_WORK_INT_STOP_FRAME"
                 ,(undefined **)0x1100000a,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DOLLY_SUPER_SPECIAL2_CAPTURE_WORK_INT_MOVE_FRAME"
                 ,(undefined **)0x1100000b,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DOLLY_SUPER_SPECIAL2_CAPTURE_WORK_FLOAT_START",
                 (undefined **)0x1000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DOLLY_SUPER_SPECIAL2_CAPTURE_WORK_FLAG_START",
                 (undefined **)0x21000012,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,
                 (uint *)"FIGHTER_STATUS_DOLLY_SUPER_SPECIAL2_CAPTURE_WORK_FLAG_START_GROUND",
                 (undefined **)0x21000013,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DOLLY_SUPER_SPECIAL2_CAPTURE_WORK_FLAG_THROWN",
                 (undefined **)0x21000014,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DOLLY_FINAL_TARGET_INT_START",
                 (undefined **)0x11000004,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DOLLY_FINAL_TARGET_FLOAT_START",
                 (undefined **)0x1000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DOLLY_FINAL_TARGET_FLOAT_SCALE_BASE",
                 (undefined **)0x1000007,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DOLLY_FINAL_TARGET_FLOAT_SCALE_OWNER",
                 (undefined **)0x1000008,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DOLLY_FINAL_TARGET_FLOAT_SCALE_Z",
                 (undefined **)0x1000009,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DOLLY_FINAL_TARGET_FLAG_START",
                 (undefined **)0x2100000b,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DOLLY_FINAL_TARGET_FLAG_FINISH",
                 (undefined **)0x2100000c,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CATCHED_PICKEL_TROLLEY_WORK_ID_FLAG_START",
                 (undefined **)0x2100000b,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CATCHED_PICKEL_TROLLEY_WORK_ID_FLAG_TERM",
                 (undefined **)0x2100000c,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CATCHED_PICKEL_TROLLEY_WORK_ID_INT_START",
                 (undefined **)0x11000004,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CATCHED_PICKEL_TROLLEY_WORK_ID_INT_TERM",
                 (undefined **)0x11000005,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CATCHED_PICKEL_TROLLEY_WORK_ID_FLOAT_START",
                 (undefined **)0x1000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CATCHED_PICKEL_TROLLEY_WORK_ID_FLOAT_TERM",
                 (undefined **)0x1000007,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_FINAL_DAMAGE_PICKEL_FLAG_START",
                 (undefined **)0x21000010,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_FINAL_DAMAGE_PICKEL_FLAG_MOTION2",
                 (undefined **)0x21000011,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_FINAL_DAMAGE_PICKEL_FLAG_TERM",
                 (undefined **)0x21000012,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_FINAL_DAMAGE_PICKEL_WORK_INT_START",
                 (undefined **)0x11000008,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_FINAL_DAMAGE_PICKEL_WORK_INT_MOVE_FRAME",
                 (undefined **)0x11000009,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_FINAL_DAMAGE_PICKEL_WORK_INT_TERM",
                 (undefined **)0x1100000a,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_FINAL_DAMAGE_PICKEL_WORK_FLOAT_START",
                 (undefined **)&DAT_0100000f,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_FINAL_DAMAGE_PICKEL_WORK_FLOAT_TERM",
                 (undefined **)0x1000010,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xfffffffd;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DEMON_DIVED_WORK_INT_START",
                 (undefined **)0x11000007,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DEMON_DIVED_WORK_INT_OFFSET_COUNT",
                 (undefined **)0x11000008,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DEMON_DIVED_WORK_FLOAT_START",
                 (undefined **)0x1000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DEMON_DIVED_WORK_FLOAT_INIT_Y",
                 (undefined **)0x1000007,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DEMON_DIVED_WORK_FLOAT_INIT_OFFSET_X",
                 (undefined **)0x1000008,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DEMON_DIVED_WORK_FLOAT_INIT_OFFSET_Y",
                 (undefined **)0x1000009,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DEMON_DIVED_WORK_FLOAT_INIT_OFFSET_Z",
                 (undefined **)0x100000a,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DEMON_DIVED_WORK_FLAG_START",
                 (undefined **)0x2100000b,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DEMON_DIVED_WORK_FLAG_CAMERA_UPDATE_POS",
                 (undefined **)0x2100000c,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_DEMON_DIVED_WORK_TERM",(undefined **)0x2100000d,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_70 = 0xfffffffd;
  local_80 = 0;
  local_78 = 0;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRAIL_REBOUND_WORK_FLAG_START",
                 (undefined **)0x2100000b,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRAIL_REBOUND_WORK_FLAG_REBOUND_END",
                 (undefined **)0x2100000c,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRAIL_REBOUND_WORK_INT_START",
                 (undefined **)0x11000004,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRAIL_REBOUND_WORK_INT_FRAME",
                 (undefined **)0x11000005,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRAIL_REBOUND_WORK_FLOAT_START",
                 (undefined **)0x1000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRAIL_REBOUND_WORK_FLOAT_LIMIT_SPEED_Y",
                 (undefined **)0x1000007,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRAIL_REBOUND_WORK_FLOAT_2ND_RATE",
                 (undefined **)0x1000008,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_TRAIL_REBOUND_WORK_TERM",(undefined **)0x1000009,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_70 = 0xfffffffd;
  local_80 = 0;
  local_78 = 0;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_MURABITO_FINAL_CAPTURE_WORK_FLAG_START",
                 (undefined **)0x2100000b,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_MURABITO_FINAL_CAPTURE_WORK_FLAG_TERM",
                 (undefined **)0x2100000c,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_MURABITO_FINAL_CAPTURE_WORK_FLOAT_START",
                 (undefined **)0x1000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_MURABITO_FINAL_CAPTURE_WORK_FLOAT_PARENT_POS_X",
                 (undefined **)0x1000007,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_MURABITO_FINAL_CAPTURE_WORK_FLOAT_PARENT_POS_Y",
                 (undefined **)0x1000008,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_MURABITO_FINAL_CAPTURE_WORK_FLOAT_TERM",
                 (undefined **)0x1000009,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_MURABITO_FINAL_CAPTURE_WORK_INT_START",
                 (undefined **)0x11000004,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_MURABITO_FINAL_CAPTURE_WORK_INT_TERM",
                 (undefined **)0x11000005,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  local_70 = -3;
  local_80 = 0;
  local_78 = 0;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_TRAIL_KEYHOLE_WORK_ID_FLAG_START",
                 (undefined **)0x2100000b,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_TRAIL_KEYHOLE_WORK_ID_FLAG_INHALE_START",
                 (undefined **)0x2100000c,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_TRAIL_KEYHOLE_WORK_ID_FLAG_INHALE",
                 (undefined **)0x2100000d,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_TRAIL_KEYHOLE_WORK_ID_FLAG_INHALE_END",
                 (undefined **)0x2100000e,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_TRAIL_KEYHOLE_WORK_ID_FLAG_TERM",
                 (undefined **)0x2100000f,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_TRAIL_KEYHOLE_WORK_ID_INT_START",
                 (undefined **)0x11000004,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_TRAIL_KEYHOLE_WORK_ID_INT_FRAME_BASE",
                 (undefined **)0x11000005,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_TRAIL_KEYHOLE_WORK_ID_INT_INHALE_FRAME",
                 (undefined **)0x11000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_TRAIL_KEYHOLE_WORK_ID_INT_INHALE_INDEX",
                 (undefined **)0x11000007,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_TRAIL_KEYHOLE_WORK_ID_INT_TERM",
                 (undefined **)0x11000008,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_TRAIL_KEYHOLE_WORK_ID_FLOAT_START",
                 (undefined **)0x1000006,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_TRAIL_KEYHOLE_WORK_ID_FLOAT_SCALE_BASE",
                 (undefined **)0x1000007,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_TRAIL_KEYHOLE_WORK_ID_FLOAT_START_POS_X",
                 (undefined **)0x1000008,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_TRAIL_KEYHOLE_WORK_ID_FLOAT_START_POS_Y",
                 (undefined **)0x1000009,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_TRAIL_KEYHOLE_WORK_ID_FLOAT_START_POS_Z",
                 (undefined **)0x100000a,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_TRAIL_KEYHOLE_WORK_ID_FLOAT_INHALE_POS_X"
                 ,(undefined **)0x100000b,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_TRAIL_KEYHOLE_WORK_ID_FLOAT_INHALE_POS_Y"
                 ,(undefined **)0x100000c,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_TRAIL_KEYHOLE_WORK_ID_FLOAT_INHALE_POS_Z"
                 ,(undefined **)0x100000d,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_TRAIL_KEYHOLE_WORK_ID_FLOAT_INHALE_SPEED"
                 ,(undefined **)0x100000e,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_TRAIL_KEYHOLE_WORK_ID_FLOAT_INHALE_BRAKE"
                 ,(undefined **)&DAT_0100000f,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,
                 (uint *)"FIGHTER_STATUS_CAPTURE_TRAIL_KEYHOLE_WORK_ID_FLOAT_INHALE_SPEED_MIN",
                 (undefined **)0x1000010,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_TRAIL_KEYHOLE_WORK_ID_FLOAT_INHALE_SCALE"
                 ,(undefined **)0x1000011,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_STATUS_CAPTURE_TRAIL_KEYHOLE_WORK_ID_FLOAT_TERM",
                 (undefined **)0x1000012,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  if ((local_80 != 0) && (local_78 != 0)) {
    FUN_71038f55d0(local_80,local_70);
  }
  return;
}

