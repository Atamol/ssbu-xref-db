// addr:      7101d36b40
// offset:    0x1d36b40
// name:      FUN_7101d36b40
// mangled:   
// signature: undefined __cdecl FUN_7101d36b40(long param_1, int param_2, long param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101d36b40(long param_1,int param_2,long param_3,undefined8 param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  char *pcVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  undefined **local_a8;
  ulong local_a0;
  uint local_98 [2];
  undefined1 local_90 [64];
  
  if ((-1 < param_2) &&
     (uVar4 = (*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 3) * -0x3333333333333333,
     uVar6 = (ulong)param_2, uVar6 <= uVar4 && uVar4 - uVar6 != 0)) {
    lVar3 = param_3;
    FUN_7103776910(&local_a8,param_3,(long ****)"set_txt_00",param_3,param_4,param_5,param_6,param_7
                   ,param_8);
    lVar1 = *(long *)(param_1 + 8);
    uVar4 = (*(long *)(param_1 + 0x10) - lVar1 >> 3) * -0x3333333333333333;
    if (uVar4 < uVar6 || uVar4 - uVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    if (*(int *)(lVar1 + uVar6 * 0x28) == -1) {
      FUN_710377a120((long)&local_a8,"mnu_opt_btn_new",lVar3,param_4,param_5,param_6,param_7,param_8
                    );
      lVar1 = *(long *)(param_3 + 8);
      pcVar2 = "onamaeinput_on";
    }
    else if (*(int *)(lVar1 + uVar6 * 0x28 + 8) == 0) {
      FUN_710377a120((long)&local_a8,"mnu_opt_btn_new",lVar3,param_4,param_5,param_6,param_7,param_8
                    );
      lVar1 = *(long *)(param_3 + 8);
      pcVar2 = "onamaenashi";
    }
    else {
      if (*(long **)(local_a0 + 0x10) != (long *)0x0) {
        FUN_71037a2270(*(long **)(local_a0 + 0x10),(ushort *)(lVar1 + uVar6 * 0x28 + 0xc),0xffffffff
                       ,1);
      }
      lVar1 = *(long *)(param_3 + 8);
      pcVar2 = "onamae";
    }
    plVar5 = (long *)(param_3 + 8);
    FUN_7103778300(0x3f800000,lVar1,(long)pcVar2);
    local_98[0] = 0;
    local_98[1] = 0;
    local_90[0] = 0;
    FUN_710062dc20(local_98,"controller_joy_dual_%s");
    FUN_7103778300(0x3f800000,*plVar5,(long)local_90);
    FUN_710062dc20(local_98,"controller_joy_l_%s");
    FUN_7103778300(0x3f800000,*plVar5,(long)local_90);
    FUN_710062dc20(local_98,"controller_gc_%s");
    FUN_7103778300(0x3f800000,*plVar5,(long)local_90);
    uVar4 = local_a0;
    local_a8 = &PTR_FUN_710523d9a8;
    local_a0 = 0;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
  }
  return;
}

