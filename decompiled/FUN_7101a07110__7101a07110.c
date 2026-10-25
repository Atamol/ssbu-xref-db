// addr:      7101a07110
// offset:    0x1a07110
// name:      FUN_7101a07110
// mangled:   
// signature: undefined __cdecl FUN_7101a07110(long param_1, undefined8 * param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101a07110(long param_1,undefined8 *param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  ulong uVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  undefined **local_a0;
  ulong local_98;
  undefined **local_90;
  ulong local_88;
  ushort local_80 [32];
  
  uVar8 = *param_2;
  uVar7 = param_2[1];
  uVar9 = param_2[2];
  *(undefined2 *)(param_1 + 0x3a8) = *(undefined2 *)(param_2 + 3);
  *(undefined8 *)(param_1 + 0x3a0) = uVar9;
  *(undefined8 *)(param_1 + 0x398) = uVar7;
  *(undefined8 *)(param_1 + 0x390) = uVar8;
  uVar8 = *(undefined8 *)((long)param_2 + 0x1c);
  *(undefined2 *)(param_1 + 0x3b4) = *(undefined2 *)((long)param_2 + 0x24);
  *(undefined8 *)(param_1 + 0x3ac) = uVar8;
  if ((undefined8 *)(param_1 + 0x390) != param_2) {
    FUN_7101696040((uint *)(param_1 + 0x3b8),(ushort *)(param_2 + 6));
  }
  uVar8 = param_2[0xc];
  *(undefined8 *)(param_1 + 0x3f5) = *(undefined8 *)((long)param_2 + 0x65);
  *(undefined8 *)(param_1 + 0x3f0) = uVar8;
  uVar8 = param_2[0xe];
  uVar7 = param_2[0xf];
  *(undefined2 *)(param_1 + 0x410) = *(undefined2 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x408) = uVar7;
  *(undefined8 *)(param_1 + 0x400) = uVar8;
  FUN_71016b6a10((undefined8 *)(param_1 + 0x418),param_2 + 0x11);
  uVar8 = param_2[0x45];
  uVar7 = param_2[0x46];
  *(undefined1 *)(param_1 + 0x5c8) = *(undefined1 *)(param_2 + 0x47);
  *(undefined8 *)(param_1 + 0x5c0) = uVar7;
  *(undefined8 *)(param_1 + 0x5b8) = uVar8;
  FUN_71019fd0b0(*(long *)(param_1 + 0x5e8),(uint *)((long)param_2 + 4),(long ****)param_3,param_4,
                 param_5,param_6,param_7,param_8);
  if (*(char *)(param_1 + 0x6b7) != '\0') {
    lVar11 = *(long *)(param_1 + 0x5e8);
    uVar1 = *(uint *)((long)param_2 + 0xc);
    FUN_7103776640(&local_90,lVar11 + 8,(byte ****)"set_parts_gekitui",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    FUN_7103776910(&local_a0,(long)&local_90,(long ****)"set_txt_help",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    uVar2 = local_98;
    plVar10 = *(long **)(local_98 + 0x10);
    if (plVar10 != (long *)0x0) {
      uVar4 = uVar1;
      if (0x3e6 < (int)uVar1) {
        uVar4 = 999;
      }
      param_5 = (long ****)0x0;
      local_80[0x18] = 0;
      local_80[0x19] = 0;
      local_80[0x1a] = 0;
      local_80[0x1b] = 0;
      local_80[0x1c] = 0;
      local_80[0x1d] = 0;
      local_80[0x1e] = 0;
      local_80[0x1f] = 0;
      param_6 = 0;
      local_80[0x10] = 0;
      local_80[0x11] = 0;
      local_80[0x12] = 0;
      local_80[0x13] = 0;
      local_80[0x14] = 0;
      local_80[0x15] = 0;
      local_80[0x16] = 0;
      local_80[0x17] = 0;
      local_80[8] = 0;
      local_80[9] = 0;
      local_80[10] = 0;
      local_80[0xb] = 0;
      local_80[0xc] = 0;
      local_80[0xd] = 0;
      local_80[0xe] = 0;
      local_80[0xf] = 0;
      local_80[0] = 0;
      local_80[1] = 0;
      local_80[2] = 0;
      local_80[3] = 0;
      local_80[4] = 0;
      local_80[5] = 0;
      local_80[6] = 0;
      local_80[7] = 0;
      uVar4 = FUN_71037ad940((long)local_80,0x20,0,uVar4,0,0);
      param_3 = (long *********)(ulong)uVar4;
      param_4 = (byte ****)0x0;
      FUN_71037a2270(plVar10,local_80,uVar4,0);
    }
    if ((int)uVar1 < 1) {
      pcVar6 = "gekitui_off";
    }
    else {
      pcVar6 = "gekitui_on";
    }
    FUN_7103778300(0x3f800000,*(long *)(lVar11 + 0x10),(long)pcVar6);
    local_a0 = &PTR_FUN_710523d9a8;
    local_98 = 0;
    if (uVar2 != 0) {
      FUN_710392eb40(uVar2);
    }
    uVar2 = local_88;
    local_90 = &PTR_FUN_710523d988;
    local_88 = 0;
    if (uVar2 != 0) {
      uVar5 = *(ulong *)(uVar2 + 0x18);
      *(undefined ***)(uVar2 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar2 + 0x18) = 0;
      if (uVar5 != 0) {
        FUN_710392eb40(uVar5);
      }
      FUN_710392eb40(uVar2);
    }
  }
  if (((*(uint *)(param_1 + 0x1f8) < 2) &&
      (bVar3 = FUN_7103265e70(*(long *)(DAT_710532f730 + 8) + 0x160,*(ulong *)(param_1 + 0x200)),
      bVar3)) && (*(char *)(param_1 + 0x6b9) != '\0')) {
    FUN_7101a00940(*(long *)(param_1 + 0x5e8),*(int *)(param_1 + 0x398),param_3,param_4,param_5,
                   param_6,param_7,param_8);
    return;
  }
  return;
}

