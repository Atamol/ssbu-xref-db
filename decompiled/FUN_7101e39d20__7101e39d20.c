// addr:      7101e39d20
// offset:    0x1e39d20
// name:      FUN_7101e39d20
// mangled:   
// signature: undefined __cdecl FUN_7101e39d20(long param_1, undefined4 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101e39d20(long param_1,undefined4 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 extraout_x1;
  long ****pppplVar6;
  long lVar7;
  long lVar8;
  undefined **local_70;
  undefined8 *local_68;
  undefined **local_60;
  ulong local_58;
  
  lVar8 = *(long *)(param_1 + 0x80);
  FUN_7103775dc0((long *)**(undefined8 **)(lVar8 + 0x50),0,(long ****)0x100c,param_4,param_5,param_6
                 ,param_7,param_8);
  pppplVar6 = (long ****)0x0;
  FUN_7103775dc0((long *)**(undefined8 **)(lVar8 + 0x58),3,(long ****)0x0,param_4,param_5,param_6,
                 param_7,param_8);
  lVar1 = lVar8 + 0x60;
  FUN_7103778300(0x3f800000,*(long *)(lVar8 + 0x68),0x7104443d11);
  *(undefined4 *)(lVar8 + 0x80) = 1;
  FUN_7103776640(&local_60,lVar1,(byte ****)"set_part_aw_00",pppplVar6,param_4,param_5,param_6,
                 param_7,param_8);
  uVar3 = local_58;
  if ((*(long *)(local_58 + 8) != 0) &&
     (lVar7 = *(long *)(*(long *)(local_58 + 8) + 0x18), lVar7 != 0)) {
    *(byte *)(lVar7 + 0x58) = *(byte *)(lVar7 + 0x58) & 0xfe;
  }
  local_60 = &PTR_FUN_710523d988;
  local_58 = 0;
  if (uVar3 != 0) {
    uVar4 = *(ulong *)(uVar3 + 0x18);
    *(undefined ***)(uVar3 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar3 + 0x18) = 0;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
    FUN_710392eb40(uVar3);
  }
  FUN_7103776640(&local_60,lVar1,(byte ****)"set_part_aw_00",pppplVar6,param_4,param_5,param_6,
                 param_7,param_8);
  FUN_71025af650((long)&local_60,extraout_x1,pppplVar6,param_4,param_5,param_6,param_7,param_8);
  FUN_7103776910(&local_70,lVar1,(long ****)"set_fxui_smn_light",pppplVar6,param_4,param_5,param_6,
                 param_7,param_8);
  puVar2 = local_68;
  plVar5 = FUN_710377aae0((long *)*local_68);
  if (plVar5 != (long *)0x0) {
    *(undefined1 *)((long)plVar5 + 0x13a) = 1;
  }
  local_70 = &PTR_FUN_710523d9a8;
  local_68 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar2);
  }
  FUN_7103776910(&local_70,lVar1,(long ****)"set_fxui_smn_shine",pppplVar6,param_4,param_5,param_6,
                 param_7,param_8);
  puVar2 = local_68;
  plVar5 = FUN_710377aae0((long *)*local_68);
  if (plVar5 != (long *)0x0) {
    *(undefined1 *)((long)plVar5 + 0x13a) = 1;
  }
  local_70 = &PTR_FUN_710523d9a8;
  local_68 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar2);
  }
  *(undefined4 *)(lVar8 + 0xa0) = param_2;
  FUN_7103313da0(*(undefined8 **)(DAT_710532f8d0 + 8),0,pppplVar6,param_4,param_5,param_6,param_7,
                 param_8);
  uVar3 = local_58;
  local_60 = &PTR_FUN_710523d988;
  local_58 = 0;
  if (uVar3 != 0) {
    uVar4 = *(ulong *)(uVar3 + 0x18);
    *(undefined ***)(uVar3 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar3 + 0x18) = 0;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
    FUN_710392eb40(uVar3);
  }
  *(undefined1 *)(param_1 + 0x70) = 0;
  return;
}

