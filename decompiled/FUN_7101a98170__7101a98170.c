// addr:      7101a98170
// offset:    0x1a98170
// name:      FUN_7101a98170
// mangled:   
// signature: undefined __cdecl FUN_7101a98170(long param_1, int param_2, long param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101a98170(long param_1,int param_2,long param_3,undefined8 param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  char *pcVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined **local_c8;
  ulong local_c0;
  undefined **local_b8;
  ulong local_b0;
  uint local_a8 [2];
  char local_a0 [64];
  
  local_a0[0] = '\0';
  local_a8[0] = 0;
  local_a8[1] = 0;
  uVar7 = (ulong)param_2;
  if (uVar7 < (ulong)(*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 2)) {
    uVar5 = (ulong)*(uint *)(*(long *)(param_1 + 8) + uVar7 * 4);
    FUN_710062dc20(local_a8,"nam_movie_title_%02d");
    FUN_7103776640(&local_c8,param_3,(byte ****)"set_txt_title",uVar5,param_4,param_5,param_6,
                   param_7,param_8);
    FUN_7103776910(&local_b8,(long)&local_c8,(long ****)"set_txt_main",uVar5,param_4,param_5,param_6
                   ,param_7,param_8);
    FUN_710377a120((long)&local_b8,local_a0,uVar5,param_4,param_5,param_6,param_7,param_8);
    uVar3 = local_b0;
    local_b8 = &PTR_FUN_710523d9a8;
    local_b0 = 0;
    if (uVar3 != 0) {
      FUN_710392eb40(uVar3);
    }
    uVar3 = local_c0;
    local_c8 = &PTR_FUN_710523d988;
    local_c0 = 0;
    if (uVar3 != 0) {
      uVar2 = *(ulong *)(uVar3 + 0x18);
      *(undefined ***)(uVar3 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar3 + 0x18) = 0;
      if (uVar2 != 0) {
        FUN_710392eb40(uVar2);
      }
      FUN_710392eb40(uVar3);
    }
    FUN_7103776640(&local_c8,param_3,(byte ****)"set_txt_title",uVar5,param_4,param_5,param_6,
                   param_7,param_8);
    FUN_7103776910(&local_b8,(long)&local_c8,(long ****)"set_txt_mask",uVar5,param_4,param_5,param_6
                   ,param_7,param_8);
    FUN_710377a120((long)&local_b8,local_a0,uVar5,param_4,param_5,param_6,param_7,param_8);
    uVar3 = local_b0;
    local_b8 = &PTR_FUN_710523d9a8;
    local_b0 = 0;
    if (uVar3 != 0) {
      FUN_710392eb40(uVar3);
    }
    uVar3 = local_c0;
    local_c8 = &PTR_FUN_710523d988;
    local_c0 = 0;
    if (uVar3 != 0) {
      uVar2 = *(ulong *)(uVar3 + 0x18);
      *(undefined ***)(uVar3 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar3 + 0x18) = 0;
      if (uVar2 != 0) {
        FUN_710392eb40(uVar2);
      }
      FUN_710392eb40(uVar3);
    }
    if (uVar7 < (ulong)(*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 2)) {
      lVar8 = *(long *)(DAT_710532f730 + 8);
      lVar6 = *(long *)(lVar8 + 0x378);
      uVar3 = FUN_710328d580(lVar6,*(uint *)(*(long *)(param_1 + 8) + uVar7 * 4));
      FUN_710328db50(lVar6,uVar3);
      FUN_710328db50(*(long *)(lVar8 + 0x378),uVar3);
      FUN_7103776910(&local_b8,param_3,(long ****)"set_txt_time",uVar5,param_4,param_5,param_6,
                     param_7,param_8);
      FUN_710377a280((long)&local_b8,(byte *)"mnu_movie_time",1);
      uVar3 = local_b0;
      local_b8 = &PTR_FUN_710523d9a8;
      local_b0 = 0;
      if (uVar3 != 0) {
        FUN_710392eb40(uVar3);
      }
      if (uVar7 < (ulong)(*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 2)) {
        uVar1 = *(uint *)(*(long *)(param_1 + 8) + uVar7 * 4);
        if (0x12 < uVar1) {
          uVar1 = 0x13;
        }
        if ((uVar1 < 0x20) &&
           ((**(uint **)**(undefined8 **)(*DAT_7105314510 + 0x278) & 1 << (ulong)(uVar1 & 0x1f)) !=
            0)) {
          lVar6 = *(long *)(param_3 + 8);
          pcVar4 = "new_hide";
        }
        else {
          lVar6 = *(long *)(param_3 + 8);
          pcVar4 = "new_show";
        }
        FUN_7103778300(0x3f800000,lVar6,(long)pcVar4);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__vector_base_common<true>::__throw_out_of_range();
}

