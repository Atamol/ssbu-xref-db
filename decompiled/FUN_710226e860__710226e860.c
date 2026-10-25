// addr:      710226e860
// offset:    0x226e860
// name:      FUN_710226e860
// mangled:   
// signature: undefined __cdecl FUN_710226e860(long param_1)


void FUN_710226e860(long param_1)

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
  FUN_7103728630(&local_28,param_1,(undefined **)"pickelobject",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"grid_size",(long ****)FUN_710226c300,ppppbVar1,in_x4,in_x5,in_x6
                 ,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"grid_position",(long ****)FUN_710226c340,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"grid_status",(long ****)FUN_710226c5e0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_grid_blank",(long ****)FUN_710226c870,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"regist_block_to_grid",(long ****)FUN_710226cb00,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"unregist_block_to_grid",(long ****)FUN_710226cda0,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_battle_object_id_from_grid_pos",(long ****)FUN_710226cff0,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"create_ground_collision",(long ****)FUN_710226d270,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"update_collision_work",(long ****)FUN_710226d360,ppppbVar1,in_x4
                 ,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_material_visibility_mesh_all_invisible",
                 (long ****)FUN_710226d420,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_base_material_visibility_mesh_id_hash",
                 (long ****)FUN_710226d4e0,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_damaged_material_visibility_mesh_id_hash",
                 (long ****)FUN_710226d650,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_born_effect_hash",(long ****)FUN_710226d740,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_damage_sound_hash",(long ****)FUN_710226d8c0,ppppbVar1,in_x4
                 ,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_break_sound_hash",(long ****)FUN_710226da30,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_landing_fighter_rhombus_touch_ground",
                 (long ****)FUN_710226dba0,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_wall_left_fighter_rhombus_touch_ground",
                 (long ****)FUN_710226dc90,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_wall_right_fighter_rhombus_touch_ground",
                 (long ****)FUN_710226dd80,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_heading_fighter_rhombus_touch_ground",
                 (long ****)FUN_710226de70,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"check_range_from_onwer",(long ****)FUN_710226df60,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"update_blink",(long ****)FUN_710226e020,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)&DAT_710425cf6a,(long ****)FUN_710226e0e0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)&DAT_710427e6d1,(long ****)FUN_710226e170,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"damage_hit_fighter",(long ****)FUN_710226e2e0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"crack_hp_percent",(long ****)FUN_710226e320,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"crack_max_hp_percent",(long ****)FUN_710226e360,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"flash_start_frame",(long ****)FUN_710226e3a0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"auto_damage",(long ****)FUN_710226e3e0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"crack_level",(long ****)FUN_710226e420,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"damage_hit_fighter_stop_frame",(long ****)FUN_710226e460,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"fighter_landing_damage_mul",(long ****)FUN_710226e4a0,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"fighter_landing_damage_mul_frame",(long ****)FUN_710226e4e0,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"camera_range_damag_mul_start_rate",(long ****)FUN_710226e520,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"camera_range_damag_mul_end_rate",(long ****)FUN_710226e560,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"camera_range_damag_mul_min",(long ****)FUN_710226e5a0,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"camera_range_damag_mul_max",(long ****)FUN_710226e5e0,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"generate_continuous_forbid_frame",(long ****)FUN_710226e620,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"replace_hp_range_x_from_owner",(long ****)FUN_710226e660,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"replace_hp_range_y_from_owner",(long ****)FUN_710226e6a0,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"replace_hp",(long ****)FUN_710226e6e0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"damage_attack_stop_frame",(long ****)FUN_710226e720,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"jostle_touch_ground_frame",(long ****)FUN_710226e760,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"jostle_up_touch_ground_frame",(long ****)FUN_710226e7a0,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"can_update_frame",(long ****)FUN_710226e7e0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"jostle_up_touch_air_frame",(long ****)FUN_710226e820,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  if ((local_28 != 0) && (local_20 != 0)) {
    FUN_71038f55d0(local_28,local_18);
  }
  return;
}

