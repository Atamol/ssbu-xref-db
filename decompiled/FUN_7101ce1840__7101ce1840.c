// addr:      7101ce1840
// offset:    0x1ce1840
// name:      FUN_7101ce1840
// mangled:   
// signature: undefined __cdecl FUN_7101ce1840(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101ce1840(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  ulong uVar2;
  undefined ***pppuVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined **local_d0;
  long *local_c8;
  undefined2 local_c0;
  undefined4 local_bc;
  undefined2 local_b8;
  undefined8 local_78;
  undefined8 local_70;
  undefined5 uStack_68;
  undefined3 local_63;
  undefined5 uStack_60;
  undefined **local_50;
  ulong local_48;
  
  pppuVar3 = &local_d0;
  FUN_7103776910(&local_d0,param_1 + 0x250,(long ****)"set_fxui_like_00",param_3,param_4,param_5,
                 param_6,param_7,param_8);
  plVar1 = local_c8;
  FUN_710377aa20((long *)*local_c8,0);
  lVar4 = *local_c8;
  if (lVar4 == 0) {
    local_c8 = (long *)0x0;
  }
  else {
    *(byte *)(lVar4 + 0x58) = *(byte *)(lVar4 + 0x58) & 0xfe;
    local_c8 = (long *)*local_c8;
  }
  FUN_710377acb0(local_c8,1,param_3,param_4,param_5,param_6,param_7,param_8);
  local_d0 = &PTR_FUN_710523d9a8;
  local_c8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar1);
  }
  puVar6 = *(undefined8 **)(param_1 + 0x310);
  if (puVar6 != *(undefined8 **)(param_1 + 0x318)) {
    FUN_710377b140((long)(*(undefined8 **)(param_1 + 0x318) + -2));
    puVar6 = *(undefined8 **)(param_1 + 0x310);
    puVar5 = *(undefined8 **)(param_1 + 0x318);
    while (puVar5 != puVar6) {
      puVar5 = puVar5 + -2;
      (**(code **)*puVar5)(puVar5);
    }
  }
  *(undefined8 **)(param_1 + 0x318) = puVar6;
  local_b8 = 0;
  local_bc = 0;
  local_c0 = 0;
  uStack_60 = 0;
  local_78 = 0;
  local_d0 = (undefined **)0x0;
  local_c8 = (long *)0x0;
  local_70 = 0;
  uStack_68 = 0;
  local_63 = 0;
  FUN_710334e560(*(long *)(DAT_710532f8f8 + 8),(int *)(param_1 + 0x288),&local_d0);
  FUN_7103776910(&local_50,param_1 + 0x250,(long ****)"set_txt_num_like",pppuVar3,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_710377a280((long)&local_50,(byte *)"mnu_share_detail_good_n",1);
  uVar2 = local_48;
  local_50 = &PTR_FUN_710523d9a8;
  local_48 = 0;
  if (uVar2 != 0) {
    FUN_710392eb40(uVar2);
  }
  return;
}

