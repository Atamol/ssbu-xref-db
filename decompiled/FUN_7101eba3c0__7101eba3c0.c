// addr:      7101eba3c0
// offset:    0x1eba3c0
// name:      FUN_7101eba3c0
// mangled:   
// signature: undefined __cdecl FUN_7101eba3c0(long param_1, undefined4 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101eba3c0(long param_1,undefined4 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long ***ppplVar1;
  ulong uVar2;
  long **pplVar3;
  long *plVar4;
  long *********ppppppppplVar5;
  undefined **local_88;
  long ***local_80 [8];
  undefined **local_40;
  ulong local_38;
  
  *(undefined4 *)(param_1 + 0xfc) = param_2;
  if (*(undefined8 **)(param_1 + 0x18) != *(undefined8 **)(param_1 + 0x10)) {
    FUN_7103776640(&local_88,**(long **)**(undefined8 **)(param_1 + 0x10) + 8,
                   (byte ****)"set_btn_01",param_3,param_4,param_5,param_6,param_7,param_8);
    FUN_7103776910(&local_40,(long)&local_88,(long ****)"set_rep_thumnail",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    ppplVar1 = local_80[0];
    local_88 = &PTR_FUN_710523d988;
    local_80[0] = (long ***)0x0;
    if (ppplVar1 != (long ***)0x0) {
      pplVar3 = ppplVar1[3];
      ppplVar1[2] = (long **)&PTR_FUN_710523d9a8;
      ppplVar1[3] = (long **)0x0;
      if (pplVar3 != (long **)0x0) {
        FUN_710392eb40((ulong)pplVar3);
      }
      FUN_710392eb40((ulong)ppplVar1);
    }
    FUN_71003a4ca0((uint *)&local_88,"edit_stage_wallpaper_%02d",(ulong)*(uint *)(param_1 + 0xfc),
                   param_3,param_4,param_5,param_6,param_7,param_8);
    ppppppppplVar5 = (long *********)&DAT_0000002e;
    plVar4 = FUN_71032410c0(*(long **)(param_1 + 0xf0),local_80,0x2e,param_4,param_5,param_6,param_7
                            ,param_8);
    uVar2 = local_38;
    FUN_7103778b80(local_38,(long)plVar4,ppppppppplVar5,param_4,param_5,param_6,param_7,param_8);
    local_40 = &PTR_FUN_710523d9a8;
    local_38 = 0;
    if (uVar2 != 0) {
      FUN_710392eb40(uVar2);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__vector_base_common<true>::__throw_out_of_range();
}

