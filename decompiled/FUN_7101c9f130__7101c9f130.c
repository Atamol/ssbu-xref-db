// addr:      7101c9f130
// offset:    0x1c9f130
// name:      FUN_7101c9f130
// mangled:   
// signature: undefined __cdecl FUN_7101c9f130(long param_1, ushort param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101c9f130(long param_1,ushort param_2,undefined8 param_3,byte ****param_4,long ****param_5
                   ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  byte ****ppppbVar9;
  char *pcVar10;
  long ****pppplVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  uint *puVar15;
  undefined **local_a0;
  ulong local_98;
  undefined **local_90;
  long *local_88;
  undefined **local_80;
  ulong local_78;
  
  puVar15 = *(uint **)(param_1 + 0x228);
  puVar14 = *(uint **)(param_1 + 0x230);
  if (puVar15 != puVar14) {
    lVar1 = param_1 + 0x118;
    uVar12 = 0;
    uVar13 = 0;
    do {
      if (*puVar15 == 0x21e) {
        FUN_7101c9f350(param_1,param_2,0,param_4,param_5,param_6,param_7,param_8);
      }
      else {
        FUN_7103776640(&local_80,lVar1,(byte ****)"set_itemstat_%02d",(ulong)uVar12,param_4,param_5,
                       param_6,param_7,param_8);
        uVar5 = local_78;
        uVar3 = *puVar15;
        uVar2 = uVar3 & param_2;
        if (uVar2 == uVar3) {
          pcVar10 = "stat_on";
        }
        else {
          pcVar10 = "stat_off";
        }
        FUN_7103778300(0x3f800000,local_78,(long)pcVar10);
        pppplVar11 = (long ****)(ulong)uVar13;
        FUN_7103771d60(&local_90,*(long *)(param_1 + 0x168),pppplVar11,param_4,param_5,param_6,
                       param_7,param_8);
        plVar4 = local_88;
        plVar6 = (long *)*local_88;
        if (plVar6 != (long *)0x0) {
          pppplVar11 = (long ****)0x0;
          (**(code **)(*plVar6 + 0x2f0))(plVar6,uVar2 == uVar3);
        }
        if (uVar2 == uVar3) {
          if (*plVar4 == 0) {
            ppppbVar9 = (byte ****)&DAT_7104867c2e;
          }
          else {
            ppppbVar9 = *(byte *****)(*plVar4 + 0x88);
          }
          FUN_7103776640(&local_a0,lVar1,ppppbVar9,pppplVar11,param_4,param_5,param_6,param_7,
                         param_8);
          pcVar10 = "txt_one_switch_on";
        }
        else {
          if (*plVar4 == 0) {
            ppppbVar9 = (byte ****)&DAT_7104867c2e;
          }
          else {
            ppppbVar9 = *(byte *****)(*plVar4 + 0x88);
          }
          FUN_7103776640(&local_a0,lVar1,ppppbVar9,pppplVar11,param_4,param_5,param_6,param_7,
                         param_8);
          pcVar10 = "txt_one_switch_off";
        }
        uVar8 = local_98;
        FUN_7103778300(0x3f800000,local_98,(long)pcVar10);
        local_a0 = &PTR_FUN_710523d988;
        local_98 = 0;
        if (uVar8 != 0) {
          uVar7 = *(ulong *)(uVar8 + 0x18);
          *(undefined ***)(uVar8 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar8 + 0x18) = 0;
          if (uVar7 != 0) {
            FUN_710392eb40(uVar7);
          }
          FUN_710392eb40(uVar8);
        }
        uVar12 = uVar12 + 1;
        local_90 = &PTR_FUN_710523d9c8;
        local_88 = (long *)0x0;
        FUN_710392eb40((ulong)plVar4);
        local_80 = &PTR_FUN_710523d988;
        local_78 = 0;
        if (uVar5 != 0) {
          uVar8 = *(ulong *)(uVar5 + 0x18);
          *(undefined ***)(uVar5 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar5 + 0x18) = 0;
          if (uVar8 != 0) {
            FUN_710392eb40(uVar8);
          }
          FUN_710392eb40(uVar5);
        }
      }
      puVar15 = puVar15 + 1;
      uVar13 = uVar13 + 1;
    } while (puVar14 != puVar15);
  }
  return;
}

