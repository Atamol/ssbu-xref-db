// addr:      7103364ca0
// offset:    0x3364ca0
// name:      FUN_7103364ca0
// mangled:   
// signature: undefined8 __cdecl FUN_7103364ca0(long param_1)


undefined8 FUN_7103364ca0(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  code *pcVar4;
  undefined4 *puVar5;
  long alStack_80 [4];
  long *local_60;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  local_48 = 0;
  uStack_40 = 0;
  local_60 = (long *)0x0;
  local_50 = 0;
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
  FUN_71038f5390(param_1,(long *)(lVar3 + -0x10),"slider_mode");
  puVar5 = *(undefined4 **)(param_1 + 0x10);
  *puVar5 = 0;
  puVar5[2] = 3;
  lVar3 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar3 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar3 + -0x10),"begin_value");
  puVar5 = *(undefined4 **)(param_1 + 0x10);
  *puVar5 = 0x3f800000;
  puVar5[2] = 3;
  lVar3 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar3 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar3 + -0x10),"end_value");
  puVar5 = *(undefined4 **)(param_1 + 0x10);
  *puVar5 = 0x3f800000;
  puVar5[2] = 3;
  lVar3 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar3 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar3 + -0x10),"step_value");
  puVar5 = *(undefined4 **)(param_1 + 0x10);
  *puVar5 = 0x3f800000;
  puVar5[2] = 3;
  lVar3 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar3 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar3 + -0x10),"step_stick");
  puVar5 = *(undefined4 **)(param_1 + 0x10);
  *puVar5 = 0x3f000000;
  puVar5[2] = 3;
  lVar3 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar3 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar3 + -0x10),"step_button");
  puVar5 = *(undefined4 **)(param_1 + 0x10);
  *puVar5 = 0x3f800000;
  puVar5[2] = 3;
  lVar3 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar3 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar3 + -0x10),"first_speed");
  puVar5 = *(undefined4 **)(param_1 + 0x10);
  *puVar5 = 0x40400000;
  puVar5[2] = 3;
  lVar3 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar3 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar3 + -0x10),"accel");
  puVar5 = *(undefined4 **)(param_1 + 0x10);
  *puVar5 = 0x42700000;
  puVar5[2] = 3;
  lVar3 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar3 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar3 + -0x10),"frame_rate");
  puVar5 = *(undefined4 **)(param_1 + 0x10);
  *puVar5 = 0;
  puVar5[2] = 3;
  lVar3 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar3 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar3 + -0x10),"lock_range0_lock_value");
  puVar5 = *(undefined4 **)(param_1 + 0x10);
  *puVar5 = 0;
  puVar5[2] = 3;
  lVar3 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar3 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar3 + -0x10),"lock_range0_lower_margin");
  puVar5 = *(undefined4 **)(param_1 + 0x10);
  *puVar5 = 0;
  puVar5[2] = 3;
  lVar3 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar3 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar3 + -0x10),"lock_range0_upper_margin");
  puVar5 = *(undefined4 **)(param_1 + 0x10);
  *puVar5 = 0;
  puVar5[2] = 1;
  lVar3 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar3 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar3 + -0x10),"lock_range0_valid");
  puVar5 = *(undefined4 **)(param_1 + 0x10);
  *puVar5 = 0;
  puVar5[2] = 3;
  lVar3 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar3 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar3 + -0x10),"lock_range1_lock_value");
  puVar5 = *(undefined4 **)(param_1 + 0x10);
  *puVar5 = 0;
  puVar5[2] = 3;
  lVar3 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar3 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar3 + -0x10),"lock_range1_lower_margin");
  puVar5 = *(undefined4 **)(param_1 + 0x10);
  *puVar5 = 0;
  puVar5[2] = 3;
  lVar3 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar3 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar3 + -0x10),"lock_range1_upper_margin");
  puVar5 = *(undefined4 **)(param_1 + 0x10);
  *puVar5 = 0;
  puVar5[2] = 1;
  lVar3 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar3 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar3 + -0x10),"lock_range1_valid");
  puVar5 = *(undefined4 **)(param_1 + 0x10);
  *puVar5 = 0;
  puVar5[2] = 3;
  lVar3 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar3 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar3 + -0x10),"hold_value");
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  *puVar2 = 0;
  *(undefined4 *)(puVar2 + 1) = 0x13;
  lVar3 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar3 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar3 + -0x10),"hold_count");
  puVar5 = *(undefined4 **)(param_1 + 0x10);
  *puVar5 = 0;
  puVar5[2] = 1;
  lVar3 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar3 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar3 + -0x10),"hold_valid");
  if (alStack_80 == local_60) {
    pcVar4 = *(code **)(*local_60 + 0x20);
  }
  else {
    if (local_60 == (long *)0x0) {
      return 1;
    }
    pcVar4 = *(code **)(*local_60 + 0x28);
  }
  (*pcVar4)();
  return 1;
}

