// addr:      7101ad7870
// offset:    0x1ad7870
// name:      FUN_7101ad7870
// mangled:   
// signature: undefined __cdecl FUN_7101ad7870(long param_1, ulong param_2, ulong param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101ad7870(long param_1,ulong param_2,ulong param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  long ****pppplVar4;
  long lVar5;
  long *plVar6;
  uint uVar7;
  long ***local_d8;
  long *local_d0;
  undefined **local_c8;
  ulong local_c0;
  undefined **local_b8;
  ulong local_b0;
  uint local_a8 [2];
  undefined1 local_a0 [64];
  undefined4 local_54;
  
  pppplVar4 = (long ****)(param_2 & 0xffffffff);
  local_a0[0] = 0;
  local_a8[0] = 0;
  local_a8[1] = 0;
  FUN_710062dc20(local_a8,"set_btn_item_%02d");
  if (*(undefined8 **)(param_1 + 0x18) == *(undefined8 **)(param_1 + 0x10)) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  FUN_7103776640(&local_b8,**(long **)**(undefined8 **)(param_1 + 0x10) + 8,(byte ****)local_a0,
                 pppplVar4,param_4,param_5,param_6,param_7,param_8);
  FUN_7103776640(&local_c8,(long)&local_b8,(byte ****)"set_parts_atr_bg",pppplVar4,param_4,param_5,
                 param_6,param_7,param_8);
  plVar1 = (long *)FUN_710392e290(0x10,0x20,pppplVar4,param_4,param_5,param_6,param_7,param_8);
  if (plVar1 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_54 = 0;
      local_d8 = (long ***)&SUB_00000020;
      pppplVar4 = &local_d8;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_54);
      if (((uVar2 & 1) != 0) &&
         (plVar1 = (long *)FUN_710392e290(0x10,0x20,pppplVar4,param_4,param_5,param_6,param_7,
                                          param_8), plVar1 != (long *)0x0)) goto LAB_7101ad7954;
    }
    plVar1 = (long *)0x0;
  }
LAB_7101ad7954:
  uVar7 = 0;
  plVar1[2] = 0;
  plVar1[3] = 0;
  *plVar1 = 0;
  plVar1[1] = 0;
  if ((param_3 & 1) == 0) {
    do {
      uVar2 = (ulong)uVar7;
      FUN_7103776910(&local_d8,(long)&local_c8,(long ****)"set_fxui_eff_aura_%02d",uVar2,param_4,
                     param_5,param_6,param_7,param_8);
      plVar6 = local_d0;
      local_d0 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        FUN_710392eb40((ulong)plVar1);
      }
      local_d8 = (long ***)&PTR_FUN_710523d9a8;
      local_d0 = (long *)0x0;
      FUN_710377aa20((long *)*plVar6,0);
      uVar3 = local_c0;
      lVar5 = *plVar6;
      if (lVar5 != 0) {
        *(byte *)(lVar5 + 0x58) = *(byte *)(lVar5 + 0x58) & 0xfe;
      }
      FUN_7103778300(0x3f800000,local_c0,0x7104338aad);
      FUN_710377acb0((long *)*plVar6,1,uVar2,param_4,param_5,param_6,param_7,param_8);
      uVar7 = uVar7 + 1;
      plVar1 = plVar6;
    } while (uVar7 != 0x10);
  }
  else {
    do {
      FUN_7103776910(&local_d8,(long)&local_c8,(long ****)"set_fxui_eff_aura_%02d",(ulong)uVar7,
                     param_4,param_5,param_6,param_7,param_8);
      plVar6 = local_d0;
      local_d0 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        FUN_710392eb40((ulong)plVar1);
      }
      local_d8 = (long ***)&PTR_FUN_710523d9a8;
      local_d0 = (long *)0x0;
      plVar1 = FUN_710377aae0((long *)*plVar6);
      uVar3 = local_c0;
      if (plVar1 != (long *)0x0) {
        *(undefined1 *)((long)plVar1 + 0x13a) = 1;
      }
      lVar5 = *plVar6;
      if (lVar5 != 0) {
        *(byte *)(lVar5 + 0x58) = *(byte *)(lVar5 + 0x58) | 1;
      }
      FUN_7103778300(0x3f800000,local_c0,0x710431947e);
      uVar7 = uVar7 + 1;
      plVar1 = plVar6;
    } while (uVar7 != 0x10);
  }
  FUN_710392eb40((ulong)plVar6);
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
  uVar2 = local_b0;
  local_b8 = &PTR_FUN_710523d988;
  local_b0 = 0;
  if (uVar2 != 0) {
    uVar3 = *(ulong *)(uVar2 + 0x18);
    *(undefined ***)(uVar2 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar2 + 0x18) = 0;
    if (uVar3 != 0) {
      FUN_710392eb40(uVar3);
    }
    FUN_710392eb40(uVar2);
  }
  return;
}

