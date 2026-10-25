// addr:      7101b1e440
// offset:    0x1b1e440
// name:      FUN_7101b1e440
// mangled:   
// signature: undefined __cdecl FUN_7101b1e440(long * * param_1, long * param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101b1e440(long **param_1,long *param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long ***ppplVar1;
  long ****pppplVar2;
  long lVar3;
  long ***local_a8;
  long ***local_a0;
  long ***local_98;
  long ***local_90;
  long ***local_88;
  long ***local_80;
  long ***local_78;
  long ***local_70;
  long ***local_68;
  long ***local_60;
  long ***local_58;
  long ***local_50;
  long ***local_48;
  undefined4 local_34;
  
  if ((long *)*param_2 == (long *)0x0) {
    lVar3 = 0;
  }
  else {
    lVar3 = *(long *)*param_2;
  }
  FUN_71033744b0(lVar3,"my_music_scroller_",param_1 + 2);
  pppplVar2 = (long ****)(param_1 + 0x14);
  FUN_71033745a0(lVar3,"my_music_sort_window_",pppplVar2);
  if ((long *)*param_2 != (long *)0x0) {
    param_4 = (byte ****)param_1[0x13];
    pppplVar2 = (long ****)&DAT_710439b9ac;
    FUN_7103375650((long *)*param_2,"my_music_sort_window_facade_",&DAT_710439b9ac);
  }
  local_50 = (long ***)FUN_710392e290(0x10,0x38,pppplVar2,param_4,param_5,param_6,param_7,param_8);
  if (local_50 == (long ***)0x0) {
    local_34 = 0;
    local_48 = (long ***)&DAT_00000038;
    pppplVar2 = &local_48;
    (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_34);
    local_50 = (long ***)FUN_710392e290(0x10,0x38,pppplVar2,param_4,param_5,param_6,param_7,param_8)
    ;
  }
  local_50[5] = (long **)0x0;
  local_50[6] = (long **)0x0;
  *local_50 = (long **)&PTR_FUN_71050aa520;
  local_50[2] = param_1;
  local_50[3] = (long **)FUN_7101b207a0;
  local_50[4] = (long **)0x0;
  pppplVar2 = &local_50;
  *(undefined4 *)(local_50 + 1) = 0;
  FUN_7103376af0((long)param_2,(byte *)"reset_incidence_my_music",pppplVar2,param_4,param_5,param_6,
                 param_7,param_8);
  ppplVar1 = local_50;
  local_50 = (long ***)0x0;
  if (ppplVar1 != (long ***)0x0) {
    (*(code *)(*ppplVar1)[1])();
  }
  local_58 = (long ***)FUN_710392e290(0x10,0x38,pppplVar2,param_4,param_5,param_6,param_7,param_8);
  if (local_58 == (long ***)0x0) {
    local_34 = 0;
    local_48 = (long ***)&DAT_00000038;
    pppplVar2 = &local_48;
    (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_34);
    local_58 = (long ***)FUN_710392e290(0x10,0x38,pppplVar2,param_4,param_5,param_6,param_7,param_8)
    ;
  }
  local_58[3] = (long **)FUN_7101b20850;
  local_58[4] = (long **)0x0;
  local_58[5] = (long **)0x0;
  local_58[6] = (long **)0x0;
  *local_58 = (long **)&PTR_FUN_71050aa548;
  local_58[2] = param_1;
  pppplVar2 = &local_58;
  *(undefined4 *)(local_58 + 1) = 1;
  FUN_7103376af0((long)param_2,(byte *)"control_incidence_my_music",pppplVar2,param_4,param_5,
                 param_6,param_7,param_8);
  ppplVar1 = local_58;
  local_58 = (long ***)0x0;
  if (ppplVar1 != (long ***)0x0) {
    (*(code *)(*ppplVar1)[1])();
  }
  local_60 = (long ***)FUN_710392e290(0x10,0x38,pppplVar2,param_4,param_5,param_6,param_7,param_8);
  if (local_60 == (long ***)0x0) {
    local_34 = 0;
    local_48 = (long ***)&DAT_00000038;
    pppplVar2 = &local_48;
    (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_34);
    local_60 = (long ***)FUN_710392e290(0x10,0x38,pppplVar2,param_4,param_5,param_6,param_7,param_8)
    ;
  }
  *local_60 = (long **)&PTR_FUN_71050aa548;
  local_60[3] = (long **)FUN_7101b20ba0;
  local_60[4] = (long **)0x0;
  local_60[5] = (long **)0x0;
  local_60[6] = (long **)0x0;
  pppplVar2 = &local_60;
  local_60[2] = param_1;
  *(undefined4 *)(local_60 + 1) = 1;
  FUN_7103376af0((long)param_2,(byte *)"control_block_incidence_my_music",pppplVar2,param_4,param_5,
                 param_6,param_7,param_8);
  ppplVar1 = local_60;
  local_60 = (long ***)0x0;
  if (ppplVar1 != (long ***)0x0) {
    (*(code *)(*ppplVar1)[1])();
  }
  local_68 = (long ***)FUN_710392e290(0x10,0x38,pppplVar2,param_4,param_5,param_6,param_7,param_8);
  if (local_68 == (long ***)0x0) {
    local_34 = 0;
    local_48 = (long ***)&DAT_00000038;
    pppplVar2 = &local_48;
    (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_34);
    local_68 = (long ***)FUN_710392e290(0x10,0x38,pppplVar2,param_4,param_5,param_6,param_7,param_8)
    ;
  }
  local_68[4] = (long **)0x0;
  local_68[5] = (long **)FUN_7101b20e30;
  local_68[2] = param_1;
  local_68[3] = (long **)0x0;
  *local_68 = (long **)&PTR_FUN_71050aa570;
  local_68[6] = (long **)0x0;
  pppplVar2 = &local_68;
  *(undefined4 *)(local_68 + 1) = 1;
  FUN_7103376af0((long)param_2,(byte *)"is_both_ends_incidence_my_music",pppplVar2,param_4,param_5,
                 param_6,param_7,param_8);
  ppplVar1 = local_68;
  local_68 = (long ***)0x0;
  if (ppplVar1 != (long ***)0x0) {
    (*(code *)(*ppplVar1)[1])();
  }
  local_70 = (long ***)FUN_710392e290(0x10,0x38,pppplVar2,param_4,param_5,param_6,param_7,param_8);
  if (local_70 == (long ***)0x0) {
    local_34 = 0;
    local_48 = (long ***)&DAT_00000038;
    pppplVar2 = &local_48;
    (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_34);
    local_70 = (long ***)FUN_710392e290(0x10,0x38,pppplVar2,param_4,param_5,param_6,param_7,param_8)
    ;
  }
  *local_70 = (long **)&PTR_FUN_71050aa570;
  local_70[4] = (long **)0x0;
  local_70[5] = (long **)FUN_7101b20ed0;
  local_70[2] = param_1;
  local_70[3] = (long **)0x0;
  pppplVar2 = &local_70;
  local_70[6] = (long **)0x0;
  *(undefined4 *)(local_70 + 1) = 1;
  FUN_7103376af0((long)param_2,(byte *)"is_hold_incidence_my_music",pppplVar2,param_4,param_5,
                 param_6,param_7,param_8);
  ppplVar1 = local_70;
  local_70 = (long ***)0x0;
  if (ppplVar1 != (long ***)0x0) {
    (*(code *)(*ppplVar1)[1])();
  }
  local_78 = (long ***)FUN_710392e290(0x10,0x38,pppplVar2,param_4,param_5,param_6,param_7,param_8);
  if (local_78 == (long ***)0x0) {
    local_34 = 0;
    local_48 = (long ***)&DAT_00000038;
    pppplVar2 = &local_48;
    (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_34);
    local_78 = (long ***)FUN_710392e290(0x10,0x38,pppplVar2,param_4,param_5,param_6,param_7,param_8)
    ;
  }
  *local_78 = (long **)&PTR_FUN_71050aa520;
  local_78[5] = (long **)0x0;
  local_78[6] = (long **)0x0;
  local_78[2] = param_1;
  pppplVar2 = &local_78;
  local_78[3] = (long **)FUN_7101b20f00;
  local_78[4] = (long **)0x0;
  *(undefined4 *)(local_78 + 1) = 0;
  FUN_7103376af0((long)param_2,(byte *)"release_incidence_my_music",pppplVar2,param_4,param_5,
                 param_6,param_7,param_8);
  ppplVar1 = local_78;
  local_78 = (long ***)0x0;
  if (ppplVar1 != (long ***)0x0) {
    (*(code *)(*ppplVar1)[1])();
  }
  local_80 = (long ***)FUN_710392e290(0x10,0x38,pppplVar2,param_4,param_5,param_6,param_7,param_8);
  if (local_80 == (long ***)0x0) {
    local_34 = 0;
    local_48 = (long ***)&DAT_00000038;
    pppplVar2 = &local_48;
    (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_34);
    local_80 = (long ***)FUN_710392e290(0x10,0x38,pppplVar2,param_4,param_5,param_6,param_7,param_8)
    ;
  }
  *local_80 = (long **)&PTR_FUN_71050aa548;
  local_80[3] = (long **)FUN_7101b210f0;
  local_80[4] = (long **)0x0;
  local_80[5] = (long **)0x0;
  local_80[6] = (long **)0x0;
  pppplVar2 = &local_80;
  local_80[2] = param_1;
  *(undefined4 *)(local_80 + 1) = 1;
  FUN_7103376af0((long)param_2,(byte *)"sort_list_my_music",pppplVar2,param_4,param_5,param_6,
                 param_7,param_8);
  ppplVar1 = local_80;
  local_80 = (long ***)0x0;
  if (ppplVar1 != (long ***)0x0) {
    (*(code *)(*ppplVar1)[1])();
  }
  local_88 = (long ***)FUN_710392e290(0x10,0x38,pppplVar2,param_4,param_5,param_6,param_7,param_8);
  if (local_88 == (long ***)0x0) {
    local_34 = 0;
    local_48 = (long ***)&DAT_00000038;
    pppplVar2 = &local_48;
    (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_34);
    local_88 = (long ***)FUN_710392e290(0x10,0x38,pppplVar2,param_4,param_5,param_6,param_7,param_8)
    ;
  }
  *local_88 = (long **)&PTR_FUN_71050aa598;
  local_88[2] = param_1;
  local_88[3] = (long **)0x0;
  local_88[6] = (long **)0x0;
  local_88[4] = (long **)0x0;
  local_88[5] = (long **)FUN_7101b215f0;
  pppplVar2 = &local_88;
  *(undefined4 *)(local_88 + 1) = 1;
  FUN_7103376af0((long)param_2,(byte *)"get_sort_id_my_music",pppplVar2,param_4,param_5,param_6,
                 param_7,param_8);
  ppplVar1 = local_88;
  local_88 = (long ***)0x0;
  if (ppplVar1 != (long ***)0x0) {
    (*(code *)(*ppplVar1)[1])();
  }
  local_90 = (long ***)FUN_710392e290(0x10,0x38,pppplVar2,param_4,param_5,param_6,param_7,param_8);
  if (local_90 == (long ***)0x0) {
    local_34 = 0;
    local_48 = (long ***)&DAT_00000038;
    pppplVar2 = &local_48;
    (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_34);
    local_90 = (long ***)FUN_710392e290(0x10,0x38,pppplVar2,param_4,param_5,param_6,param_7,param_8)
    ;
  }
  *local_90 = (long **)&PTR_FUN_71050aa520;
  local_90[5] = (long **)0x0;
  local_90[6] = (long **)0x0;
  local_90[2] = param_1;
  pppplVar2 = &local_90;
  local_90[3] = (long **)FUN_7101b21600;
  local_90[4] = (long **)0x0;
  *(undefined4 *)(local_90 + 1) = 0;
  FUN_7103376af0((long)param_2,(byte *)"backup_selected_bgm_my_music",pppplVar2,param_4,param_5,
                 param_6,param_7,param_8);
  ppplVar1 = local_90;
  local_90 = (long ***)0x0;
  if (ppplVar1 != (long ***)0x0) {
    (*(code *)(*ppplVar1)[1])();
  }
  local_98 = (long ***)FUN_710392e290(0x10,0x38,pppplVar2,param_4,param_5,param_6,param_7,param_8);
  if (local_98 == (long ***)0x0) {
    local_34 = 0;
    local_48 = (long ***)&DAT_00000038;
    pppplVar2 = &local_48;
    (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_34);
    local_98 = (long ***)FUN_710392e290(0x10,0x38,pppplVar2,param_4,param_5,param_6,param_7,param_8)
    ;
  }
  *local_98 = (long **)&PTR_FUN_71050aa520;
  local_98[5] = (long **)0x0;
  local_98[6] = (long **)0x0;
  local_98[2] = param_1;
  pppplVar2 = &local_98;
  local_98[3] = (long **)FUN_7101b21750;
  local_98[4] = (long **)0x0;
  *(undefined4 *)(local_98 + 1) = 0;
  FUN_7103376af0((long)param_2,(byte *)"select_bgm_from_backup_my_music",pppplVar2,param_4,param_5,
                 param_6,param_7,param_8);
  ppplVar1 = local_98;
  local_98 = (long ***)0x0;
  if (ppplVar1 != (long ***)0x0) {
    (*(code *)(*ppplVar1)[1])();
  }
  local_a0 = (long ***)FUN_710392e290(0x10,0x38,pppplVar2,param_4,param_5,param_6,param_7,param_8);
  if (local_a0 == (long ***)0x0) {
    local_34 = 0;
    local_48 = (long ***)&DAT_00000038;
    pppplVar2 = &local_48;
    (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_34);
    local_a0 = (long ***)FUN_710392e290(0x10,0x38,pppplVar2,param_4,param_5,param_6,param_7,param_8)
    ;
  }
  local_a0[2] = param_1;
  *local_a0 = (long **)&PTR_FUN_71050aa5c0;
  local_a0[3] = (long **)FUN_7101b21800;
  local_a0[4] = (long **)0x0;
  local_a0[5] = (long **)0x0;
  local_a0[6] = (long **)0x0;
  pppplVar2 = &local_a0;
  *(undefined4 *)(local_a0 + 1) = 1;
  FUN_7103376af0((long)param_2,(byte *)"get_pitch_bar_loop_se_my_music",pppplVar2,param_4,param_5,
                 param_6,param_7,param_8);
  ppplVar1 = local_a0;
  local_a0 = (long ***)0x0;
  if (ppplVar1 != (long ***)0x0) {
    (*(code *)(*ppplVar1)[1])();
  }
  local_a8 = (long ***)FUN_710392e290(0x10,0x38,pppplVar2,param_4,param_5,param_6,param_7,param_8);
  if (local_a8 == (long ***)0x0) {
    local_34 = 0;
    local_48 = (long ***)&DAT_00000038;
    pppplVar2 = &local_48;
    (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_34);
    local_a8 = (long ***)FUN_710392e290(0x10,0x38,pppplVar2,param_4,param_5,param_6,param_7,param_8)
    ;
  }
  *local_a8 = (long **)&PTR_FUN_71050aa520;
  local_a8[5] = (long **)0x0;
  local_a8[6] = (long **)0x0;
  local_a8[2] = param_1;
  local_a8[3] = (long **)FUN_7101b218a0;
  local_a8[4] = (long **)0x0;
  *(undefined4 *)(local_a8 + 1) = 0;
  FUN_7103376af0((long)param_2,(byte *)"on_my_bgm_pos_current_my_music",&local_a8,param_4,param_5,
                 param_6,param_7,param_8);
  ppplVar1 = local_a8;
  local_a8 = (long ***)0x0;
  if (ppplVar1 != (long ***)0x0) {
    (*(code *)(*ppplVar1)[1])();
  }
  return;
}

