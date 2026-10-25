// addr:      710335ea80
// offset:    0x335ea80
// name:      FUN_710335ea80
// mangled:   
// signature: undefined8 __cdecl FUN_710335ea80(long param_1)


undefined8 FUN_710335ea80(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  code *pcVar4;
  undefined4 *puVar5;
  long alStack_130 [4];
  long *local_110;
  long alStack_100 [4];
  long *local_e0;
  long alStack_d0 [4];
  long *local_b0;
  long alStack_a0 [4];
  long *local_80;
  long alStack_70 [4];
  long *local_50;
  undefined4 local_40;
  
  local_110 = (long *)0x0;
  local_e0 = (long *)0x0;
  local_b0 = (long *)0x0;
  local_80 = (long *)0x0;
  local_50 = (long *)0x0;
  local_40 = 0;
  if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
    FUN_71038fec40(param_1);
  }
  uVar1 = FUN_710391e050(param_1);
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  *(undefined4 *)(puVar2 + 1) = 0x45;
  *puVar2 = uVar1;
  lVar3 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar3 + 0x10;
  *(undefined4 *)(lVar3 + 0x18) = 0x13;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  lVar3 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar3 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar3 + -0x10),"input_index");
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  *puVar2 = 0;
  *(undefined4 *)(puVar2 + 1) = 0x13;
  lVar3 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar3 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar3 + -0x10),"selection_type");
  puVar5 = *(undefined4 **)(param_1 + 0x10);
  *puVar5 = 1;
  puVar5[2] = 1;
  lVar3 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar3 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar3 + -0x10),"use_cursor_looping");
  puVar5 = *(undefined4 **)(param_1 + 0x10);
  *puVar5 = 1;
  puVar5[2] = 1;
  lVar3 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar3 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar3 + -0x10),"cancel_outside_window");
  puVar5 = *(undefined4 **)(param_1 + 0x10);
  *puVar5 = 0;
  puVar5[2] = 1;
  lVar3 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar3 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar3 + -0x10),"use_only_shortcut");
  puVar5 = *(undefined4 **)(param_1 + 0x10);
  *puVar5 = 0;
  puVar5[2] = 1;
  lVar3 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar3 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar3 + -0x10),"use_only_touch_control");
  puVar5 = *(undefined4 **)(param_1 + 0x10);
  *puVar5 = 0;
  puVar5[2] = 1;
  lVar3 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar3 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar3 + -0x10),"use_only_pointer_input");
  puVar5 = *(undefined4 **)(param_1 + 0x10);
  *puVar5 = 0;
  puVar5[2] = 1;
  lVar3 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar3 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar3 + -0x10),"input_direction_only_x");
  puVar5 = *(undefined4 **)(param_1 + 0x10);
  *puVar5 = 0;
  puVar5[2] = 1;
  lVar3 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar3 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar3 + -0x10),"input_direction_only_y");
  puVar5 = *(undefined4 **)(param_1 + 0x10);
  *puVar5 = 0;
  puVar5[2] = 1;
  lVar3 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar3 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar3 + -0x10),"bring_front_on_select");
  puVar5 = *(undefined4 **)(param_1 + 0x10);
  *puVar5 = 1;
  puVar5[2] = 1;
  lVar3 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar3 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar3 + -0x10),"cursor_adjust_size");
  puVar5 = *(undefined4 **)(param_1 + 0x10);
  *puVar5 = 0;
  puVar5[2] = 1;
  lVar3 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar3 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar3 + -0x10),"cursor_interpolation");
  puVar5 = *(undefined4 **)(param_1 + 0x10);
  *puVar5 = 0;
  puVar5[2] = 1;
  lVar3 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar3 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar3 + -0x10),"ignore_side_input");
  puVar5 = *(undefined4 **)(param_1 + 0x10);
  *puVar5 = 0;
  puVar5[2] = 1;
  lVar3 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar3 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar3 + -0x10),"decide_only_shortcut");
  puVar5 = *(undefined4 **)(param_1 + 0x10);
  *puVar5 = 1;
  puVar5[2] = 1;
  lVar3 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar3 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar3 + -0x10),"select_same_button");
  puVar5 = *(undefined4 **)(param_1 + 0x10);
  *puVar5 = 0;
  puVar5[2] = 1;
  lVar3 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar3 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar3 + -0x10),"detect_outside_at_same");
  puVar5 = *(undefined4 **)(param_1 + 0x10);
  *puVar5 = 1;
  puVar5[2] = 1;
  lVar3 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar3 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar3 + -0x10),"use_button_history");
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  *puVar2 = 0;
  *(undefined4 *)(puVar2 + 1) = 0x13;
  lVar3 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar3 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar3 + -0x10),"size_use_button_id");
  puVar5 = *(undefined4 **)(param_1 + 0x10);
  *puVar5 = 0x41f00000;
  puVar5[2] = 3;
  lVar3 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar3 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar3 + -0x10),"directional_degree");
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  *puVar2 = 0;
  *(undefined4 *)(puVar2 + 1) = 0x13;
  lVar3 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar3 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar3 + -0x10),"multiple_operator_num");
  puVar5 = *(undefined4 **)(param_1 + 0x10);
  *puVar5 = 0;
  puVar5[2] = 1;
  lVar3 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar3 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar3 + -0x10),"is_unique_se");
  *(undefined4 *)(*(long *)(param_1 + 0x10) + 8) = 0;
  lVar3 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar3 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar3 + -0x10),"decide_se_label_code");
  *(undefined4 *)(*(long *)(param_1 + 0x10) + 8) = 0;
  lVar3 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar3 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar3 + -0x10),"cancel_se_label_code");
  *(undefined4 *)(*(long *)(param_1 + 0x10) + 8) = 0;
  lVar3 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar3 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar3 + -0x10),"cursor_se_label_code");
  *(undefined4 *)(*(long *)(param_1 + 0x10) + 8) = 0;
  lVar3 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar3 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar3 + -0x10),"error_se_label_code");
  if (alStack_70 == local_50) {
    pcVar4 = *(code **)(*local_50 + 0x20);
LAB_710335efd8:
    (*pcVar4)();
  }
  else if (local_50 != (long *)0x0) {
    pcVar4 = *(code **)(*local_50 + 0x28);
    goto LAB_710335efd8;
  }
  if (alStack_a0 == local_80) {
    pcVar4 = *(code **)(*local_80 + 0x20);
LAB_710335f008:
    (*pcVar4)();
  }
  else if (local_80 != (long *)0x0) {
    pcVar4 = *(code **)(*local_80 + 0x28);
    goto LAB_710335f008;
  }
  if (alStack_d0 == local_b0) {
    pcVar4 = *(code **)(*local_b0 + 0x20);
LAB_710335f038:
    (*pcVar4)();
  }
  else if (local_b0 != (long *)0x0) {
    pcVar4 = *(code **)(*local_b0 + 0x28);
    goto LAB_710335f038;
  }
  if (alStack_100 == local_e0) {
    pcVar4 = *(code **)(*local_e0 + 0x20);
  }
  else {
    if (local_e0 == (long *)0x0) goto LAB_710335f06c;
    pcVar4 = *(code **)(*local_e0 + 0x28);
  }
  (*pcVar4)();
LAB_710335f06c:
  if (alStack_130 == local_110) {
    pcVar4 = *(code **)(*local_110 + 0x20);
  }
  else {
    if (local_110 == (long *)0x0) {
      return 1;
    }
    pcVar4 = *(code **)(*local_110 + 0x28);
  }
  (*pcVar4)();
  return 1;
}

