// addr:      7100436e50
// offset:    0x436e50
// name:      FUN_7100436e50
// mangled:   
// signature: undefined __cdecl FUN_7100436e50(void)


void FUN_7100436e50(void)

{
  byte ****in_x3;
  long ****in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  ulong local_80;
  char *local_78;
  undefined8 local_70;
  undefined *puStack_68;
  undefined8 local_60;
  undefined *puStack_58;
  undefined8 local_50;
  undefined *puStack_48;
  undefined8 local_40;
  undefined *local_38;
  
  local_80 = DAT_710511a0b0;
  local_78 = PTR_s_bandman_g_710511a0b8;
  local_60 = DAT_710511a0d0;
  puStack_58 = PTR_s_bandman_t_710511a0d8;
  local_70 = DAT_710511a0c0;
  puStack_68 = PTR_s_bandman_b_710511a0c8;
  local_40 = DAT_710511a0f0;
  local_38 = PTR_s_pauline_710511a0f8;
  local_50 = DAT_710511a0e0;
  puStack_48 = PTR_s_bandman_d_710511a0e8;
  FUN_71026af880(&DAT_710532deb8,&local_80,(long ****)0x5,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71000001c0();
  local_80 = DAT_710511a100;
  local_78 = PTR_s_PlayGuitar_710511a108;
  local_60 = DAT_710511a120;
  puStack_58 = PTR_s_WaitGuitar_710511a128;
  local_70 = DAT_710511a110;
  puStack_68 = PTR_s_PlayGuitarAction_710511a118;
  FUN_71026af880(&DAT_710532dee0,&local_80,(long ****)0x3,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71000001c0();
  local_80 = DAT_710511a130;
  local_78 = PTR_s_PlayBass_710511a138;
  local_60 = DAT_710511a150;
  puStack_58 = PTR_s_WaitBass_710511a158;
  local_70 = DAT_710511a140;
  puStack_68 = PTR_s_PlayBassAction_710511a148;
  FUN_71026af880(&DAT_710532df08,&local_80,(long ****)0x3,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71000001c0();
  local_70 = DAT_710511a170;
  puStack_68 = PTR_s_PlayTrumpetActionA_710511a178;
  local_80 = DAT_710511a160;
  local_78 = PTR_s_PlayTrumpet_710511a168;
  local_50 = DAT_710511a190;
  puStack_48 = PTR_s_WaitTrumpet_710511a198;
  local_60 = DAT_710511a180;
  puStack_58 = PTR_s_PlayTrumpetActionB_710511a188;
  FUN_71026af880(&DAT_710532df30,&local_80,(long ****)&DAT_00000004,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71000001c0();
  local_80 = local_80 & 0xffffffff00000000;
  local_78 = "PlayDrum";
  FUN_71026af880(&DAT_710532df58,&local_80,(long ****)0x1,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71000001c0();
  return;
}

