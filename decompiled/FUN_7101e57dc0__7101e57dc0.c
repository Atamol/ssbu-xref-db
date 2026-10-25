// addr:      7101e57dc0
// offset:    0x1e57dc0
// name:      FUN_7101e57dc0
// mangled:   
// signature: undefined __cdecl FUN_7101e57dc0(long param_1, undefined4 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101e57dc0(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  
  switch(param_2) {
  case 0:
    FUN_710377a120(param_1,"cam_menu_etc_help_grade",param_3,param_4,param_5,param_6,param_7,param_8
                  );
    return;
  case 1:
    FUN_710377a120(param_1,"cam_menu_etc_help_button_option",param_3,param_4,param_5,param_6,param_7
                   ,param_8);
    return;
  case 2:
    FUN_710377a120(param_1,"cam_menu_etc_help_directory",param_3,param_4,param_5,param_6,param_7,
                   param_8);
    return;
  case 3:
    FUN_710377a120(param_1,"cam_menu_etc_help_how_to_play",param_3,param_4,param_5,param_6,param_7,
                   param_8);
    return;
  case 4:
    FUN_710377a120(param_1,"cam_menu_etc_help_save",param_3,param_4,param_5,param_6,param_7,param_8)
    ;
    return;
  case 5:
    FUN_710377a120(param_1,"cam_menu_etc_help_spirits_directory",param_3,param_4,param_5,param_6,
                   param_7,param_8);
    return;
  case 6:
    FUN_710377a120(param_1,"cam_menu_etc_help_item_list",param_3,param_4,param_5,param_6,param_7,
                   param_8);
    return;
  case 0xffffffff:
    plVar1 = *(long **)(*(long *)(param_1 + 8) + 0x10);
    if (plVar1 != (long *)0x0) {
      FUN_71037a28a0(plVar1,&DAT_7104867c2e);
      return;
    }
  }
  return;
}

