// addr:      7101ad5ed0
// offset:    0x1ad5ed0
// name:      FUN_7101ad5ed0
// mangled:   
// signature: undefined __cdecl FUN_7101ad5ed0(long param_1, undefined8 param_2, char * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101ad5ed0(long param_1,undefined8 param_2,char *param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  ulong uVar4;
  float fVar5;
  undefined **local_e8;
  ulong local_e0;
  undefined **local_d8;
  ulong local_d0;
  uint local_c8 [2];
  undefined1 local_c0 [64];
  
  uVar4 = 0;
  bVar1 = true;
  do {
    if (*(char *)(param_1 + uVar4 + 0x560) != '\0') {
      param_3 = (char *)(uVar4 & 0xffffffff);
      local_c0[0] = 0;
      local_c8[0] = 0;
      local_c8[1] = 0;
      FUN_710062dc20(local_c8,"set_btn_item_%02d");
      if (*(undefined8 **)(param_1 + 0x18) == *(undefined8 **)(param_1 + 0x10)) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
      FUN_7103776640(&local_d8,**(long **)**(undefined8 **)(param_1 + 0x10) + 8,(byte ****)local_c0,
                     param_3,param_4,param_5,param_6,param_7,param_8);
      FUN_71037780e0(&local_e8,(long)&local_d8,(long ****)"anim_card_arrival",param_3,param_4,
                     param_5,param_6,param_7,param_8);
      uVar2 = local_e0;
      param_2 = extraout_x1;
      fVar5 = 0.0;
      if (*(long **)(local_e0 + 8) != (long *)0x0) {
        fVar5 = (float)(**(code **)(**(long **)(local_e0 + 8) + 0x198))();
        param_2 = extraout_x1_00;
      }
      local_e8 = &PTR_FUN_710523d9e8;
      local_e0 = 0;
      if (uVar2 != 0) {
        FUN_710392eb40(uVar2);
        param_2 = extraout_x1_01;
      }
      uVar2 = local_d0;
      bVar1 = (bool)(bVar1 & 8.0 <= fVar5);
      local_d8 = &PTR_FUN_710523d988;
      local_d0 = 0;
      if (uVar2 != 0) {
        uVar3 = *(ulong *)(uVar2 + 0x18);
        *(undefined ***)(uVar2 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar2 + 0x18) = 0;
        if (uVar3 != 0) {
          FUN_710392eb40(uVar3);
        }
        FUN_710392eb40(uVar2);
        param_2 = extraout_x1_02;
      }
      if (fVar5 < 8.0) break;
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 10);
  if (bVar1) {
    FUN_7101ad8100(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    if (0 < *(int *)(param_1 + 0x15c)) {
      *(int *)(param_1 + 0x15c) = *(int *)(param_1 + 0x15c) + -1;
    }
  }
  return;
}

