// addr:      710209f330
// offset:    0x209f330
// name:      FUN_710209f330
// mangled:   
// signature: undefined __cdecl FUN_710209f330(long param_1)


void FUN_710209f330(long param_1)

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
  FUN_7103728630(&local_28,param_1,(undefined **)"ItemModule",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"have_item",(long ****)FUN_7102099050,ppppbVar1,in_x4,in_x5,in_x6
                 ,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"have_item_instance",(long ****)FUN_7102099350,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"use_item_instance",(long ****)FUN_71020997a0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"use_item",(long ****)FUN_71020999a0,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"pickup_item",(long ****)FUN_7102099b80,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_success_pickup_item",(long ****)FUN_7102099db0,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"success_auto_pickup_item",(long ****)FUN_7102099e80,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_success_auto_pickup_item",(long ****)FUN_7102099f30,ppppbVar1
                 ,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_have_item",(long ****)FUN_710209a000,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_have_item_size",(long ****)FUN_710209a150,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_have_item_kind",(long ****)FUN_710209a2b0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_have_item_trait",(long ****)FUN_710209a410,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_have_item_hold_kind",(long ****)FUN_710209a570,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_have_item_status_param_int",(long ****)FUN_710209a6d0,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_have_item_status_param_float",(long ****)FUN_710209a850,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_have_item_status_param_bool",(long ****)FUN_710209a9d0,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_have_item_id",(long ****)FUN_710209ab50,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_pickable_item_object_id",(long ****)FUN_710209acb0,ppppbVar1
                 ,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_pickable_item_size",(long ****)FUN_710209ad90,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_pickable_item_kind",(long ****)FUN_710209ae70,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_pickable_item_trait",(long ****)FUN_710209af50,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"remove_item",(long ****)FUN_710209b030,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"remove_all",(long ****)FUN_710209b160,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"throw_item",(long ****)FUN_710209b210,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"drop_item",(long ****)FUN_710209b710,ppppbVar1,in_x4,in_x5,in_x6
                 ,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"warp_item",(long ****)FUN_710209b9f0,ppppbVar1,in_x4,in_x5,in_x6
                 ,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"warp_attach_item",(long ****)FUN_710209bd40,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"born_item",(long ****)FUN_710209c070,ppppbVar1,in_x4,in_x5,in_x6
                 ,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"shoot_item_bullet",(long ****)FUN_710209c1a0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"shoot_item_bullet_blanks",(long ****)FUN_710209c3f0,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_shoot_item_bullet",(long ****)FUN_710209c550,ppppbVar1,in_x4
                 ,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"update_have_item_action_info",(long ****)FUN_710209c6b0,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_have_item_scale_anim",(long ****)FUN_710209c7e0,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_have_item_action",(long ****)FUN_710209ca10,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_have_item_visibility",(long ****)FUN_710209cc50,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_have_item_hold_anim",(long ****)FUN_710209ce20,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_have_item_constraint_joint",(long ****)FUN_710209cff0,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"reset_have_item_constraint_node",(long ****)FUN_710209d150,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_have_item_hit_sleep",(long ****)FUN_710209d280,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"attach_item",(long ****)FUN_710209d420,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"attach_item_2",(long ****)FUN_710209d650,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"attach_item_instance",(long ****)FUN_710209d850,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_attach_item",(long ****)FUN_710209da50,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_attach_item_count",(long ****)FUN_710209dba0,ppppbVar1,in_x4
                 ,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_attach_item_visibility",(long ****)FUN_710209dc70,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"eject_have_item",(long ****)FUN_710209de40,ppppbVar1,in_x4,in_x5
                 ,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"eject_attach_item",(long ****)FUN_710209e0c0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"eject_attach",(long ****)FUN_710209e3f0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"drop_attach",(long ****)FUN_710209e640,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"drop_attach_group",(long ****)FUN_710209e930,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"scale_attach",(long ****)FUN_710209ec30,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_attach_item_action",(long ****)FUN_710209ee30,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_have_item_team",(long ****)FUN_710209f060,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_change_status_event",(long ****)FUN_710209f1c0,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  if ((local_28 != 0) && (local_20 != 0)) {
    FUN_71038f55d0(local_28,local_18);
  }
  return;
}

