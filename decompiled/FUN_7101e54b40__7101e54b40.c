// addr:      7101e54b40
// offset:    0x1e54b40
// name:      FUN_7101e54b40
// mangled:   
// signature: undefined __cdecl FUN_7101e54b40(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101e54b40(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  byte ****ppppbVar5;
  ulong uVar6;
  undefined **local_60;
  ulong local_58;
  undefined **local_50;
  ulong local_48;
  undefined **local_40;
  ulong local_38;
  
  iVar2 = FUN_7102513ce0(*(uint *)(*DAT_710532a860 + 0x1c));
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 0x180);
  uVar6 = *(long *)(*(long *)(param_1 + 0x28) + 0x188) - lVar1;
  if ((int)(uVar6 >> 3) < 5) {
    ppppbVar5 = (byte ****)0x0;
  }
  else {
    if ((ulong)((long)uVar6 >> 3) < 5) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    ppppbVar5 = *(byte *****)(*(long *)(lVar1 + 0x20) + 0x88);
  }
  FUN_7103776640(&local_40,param_1 + 0x18,ppppbVar5,param_3,param_4,param_5,param_6,param_7,param_8)
  ;
  if (iVar2 == 0) {
    FUN_7103778300(0x3f800000,local_38,0x710439d9d9);
    uVar6 = local_38;
  }
  else {
    FUN_7103776640(&local_50,(long)&local_40,(byte ****)"set_parts_facility_badge",param_3,param_4,
                   param_5,param_6,param_7,param_8);
    FUN_7103776910(&local_60,(long)&local_50,(long ****)"set_txt_count",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    FUN_710377a280((long)&local_60,(byte *)"cam_info_menu_new_n",1);
    uVar6 = local_58;
    local_60 = &PTR_FUN_710523d9a8;
    local_58 = 0;
    if (uVar6 != 0) {
      FUN_710392eb40(uVar6);
    }
    FUN_7103778300(0x3f800000,local_38,0x710443366e);
    uVar4 = local_48;
    local_50 = &PTR_FUN_710523d988;
    local_48 = 0;
    uVar6 = local_38;
    if (uVar4 != 0) {
      uVar3 = *(ulong *)(uVar4 + 0x18);
      *(undefined ***)(uVar4 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar4 + 0x18) = 0;
      if (uVar3 != 0) {
        FUN_710392eb40(uVar3);
      }
      FUN_710392eb40(uVar4);
    }
  }
  local_40 = &PTR_FUN_710523d988;
  local_38 = 0;
  if (uVar6 != 0) {
    uVar4 = *(ulong *)(uVar6 + 0x18);
    *(undefined ***)(uVar6 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar6 + 0x18) = 0;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
    FUN_710392eb40(uVar6);
  }
  return;
}

