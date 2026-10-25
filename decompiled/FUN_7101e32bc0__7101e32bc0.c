// addr:      7101e32bc0
// offset:    0x1e32bc0
// name:      FUN_7101e32bc0
// mangled:   
// signature: undefined __cdecl FUN_7101e32bc0(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7101e32bc0(long param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  char *pcVar2;
  long *plVar3;
  void *__src;
  ulong *puVar4;
  int iVar5;
  char cVar6;
  ushort uVar7;
  long ***ppplVar8;
  long ****__n;
  undefined **ppuVar9;
  long *plVar10;
  long *plVar11;
  undefined *puVar12;
  undefined4 *puVar13;
  byte ***pppbVar14;
  ulong uVar15;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  long ****pppplVar16;
  char *pcVar17;
  ulong uVar18;
  undefined8 uVar19;
  byte ****ppppbVar20;
  undefined ***pppuVar21;
  ushort uVar22;
  long lVar23;
  undefined4 *puVar24;
  undefined2 *puVar25;
  code *pcVar26;
  uint uVar27;
  long lVar28;
  long lVar29;
  ulong uVar30;
  undefined8 *puVar31;
  undefined8 *puVar32;
  byte *pbVar33;
  long lVar34;
  long lVar35;
  undefined4 *puVar36;
  uint uVar37;
  ulong *puVar38;
  long ****pppplVar39;
  ulong uVar40;
  undefined **ppuVar41;
  void *pvVar42;
  long ****pppplVar43;
  void *pvVar44;
  void *pvVar45;
  undefined **local_3a8;
  undefined **local_3a0;
  undefined **ppuStack_398;
  undefined8 local_360;
  undefined8 local_358;
  undefined8 local_350;
  undefined2 local_348;
  undefined1 uStack_346;
  uint uStack_345;
  undefined1 uStack_341;
  undefined1 uStack_340;
  undefined1 local_33f;
  long alStack_330 [4];
  long *local_310;
  long alStack_300 [4];
  long *local_2e0;
  long alStack_2d0 [4];
  long *local_2b0;
  long alStack_2a0 [4];
  long *local_280;
  long alStack_270 [4];
  long *local_250;
  byte ***local_240;
  undefined2 local_238;
  undefined4 local_236;
  undefined2 local_232;
  undefined4 local_230;
  undefined2 local_22c;
  undefined1 local_22a;
  undefined1 *local_228;
  undefined4 local_220;
  long alStack_210 [4];
  long *local_1f0;
  long alStack_1e0 [4];
  long *local_1c0;
  long alStack_1b0 [4];
  long *local_190;
  long alStack_180 [4];
  long *local_160;
  long alStack_150 [4];
  long *local_130;
  undefined4 local_120;
  long ***local_110;
  ulong local_108;
  undefined **local_100;
  undefined **local_f8;
  undefined **local_f0;
  undefined8 *local_e8;
  long ***local_e0;
  undefined4 local_d4;
  undefined8 local_d0;
  long *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined **local_b0;
  undefined8 *local_a8;
  
  if (*(char *)(param_1 + 0xf0b) != '\0') {
    *(undefined1 *)(param_1 + 0xf0b) = 0;
    return;
  }
  lVar23 = **(long **)(param_1 + 0x150);
  puVar1 = (undefined8 *)(param_1 + 0xba0);
  if (puVar1 != (undefined8 *)(lVar23 + 8)) {
    **(undefined8 **)(param_1 + 0xba8) = **(undefined8 **)(lVar23 + 0x10);
    *(undefined8 *)(*(long *)(param_1 + 0xba8) + 8) = *(undefined8 *)(*(long *)(lVar23 + 0x10) + 8);
    lVar28 = *(long *)(lVar23 + 0x10);
    lVar23 = *(long *)(param_1 + 0xba8);
    if (lVar23 != lVar28) {
      **(undefined8 **)(lVar23 + 0x18) = **(undefined8 **)(lVar28 + 0x18);
      *(undefined8 *)(*(long *)(lVar23 + 0x18) + 8) = *(undefined8 *)(*(long *)(lVar28 + 0x18) + 8);
      *(undefined8 *)(*(long *)(lVar23 + 0x18) + 0x10) =
           *(undefined8 *)(*(long *)(lVar28 + 0x18) + 0x10);
      *(undefined8 *)(*(long *)(lVar23 + 0x18) + 0x18) =
           *(undefined8 *)(*(long *)(lVar28 + 0x18) + 0x18);
    }
  }
  pppplVar16 = (long ****)0x1001;
  FUN_7103775dc0((long *)**(undefined8 **)(param_1 + 0x150),0,(long ****)0x1001,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_7103775fa0((long *)**(undefined8 **)(param_1 + 0x168),extraout_x1,pppplVar16,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_7103775fa0((long *)**(undefined8 **)(param_1 + 0x160),extraout_x1_00,pppplVar16,param_4,
                 param_5,param_6,param_7,param_8);
  local_238 = 0x101;
  local_240 = (byte ***)0x0;
  local_236 = 0;
  local_230 = 1;
  local_22c = 1;
  local_22a = 1;
  local_232 = 0;
  local_228 = &DAT_41f0000000000000;
  local_220 = 0;
  local_1f0 = (long *)0x0;
  local_1c0 = (long *)0x0;
  local_190 = (long *)0x0;
  local_160 = (long *)0x0;
  local_130 = (long *)0x0;
  local_120 = 0;
  FUN_710337df20((long)&local_240);
  plVar11 = (long *)(param_1 + 0x170);
  ppppbVar20 = &local_240;
  FUN_7103770b30(plVar11,puVar1,(long ****)"selector_0",ppppbVar20,param_5,param_6,param_7,param_8);
  FUN_71037717d0(plVar11,100,"scr_sort",ppppbVar20,param_5,param_6,param_7,param_8);
  FUN_71037717d0(plVar11,0x66,"set_parts_btn_rev_lookup",ppppbVar20,param_5,param_6,param_7,param_8)
  ;
  FUN_71037717d0(plVar11,0x68,"scr_ctrl",ppppbVar20,param_5,param_6,param_7,param_8);
  local_360 = (byte ***)0x7fc420ce8;
  FUN_7103772070(*(long *)(param_1 + 0x170),100,(long ****)&local_360,ppppbVar20,param_5,param_6,
                 param_7,param_8);
  local_360 = (byte ***)0x19b197f89a;
  FUN_7103772070(*(long *)(param_1 + 0x170),0x66,(long ****)&local_360,ppppbVar20,param_5,param_6,
                 param_7,param_8);
  (**(code **)(**(long **)(param_1 + 0x170) + 0x70))(*(long **)(param_1 + 0x170),1);
  (**(code **)(**(long **)(param_1 + 0x170) + 0x60))(*(long **)(param_1 + 0x170),1);
  plVar11 = *(long **)(param_1 + 0x528);
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x70))(plVar11,0);
    (**(code **)(**(long **)(param_1 + 0x528) + 0x60))(*(long **)(param_1 + 0x528),0);
    *(undefined2 *)(param_1 + 0xf28) = 0x101;
    *(undefined8 *)(param_1 + 0xf20) = 0x1010101ffffffff;
    *(undefined8 *)(param_1 + 0xf18) = 0xffffffffffffffff;
    *(undefined4 *)(param_1 + 0xf32) = 0xffffffff;
    *(undefined8 *)(param_1 + 0xf2a) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0xf60) = 0x1010101ffffffff;
    *(undefined8 *)(param_1 + 0xf48) = 0;
    *(undefined8 *)(param_1 + 0xf40) = 0;
    uVar37 = 0;
    *(undefined8 *)(param_1 + 0xf38) = 0;
    *(undefined4 *)(param_1 + 0xf54) = 0;
    pcVar2 = "set_parts_base_%02d";
    *(undefined8 *)(param_1 + 0xf58) = 0xffffffffffffffff;
    *(undefined2 *)(param_1 + 0xf68) = 0x101;
    *(undefined4 *)(param_1 + 0xf72) = 0xffffffff;
    *(undefined8 *)(param_1 + 0xf6a) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0xf88) = 0;
    *(undefined8 *)(param_1 + 0xf80) = 0;
    *(undefined8 *)(param_1 + 0xf78) = 0;
    *(undefined4 *)(param_1 + 0xf94) = 0;
    *(undefined4 *)(param_1 + 4000) = 0xffffffff;
    *(undefined8 *)(param_1 + 0xf98) = 0xffffffffffffffff;
    *(undefined2 *)(param_1 + 0xfa8) = 0x101;
    *(undefined4 *)(param_1 + 0xfa4) = 0x1010101;
    *(undefined4 *)(param_1 + 0xfb2) = 0xffffffff;
    *(undefined8 *)(param_1 + 0xfaa) = 0xffffffffffffffff;
    *(undefined4 *)(param_1 + 0xfe4) = 0x1010101;
    *(undefined8 *)(param_1 + 0xfc8) = 0;
    *(undefined8 *)(param_1 + 0xfc0) = 0;
    *(undefined8 *)(param_1 + 0xfb8) = 0;
    *(undefined4 *)(param_1 + 0xfd4) = 0;
    *(undefined4 *)(param_1 + 0xfe0) = 0xffffffff;
    *(undefined8 *)(param_1 + 0xfd8) = 0xffffffffffffffff;
    *(undefined2 *)(param_1 + 0xfe8) = 0x101;
    *(undefined8 *)(param_1 + 0xfea) = 0xffffffffffffffff;
    *(undefined4 *)(param_1 + 0xff2) = 0xffffffff;
    *(undefined8 *)(param_1 + 0x1008) = 0;
    *(undefined8 *)(param_1 + 0x1000) = 0;
    *(undefined8 *)(param_1 + 0xff8) = 0;
    *(undefined4 *)(param_1 + 0x1014) = 0;
    *(undefined1 *)(param_1 + 0x1018) = 0;
    do {
      uVar18 = (ulong)uVar37;
      pcVar17 = "set_parts_list_%02d";
      snprintf((char *)&local_360,0x20,"set_parts_list_%02d",uVar37);
      FUN_7103776640(&local_3a8,**(long **)(param_1 + 0x160) + 8,(byte ****)&local_360,pcVar17,
                     uVar18,param_5,param_6,param_7,param_8);
      uVar19 = 0;
      pcVar17 = pcVar2;
      snprintf((char *)&local_d0,0x20,"set_parts_base_%02d",0);
      FUN_7103776640(&local_f0,(long)&local_3a8,(byte ****)&local_d0,pcVar17,uVar19,param_5,param_6,
                     param_7,param_8);
      puVar31 = local_e8;
      FUN_7103778300(0x3f800000,(long)local_e8,0x710424faa5);
      local_f0 = &PTR_FUN_710523d988;
      local_e8 = (undefined8 *)0x0;
      if (puVar31 != (undefined8 *)0x0) {
        uVar18 = puVar31[3];
        puVar31[2] = &PTR_FUN_710523d9a8;
        puVar31[3] = 0;
        if (uVar18 != 0) {
          FUN_710392eb40(uVar18);
        }
        FUN_710392eb40((ulong)puVar31);
      }
      FUN_7103776640(&local_f0,(long)&local_3a8,(byte ****)&local_d0,pcVar17,uVar19,param_5,param_6,
                     param_7,param_8);
      puVar31 = local_e8;
      if ((*(long *)((long)local_e8 + 8) != 0) &&
         (lVar23 = *(long *)(*(long *)((long)local_e8 + 8) + 0x18), lVar23 != 0)) {
        *(byte *)(lVar23 + 0x58) = *(byte *)(lVar23 + 0x58) | 1;
      }
      local_f0 = &PTR_FUN_710523d988;
      local_e8 = (undefined8 *)0x0;
      if (puVar31 != (undefined8 *)0x0) {
        uVar18 = *(ulong *)((long)puVar31 + 0x18);
        *(undefined ***)((long)puVar31 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)((long)puVar31 + 0x18) = 0;
        if (uVar18 != 0) {
          FUN_710392eb40(uVar18);
        }
        FUN_710392eb40((ulong)puVar31);
      }
      uVar19 = 1;
      pcVar17 = pcVar2;
      snprintf((char *)&local_d0,0x20,"set_parts_base_%02d",1);
      FUN_7103776640(&local_f0,(long)&local_3a8,(byte ****)&local_d0,pcVar17,uVar19,param_5,param_6,
                     param_7,param_8);
      puVar31 = local_e8;
      FUN_7103778300(0x3f800000,(long)local_e8,0x710424faa5);
      local_f0 = &PTR_FUN_710523d988;
      local_e8 = (undefined8 *)0x0;
      if (puVar31 != (undefined8 *)0x0) {
        uVar18 = *(ulong *)((long)puVar31 + 0x18);
        *(undefined ***)((long)puVar31 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)((long)puVar31 + 0x18) = 0;
        if (uVar18 != 0) {
          FUN_710392eb40(uVar18);
        }
        FUN_710392eb40((ulong)puVar31);
      }
      FUN_7103776640(&local_f0,(long)&local_3a8,(byte ****)&local_d0,pcVar17,uVar19,param_5,param_6,
                     param_7,param_8);
      puVar31 = local_e8;
      if ((*(long *)((long)local_e8 + 8) != 0) &&
         (lVar23 = *(long *)(*(long *)((long)local_e8 + 8) + 0x18), lVar23 != 0)) {
        *(byte *)(lVar23 + 0x58) = *(byte *)(lVar23 + 0x58) | 1;
      }
      local_f0 = &PTR_FUN_710523d988;
      local_e8 = (undefined8 *)0x0;
      if (puVar31 != (undefined8 *)0x0) {
        uVar18 = *(ulong *)((long)puVar31 + 0x18);
        *(undefined ***)((long)puVar31 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)((long)puVar31 + 0x18) = 0;
        if (uVar18 != 0) {
          FUN_710392eb40(uVar18);
        }
        FUN_710392eb40((ulong)puVar31);
      }
      uVar19 = 2;
      pcVar17 = pcVar2;
      snprintf((char *)&local_d0,0x20,"set_parts_base_%02d",2);
      FUN_7103776640(&local_f0,(long)&local_3a8,(byte ****)&local_d0,pcVar17,uVar19,param_5,param_6,
                     param_7,param_8);
      puVar31 = local_e8;
      FUN_7103778300(0x3f800000,(long)local_e8,0x710424faa5);
      local_f0 = &PTR_FUN_710523d988;
      local_e8 = (undefined8 *)0x0;
      if (puVar31 != (undefined8 *)0x0) {
        uVar18 = *(ulong *)((long)puVar31 + 0x18);
        *(undefined ***)((long)puVar31 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)((long)puVar31 + 0x18) = 0;
        if (uVar18 != 0) {
          FUN_710392eb40(uVar18);
        }
        FUN_710392eb40((ulong)puVar31);
      }
      FUN_7103776640(&local_f0,(long)&local_3a8,(byte ****)&local_d0,pcVar17,uVar19,param_5,param_6,
                     param_7,param_8);
      puVar31 = local_e8;
      if ((*(long *)((long)local_e8 + 8) != 0) &&
         (lVar23 = *(long *)(*(long *)((long)local_e8 + 8) + 0x18), lVar23 != 0)) {
        *(byte *)(lVar23 + 0x58) = *(byte *)(lVar23 + 0x58) | 1;
      }
      local_f0 = &PTR_FUN_710523d988;
      local_e8 = (undefined8 *)0x0;
      if (puVar31 != (undefined8 *)0x0) {
        uVar18 = *(ulong *)((long)puVar31 + 0x18);
        *(undefined ***)((long)puVar31 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)((long)puVar31 + 0x18) = 0;
        if (uVar18 != 0) {
          FUN_710392eb40(uVar18);
        }
        FUN_710392eb40((ulong)puVar31);
      }
      uVar19 = 3;
      pcVar17 = pcVar2;
      snprintf((char *)&local_d0,0x20,"set_parts_base_%02d",3);
      FUN_7103776640(&local_f0,(long)&local_3a8,(byte ****)&local_d0,pcVar17,uVar19,param_5,param_6,
                     param_7,param_8);
      puVar31 = local_e8;
      FUN_7103778300(0x3f800000,(long)local_e8,0x710424faa5);
      local_f0 = &PTR_FUN_710523d988;
      local_e8 = (undefined8 *)0x0;
      if (puVar31 != (undefined8 *)0x0) {
        uVar18 = *(ulong *)((long)puVar31 + 0x18);
        *(undefined ***)((long)puVar31 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)((long)puVar31 + 0x18) = 0;
        if (uVar18 != 0) {
          FUN_710392eb40(uVar18);
        }
        FUN_710392eb40((ulong)puVar31);
      }
      FUN_7103776640(&local_f0,(long)&local_3a8,(byte ****)&local_d0,pcVar17,uVar19,param_5,param_6,
                     param_7,param_8);
      puVar31 = local_e8;
      if ((*(long *)((long)local_e8 + 8) != 0) &&
         (lVar23 = *(long *)(*(long *)((long)local_e8 + 8) + 0x18), lVar23 != 0)) {
        *(byte *)(lVar23 + 0x58) = *(byte *)(lVar23 + 0x58) | 1;
      }
      local_f0 = &PTR_FUN_710523d988;
      local_e8 = (undefined8 *)0x0;
      if (puVar31 != (undefined8 *)0x0) {
        uVar18 = *(ulong *)((long)puVar31 + 0x18);
        *(undefined ***)((long)puVar31 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)((long)puVar31 + 0x18) = 0;
        if (uVar18 != 0) {
          FUN_710392eb40(uVar18);
        }
        FUN_710392eb40((ulong)puVar31);
      }
      uVar19 = 4;
      pcVar17 = pcVar2;
      snprintf((char *)&local_d0,0x20,"set_parts_base_%02d",4);
      FUN_7103776640(&local_f0,(long)&local_3a8,(byte ****)&local_d0,pcVar17,uVar19,param_5,param_6,
                     param_7,param_8);
      puVar31 = local_e8;
      FUN_7103778300(0x3f800000,(long)local_e8,0x710424faa5);
      local_f0 = &PTR_FUN_710523d988;
      local_e8 = (undefined8 *)0x0;
      if (puVar31 != (undefined8 *)0x0) {
        uVar18 = *(ulong *)((long)puVar31 + 0x18);
        *(undefined ***)((long)puVar31 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)((long)puVar31 + 0x18) = 0;
        if (uVar18 != 0) {
          FUN_710392eb40(uVar18);
        }
        FUN_710392eb40((ulong)puVar31);
      }
      FUN_7103776640(&local_f0,(long)&local_3a8,(byte ****)&local_d0,pcVar17,uVar19,param_5,param_6,
                     param_7,param_8);
      puVar31 = local_e8;
      if ((*(long *)((long)local_e8 + 8) != 0) &&
         (lVar23 = *(long *)(*(long *)((long)local_e8 + 8) + 0x18), lVar23 != 0)) {
        *(byte *)(lVar23 + 0x58) = *(byte *)(lVar23 + 0x58) | 1;
      }
      local_f0 = &PTR_FUN_710523d988;
      local_e8 = (undefined8 *)0x0;
      if (puVar31 != (undefined8 *)0x0) {
        uVar18 = *(ulong *)((long)puVar31 + 0x18);
        *(undefined ***)((long)puVar31 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)((long)puVar31 + 0x18) = 0;
        if (uVar18 != 0) {
          FUN_710392eb40(uVar18);
        }
        FUN_710392eb40((ulong)puVar31);
      }
      uVar19 = 5;
      pcVar17 = pcVar2;
      snprintf((char *)&local_d0,0x20,"set_parts_base_%02d",5);
      FUN_7103776640(&local_f0,(long)&local_3a8,(byte ****)&local_d0,pcVar17,uVar19,param_5,param_6,
                     param_7,param_8);
      puVar31 = local_e8;
      FUN_7103778300(0x3f800000,(long)local_e8,0x710424faa5);
      local_f0 = &PTR_FUN_710523d988;
      local_e8 = (undefined8 *)0x0;
      if (puVar31 != (undefined8 *)0x0) {
        uVar18 = *(ulong *)((long)puVar31 + 0x18);
        *(undefined ***)((long)puVar31 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)((long)puVar31 + 0x18) = 0;
        if (uVar18 != 0) {
          FUN_710392eb40(uVar18);
        }
        FUN_710392eb40((ulong)puVar31);
      }
      FUN_7103776640(&local_f0,(long)&local_3a8,(byte ****)&local_d0,pcVar17,uVar19,param_5,param_6,
                     param_7,param_8);
      puVar31 = local_e8;
      if ((*(long *)((long)local_e8 + 8) != 0) &&
         (lVar23 = *(long *)(*(long *)((long)local_e8 + 8) + 0x18), lVar23 != 0)) {
        *(byte *)(lVar23 + 0x58) = *(byte *)(lVar23 + 0x58) | 1;
      }
      local_f0 = &PTR_FUN_710523d988;
      local_e8 = (undefined8 *)0x0;
      if (puVar31 != (undefined8 *)0x0) {
        uVar18 = *(ulong *)((long)puVar31 + 0x18);
        *(undefined ***)((long)puVar31 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)((long)puVar31 + 0x18) = 0;
        if (uVar18 != 0) {
          FUN_710392eb40(uVar18);
        }
        FUN_710392eb40((ulong)puVar31);
      }
      ppuVar41 = local_3a0;
      local_3a8 = &PTR_FUN_710523d988;
      local_3a0 = (undefined **)0x0;
      if (ppuVar41 != (undefined **)0x0) {
        puVar12 = ppuVar41[3];
        ppuVar41[2] = (undefined *)&PTR_FUN_710523d9a8;
        ppuVar41[3] = (undefined *)0x0;
        if (puVar12 != (undefined *)0x0) {
          FUN_710392eb40((ulong)puVar12);
        }
        FUN_710392eb40((ulong)ppuVar41);
      }
      uVar37 = uVar37 + 1;
    } while (uVar37 != 4);
    *(undefined4 *)(param_1 + 0xdb8) = 0;
  }
  FUN_71037760f0(*(long *)**(undefined8 **)(param_1 + 0x150),1);
  FUN_71037760f0(*(long *)**(undefined8 **)(param_1 + 0x168),0);
  FUN_71037760f0(*(long *)**(undefined8 **)(param_1 + 0x160),0);
  lVar23 = *(long *)**(undefined8 **)(param_1 + 0x150);
  *(undefined4 *)(*(long *)(lVar23 + 0x600) + 0xdc) = 0x80;
  *(undefined4 *)(*(long *)(lVar23 + 0x600) + 0xe0) = 0x10;
  *(undefined4 *)(*(long *)(lVar23 + 0x600) + 0x18) = 0x80;
  FUN_7103771930(*(long *)(param_1 + 0x170),100,(long ****)0x6,(byte ****)0x0,param_5,param_6,
                 param_7,param_8);
  *(undefined4 *)(*(long *)(lVar23 + 0x600) + 0x1c) = 0x10;
  pppplVar16 = (long ****)&DAT_00000007;
  ppppbVar20 = (byte ****)0x0;
  FUN_7103771930(*(long *)(param_1 + 0x170),0x66,(long ****)&DAT_00000007,(byte ****)0x0,param_5,
                 param_6,param_7,param_8);
  *(undefined4 *)(*(long *)(lVar23 + 0x600) + 0x34) = 0x300;
  puVar36 = *(undefined4 **)(param_1 + 0xb40);
  plVar11 = (long *)(param_1 + 0xb48);
  lVar23 = (long)*(undefined4 **)(param_1 + 0xb50) - (long)puVar36;
  *(undefined4 **)(param_1 + 0xb48) = puVar36;
  if (*(undefined4 **)(param_1 + 0xb50) < puVar36 || lVar23 == 0) {
    if ((ulong)(lVar23 >> 2) < 0x1fffffffffffffff) {
      uVar18 = lVar23 >> 1;
      if (lVar23 == 0) {
        uVar18 = 1;
      }
      if (uVar18 >> 0x3e != 0) goto LAB_7101e3520c;
    }
    else {
      uVar18 = 0x3fffffffffffffff;
    }
    pppbVar14 = (byte ***)(uVar18 * 4);
    if (pppbVar14 == (byte ***)0x0) {
      pppbVar14 = (byte ***)0x1;
    }
    puVar13 = (undefined4 *)
              FUN_710392e290(0x10,pppbVar14,pppplVar16,ppppbVar20,param_5,param_6,param_7,param_8);
    if (puVar13 == (undefined4 *)0x0) {
      local_d0 = (undefined **)((ulong)local_d0 & 0xffffffff00000000);
      pppplVar16 = (long ****)&local_360;
      local_360 = pppbVar14;
      (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_d0);
      puVar13 = (undefined4 *)
                FUN_710392e290(0x10,pppbVar14,pppplVar16,ppppbVar20,param_5,param_6,param_7,param_8)
      ;
    }
    puVar24 = puVar13 + 1;
    *puVar13 = 1;
    *(undefined4 **)(param_1 + 0xb40) = puVar13;
    *(undefined4 **)(param_1 + 0xb48) = puVar24;
    *(undefined4 **)(param_1 + 0xb50) = puVar13 + uVar18;
    if (puVar36 != (undefined4 *)0x0) {
      FUN_710392eb40((ulong)puVar36);
      puVar24 = (undefined4 *)*plVar11;
    }
  }
  else {
    *puVar36 = 1;
    puVar24 = (undefined4 *)(*plVar11 + 4);
    *plVar11 = (long)puVar24;
  }
  plVar3 = (long *)(param_1 + 0xb40);
  if (puVar24 < *(undefined4 **)(param_1 + 0xb50)) {
    *puVar24 = 5;
    puVar36 = (undefined4 *)(*plVar11 + 4);
    *plVar11 = (long)puVar36;
  }
  else {
    pvVar44 = (void *)*plVar3;
    pppplVar39 = (long ****)((long)puVar24 - (long)pvVar44);
    uVar18 = ((long)pppplVar39 >> 2) + 1;
    if (uVar18 >> 0x3e != 0) goto LAB_7101e35218;
    lVar23 = (long)*(undefined4 **)(param_1 + 0xb50) - (long)pvVar44;
    if ((ulong)(lVar23 >> 2) < 0x1fffffffffffffff) {
      uVar15 = lVar23 >> 1;
      if (uVar18 <= uVar15) {
        uVar18 = uVar15;
      }
      if (uVar18 != 0) {
        if (uVar18 >> 0x3e != 0) goto LAB_7101e3520c;
        goto LAB_7101e33544;
      }
LAB_7101e335a4:
      pvVar42 = (void *)0x0;
    }
    else {
      uVar18 = 0x3fffffffffffffff;
LAB_7101e33544:
      pppbVar14 = (byte ***)(uVar18 * 4);
      if (pppbVar14 == (byte ***)0x0) {
        pppbVar14 = (byte ***)0x1;
      }
      pvVar42 = (void *)FUN_710392e290(0x10,pppbVar14,pppplVar16,ppppbVar20,param_5,param_6,param_7,
                                       param_8);
      if (pvVar42 == (void *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_d0 = (undefined **)((ulong)local_d0 & 0xffffffff00000000);
          pppplVar16 = (long ****)&local_360;
          local_360 = pppbVar14;
          uVar15 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_d0);
          if (((uVar15 & 1) != 0) &&
             (pvVar42 = (void *)FUN_710392e290(0x10,pppbVar14,pppplVar16,ppppbVar20,param_5,param_6,
                                               param_7,param_8), pvVar42 != (void *)0x0))
          goto LAB_7101e335a8;
        }
        goto LAB_7101e335a4;
      }
    }
LAB_7101e335a8:
    puVar13 = (undefined4 *)((long)pvVar42 + ((long)pppplVar39 >> 2) * 4);
    puVar36 = puVar13 + 1;
    *puVar13 = 5;
    if (0 < (long)pppplVar39) {
      memcpy(pvVar42,pvVar44,(size_t)pppplVar39);
      pppplVar16 = pppplVar39;
    }
    *(void **)(param_1 + 0xb40) = pvVar42;
    *(undefined4 **)(param_1 + 0xb48) = puVar36;
    *(void **)(param_1 + 0xb50) = (void *)((long)pvVar42 + uVar18 * 4);
    if (pvVar44 != (void *)0x0) {
      FUN_710392eb40((ulong)pvVar44);
      puVar36 = (undefined4 *)*plVar11;
    }
  }
  if (puVar36 < *(undefined4 **)(param_1 + 0xb50)) {
    *puVar36 = 3;
    puVar36 = (undefined4 *)(*plVar11 + 4);
    *plVar11 = (long)puVar36;
  }
  else {
    pvVar44 = (void *)*plVar3;
    pppplVar39 = (long ****)((long)puVar36 - (long)pvVar44);
    uVar18 = ((long)pppplVar39 >> 2) + 1;
    if (uVar18 >> 0x3e != 0) goto LAB_7101e35218;
    lVar23 = (long)*(undefined4 **)(param_1 + 0xb50) - (long)pvVar44;
    if ((ulong)(lVar23 >> 2) < 0x1fffffffffffffff) {
      uVar15 = lVar23 >> 1;
      if (uVar18 <= uVar15) {
        uVar18 = uVar15;
      }
      if (uVar18 != 0) {
        if (uVar18 >> 0x3e != 0) goto LAB_7101e3520c;
        goto LAB_7101e3365c;
      }
LAB_7101e336bc:
      pvVar42 = (void *)0x0;
    }
    else {
      uVar18 = 0x3fffffffffffffff;
LAB_7101e3365c:
      pppbVar14 = (byte ***)(uVar18 * 4);
      if (pppbVar14 == (byte ***)0x0) {
        pppbVar14 = (byte ***)0x1;
      }
      pvVar42 = (void *)FUN_710392e290(0x10,pppbVar14,pppplVar16,ppppbVar20,param_5,param_6,param_7,
                                       param_8);
      if (pvVar42 == (void *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_d0 = (undefined **)((ulong)local_d0 & 0xffffffff00000000);
          pppplVar16 = (long ****)&local_360;
          local_360 = pppbVar14;
          uVar15 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_d0);
          if (((uVar15 & 1) != 0) &&
             (pvVar42 = (void *)FUN_710392e290(0x10,pppbVar14,pppplVar16,ppppbVar20,param_5,param_6,
                                               param_7,param_8), pvVar42 != (void *)0x0))
          goto LAB_7101e336c0;
        }
        goto LAB_7101e336bc;
      }
    }
LAB_7101e336c0:
    puVar13 = (undefined4 *)((long)pvVar42 + ((long)pppplVar39 >> 2) * 4);
    puVar36 = puVar13 + 1;
    *puVar13 = 3;
    if (0 < (long)pppplVar39) {
      memcpy(pvVar42,pvVar44,(size_t)pppplVar39);
      pppplVar16 = pppplVar39;
    }
    *(void **)(param_1 + 0xb40) = pvVar42;
    *(undefined4 **)(param_1 + 0xb48) = puVar36;
    *(void **)(param_1 + 0xb50) = (void *)((long)pvVar42 + uVar18 * 4);
    if (pvVar44 != (void *)0x0) {
      FUN_710392eb40((ulong)pvVar44);
      puVar36 = (undefined4 *)*plVar11;
    }
  }
  if (puVar36 < *(undefined4 **)(param_1 + 0xb50)) {
    *puVar36 = 9;
    puVar36 = (undefined4 *)(*plVar11 + 4);
    *plVar11 = (long)puVar36;
  }
  else {
    pvVar44 = (void *)*plVar3;
    pppplVar39 = (long ****)((long)puVar36 - (long)pvVar44);
    uVar18 = ((long)pppplVar39 >> 2) + 1;
    if (uVar18 >> 0x3e != 0) goto LAB_7101e35218;
    lVar23 = (long)*(undefined4 **)(param_1 + 0xb50) - (long)pvVar44;
    if ((ulong)(lVar23 >> 2) < 0x1fffffffffffffff) {
      uVar15 = lVar23 >> 1;
      if (uVar18 <= uVar15) {
        uVar18 = uVar15;
      }
      if (uVar18 != 0) {
        if (uVar18 >> 0x3e != 0) goto LAB_7101e3520c;
        goto LAB_7101e33774;
      }
LAB_7101e337d4:
      pvVar42 = (void *)0x0;
    }
    else {
      uVar18 = 0x3fffffffffffffff;
LAB_7101e33774:
      pppbVar14 = (byte ***)(uVar18 * 4);
      if (pppbVar14 == (byte ***)0x0) {
        pppbVar14 = (byte ***)0x1;
      }
      pvVar42 = (void *)FUN_710392e290(0x10,pppbVar14,pppplVar16,ppppbVar20,param_5,param_6,param_7,
                                       param_8);
      if (pvVar42 == (void *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_d0 = (undefined **)((ulong)local_d0 & 0xffffffff00000000);
          pppplVar16 = (long ****)&local_360;
          local_360 = pppbVar14;
          uVar15 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_d0);
          if (((uVar15 & 1) != 0) &&
             (pvVar42 = (void *)FUN_710392e290(0x10,pppbVar14,pppplVar16,ppppbVar20,param_5,param_6,
                                               param_7,param_8), pvVar42 != (void *)0x0))
          goto LAB_7101e337d8;
        }
        goto LAB_7101e337d4;
      }
    }
LAB_7101e337d8:
    puVar13 = (undefined4 *)((long)pvVar42 + ((long)pppplVar39 >> 2) * 4);
    puVar36 = puVar13 + 1;
    *puVar13 = 9;
    if (0 < (long)pppplVar39) {
      memcpy(pvVar42,pvVar44,(size_t)pppplVar39);
      pppplVar16 = pppplVar39;
    }
    *(void **)(param_1 + 0xb40) = pvVar42;
    *(undefined4 **)(param_1 + 0xb48) = puVar36;
    *(void **)(param_1 + 0xb50) = (void *)((long)pvVar42 + uVar18 * 4);
    if (pvVar44 != (void *)0x0) {
      FUN_710392eb40((ulong)pvVar44);
      puVar36 = (undefined4 *)*plVar11;
    }
  }
  if (puVar36 < *(undefined4 **)(param_1 + 0xb50)) {
    *puVar36 = 0xd;
    puVar36 = (undefined4 *)(*plVar11 + 4);
    *plVar11 = (long)puVar36;
  }
  else {
    pvVar44 = (void *)*plVar3;
    pppplVar39 = (long ****)((long)puVar36 - (long)pvVar44);
    uVar18 = ((long)pppplVar39 >> 2) + 1;
    if (uVar18 >> 0x3e != 0) goto LAB_7101e35218;
    lVar23 = (long)*(undefined4 **)(param_1 + 0xb50) - (long)pvVar44;
    if ((ulong)(lVar23 >> 2) < 0x1fffffffffffffff) {
      uVar15 = lVar23 >> 1;
      if (uVar18 <= uVar15) {
        uVar18 = uVar15;
      }
      if (uVar18 != 0) {
        if (uVar18 >> 0x3e != 0) goto LAB_7101e3520c;
        goto LAB_7101e3388c;
      }
LAB_7101e338ec:
      pvVar42 = (void *)0x0;
    }
    else {
      uVar18 = 0x3fffffffffffffff;
LAB_7101e3388c:
      pppbVar14 = (byte ***)(uVar18 * 4);
      if (pppbVar14 == (byte ***)0x0) {
        pppbVar14 = (byte ***)0x1;
      }
      pvVar42 = (void *)FUN_710392e290(0x10,pppbVar14,pppplVar16,ppppbVar20,param_5,param_6,param_7,
                                       param_8);
      if (pvVar42 == (void *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_d0 = (undefined **)((ulong)local_d0 & 0xffffffff00000000);
          pppplVar16 = (long ****)&local_360;
          local_360 = pppbVar14;
          uVar15 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_d0);
          if (((uVar15 & 1) != 0) &&
             (pvVar42 = (void *)FUN_710392e290(0x10,pppbVar14,pppplVar16,ppppbVar20,param_5,param_6,
                                               param_7,param_8), pvVar42 != (void *)0x0))
          goto LAB_7101e338f0;
        }
        goto LAB_7101e338ec;
      }
    }
LAB_7101e338f0:
    puVar13 = (undefined4 *)((long)pvVar42 + ((long)pppplVar39 >> 2) * 4);
    puVar36 = puVar13 + 1;
    *puVar13 = 0xd;
    if (0 < (long)pppplVar39) {
      memcpy(pvVar42,pvVar44,(size_t)pppplVar39);
      pppplVar16 = pppplVar39;
    }
    *(void **)(param_1 + 0xb40) = pvVar42;
    *(undefined4 **)(param_1 + 0xb48) = puVar36;
    *(void **)(param_1 + 0xb50) = (void *)((long)pvVar42 + uVar18 * 4);
    if (pvVar44 != (void *)0x0) {
      FUN_710392eb40((ulong)pvVar44);
      puVar36 = (undefined4 *)*plVar11;
    }
  }
  if (puVar36 < *(undefined4 **)(param_1 + 0xb50)) {
    *puVar36 = 0x15;
    *plVar11 = *plVar11 + 4;
  }
  else {
    pvVar44 = (void *)*plVar3;
    pppplVar39 = (long ****)((long)puVar36 - (long)pvVar44);
    uVar18 = ((long)pppplVar39 >> 2) + 1;
    if (uVar18 >> 0x3e != 0) {
LAB_7101e35218:
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar23 = (long)*(undefined4 **)(param_1 + 0xb50) - (long)pvVar44;
    if ((ulong)(lVar23 >> 2) < 0x1fffffffffffffff) {
      uVar15 = lVar23 >> 1;
      if (uVar18 <= uVar15) {
        uVar18 = uVar15;
      }
      if (uVar18 != 0) {
        if (uVar18 >> 0x3e != 0) {
LAB_7101e3520c:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        goto LAB_7101e339a4;
      }
LAB_7101e33a04:
      pvVar42 = (void *)0x0;
    }
    else {
      uVar18 = 0x3fffffffffffffff;
LAB_7101e339a4:
      pppbVar14 = (byte ***)(uVar18 * 4);
      if (pppbVar14 == (byte ***)0x0) {
        pppbVar14 = (byte ***)0x1;
      }
      pvVar42 = (void *)FUN_710392e290(0x10,pppbVar14,pppplVar16,ppppbVar20,param_5,param_6,param_7,
                                       param_8);
      if (pvVar42 == (void *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_d0 = (undefined **)((ulong)local_d0 & 0xffffffff00000000);
          pppplVar16 = (long ****)&local_360;
          local_360 = pppbVar14;
          uVar15 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_d0);
          if (((uVar15 & 1) != 0) &&
             (pvVar42 = (void *)FUN_710392e290(0x10,pppbVar14,pppplVar16,ppppbVar20,param_5,param_6,
                                               param_7,param_8), pvVar42 != (void *)0x0))
          goto LAB_7101e33a08;
        }
        goto LAB_7101e33a04;
      }
    }
LAB_7101e33a08:
    puVar36 = (undefined4 *)((long)pvVar42 + ((long)pppplVar39 >> 2) * 4);
    *puVar36 = 0x15;
    if (0 < (long)pppplVar39) {
      memcpy(pvVar42,pvVar44,(size_t)pppplVar39);
      pppplVar16 = pppplVar39;
    }
    *(void **)(param_1 + 0xb40) = pvVar42;
    *(undefined4 **)(param_1 + 0xb48) = puVar36 + 1;
    *(void **)(param_1 + 0xb50) = (void *)((long)pvVar42 + uVar18 * 4);
    if (pvVar44 != (void *)0x0) {
      FUN_710392eb40((ulong)pvVar44);
    }
  }
  FUN_7103776640(&local_f0,(long)puVar1,(byte ****)"scr_sort",pppplVar16,ppppbVar20,param_5,param_6,
                 param_7,param_8);
  FUN_7103776910(&local_100,(long)&local_f0,(long ****)"set_txt_key",pppplVar16,ppppbVar20,param_5,
                 param_6,param_7,param_8);
  FUN_7103776910(&local_d0,(long)&local_f0,(long ****)"set_txt_list",pppplVar16,ppppbVar20,param_5,
                 param_6,param_7,param_8);
  if ((ulong)(*(long *)(param_1 + 0xb48) - *(long *)(param_1 + 0xb40) >> 2) <=
      (ulong)*(uint *)(param_1 + 0xb58)) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  FUN_71025c6970((uint *)&local_360,
                 *(undefined4 *)(*(long *)(param_1 + 0xb40) + (ulong)*(uint *)(param_1 + 0xb58) * 4)
                );
  FUN_710377a120((long)&local_d0,(char *)&local_358,pppplVar16,ppppbVar20,param_5,param_6,param_7,
                 param_8);
  plVar10 = local_c8;
  local_d0 = &PTR_FUN_710523d9a8;
  local_c8 = (long *)0x0;
  if (plVar10 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar10);
  }
  puVar31 = local_e8;
  FUN_7103778300(0x3f800000,(long)local_e8,0x7104433623);
  FUN_7103778300(0x3f800000,(long)puVar31,0x710428106d);
  FUN_710377a120((long)&local_100,"mnu_spirits_sort_guide",pppplVar16,ppppbVar20,param_5,param_6,
                 param_7,param_8);
  local_c0 = 0;
  uStack_b8 = 0;
  FUN_7103776290(&local_b0,extraout_x1_01,pppplVar16,ppppbVar20,param_5,param_6,param_7,param_8);
  local_a8[1] = 0;
  local_d0 = (undefined **)0x10000000b;
  local_c8 = (long *)CONCAT44(local_c8._4_4_,1);
  *local_a8 = *puVar31;
  local_a8[1] = puVar31[1];
  puVar32 = puVar31;
  if (local_a8 != puVar31) {
    *(undefined8 *)local_a8[3] = *(undefined8 *)puVar31[3];
    *(undefined8 *)(local_a8[3] + 8) = *(undefined8 *)(puVar31[3] + 8);
    *(undefined8 *)(local_a8[3] + 0x10) = *(undefined8 *)(puVar31[3] + 0x10);
    *(undefined8 *)(local_a8[3] + 0x18) = *(undefined8 *)(puVar31[3] + 0x18);
    puVar32 = local_a8;
  }
  uVar19 = _ConstantZero;
  uStack_b8 = uRam0000007107459008;
  if (*(long *)puVar32[3] != 0) {
    uVar19 = *(undefined8 *)(*(long *)puVar32[3] + 0x30);
    uStack_b8 = 0;
  }
  local_3a8 = (undefined **)0x0;
  local_3a0 = (undefined **)0x0;
  ppuStack_398 = (undefined **)0x0;
  local_c0 = CONCAT44((int)((ulong)uVar19 >> 0x20),(float)uVar19 + 15.0);
  lVar23 = *plVar3;
  if (*plVar11 != lVar23) {
    uVar18 = 0;
    do {
      FUN_71025c6970((uint *)&local_360,*(undefined4 *)(lVar23 + uVar18 * 4));
      if (local_3a0 < ppuStack_398) {
        *(uint *)local_3a0 = 0;
        uVar15 = 0;
        do {
          uVar40 = uVar15;
          if (*(char *)((long)&local_358 + uVar15) == '\0') break;
          *(char *)((long)local_3a0 + uVar15 + 8) = *(char *)((long)&local_358 + uVar15);
          cVar6 = *(char *)((long)&local_358 + uVar15 + 1);
          if (cVar6 == '\0') {
            uVar40 = uVar15 + 1;
            break;
          }
          *(char *)((long)local_3a0 + uVar15 + 9) = cVar6;
          cVar6 = *(char *)((long)&local_358 + uVar15 + 2);
          if (cVar6 == '\0') {
            uVar40 = uVar15 + 2;
            break;
          }
          uVar40 = uVar15 + 3;
          *(char *)((long)local_3a0 + uVar15 + 10) = cVar6;
          uVar15 = uVar40;
        } while ((uint)uVar40 < 0x3f);
        *(undefined1 *)((long)local_3a0 + (uVar40 & 0xffffffff) + 8) = 0;
        *(uint *)((long)local_3a0 + 4) = (uint)uVar40;
        uVar27 = (uint)*(byte *)(local_3a0 + 1);
        uVar37 = 0x811c9dc5;
        if (*(byte *)(local_3a0 + 1) != 0) {
          pbVar33 = (byte *)((long)local_3a0 + 9);
          do {
            uVar37 = uVar37 * 0x89 ^ uVar27;
            uVar27 = (uint)*pbVar33;
            pbVar33 = pbVar33 + 1;
          } while (uVar27 != 0);
        }
        *(uint *)local_3a0 = uVar37;
        local_3a0 = local_3a0 + 9;
      }
      else {
        FUN_71019c1c50((ulong *)&local_3a8,(long)&local_360,pppplVar16,ppppbVar20,param_5,param_6,
                       param_7,param_8);
      }
      lVar23 = *plVar3;
      uVar18 = (ulong)((int)uVar18 + 1);
    } while (uVar18 < (ulong)(*plVar11 - lVar23 >> 2));
  }
  FUN_7103776640(&local_110,(long)puVar1,(byte ****)"blinder",pppplVar16,ppppbVar20,param_5,param_6,
                 param_7,param_8);
  ppuVar9 = local_3a0;
  ppuVar41 = local_3a8;
  local_360 = (byte ***)0x0;
  local_358 = (byte ***)0x0;
  local_350 = (byte ***)0x0;
  ppplVar8 = (long ***)((long)local_3a0 - (long)local_3a8);
  if (ppplVar8 != (long ***)0x0) {
    if (0x38e38e38e38e38e < (ulong)(((long)ppplVar8 >> 3) * -0x71c71c71c71c71c7)) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    pppbVar14 = (byte ***)
                FUN_710392e290(0x10,ppplVar8,pppplVar16,ppppbVar20,param_5,param_6,param_7,param_8);
    if (pppbVar14 == (byte ***)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_d4 = 0;
        pppplVar16 = &local_e0;
        local_e0 = ppplVar8;
        uVar18 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_d4);
        if (((uVar18 & 1) != 0) &&
           (pppbVar14 = (byte ***)
                        FUN_710392e290(0x10,ppplVar8,pppplVar16,ppppbVar20,param_5,param_6,param_7,
                                       param_8), pppbVar14 != (byte ***)0x0)) goto LAB_7101e33da4;
      }
      pppbVar14 = (byte ***)0x0;
    }
LAB_7101e33da4:
    local_350 = pppbVar14 + ((long)ppplVar8 >> 3);
    local_360 = pppbVar14;
    local_358 = pppbVar14;
    if (ppuVar41 != ppuVar9) {
      do {
        *(uint *)local_358 = 0;
        uVar18 = 0;
        do {
          cVar6 = *(char *)((long)ppuVar41 + uVar18 + 8);
          uVar15 = uVar18;
          if (cVar6 == '\0') break;
          *(char *)((long)local_358 + uVar18 + 8) = cVar6;
          cVar6 = *(char *)((long)ppuVar41 + uVar18 + 9);
          if (cVar6 == '\0') {
            uVar15 = uVar18 + 1;
            break;
          }
          *(char *)((long)local_358 + uVar18 + 9) = cVar6;
          cVar6 = *(char *)((long)ppuVar41 + uVar18 + 10);
          if (cVar6 == '\0') {
            uVar15 = uVar18 + 2;
            break;
          }
          uVar15 = uVar18 + 3;
          *(char *)((long)local_358 + uVar18 + 10) = cVar6;
          uVar18 = uVar15;
        } while ((uint)uVar15 < 0x3f);
        *(undefined1 *)((long)local_358 + (uVar15 & 0xffffffff) + 8) = 0;
        *(uint *)((long)local_358 + 4) = (uint)uVar15;
        uVar27 = (uint)*(byte *)(local_358 + 1);
        uVar37 = 0x811c9dc5;
        if (*(byte *)(local_358 + 1) != 0) {
          pbVar33 = (byte *)((long)local_358 + 9);
          do {
            uVar37 = uVar37 * 0x89 ^ uVar27;
            uVar27 = (uint)*pbVar33;
            pbVar33 = pbVar33 + 1;
          } while (uVar27 != 0);
        }
        *(uint *)local_358 = uVar37;
        ppuVar41 = ppuVar41 + 9;
        local_358 = local_358 + 9;
      } while (ppuVar41 != ppuVar9);
    }
  }
  pppplVar16 = (long ****)&local_360;
  ppppbVar20 = (byte ****)&local_d0;
  pppplVar39 = &local_110;
  FUN_71032ccb70(param_1 + 0x4d0,(undefined8 *)(param_1 + 0x158),pppplVar16,ppppbVar20,pppplVar39,
                 param_6,param_7,param_8);
  if (local_360 != (byte ***)0x0) {
    local_358 = local_360;
    FUN_710392eb40((ulong)local_360);
  }
  uVar18 = local_108;
  local_110 = (long ***)&PTR_FUN_710523d988;
  local_108 = 0;
  if (uVar18 != 0) {
    uVar15 = *(ulong *)(uVar18 + 0x18);
    *(undefined ***)(uVar18 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar18 + 0x18) = 0;
    if (uVar15 != 0) {
      FUN_710392eb40(uVar15);
    }
    FUN_710392eb40(uVar18);
  }
  if (local_3a8 != (undefined **)0x0) {
    local_3a0 = local_3a8;
    FUN_710392eb40((ulong)local_3a8);
  }
  puVar32 = local_a8;
  local_b0 = &PTR_FUN_710523d988;
  local_a8 = (undefined8 *)0x0;
  if (puVar32 != (undefined8 *)0x0) {
    uVar18 = puVar32[3];
    puVar32[2] = &PTR_FUN_710523d9a8;
    puVar32[3] = 0;
    if (uVar18 != 0) {
      FUN_710392eb40(uVar18);
    }
    FUN_710392eb40((ulong)puVar32);
  }
  ppuVar41 = local_f8;
  local_100 = &PTR_FUN_710523d9a8;
  local_f8 = (undefined **)0x0;
  if (ppuVar41 != (undefined **)0x0) {
    FUN_710392eb40((ulong)ppuVar41);
  }
  local_f0 = &PTR_FUN_710523d988;
  local_e8 = (undefined8 *)0x0;
  if (puVar31 != (undefined8 *)0x0) {
    uVar18 = puVar31[3];
    puVar31[2] = &PTR_FUN_710523d9a8;
    puVar31[3] = 0;
    if (uVar18 != 0) {
      FUN_710392eb40(uVar18);
    }
    FUN_710392eb40((ulong)puVar31);
  }
  pvVar45 = *(void **)(param_1 + 0xde8);
  pvVar42 = *(void **)(param_1 + 0xde0);
  pvVar44 = *(void **)(param_1 + 0xdc0);
  pppplVar43 = (long ****)((long)pvVar45 - (long)pvVar42);
  *(void **)(param_1 + 0xdc8) = pvVar44;
  if (pppplVar43 == (long ****)0x0) {
    lVar23 = *(long *)(param_1 + 0x1020);
    if (lVar23 != 0) {
      lVar28 = *(long *)(lVar23 + 0x305c0);
      uVar18 = *(long *)(lVar23 + 0x305c8) - lVar28;
      if (0 < (int)(uVar18 >> 3)) {
        lVar34 = *DAT_7105329f98;
        uVar15 = 0;
        do {
          if (uVar15 < (ulong)((long)uVar18 >> 3)) {
            lVar23 = *(long *)(lVar28 + uVar15 * 8);
          }
          else {
            lVar23 = 0;
          }
          local_348 = 0;
          uStack_346 = 0;
          uStack_345 = uStack_345 & 0xffffff00;
          local_358 = (byte ***)0x0;
          local_350 = (byte ***)0x0;
          uVar37 = 0xffffffff;
          local_360 = (byte ***)0x0;
          uVar7 = *(ushort *)(lVar23 + 0x48);
          lVar28 = (long)(short)uVar7;
          if (*(char *)(lVar23 + 0x4b) == '\x05') {
            lVar29 = (long)*(short *)(lVar23 + 0x4c);
            if (lVar29 == -1) {
              uVar37 = 0xffffffff;
            }
            else {
              uVar37 = 0xffffffff;
              if (*(short *)(lVar23 + 0x4c) < 2000) {
                lVar35 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
                uVar37 = 0xffffffff;
                if ((uint)*(ushort *)(lVar35 + lVar29 * 2 + 0x60) <
                    (uint)((int)((ulong)(*(long *)(lVar35 + 0x28) - *(long *)(lVar35 + 0x20)) >> 6)
                          * -0x33333333)) {
                  uVar37 = 0xffffffff;
                  if ((*(byte *)(*(long *)(lVar34 + 0x30) + lVar29 * 0x24 + 1) >> 3 & 1) != 0) {
                    uVar37 = *(uint *)(*(long *)(lVar34 + 0x30) + lVar29 * 0x24 + 4);
                  }
                }
              }
            }
          }
          uVar27 = uVar37;
          if (*(char *)(lVar23 + 0x4f) == '\x05') {
            lVar29 = (long)*(short *)(lVar23 + 0x50);
            if ((((lVar29 != -1) && (*(short *)(lVar23 + 0x50) < 2000)) &&
                (lVar35 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8),
                (uint)*(ushort *)(lVar35 + lVar29 * 2 + 0x60) <
                (uint)((int)((ulong)(*(long *)(lVar35 + 0x28) - *(long *)(lVar35 + 0x20)) >> 6) *
                      -0x33333333))) &&
               (((*(byte *)(*(long *)(lVar34 + 0x30) + lVar29 * 0x24 + 1) >> 3 & 1) != 0 &&
                (uVar27 = *(uint *)(*(long *)(lVar34 + 0x30) + lVar29 * 0x24 + 4), uVar37 <= uVar27)
                ))) {
              uVar27 = uVar37;
            }
          }
          uVar37 = uVar27;
          if (*(char *)(lVar23 + 0x53) == '\x05') {
            lVar29 = (long)*(short *)(lVar23 + 0x54);
            if (((lVar29 != -1) && (*(short *)(lVar23 + 0x54) < 2000)) &&
               ((lVar35 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8),
                (uint)*(ushort *)(lVar35 + lVar29 * 2 + 0x60) <
                (uint)((int)((ulong)(*(long *)(lVar35 + 0x28) - *(long *)(lVar35 + 0x20)) >> 6) *
                      -0x33333333) &&
                (((*(byte *)(*(long *)(lVar34 + 0x30) + lVar29 * 0x24 + 1) >> 3 & 1) != 0 &&
                 (uVar37 = *(uint *)(*(long *)(lVar34 + 0x30) + lVar29 * 0x24 + 4), uVar27 <= uVar37
                 )))))) {
              uVar37 = uVar27;
            }
          }
          uVar27 = uVar37;
          if (*(char *)(lVar23 + 0x57) == '\x05') {
            lVar29 = (long)*(short *)(lVar23 + 0x58);
            if ((((lVar29 != -1) && (*(short *)(lVar23 + 0x58) < 2000)) &&
                (lVar23 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8),
                (uint)*(ushort *)(lVar23 + lVar29 * 2 + 0x60) <
                (uint)((int)((ulong)(*(long *)(lVar23 + 0x28) - *(long *)(lVar23 + 0x20)) >> 6) *
                      -0x33333333))) &&
               (((*(byte *)(*(long *)(lVar34 + 0x30) + lVar29 * 0x24 + 1) >> 3 & 1) != 0 &&
                (uVar27 = *(uint *)(*(long *)(lVar34 + 0x30) + lVar29 * 0x24 + 4), uVar37 <= uVar27)
                ))) {
              uVar27 = uVar37;
            }
          }
          puVar38 = *(ulong **)(*DAT_7105329fa0 + 0x70);
          puVar4 = *(ulong **)(*DAT_7105329fa0 + 0x78);
          if (puVar38 != puVar4) {
            lVar35 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
            lVar23 = *(long *)(lVar35 + 0x20);
            lVar29 = *(long *)(lVar35 + 0x28);
            uVar37 = uVar27;
            do {
              uVar27 = FUN_71032a7800(lVar35,*puVar38);
              if (uVar27 < (uint)((int)((ulong)(lVar29 - lVar23) >> 6) * -0x33333333)) {
                uVar22 = *(ushort *)(lVar23 + (ulong)uVar27 * 0x140);
              }
              else {
                uVar22 = 0xffff;
              }
              puVar38 = puVar38 + 1;
              uVar27 = 0;
              if (uVar7 != uVar22) {
                uVar27 = uVar37;
              }
              uVar37 = uVar27;
            } while (puVar4 != puVar38);
          }
          puVar25 = *(undefined2 **)(param_1 + 0xdc8);
          if (puVar25 == *(undefined2 **)(param_1 + 0xdd0)) {
            pvVar44 = *(void **)(param_1 + 0xdc0);
            pppplVar43 = (long ****)((long)puVar25 - (long)pvVar44);
            uVar40 = 0x333333333333333;
            uVar18 = ((long)pppplVar43 >> 4) * -0x3333333333333333 + 1;
            if (0x333333333333333 < uVar18) goto LAB_7101e35210;
            lVar23 = (long)*(undefined2 **)(param_1 + 0xdd0) - (long)pvVar44 >> 4;
            if ((ulong)(lVar23 * -0x3333333333333333) < 0x199999999999999) {
              uVar30 = lVar23 * -0x6666666666666666;
              uVar40 = uVar18;
              if (uVar18 <= uVar30) {
                uVar40 = uVar30;
              }
              if (uVar40 != 0) goto LAB_7101e34328;
LAB_7101e34384:
              lVar23 = 0;
            }
            else {
LAB_7101e34328:
              pppbVar14 = (byte ***)(uVar40 * 0x50);
              if (pppbVar14 == (byte ***)0x0) {
                pppbVar14 = (byte ***)0x1;
              }
              lVar23 = FUN_710392e290(0x10,pppbVar14,pppplVar16,ppppbVar20,pppplVar39,param_6,
                                      param_7,param_8);
              if (lVar23 == 0) {
                if (DAT_7105332f00 != (long *)0x0) {
                  local_3a8 = (undefined **)((ulong)local_3a8 & 0xffffffff00000000);
                  pppplVar16 = (long ****)&local_d0;
                  local_d0 = (undefined **)pppbVar14;
                  uVar18 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_3a8);
                  if (((uVar18 & 1) != 0) &&
                     (lVar23 = FUN_710392e290(0x10,pppbVar14,pppplVar16,ppppbVar20,pppplVar39,
                                              param_6,param_7,param_8), lVar23 != 0))
                  goto LAB_7101e34388;
                }
                goto LAB_7101e34384;
              }
            }
LAB_7101e34388:
            puVar25 = (undefined2 *)(lVar23 + ((long)pppplVar43 >> 4) * 0x10);
            *(uint *)(puVar25 + 2) = uVar27;
            *puVar25 = 0xffff;
            puVar25[4] = uVar7;
            *(undefined4 *)(puVar25 + 6) = 0;
            puVar25[8] = 1;
            lVar29 = SUB168(SEXT816((long)pppplVar43) * SEXT816(-0x6666666666666667),8);
            *(undefined8 *)(puVar25 + 0xc) = 0x52ffff0000000000;
            puVar25[0xb] = local_d0._4_2_;
            *(uint *)(puVar25 + 9) = (uint)local_d0;
            *(byte ****)(puVar25 + 0x14) = local_358;
            *(byte ****)(puVar25 + 0x18) = local_350;
            *(uint *)(puVar25 + 0x1c) =
                 CONCAT13((undefined1)uStack_345,CONCAT12(uStack_346,local_348));
            puVar25[0x1e] = 0;
            *(undefined1 *)(puVar25 + 0x1f) = 0;
            *(undefined8 *)(puVar25 + 0x20) = 0;
            *(undefined4 *)(puVar25 + 0x24) = 0xffffffff;
            *(byte ****)(puVar25 + 0x10) = local_360;
            if (0 < (long)pppplVar43) {
              memcpy(puVar25 + ((lVar29 >> 5) - (lVar29 >> 0x3f)) * 0x28,pvVar44,(size_t)pppplVar43)
              ;
              pppplVar16 = pppplVar43;
            }
            *(ulong *)(param_1 + 0xdd0) = lVar23 + uVar40 * 0x50;
            *(undefined2 **)(param_1 + 0xdc0) = puVar25 + ((lVar29 >> 5) - (lVar29 >> 0x3f)) * 0x28;
            *(undefined2 **)(param_1 + 0xdc8) = puVar25 + 0x28;
            if (pvVar44 != (void *)0x0) {
              FUN_710392eb40((ulong)pvVar44);
            }
          }
          else {
            *puVar25 = 0xffff;
            *(uint *)(puVar25 + 2) = uVar27;
            puVar25[4] = uVar7;
            *(undefined4 *)(puVar25 + 6) = 0;
            puVar25[8] = 1;
            *(uint *)(puVar25 + 9) = (uint)local_d0;
            puVar25[0xb] = local_d0._4_2_;
            *(undefined8 *)(puVar25 + 0xc) = 0x52ffff0000000000;
            *(uint *)(puVar25 + 0x1c) =
                 CONCAT13((undefined1)uStack_345,CONCAT12(uStack_346,local_348));
            *(byte ****)(puVar25 + 0x10) = local_360;
            *(byte ****)(puVar25 + 0x14) = local_358;
            *(byte ****)(puVar25 + 0x18) = local_350;
            puVar25[0x1e] = 0;
            *(undefined1 *)(puVar25 + 0x1f) = 0;
            *(undefined8 *)(puVar25 + 0x20) = 0;
            *(undefined4 *)(puVar25 + 0x24) = 0xffffffff;
            *(long *)(param_1 + 0xdc8) = *(long *)(param_1 + 0xdc8) + 0x50;
          }
          if (((uVar7 != 0xffff) && ((short)uVar7 < 2000)) &&
             (lVar23 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8),
             (uint)*(ushort *)(lVar23 + lVar28 * 2 + 0x60) <
             (uint)((int)((ulong)(*(long *)(lVar23 + 0x28) - *(long *)(lVar23 + 0x20)) >> 6) *
                   -0x33333333))) {
            lVar23 = *(long *)(lVar34 + 0x30);
            puVar31 = &DAT_7105323cf0;
            if (uVar7 < 2000) {
              puVar31 = *(undefined8 **)(*DAT_7105314510 + 0xa8);
              lVar29 = *(long *)*puVar31 + lVar28 * 0x1c;
              *(byte *)(lVar29 + 0x1a) = *(byte *)(lVar29 + 0x1a) | 4;
              puVar31 = (undefined8 *)(*(long *)*puVar31 + lVar28 * 0x1c);
            }
            *(undefined1 *)(lVar23 + lVar28 * 0x24 + 1) = *(undefined1 *)((long)puVar31 + 0x1a);
          }
          lVar23 = *(long *)(param_1 + 0x1020);
          lVar28 = *(long *)(lVar23 + 0x305c0);
          uVar18 = *(long *)(lVar23 + 0x305c8) - lVar28;
          uVar15 = uVar15 + 1;
        } while ((long)uVar15 < (long)(int)(uVar18 >> 3));
      }
    }
  }
  else {
    uVar18 = ((long)pppplVar43 >> 4) * -0x3333333333333333;
    lVar23 = *(long *)(param_1 + 0xdd0);
    lVar28 = lVar23 - (long)pvVar44 >> 4;
    if (uVar18 < (ulong)(lVar28 * -0x3333333333333333) || uVar18 + lVar28 * 0x3333333333333333 == 0)
    {
      __src = pvVar42;
      if (pppplVar43 == (long ****)0x0) {
        __src = pvVar45;
      }
      __n = (long ****)((long)__src - (long)pvVar42);
      if (__n != (long ****)0x0) {
        pppplVar16 = __n;
        memmove(pvVar44,pvVar42,(size_t)__n);
      }
      if (pppplVar43 == (long ****)0x0) {
        pvVar44 = (void *)((long)pvVar44 + ((long)__n >> 4) * 0x10);
      }
      else {
        pppplVar16 = (long ****)((long)pvVar45 - (long)__src);
        if ((long)pppplVar16 < 1) goto LAB_7101e346c0;
        uVar18 = (ulong)pppplVar16 / 0x50;
        memcpy(*(void **)(param_1 + 0xdc8),__src,(size_t)pppplVar16);
        pvVar44 = (void *)(*(long *)(param_1 + 0xdc8) + uVar18 * 0x50);
      }
LAB_7101e346bc:
      *(void **)(param_1 + 0xdc8) = pvVar44;
    }
    else {
      if (pvVar44 != (void *)0x0) {
        *(void **)(param_1 + 0xdc8) = pvVar44;
        FUN_710392eb40((ulong)pvVar44);
        lVar23 = 0;
        *(undefined8 *)(param_1 + 0xdc0) = 0;
        *(undefined8 *)(param_1 + 0xdc8) = 0;
        *(undefined8 *)(param_1 + 0xdd0) = 0;
      }
      if (0x333333333333333 < uVar18) {
LAB_7101e35210:
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      uVar15 = 0x333333333333333;
      if (((ulong)((lVar23 >> 4) * -0x3333333333333333) < 0x199999999999999) &&
         (uVar40 = (lVar23 >> 4) * -0x6666666666666666, uVar15 = uVar18, uVar18 <= uVar40)) {
        uVar15 = uVar40;
      }
      pppbVar14 = (byte ***)(uVar15 * 0x50);
      if (pppbVar14 == (byte ***)0x0) {
        pppbVar14 = (byte ***)0x1;
      }
      pvVar44 = (void *)FUN_710392e290(0x10,pppbVar14,pppplVar16,ppppbVar20,pppplVar39,param_6,
                                       param_7,param_8);
      if (pvVar44 == (void *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_d0 = (undefined **)((ulong)local_d0 & 0xffffffff00000000);
          pppplVar16 = (long ****)&local_360;
          local_360 = pppbVar14;
          uVar18 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_d0);
          if (((uVar18 & 1) != 0) &&
             (pvVar44 = (void *)FUN_710392e290(0x10,pppbVar14,pppplVar16,ppppbVar20,pppplVar39,
                                               param_6,param_7,param_8), pvVar44 != (void *)0x0))
          goto LAB_7101e34618;
        }
        pvVar44 = (void *)0x0;
      }
LAB_7101e34618:
      *(void **)(param_1 + 0xdc8) = pvVar44;
      *(void **)(param_1 + 0xdc0) = pvVar44;
      *(void **)(param_1 + 0xdd0) = (void *)((long)pvVar44 + uVar15 * 0x50);
      if (0 < (long)pppplVar43) {
        uVar18 = (ulong)pppplVar43 / 0x50;
        memcpy(pvVar44,pvVar42,(size_t)pppplVar43);
        pvVar44 = (void *)((long)pvVar44 + uVar18 * 0x50);
        pppplVar16 = pppplVar43;
        goto LAB_7101e346bc;
      }
    }
LAB_7101e346c0:
    lVar23 = *(long *)(param_1 + 0x1020);
  }
  DAT_7105325eb0 = lVar23;
  if ((ulong)(*(long *)(param_1 + 0xb48) - *(long *)(param_1 + 0xb40) >> 2) <=
      (ulong)*(uint *)(param_1 + 0xb58)) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  iVar5 = *(int *)(*(long *)(param_1 + 0xb40) + (ulong)*(uint *)(param_1 + 0xb58) * 4);
  plVar11 = *(long **)(param_1 + 0x188);
  *(long **)(param_1 + 400) = plVar11;
  if (*(long *)(param_1 + 0xdc8) != *(long *)(param_1 + 0xdc0)) {
    lVar23 = *(long *)(param_1 + 0xdc0);
    do {
      if (plVar11 < *(long **)(param_1 + 0x198)) {
        *plVar11 = lVar23;
        *(long *)(param_1 + 400) = *(long *)(param_1 + 400) + 8;
      }
      else {
        pvVar44 = *(void **)(param_1 + 0x188);
        pppplVar43 = (long ****)((long)plVar11 - (long)pvVar44);
        uVar18 = ((long)pppplVar43 >> 3) + 1;
        if (uVar18 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar28 = (long)*(long **)(param_1 + 0x198) - (long)pvVar44;
        if ((ulong)(lVar28 >> 3) < 0xfffffffffffffff) {
          uVar15 = lVar28 >> 2;
          if (uVar18 <= uVar15) {
            uVar18 = uVar15;
          }
          if (uVar18 != 0) {
            if (uVar18 >> 0x3d == 0) goto LAB_7101e34794;
            goto LAB_7101e3520c;
          }
LAB_7101e347f4:
          pvVar42 = (void *)0x0;
        }
        else {
          uVar18 = 0x1fffffffffffffff;
LAB_7101e34794:
          pppbVar14 = (byte ***)(uVar18 * 8);
          if (pppbVar14 == (byte ***)0x0) {
            pppbVar14 = (byte ***)0x1;
          }
          pvVar42 = (void *)FUN_710392e290(0x10,pppbVar14,pppplVar16,ppppbVar20,pppplVar39,param_6,
                                           param_7,param_8);
          if (pvVar42 == (void *)0x0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_d0 = (undefined **)((ulong)local_d0 & 0xffffffff00000000);
              pppplVar16 = (long ****)&local_360;
              local_360 = pppbVar14;
              uVar15 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_d0);
              if (((uVar15 & 1) != 0) &&
                 (pvVar42 = (void *)FUN_710392e290(0x10,pppbVar14,pppplVar16,ppppbVar20,pppplVar39,
                                                   param_6,param_7,param_8), pvVar42 != (void *)0x0)
                 ) goto LAB_7101e347f8;
            }
            goto LAB_7101e347f4;
          }
        }
LAB_7101e347f8:
        plVar11 = (long *)((long)pvVar42 + ((long)pppplVar43 >> 3) * 8);
        *plVar11 = lVar23;
        if (0 < (long)pppplVar43) {
          memcpy(pvVar42,pvVar44,(size_t)pppplVar43);
          pppplVar16 = pppplVar43;
        }
        *(void **)(param_1 + 0x188) = pvVar42;
        *(long **)(param_1 + 400) = plVar11 + 1;
        *(void **)(param_1 + 0x198) = (void *)((long)pvVar42 + uVar18 * 8);
        if (pvVar44 != (void *)0x0) {
          FUN_710392eb40((ulong)pvVar44);
        }
      }
      if (lVar23 + 0x50 == *(long *)(param_1 + 0xdc8)) break;
      plVar11 = *(long **)(param_1 + 400);
      lVar23 = lVar23 + 0x50;
    } while( true );
  }
  pppplVar16 = (long ****)(param_1 + 0x180);
  FUN_7101e3c040();
  FUN_7101e3c180((long)pppplVar16,iVar5);
  *(int *)(param_1 + 0x1d0) = iVar5;
  *(undefined4 *)(param_1 + 0x1d8) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x1d4) = 0;
  memset((void *)(param_1 + 0x1dc),0,0x2f0);
  *(undefined8 *)(param_1 + 0x1a8) = *(undefined8 *)(param_1 + 0x1a0);
  local_360 = (byte ***)0x0;
  local_358 = (byte ***)0x4248000041800000;
  local_348 = 0;
  local_310 = (long *)0x0;
  local_2e0 = (long *)0x0;
  local_2b0 = (long *)0x0;
  local_280 = (long *)0x0;
  local_250 = (long *)0x0;
  local_33f = 0;
  uStack_341 = 0;
  uStack_340 = 0;
  uStack_345 = 0;
  local_350 = (byte ***)0x101013f800000;
  uStack_346 = 1;
  FUN_710337e790((long)&local_360);
  local_350 = (byte ***)CONCAT44(1,(undefined4)local_350);
  uStack_345 = CONCAT31(0x101,(undefined1)uStack_345);
  uStack_341 = 0;
  iVar5 = (int)((ulong)(*(long *)(param_1 + 0xdc8) - *(long *)(param_1 + 0xdc0)) >> 4) * -0x33333333
  ;
  plVar11 = (long *)(param_1 + 0x178);
  *(int *)(param_1 + 0xbe4) = iVar5;
  local_360 = (byte ***)CONCAT44(iVar5,(uint)local_360);
  FUN_7103781a20(plVar11,puVar1,(byte ****)"scroll",(byte ****)&local_360,pppplVar16,param_6,param_7
                 ,param_8);
  if (*(short *)(param_1 + 0x101e) == -1) {
    pppuVar21 = (undefined ***)0x1;
    uVar19 = 0;
    FUN_7103783c10(plVar11,*(int *)(param_1 + 0xbe8),0,1,pppplVar16,param_6,param_7,param_8);
  }
  else {
    lVar23 = *(long *)(param_1 + 400) - *(long *)(param_1 + 0x188);
    if (lVar23 != 0) {
      uVar18 = 0;
      do {
        if (*(short *)(*(long *)(*(long *)(param_1 + 0x188) + uVar18 * 8) + 8) ==
            *(short *)(param_1 + 0x101e)) {
          if ((-1 < (int)uVar18) && ((int)uVar18 < *(int *)(param_1 + 0xbe4))) goto LAB_7101e3498c;
          break;
        }
        uVar18 = uVar18 + 1;
      } while (uVar18 < (ulong)(lVar23 >> 3));
    }
    uVar18 = 0;
LAB_7101e3498c:
    pppuVar21 = (undefined ***)0x1;
    uVar19 = 0;
    FUN_7103783c10(plVar11,(int)uVar18,0,1,pppplVar16,param_6,param_7,param_8);
    *(int *)(param_1 + 0xbe8) = (int)uVar18;
    *(undefined2 *)(param_1 + 0x101e) = 0xffff;
  }
  *(undefined8 *)(param_1 + 0xe00) = *(undefined8 *)(param_1 + 0xdf8);
  *(undefined8 *)(param_1 + 0xe18) = *(undefined8 *)(param_1 + 0xe10);
  *(undefined8 *)(param_1 + 0xe30) = *(undefined8 *)(param_1 + 0xe28);
  *(undefined8 *)(param_1 + 0xe48) = *(undefined8 *)(param_1 + 0xe40);
  *(undefined8 *)(param_1 + 0xe60) = *(undefined8 *)(param_1 + 0xe58);
  *(undefined8 *)(param_1 + 0xe80) = *(undefined8 *)(param_1 + 0xe78);
  *(undefined8 *)(param_1 + 0xe98) = *(undefined8 *)(param_1 + 0xe90);
  *(undefined8 *)(param_1 + 0xeb0) = *(undefined8 *)(param_1 + 0xea8);
  *(undefined8 *)(param_1 + 0xec8) = *(undefined8 *)(param_1 + 0xec0);
  *(undefined1 *)(param_1 + 0xe75) = 0;
  *(undefined1 *)(param_1 + 0xef0) = 0;
  *(undefined2 *)(param_1 + 0xbb0) = 0;
  *(undefined1 *)(param_1 + 0xbb3) = 0;
  *(undefined8 *)(param_1 + 0xee0) = *(undefined8 *)(param_1 + 0xed8);
  *(undefined8 *)(param_1 + 0xbbc) = 0;
  *(undefined4 *)(param_1 + 0xdb8) = 0;
  FUN_7103776910(&local_d0,(long)puVar1,(long ****)"blinder",uVar19,pppuVar21,pppplVar16,param_6,
                 param_7,param_8);
  plVar11 = local_c8;
  lVar23 = *local_c8;
  if (lVar23 != 0) {
    *(byte *)(lVar23 + 0x58) = *(byte *)(lVar23 + 0x58) & 0xfe;
  }
  local_d0 = &PTR_FUN_710523d9a8;
  local_c8 = (long *)0x0;
  if (plVar11 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar11);
  }
  if (*(short *)(param_1 + 0x101c) == -1) {
    FUN_7103776640(&local_3a8,(long)puVar1,(byte ****)"set_parts_btn_rev_lookup",uVar19,pppuVar21,
                   pppplVar16,param_6,param_7,param_8);
    FUN_7103776910(&local_d0,(long)&local_3a8,(long ****)"txt_rev_lookup",uVar19,pppuVar21,
                   pppplVar16,param_6,param_7,param_8);
    FUN_710377a120((long)&local_d0,"mnu_spirits_recall_rev_lookup",uVar19,pppuVar21,pppplVar16,
                   param_6,param_7,param_8);
    plVar11 = local_c8;
    local_d0 = &PTR_FUN_710523d9a8;
    local_c8 = (long *)0x0;
    if (plVar11 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar11);
    }
    ppuVar41 = local_3a0;
    local_3a8 = &PTR_FUN_710523d988;
    local_3a0 = (undefined **)0x0;
  }
  else {
    lVar23 = *(long *)(DAT_710532f730 + 8);
    FUN_7103776640(&local_100,(long)puVar1,(byte ****)"set_parts_btn_rev_lookup",uVar19,pppuVar21,
                   pppplVar16,param_6,param_7,param_8);
    FUN_7103776910(&local_f0,(long)&local_100,(long ****)"txt_rev_lookup",uVar19,pppuVar21,
                   pppplVar16,param_6,param_7,param_8);
    lVar23 = *(long *)(lVar23 + 0x1d8);
    uVar18 = FUN_71032a9470(lVar23,*(ushort *)(param_1 + 0x101c));
    FUN_71032a9540((uint *)&local_d0,lVar23,uVar18);
    FUN_71003a4ca0((uint *)&local_3a8,"spi_%s",&local_c8,uVar18,pppuVar21,pppplVar16,param_6,param_7
                   ,param_8);
    pppuVar21 = &local_3a0;
    uVar19 = 1;
    FUN_710377a280((long)&local_f0,(byte *)"mnu_spirits_select_ped_nam",1);
    puVar31 = local_e8;
    local_f0 = &PTR_FUN_710523d9a8;
    local_e8 = (undefined8 *)0x0;
    if (puVar31 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)puVar31);
    }
    ppuVar41 = local_f8;
    local_100 = &PTR_FUN_710523d988;
    local_f8 = (undefined **)0x0;
  }
  if (ppuVar41 != (undefined **)0x0) {
    puVar12 = ppuVar41[3];
    ppuVar41[2] = (undefined *)&PTR_FUN_710523d9a8;
    ppuVar41[3] = (undefined *)0x0;
    if (puVar12 != (undefined *)0x0) {
      FUN_710392eb40((ulong)puVar12);
    }
    FUN_710392eb40((ulong)ppuVar41);
  }
  FUN_7103776640(&local_3a8,(long)puVar1,(byte ****)"set_parts_btn_rev_lookup",uVar19,pppuVar21,
                 pppplVar16,param_6,param_7,param_8);
  FUN_7103776910(&local_d0,(long)&local_3a8,(long ****)"txt_key_rev_lookup",uVar19,pppuVar21,
                 pppplVar16,param_6,param_7,param_8);
  FUN_710377a120((long)&local_d0,"mnu_spirits_recall_rev_lookup_guide",uVar19,pppuVar21,pppplVar16,
                 param_6,param_7,param_8);
  plVar11 = local_c8;
  local_d0 = &PTR_FUN_710523d9a8;
  local_c8 = (long *)0x0;
  if (plVar11 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar11);
  }
  ppuVar41 = local_3a0;
  local_3a8 = &PTR_FUN_710523d988;
  local_3a0 = (undefined **)0x0;
  if (ppuVar41 != (undefined **)0x0) {
    puVar12 = ppuVar41[3];
    ppuVar41[2] = (undefined *)&PTR_FUN_710523d9a8;
    ppuVar41[3] = (undefined *)0x0;
    if (puVar12 != (undefined *)0x0) {
      FUN_710392eb40((ulong)puVar12);
    }
    FUN_710392eb40((ulong)ppuVar41);
  }
  uVar37 = 0;
  do {
    uVar18 = (ulong)uVar37;
    FUN_7103776640(&local_3a8,(long)puVar1,(byte ****)"set_parts_btn_%02d",uVar18,pppuVar21,
                   pppplVar16,param_6,param_7,param_8);
    FUN_7103776640(&local_d0,(long)&local_3a8,(byte ****)"set_parts_atr_bg",uVar18,pppuVar21,
                   pppplVar16,param_6,param_7,param_8);
    ppuVar41 = local_3a0;
    local_3a8 = &PTR_FUN_710523d988;
    local_3a0 = (undefined **)0x0;
    if (ppuVar41 != (undefined **)0x0) {
      puVar12 = ppuVar41[3];
      ppuVar41[2] = (undefined *)&PTR_FUN_710523d9a8;
      ppuVar41[3] = (undefined *)0x0;
      if (puVar12 != (undefined *)0x0) {
        FUN_710392eb40((ulong)puVar12);
      }
      FUN_710392eb40((ulong)ppuVar41);
    }
    FUN_7103776910(&local_3a8,(long)&local_d0,(long ****)"set_fxui_eff_aura_%02d",0,pppuVar21,
                   pppplVar16,param_6,param_7,param_8);
    FUN_710377aa20((long *)*local_3a0,0);
    ppuVar41 = local_3a0;
    local_3a8 = &PTR_FUN_710523d9a8;
    local_3a0 = (undefined **)0x0;
    if (ppuVar41 != (undefined **)0x0) {
      FUN_710392eb40((ulong)ppuVar41);
    }
    FUN_7103776910(&local_3a8,(long)&local_d0,(long ****)"set_fxui_eff_aura_%02d",1,pppuVar21,
                   pppplVar16,param_6,param_7,param_8);
    FUN_710377aa20((long *)*local_3a0,0);
    ppuVar41 = local_3a0;
    local_3a8 = &PTR_FUN_710523d9a8;
    local_3a0 = (undefined **)0x0;
    if (ppuVar41 != (undefined **)0x0) {
      FUN_710392eb40((ulong)ppuVar41);
    }
    FUN_7103776910(&local_3a8,(long)&local_d0,(long ****)"set_fxui_eff_aura_%02d",2,pppuVar21,
                   pppplVar16,param_6,param_7,param_8);
    FUN_710377aa20((long *)*local_3a0,0);
    ppuVar41 = local_3a0;
    local_3a8 = &PTR_FUN_710523d9a8;
    local_3a0 = (undefined **)0x0;
    if (ppuVar41 != (undefined **)0x0) {
      FUN_710392eb40((ulong)ppuVar41);
    }
    FUN_7103776910(&local_3a8,(long)&local_d0,(long ****)"set_fxui_eff_aura_%02d",3,pppuVar21,
                   pppplVar16,param_6,param_7,param_8);
    FUN_710377aa20((long *)*local_3a0,0);
    ppuVar41 = local_3a0;
    local_3a8 = &PTR_FUN_710523d9a8;
    local_3a0 = (undefined **)0x0;
    if (ppuVar41 != (undefined **)0x0) {
      FUN_710392eb40((ulong)ppuVar41);
    }
    FUN_7103776910(&local_3a8,(long)&local_d0,(long ****)"set_fxui_eff_aura_%02d",4,pppuVar21,
                   pppplVar16,param_6,param_7,param_8);
    FUN_710377aa20((long *)*local_3a0,0);
    ppuVar41 = local_3a0;
    local_3a8 = &PTR_FUN_710523d9a8;
    local_3a0 = (undefined **)0x0;
    if (ppuVar41 != (undefined **)0x0) {
      FUN_710392eb40((ulong)ppuVar41);
    }
    FUN_7103776910(&local_3a8,(long)&local_d0,(long ****)"set_fxui_eff_aura_%02d",5,pppuVar21,
                   pppplVar16,param_6,param_7,param_8);
    FUN_710377aa20((long *)*local_3a0,0);
    ppuVar41 = local_3a0;
    local_3a8 = &PTR_FUN_710523d9a8;
    local_3a0 = (undefined **)0x0;
    if (ppuVar41 != (undefined **)0x0) {
      FUN_710392eb40((ulong)ppuVar41);
    }
    FUN_7103776910(&local_3a8,(long)&local_d0,(long ****)"set_fxui_eff_aura_%02d",6,pppuVar21,
                   pppplVar16,param_6,param_7,param_8);
    FUN_710377aa20((long *)*local_3a0,0);
    ppuVar41 = local_3a0;
    local_3a8 = &PTR_FUN_710523d9a8;
    local_3a0 = (undefined **)0x0;
    if (ppuVar41 != (undefined **)0x0) {
      FUN_710392eb40((ulong)ppuVar41);
    }
    FUN_7103776910(&local_3a8,(long)&local_d0,(long ****)"set_fxui_eff_aura_%02d",7,pppuVar21,
                   pppplVar16,param_6,param_7,param_8);
    FUN_710377aa20((long *)*local_3a0,0);
    ppuVar41 = local_3a0;
    local_3a8 = &PTR_FUN_710523d9a8;
    local_3a0 = (undefined **)0x0;
    if (ppuVar41 != (undefined **)0x0) {
      FUN_710392eb40((ulong)ppuVar41);
    }
    FUN_7103776910(&local_3a8,(long)&local_d0,(long ****)"set_fxui_eff_aura_%02d",8,pppuVar21,
                   pppplVar16,param_6,param_7,param_8);
    FUN_710377aa20((long *)*local_3a0,0);
    ppuVar41 = local_3a0;
    local_3a8 = &PTR_FUN_710523d9a8;
    local_3a0 = (undefined **)0x0;
    if (ppuVar41 != (undefined **)0x0) {
      FUN_710392eb40((ulong)ppuVar41);
    }
    FUN_7103776910(&local_3a8,(long)&local_d0,(long ****)"set_fxui_eff_aura_%02d",9,pppuVar21,
                   pppplVar16,param_6,param_7,param_8);
    FUN_710377aa20((long *)*local_3a0,0);
    ppuVar41 = local_3a0;
    local_3a8 = &PTR_FUN_710523d9a8;
    local_3a0 = (undefined **)0x0;
    if (ppuVar41 != (undefined **)0x0) {
      FUN_710392eb40((ulong)ppuVar41);
    }
    FUN_7103776910(&local_3a8,(long)&local_d0,(long ****)"set_fxui_eff_aura_%02d",10,pppuVar21,
                   pppplVar16,param_6,param_7,param_8);
    FUN_710377aa20((long *)*local_3a0,0);
    ppuVar41 = local_3a0;
    local_3a8 = &PTR_FUN_710523d9a8;
    local_3a0 = (undefined **)0x0;
    if (ppuVar41 != (undefined **)0x0) {
      FUN_710392eb40((ulong)ppuVar41);
    }
    FUN_7103776910(&local_3a8,(long)&local_d0,(long ****)"set_fxui_eff_aura_%02d",0xb,pppuVar21,
                   pppplVar16,param_6,param_7,param_8);
    FUN_710377aa20((long *)*local_3a0,0);
    ppuVar41 = local_3a0;
    local_3a8 = &PTR_FUN_710523d9a8;
    local_3a0 = (undefined **)0x0;
    if (ppuVar41 != (undefined **)0x0) {
      FUN_710392eb40((ulong)ppuVar41);
    }
    FUN_7103776910(&local_3a8,(long)&local_d0,(long ****)"set_fxui_eff_aura_%02d",0xc,pppuVar21,
                   pppplVar16,param_6,param_7,param_8);
    FUN_710377aa20((long *)*local_3a0,0);
    ppuVar41 = local_3a0;
    local_3a8 = &PTR_FUN_710523d9a8;
    local_3a0 = (undefined **)0x0;
    if (ppuVar41 != (undefined **)0x0) {
      FUN_710392eb40((ulong)ppuVar41);
    }
    FUN_7103776910(&local_3a8,(long)&local_d0,(long ****)"set_fxui_eff_aura_%02d",0xd,pppuVar21,
                   pppplVar16,param_6,param_7,param_8);
    FUN_710377aa20((long *)*local_3a0,0);
    ppuVar41 = local_3a0;
    local_3a8 = &PTR_FUN_710523d9a8;
    local_3a0 = (undefined **)0x0;
    if (ppuVar41 != (undefined **)0x0) {
      FUN_710392eb40((ulong)ppuVar41);
    }
    FUN_7103776910(&local_3a8,(long)&local_d0,(long ****)"set_fxui_eff_aura_%02d",0xe,pppuVar21,
                   pppplVar16,param_6,param_7,param_8);
    FUN_710377aa20((long *)*local_3a0,0);
    ppuVar41 = local_3a0;
    local_3a8 = &PTR_FUN_710523d9a8;
    local_3a0 = (undefined **)0x0;
    if (ppuVar41 != (undefined **)0x0) {
      FUN_710392eb40((ulong)ppuVar41);
    }
    FUN_7103776910(&local_3a8,(long)&local_d0,(long ****)"set_fxui_eff_aura_%02d",0xf,pppuVar21,
                   pppplVar16,param_6,param_7,param_8);
    FUN_710377aa20((long *)*local_3a0,0);
    ppuVar41 = local_3a0;
    local_3a8 = &PTR_FUN_710523d9a8;
    local_3a0 = (undefined **)0x0;
    if (ppuVar41 != (undefined **)0x0) {
      FUN_710392eb40((ulong)ppuVar41);
    }
    plVar11 = local_c8;
    local_d0 = &PTR_FUN_710523d988;
    local_c8 = (long *)0x0;
    if (plVar11 != (long *)0x0) {
      uVar18 = plVar11[3];
      plVar11[2] = (long)&PTR_FUN_710523d9a8;
      plVar11[3] = 0;
      if (uVar18 != 0) {
        FUN_710392eb40(uVar18);
      }
      FUN_710392eb40((ulong)plVar11);
    }
    uVar37 = uVar37 + 1;
  } while (uVar37 != 0x1e);
  *(undefined1 *)(param_1 + 0xf0c) = 0;
  if (*(int *)(param_1 + 0xbbc) != 1) {
    *(int *)(param_1 + 0xbc0) = *(int *)(param_1 + 0xbbc);
    *(undefined4 *)(param_1 + 0xbbc) = 1;
  }
  if (alStack_270 == local_250) {
    pcVar26 = *(code **)(*local_250 + 0x20);
LAB_7101e3502c:
    (*pcVar26)();
  }
  else if (local_250 != (long *)0x0) {
    pcVar26 = *(code **)(*local_250 + 0x28);
    goto LAB_7101e3502c;
  }
  if (alStack_2a0 == local_280) {
    pcVar26 = *(code **)(*local_280 + 0x20);
LAB_7101e3505c:
    (*pcVar26)();
  }
  else if (local_280 != (long *)0x0) {
    pcVar26 = *(code **)(*local_280 + 0x28);
    goto LAB_7101e3505c;
  }
  if (alStack_2d0 == local_2b0) {
    pcVar26 = *(code **)(*local_2b0 + 0x20);
LAB_7101e3508c:
    (*pcVar26)();
  }
  else if (local_2b0 != (long *)0x0) {
    pcVar26 = *(code **)(*local_2b0 + 0x28);
    goto LAB_7101e3508c;
  }
  if (alStack_300 == local_2e0) {
    pcVar26 = *(code **)(*local_2e0 + 0x20);
LAB_7101e350bc:
    (*pcVar26)();
  }
  else if (local_2e0 != (long *)0x0) {
    pcVar26 = *(code **)(*local_2e0 + 0x28);
    goto LAB_7101e350bc;
  }
  if (alStack_330 == local_310) {
    pcVar26 = *(code **)(*local_310 + 0x20);
LAB_7101e350ec:
    (*pcVar26)();
  }
  else if (local_310 != (long *)0x0) {
    pcVar26 = *(code **)(*local_310 + 0x28);
    goto LAB_7101e350ec;
  }
  if (alStack_150 == local_130) {
    pcVar26 = *(code **)(*local_130 + 0x20);
LAB_7101e3511c:
    (*pcVar26)();
  }
  else if (local_130 != (long *)0x0) {
    pcVar26 = *(code **)(*local_130 + 0x28);
    goto LAB_7101e3511c;
  }
  if (alStack_180 == local_160) {
    pcVar26 = *(code **)(*local_160 + 0x20);
LAB_7101e3514c:
    (*pcVar26)();
  }
  else if (local_160 != (long *)0x0) {
    pcVar26 = *(code **)(*local_160 + 0x28);
    goto LAB_7101e3514c;
  }
  if (alStack_1b0 == local_190) {
    pcVar26 = *(code **)(*local_190 + 0x20);
LAB_7101e3517c:
    (*pcVar26)();
  }
  else if (local_190 != (long *)0x0) {
    pcVar26 = *(code **)(*local_190 + 0x28);
    goto LAB_7101e3517c;
  }
  if (alStack_1e0 == local_1c0) {
    pcVar26 = *(code **)(*local_1c0 + 0x20);
  }
  else {
    if (local_1c0 == (long *)0x0) goto LAB_7101e351b0;
    pcVar26 = *(code **)(*local_1c0 + 0x28);
  }
  (*pcVar26)();
LAB_7101e351b0:
  if (alStack_210 == local_1f0) {
    pcVar26 = *(code **)(*local_1f0 + 0x20);
  }
  else {
    if (local_1f0 == (long *)0x0) {
      return;
    }
    pcVar26 = *(code **)(*local_1f0 + 0x28);
  }
  (*pcVar26)();
  return;
}

