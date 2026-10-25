// addr:      7101bddb60
// offset:    0x1bddb60
// name:      FUN_7101bddb60
// mangled:   
// signature: undefined __cdecl FUN_7101bddb60(long param_1, undefined8 * param_2, ulong param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101bddb60(long param_1,undefined8 *param_2,ulong param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  byte ****ppppbVar4;
  char *pcVar5;
  ulong uVar6;
  undefined **local_40;
  ulong local_38;
  undefined **local_30;
  ulong local_28;
  
  plVar2 = *(long **)(*(long *)(param_1 + 0xe0) + 0x180);
  uVar6 = *(long *)(*(long *)(param_1 + 0xe0) + 0x188) - (long)plVar2;
  if ((int)(uVar6 >> 3) < 1) {
    ppppbVar4 = (byte ****)0x0;
  }
  else {
    if (uVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    ppppbVar4 = *(byte *****)(*plVar2 + 0x88);
  }
  uVar6 = param_3;
  FUN_7103776640(&local_30,*(long *)*param_2 + 8,ppppbVar4,param_3,param_4,param_5,param_6,param_7,
                 param_8);
  uVar3 = local_28;
  uVar1 = (uint)param_3 & 0xff;
  if ((param_3 & 0xff) == 0) {
    FUN_7103778300(0x3f800000,local_28,0x71043cf32b);
    FUN_7103776910(&local_40,(long)&local_30,(long ****)"set_txt_balloon",uVar6,param_4,param_5,
                   param_6,param_7,param_8);
    pcVar5 = "mnu_local_new_rm_mode_range_00";
  }
  else {
    if (uVar1 != 1) {
      if (uVar1 == 2) {
        FUN_7103778300(0x3f800000,local_28,0x7104318d94);
      }
      goto LAB_7101bddc7c;
    }
    FUN_7103778300(0x3f800000,local_28,0x71044128e0);
    FUN_7103776910(&local_40,(long)&local_30,(long ****)"set_txt_balloon",uVar6,param_4,param_5,
                   param_6,param_7,param_8);
    pcVar5 = "mnu_local_new_rm_mode_range_01";
  }
  FUN_710377a120((long)&local_40,pcVar5,uVar6,param_4,param_5,param_6,param_7,param_8);
  uVar6 = local_38;
  local_40 = &PTR_FUN_710523d9a8;
  local_38 = 0;
  if (uVar6 != 0) {
    FUN_710392eb40(uVar6);
  }
LAB_7101bddc7c:
  local_30 = &PTR_FUN_710523d988;
  local_28 = 0;
  if (uVar3 != 0) {
    uVar6 = *(ulong *)(uVar3 + 0x18);
    *(undefined ***)(uVar3 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar3 + 0x18) = 0;
    if (uVar6 != 0) {
      FUN_710392eb40(uVar6);
    }
    FUN_710392eb40(uVar3);
  }
  return;
}

