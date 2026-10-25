// addr:      71019cb2e0
// offset:    0x19cb2e0
// name:      FUN_71019cb2e0
// mangled:   
// signature: undefined __cdecl FUN_71019cb2e0(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71019cb2e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  long *plVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  char *pcVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  long lVar15;
  byte bVar16;
  byte *pbVar17;
  long lVar18;
  long *plVar19;
  undefined **local_158;
  long *local_150;
  undefined **local_148;
  long *local_140;
  undefined **local_138;
  long *local_130;
  undefined **local_128;
  ulong local_120;
  undefined **local_118;
  ulong local_110 [8];
  undefined **local_d0;
  ulong local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined2 local_a8;
  undefined6 uStack_a6;
  undefined2 local_a0;
  undefined1 uStack_9e;
  undefined1 uStack_9d;
  uint uStack_9c;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  
  lVar15 = DAT_710532f730;
  if (*(undefined8 **)(param_1 + 0x18) == *(undefined8 **)(param_1 + 0x10)) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  lVar18 = **(long **)**(undefined8 **)(param_1 + 0x10);
  lVar1 = lVar18 + 8;
  FUN_7103776640(&local_118,lVar1,(byte ****)"set_item_00",param_3,param_4,param_5,param_6,param_7,
                 param_8);
  FUN_7103776910(&local_c0,(long)&local_118,(long ****)"set_txt_val",param_3,param_4,param_5,param_6
                 ,param_7,param_8);
  uVar7 = local_b8;
  if (*(long **)(local_b8 + 0x10) != (long *)0x0) {
    param_3 = 0xffffffff;
    param_4 = 1;
    FUN_71037a2270(*(long **)(local_b8 + 0x10),&DAT_7105307c90,0xffffffff,1);
  }
  local_c0 = &PTR_FUN_710523d9a8;
  local_b8 = 0;
  if (uVar7 != 0) {
    FUN_710392eb40(uVar7);
  }
  uVar7 = local_110[0];
  local_118 = &PTR_FUN_710523d988;
  local_110[0] = 0;
  if (uVar7 != 0) {
    uVar10 = *(ulong *)(uVar7 + 0x18);
    *(undefined ***)(uVar7 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar7 + 0x18) = 0;
    if (uVar10 != 0) {
      FUN_710392eb40(uVar10);
    }
    FUN_710392eb40(uVar7);
  }
  FUN_7103776640(&local_d0,lVar1,(byte ****)"set_item_01",param_3,param_4,param_5,param_6,param_7,
                 param_8);
  FUN_7103776910(&local_118,(long)&local_d0,(long ****)"set_txt_val",param_3,param_4,param_5,param_6
                 ,param_7,param_8);
  uVar10 = DAT_7105307cb0;
  FUN_71032888e0((uint *)&local_c0,*(long *)(*(long *)(lVar15 + 8) + 0x238),DAT_7105307cb0,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_710377a120((long)&local_118,(char *)&local_b8,uVar10,param_4,param_5,param_6,param_7,param_8);
  uVar7 = local_110[0];
  local_118 = &PTR_FUN_710523d9a8;
  local_110[0] = 0;
  if (uVar7 != 0) {
    FUN_710392eb40(uVar7);
  }
  uVar7 = local_c8;
  local_d0 = &PTR_FUN_710523d988;
  local_c8 = 0;
  if (uVar7 != 0) {
    uVar11 = *(ulong *)(uVar7 + 0x18);
    *(undefined ***)(uVar7 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar7 + 0x18) = 0;
    if (uVar11 != 0) {
      FUN_710392eb40(uVar11);
    }
    FUN_710392eb40(uVar7);
  }
  FUN_7103776640(&local_d0,lVar1,(byte ****)"set_item_02",uVar10,param_4,param_5,param_6,param_7,
                 param_8);
  FUN_7103776910(&local_118,(long)&local_d0,(long ****)"set_txt_val",uVar10,param_4,param_5,param_6,
                 param_7,param_8);
  uVar10 = DAT_7105307ca8;
  FUN_7103284890((uint *)&local_c0,*(long *)(*(long *)(lVar15 + 8) + 0x248),DAT_7105307ca8,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_710377a120((long)&local_118,(char *)&local_b8,uVar10,param_4,param_5,param_6,param_7,param_8);
  uVar7 = local_110[0];
  local_118 = &PTR_FUN_710523d9a8;
  local_110[0] = 0;
  if (uVar7 != 0) {
    FUN_710392eb40(uVar7);
  }
  uVar7 = local_c8;
  local_d0 = &PTR_FUN_710523d988;
  local_c8 = 0;
  if (uVar7 != 0) {
    uVar11 = *(ulong *)(uVar7 + 0x18);
    *(undefined ***)(uVar7 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar7 + 0x18) = 0;
    if (uVar11 != 0) {
      FUN_710392eb40(uVar11);
    }
    FUN_710392eb40(uVar7);
  }
  FUN_7103776640(&local_118,lVar1,(byte ****)"set_item_00",uVar10,param_4,param_5,param_6,param_7,
                 param_8);
  FUN_7103776910(&local_c0,(long)&local_118,(long ****)"set_txt_val_dis",uVar10,param_4,param_5,
                 param_6,param_7,param_8);
  uVar7 = local_b8;
  if (*(long **)(local_b8 + 0x10) != (long *)0x0) {
    uVar10 = 0xffffffff;
    param_4 = 1;
    FUN_71037a2270(*(long **)(local_b8 + 0x10),&DAT_7105307c90,0xffffffff,1);
  }
  local_c0 = &PTR_FUN_710523d9a8;
  local_b8 = 0;
  if (uVar7 != 0) {
    FUN_710392eb40(uVar7);
  }
  uVar7 = local_110[0];
  local_118 = &PTR_FUN_710523d988;
  local_110[0] = 0;
  if (uVar7 != 0) {
    uVar11 = *(ulong *)(uVar7 + 0x18);
    *(undefined ***)(uVar7 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar7 + 0x18) = 0;
    if (uVar11 != 0) {
      FUN_710392eb40(uVar11);
    }
    FUN_710392eb40(uVar7);
  }
  FUN_7103776640(&local_d0,lVar1,(byte ****)"set_item_01",uVar10,param_4,param_5,param_6,param_7,
                 param_8);
  FUN_7103776910(&local_118,(long)&local_d0,(long ****)"set_txt_val_dis",uVar10,param_4,param_5,
                 param_6,param_7,param_8);
  uVar10 = DAT_7105307cb0;
  FUN_71032888e0((uint *)&local_c0,*(long *)(*(long *)(lVar15 + 8) + 0x238),DAT_7105307cb0,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_710377a120((long)&local_118,(char *)&local_b8,uVar10,param_4,param_5,param_6,param_7,param_8);
  uVar7 = local_110[0];
  local_118 = &PTR_FUN_710523d9a8;
  local_110[0] = 0;
  if (uVar7 != 0) {
    FUN_710392eb40(uVar7);
  }
  uVar7 = local_c8;
  local_d0 = &PTR_FUN_710523d988;
  local_c8 = 0;
  if (uVar7 != 0) {
    uVar11 = *(ulong *)(uVar7 + 0x18);
    *(undefined ***)(uVar7 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar7 + 0x18) = 0;
    if (uVar11 != 0) {
      FUN_710392eb40(uVar11);
    }
    FUN_710392eb40(uVar7);
  }
  FUN_7103776640(&local_d0,lVar1,(byte ****)"set_item_02",uVar10,param_4,param_5,param_6,param_7,
                 param_8);
  FUN_7103776910(&local_118,(long)&local_d0,(long ****)"set_txt_val_dis",uVar10,param_4,param_5,
                 param_6,param_7,param_8);
  uVar10 = DAT_7105307ca8;
  FUN_7103284890((uint *)&local_c0,*(long *)(*(long *)(lVar15 + 8) + 0x248),DAT_7105307ca8,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_710377a120((long)&local_118,(char *)&local_b8,uVar10,param_4,param_5,param_6,param_7,param_8);
  uVar7 = local_110[0];
  local_118 = &PTR_FUN_710523d9a8;
  local_110[0] = 0;
  if (uVar7 != 0) {
    FUN_710392eb40(uVar7);
  }
  uVar7 = local_c8;
  local_d0 = &PTR_FUN_710523d988;
  local_c8 = 0;
  if (uVar7 != 0) {
    uVar11 = *(ulong *)(uVar7 + 0x18);
    *(undefined ***)(uVar7 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar7 + 0x18) = 0;
    if (uVar11 != 0) {
      FUN_710392eb40(uVar11);
    }
    FUN_710392eb40(uVar7);
  }
  FUN_7103776640(&local_c0,lVar1,(byte ****)"set_item_03",uVar10,param_4,param_5,param_6,param_7,
                 param_8);
  uVar10 = (ulong)(byte)DAT_7105307cb8;
  FUN_7103778430((long)&local_c0,"color_%02d",uVar10,param_4,param_5,param_6,param_7,param_8);
  uVar7 = local_b8;
  local_c0 = &PTR_FUN_710523d988;
  local_b8 = 0;
  if (uVar7 != 0) {
    uVar11 = *(ulong *)(uVar7 + 0x18);
    *(undefined ***)(uVar7 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar7 + 0x18) = 0;
    if (uVar11 != 0) {
      FUN_710392eb40(uVar11);
    }
    FUN_710392eb40(uVar7);
  }
  bVar5 = DAT_7105307cb8._5_1_;
  bVar4 = DAT_7105307cb8._4_1_;
  bVar3 = DAT_7105307cb8._3_1_;
  bVar16 = DAT_7105307cb8._2_1_;
  FUN_7103776640(&local_d0,lVar1,(byte ****)"set_item_04",uVar10,param_4,param_5,param_6,param_7,
                 param_8);
  FUN_7103776910(&local_118,(long)&local_d0,(long ****)"set_txt_num_0%d",0,param_4,param_5,param_6,
                 param_7,param_8);
  uVar7 = local_110[0];
  plVar19 = *(long **)(local_110[0] + 0x10);
  uVar9 = bVar16 + 1;
  if (plVar19 != (long *)0x0) {
    param_5 = (long ****)0x0;
    param_6 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_a0 = 0;
    uStack_9e = 0;
    uStack_9d = 0;
    uStack_9c = 0;
    uStack_98 = 0;
    local_b0 = 0;
    local_a8 = 0;
    uStack_a6 = 0;
    local_c0 = (undefined **)0x0;
    local_b8 = 0;
    uVar8 = FUN_71037ad940((long)&local_c0,0x20,0,uVar9,0,0);
    param_4 = 0;
    FUN_71037a2270(plVar19,(ushort *)&local_c0,uVar8,0);
  }
  local_118 = &PTR_FUN_710523d9a8;
  local_110[0] = 0;
  if (uVar7 != 0) {
    FUN_710392eb40(uVar7);
  }
  FUN_7103776910(&local_118,(long)&local_d0,(long ****)"set_txt_num_0%d_dis",0,param_4,param_5,
                 param_6,param_7,param_8);
  uVar7 = local_110[0];
  plVar19 = *(long **)(local_110[0] + 0x10);
  if (plVar19 != (long *)0x0) {
    param_5 = (long ****)0x0;
    param_6 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_a0 = 0;
    uStack_9e = 0;
    uStack_9d = 0;
    uStack_9c = 0;
    uStack_98 = 0;
    local_b0 = 0;
    local_a8 = 0;
    uStack_a6 = 0;
    local_c0 = (undefined **)0x0;
    local_b8 = 0;
    uVar9 = FUN_71037ad940((long)&local_c0,0x20,0,uVar9,0,0);
    FUN_71037a2270(plVar19,(ushort *)&local_c0,uVar9,0);
  }
  local_118 = &PTR_FUN_710523d9a8;
  local_110[0] = 0;
  if (uVar7 != 0) {
    FUN_710392eb40(uVar7);
  }
  FUN_7103262310((uint *)&local_c0,*(long *)(*(long *)(DAT_710532f730 + 8) + 0x168),DAT_7105307d18);
  puVar14 = &local_b8;
  FUN_71003a4ca0((uint *)&local_118,"nam_special_%s_%02d_%s","normal",(ulong)(uint)bVar16,puVar14,
                 param_5,param_6,param_7,param_8);
  uVar13 = 0;
  FUN_7103776910(&local_c0,(long)&local_d0,(long ****)"set_txt_name_0%d",0,puVar14,param_5,param_6,
                 param_7,param_8);
  FUN_710377a120((long)&local_c0,(char *)local_110,uVar13,puVar14,param_5,param_6,param_7,param_8);
  uVar7 = local_b8;
  local_c0 = &PTR_FUN_710523d9a8;
  local_b8 = 0;
  if (uVar7 != 0) {
    FUN_710392eb40(uVar7);
  }
  uVar13 = 0;
  FUN_7103776910(&local_c0,(long)&local_d0,(long ****)"set_txt_name_0%d_dis",0,puVar14,param_5,
                 param_6,param_7,param_8);
  FUN_710377a120((long)&local_c0,(char *)local_110,uVar13,puVar14,param_5,param_6,param_7,param_8);
  uVar7 = local_b8;
  local_c0 = &PTR_FUN_710523d9a8;
  local_b8 = 0;
  if (uVar7 != 0) {
    FUN_710392eb40(uVar7);
  }
  FUN_7103776910(&local_118,(long)&local_d0,(long ****)"set_txt_num_0%d",1,puVar14,param_5,param_6,
                 param_7,param_8);
  uVar7 = local_110[0];
  plVar19 = *(long **)(local_110[0] + 0x10);
  uVar9 = bVar3 + 1;
  if (plVar19 != (long *)0x0) {
    param_5 = (long ****)0x0;
    param_6 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_a0 = 0;
    uStack_9e = 0;
    uStack_9d = 0;
    uStack_9c = 0;
    uStack_98 = 0;
    local_b0 = 0;
    local_a8 = 0;
    uStack_a6 = 0;
    local_c0 = (undefined **)0x0;
    local_b8 = 0;
    uVar8 = FUN_71037ad940((long)&local_c0,0x20,0,uVar9,0,0);
    puVar14 = (undefined8 *)0x0;
    FUN_71037a2270(plVar19,(ushort *)&local_c0,uVar8,0);
  }
  local_118 = &PTR_FUN_710523d9a8;
  local_110[0] = 0;
  if (uVar7 != 0) {
    FUN_710392eb40(uVar7);
  }
  FUN_7103776910(&local_118,(long)&local_d0,(long ****)"set_txt_num_0%d_dis",1,puVar14,param_5,
                 param_6,param_7,param_8);
  uVar7 = local_110[0];
  plVar19 = *(long **)(local_110[0] + 0x10);
  if (plVar19 != (long *)0x0) {
    param_5 = (long ****)0x0;
    param_6 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_a0 = 0;
    uStack_9e = 0;
    uStack_9d = 0;
    uStack_9c = 0;
    uStack_98 = 0;
    local_b0 = 0;
    local_a8 = 0;
    uStack_a6 = 0;
    local_c0 = (undefined **)0x0;
    local_b8 = 0;
    uVar9 = FUN_71037ad940((long)&local_c0,0x20,0,uVar9,0,0);
    FUN_71037a2270(plVar19,(ushort *)&local_c0,uVar9,0);
  }
  local_118 = &PTR_FUN_710523d9a8;
  local_110[0] = 0;
  if (uVar7 != 0) {
    FUN_710392eb40(uVar7);
  }
  FUN_7103262310((uint *)&local_c0,*(long *)(*(long *)(DAT_710532f730 + 8) + 0x168),DAT_7105307d18);
  puVar14 = &local_b8;
  FUN_71003a4ca0((uint *)&local_118,"nam_special_%s_%02d_%s",&DAT_71043ef195,(ulong)(uint)bVar3,
                 puVar14,param_5,param_6,param_7,param_8);
  uVar13 = 1;
  FUN_7103776910(&local_c0,(long)&local_d0,(long ****)"set_txt_name_0%d",1,puVar14,param_5,param_6,
                 param_7,param_8);
  FUN_710377a120((long)&local_c0,(char *)local_110,uVar13,puVar14,param_5,param_6,param_7,param_8);
  uVar7 = local_b8;
  local_c0 = &PTR_FUN_710523d9a8;
  local_b8 = 0;
  if (uVar7 != 0) {
    FUN_710392eb40(uVar7);
  }
  uVar13 = 1;
  FUN_7103776910(&local_c0,(long)&local_d0,(long ****)"set_txt_name_0%d_dis",1,puVar14,param_5,
                 param_6,param_7,param_8);
  FUN_710377a120((long)&local_c0,(char *)local_110,uVar13,puVar14,param_5,param_6,param_7,param_8);
  uVar7 = local_b8;
  local_c0 = &PTR_FUN_710523d9a8;
  local_b8 = 0;
  if (uVar7 != 0) {
    FUN_710392eb40(uVar7);
  }
  FUN_7103776910(&local_118,(long)&local_d0,(long ****)"set_txt_num_0%d",2,puVar14,param_5,param_6,
                 param_7,param_8);
  uVar7 = local_110[0];
  plVar19 = *(long **)(local_110[0] + 0x10);
  uVar9 = bVar4 + 1;
  if (plVar19 != (long *)0x0) {
    param_5 = (long ****)0x0;
    param_6 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_a0 = 0;
    uStack_9e = 0;
    uStack_9d = 0;
    uStack_9c = 0;
    uStack_98 = 0;
    local_b0 = 0;
    local_a8 = 0;
    uStack_a6 = 0;
    local_c0 = (undefined **)0x0;
    local_b8 = 0;
    uVar8 = FUN_71037ad940((long)&local_c0,0x20,0,uVar9,0,0);
    puVar14 = (undefined8 *)0x0;
    FUN_71037a2270(plVar19,(ushort *)&local_c0,uVar8,0);
  }
  local_118 = &PTR_FUN_710523d9a8;
  local_110[0] = 0;
  if (uVar7 != 0) {
    FUN_710392eb40(uVar7);
  }
  FUN_7103776910(&local_118,(long)&local_d0,(long ****)"set_txt_num_0%d_dis",2,puVar14,param_5,
                 param_6,param_7,param_8);
  uVar7 = local_110[0];
  plVar19 = *(long **)(local_110[0] + 0x10);
  if (plVar19 != (long *)0x0) {
    param_5 = (long ****)0x0;
    param_6 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_a0 = 0;
    uStack_9e = 0;
    uStack_9d = 0;
    uStack_9c = 0;
    uStack_98 = 0;
    local_b0 = 0;
    local_a8 = 0;
    uStack_a6 = 0;
    local_c0 = (undefined **)0x0;
    local_b8 = 0;
    uVar9 = FUN_71037ad940((long)&local_c0,0x20,0,uVar9,0,0);
    FUN_71037a2270(plVar19,(ushort *)&local_c0,uVar9,0);
  }
  local_118 = &PTR_FUN_710523d9a8;
  local_110[0] = 0;
  if (uVar7 != 0) {
    FUN_710392eb40(uVar7);
  }
  FUN_7103262310((uint *)&local_c0,*(long *)(*(long *)(DAT_710532f730 + 8) + 0x168),DAT_7105307d18);
  puVar14 = &local_b8;
  FUN_71003a4ca0((uint *)&local_118,"nam_special_%s_%02d_%s","upper",(ulong)(uint)bVar4,puVar14,
                 param_5,param_6,param_7,param_8);
  uVar13 = 2;
  FUN_7103776910(&local_c0,(long)&local_d0,(long ****)"set_txt_name_0%d",2,puVar14,param_5,param_6,
                 param_7,param_8);
  FUN_710377a120((long)&local_c0,(char *)local_110,uVar13,puVar14,param_5,param_6,param_7,param_8);
  uVar7 = local_b8;
  local_c0 = &PTR_FUN_710523d9a8;
  local_b8 = 0;
  if (uVar7 != 0) {
    FUN_710392eb40(uVar7);
  }
  uVar13 = 2;
  FUN_7103776910(&local_c0,(long)&local_d0,(long ****)"set_txt_name_0%d_dis",2,puVar14,param_5,
                 param_6,param_7,param_8);
  FUN_710377a120((long)&local_c0,(char *)local_110,uVar13,puVar14,param_5,param_6,param_7,param_8);
  uVar7 = local_b8;
  local_c0 = &PTR_FUN_710523d9a8;
  local_b8 = 0;
  if (uVar7 != 0) {
    FUN_710392eb40(uVar7);
  }
  FUN_7103776910(&local_118,(long)&local_d0,(long ****)"set_txt_num_0%d",3,puVar14,param_5,param_6,
                 param_7,param_8);
  uVar7 = local_110[0];
  plVar19 = *(long **)(local_110[0] + 0x10);
  uVar9 = bVar5 + 1;
  if (plVar19 != (long *)0x0) {
    param_5 = (long ****)0x0;
    param_6 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_a0 = 0;
    uStack_9e = 0;
    uStack_9d = 0;
    uStack_9c = 0;
    uStack_98 = 0;
    local_b0 = 0;
    local_a8 = 0;
    uStack_a6 = 0;
    local_c0 = (undefined **)0x0;
    local_b8 = 0;
    uVar8 = FUN_71037ad940((long)&local_c0,0x20,0,uVar9,0,0);
    puVar14 = (undefined8 *)0x0;
    FUN_71037a2270(plVar19,(ushort *)&local_c0,uVar8,0);
  }
  local_118 = &PTR_FUN_710523d9a8;
  local_110[0] = 0;
  if (uVar7 != 0) {
    FUN_710392eb40(uVar7);
  }
  FUN_7103776910(&local_118,(long)&local_d0,(long ****)"set_txt_num_0%d_dis",3,puVar14,param_5,
                 param_6,param_7,param_8);
  uVar7 = local_110[0];
  plVar19 = *(long **)(local_110[0] + 0x10);
  if (plVar19 != (long *)0x0) {
    param_5 = (long ****)0x0;
    param_6 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_a0 = 0;
    uStack_9e = 0;
    uStack_9d = 0;
    uStack_9c = 0;
    uStack_98 = 0;
    local_b0 = 0;
    local_a8 = 0;
    uStack_a6 = 0;
    local_c0 = (undefined **)0x0;
    local_b8 = 0;
    uVar9 = FUN_71037ad940((long)&local_c0,0x20,0,uVar9,0,0);
    FUN_71037a2270(plVar19,(ushort *)&local_c0,uVar9,0);
  }
  local_118 = &PTR_FUN_710523d9a8;
  local_110[0] = 0;
  if (uVar7 != 0) {
    FUN_710392eb40(uVar7);
  }
  FUN_7103262310((uint *)&local_c0,*(long *)(*(long *)(DAT_710532f730 + 8) + 0x168),DAT_7105307d18);
  puVar14 = &local_b8;
  FUN_71003a4ca0((uint *)&local_118,"nam_special_%s_%02d_%s","lower",(ulong)(uint)bVar5,puVar14,
                 param_5,param_6,param_7,param_8);
  uVar13 = 3;
  FUN_7103776910(&local_c0,(long)&local_d0,(long ****)"set_txt_name_0%d",3,puVar14,param_5,param_6,
                 param_7,param_8);
  FUN_710377a120((long)&local_c0,(char *)local_110,uVar13,puVar14,param_5,param_6,param_7,param_8);
  uVar7 = local_b8;
  local_c0 = &PTR_FUN_710523d9a8;
  local_b8 = 0;
  if (uVar7 != 0) {
    FUN_710392eb40(uVar7);
  }
  uVar13 = 3;
  FUN_7103776910(&local_c0,(long)&local_d0,(long ****)"set_txt_name_0%d_dis",3,puVar14,param_5,
                 param_6,param_7,param_8);
  FUN_710377a120((long)&local_c0,(char *)local_110,uVar13,puVar14,param_5,param_6,param_7,param_8);
  uVar7 = local_b8;
  local_c0 = &PTR_FUN_710523d9a8;
  local_b8 = 0;
  if (uVar7 != 0) {
    FUN_710392eb40(uVar7);
  }
  FUN_7103776640(&local_118,lVar1,(byte ****)"set_item_05",uVar13,puVar14,param_5,param_6,param_7,
                 param_8);
  FUN_7103776910(&local_128,(long)&local_118,(long ****)"set_txt_val",uVar13,puVar14,param_5,param_6
                 ,param_7,param_8);
  FUN_7103776910(&local_138,(long)&local_118,(long ****)"set_txt_val2",uVar13,puVar14,param_5,
                 param_6,param_7,param_8);
  FUN_7103776910(&local_148,(long)&local_118,(long ****)"set_txt_val_dis",uVar13,puVar14,param_5,
                 param_6,param_7,param_8);
  FUN_7103776910(&local_158,(long)&local_118,(long ****)"set_txt_val2_dis",uVar13,puVar14,param_5,
                 param_6,param_7,param_8);
  uVar7 = local_110[0];
  if (DAT_7105307cb8._1_1_ == 0x25) {
    FUN_7103778300(0x3f800000,local_110[0],0x710424f2a4);
    FUN_710377a120((long)&local_128,"mnu_mmiif_setup_voice_type_none",uVar13,puVar14,param_5,param_6
                   ,param_7,param_8);
    FUN_710377a120((long)&local_148,"mnu_mmiif_setup_voice_type_none",uVar13,puVar14,param_5,param_6
                   ,param_7,param_8);
    lVar15 = *local_130;
    if (lVar15 != 0) {
      *(byte *)(lVar15 + 0x58) = *(byte *)(lVar15 + 0x58) & 0xfe;
    }
    lVar15 = *local_140;
    plVar19 = local_130;
    if (lVar15 == 0) goto LAB_71019cc094;
    bVar16 = *(byte *)(lVar15 + 0x58) & 0xfe;
  }
  else {
    FUN_7103778300(0x3f800000,local_110[0],0x71043f0770);
    FUN_710328cb60(*(long *)(*(long *)(lVar15 + 8) + 600),(uint)DAT_7105307cb8._1_1_);
    FUN_710377a280((long)&local_128,(byte *)"mnu_mmiif_setup_voice_type_n",1);
    FUN_710377a280((long)&local_148,(byte *)"mnu_mmiif_setup_voice_type_n",1);
    iVar2 = (uint)DAT_7105307cb8._1_1_ + (DAT_7105307cb8._1_1_ / 3) * -3;
    if (iVar2 == 2) {
      local_b0 = 0x5f70757465735f66;
      local_a8 = 0x6f76;
      uStack_a6 = 0x69685f656369;
      local_a0 = 0x6867;
      uStack_9e = 0;
      uVar9 = 0x811c9dc5;
      uVar8 = 0x6d;
      pbVar17 = (byte *)((long)&local_b8 + 1);
      do {
        uVar9 = uVar9 * 0x89 ^ uVar8;
        uVar8 = (uint)*pbVar17;
        pbVar17 = pbVar17 + 1;
      } while (uVar8 != 0);
      local_c0 = (undefined **)CONCAT44(0x1a,uVar9);
    }
    else {
      if (iVar2 == 0) {
        local_c0._4_4_ = 0x19;
        local_b0 = 0x5f70757465735f66;
        local_a8 = 0x6f76;
        uStack_a6 = 0x6f6c5f656369;
        local_a0 = 0x77;
        uVar9 = 0x811c9dc5;
        uVar8 = 0x6d;
        pbVar17 = (byte *)((long)&local_b8 + 1);
        do {
          uVar9 = uVar9 * 0x89 ^ uVar8;
          uVar8 = (uint)*pbVar17;
          pbVar17 = pbVar17 + 1;
        } while (uVar8 != 0);
      }
      else {
        local_c0._4_4_ = 0x1c;
        local_b0 = 0x5f70757465735f66;
        local_a8 = 0x6f76;
        uStack_a6 = 0x6f6e5f656369;
        local_a0 = 0x6d72;
        uVar9 = 0x811c9dc5;
        uStack_9c = uStack_9c & 0xffffff00;
        uStack_9e = 0x61;
        uStack_9d = 0x6c;
        uVar8 = 0x6d;
        pbVar17 = (byte *)((long)&local_b8 + 1);
        do {
          uVar9 = uVar9 * 0x89 ^ uVar8;
          uVar8 = (uint)*pbVar17;
          pbVar17 = pbVar17 + 1;
        } while (uVar8 != 0);
      }
      local_c0 = (undefined **)CONCAT44(local_c0._4_4_,uVar9);
    }
    local_a8 = 0x6f76;
    local_b0 = 0x5f70757465735f66;
    local_b8 = 0x69696d6d5f756e6d;
    puVar14 = &local_b8;
    FUN_710377a280((long)&local_138,(byte *)"mnu_mmiif_setup_voice_02",1);
    lVar15 = *local_130;
    if (lVar15 != 0) {
      *(byte *)(lVar15 + 0x58) = *(byte *)(lVar15 + 0x58) | 1;
    }
    uVar13 = 1;
    FUN_710377a280((long)&local_158,(byte *)"mnu_mmiif_setup_voice_02",1);
    lVar15 = *local_150;
    plVar19 = local_130;
    if (lVar15 == 0) goto LAB_71019cc094;
    bVar16 = *(byte *)(lVar15 + 0x58) | 1;
  }
  *(byte *)(lVar15 + 0x58) = bVar16;
  plVar19 = local_130;
LAB_71019cc094:
  if ((char)DAT_7105307d20 == '\0') {
    pcVar12 = "favorite_off";
  }
  else {
    pcVar12 = "favorite_on";
  }
  FUN_7103778300(0x3f800000,*(long *)(lVar18 + 0x10),(long)pcVar12);
  if (DAT_7105307b8c == '\0') {
    FUN_7103778300(0x3f800000,*(long *)(lVar18 + 0x10),0x71043f03cb);
    FUN_7103778300(0x3f800000,*(long *)(lVar18 + 0x10),0x71043df9fa);
  }
  else {
    FUN_7103778300(0x3f800000,*(long *)(lVar18 + 0x10),0x710435aebc);
    FUN_7103778300(0x3f800000,*(long *)(lVar18 + 0x10),0x7104421c51);
    FUN_7103776910(&local_c0,lVar1,(long ****)"set_txt_makername",uVar13,puVar14,param_5,param_6,
                   param_7,param_8);
    FUN_710377a310((long)&local_c0,1);
    uVar10 = local_b8;
    local_c0 = &PTR_FUN_710523d9a8;
    local_b8 = 0;
    if (uVar10 != 0) {
      FUN_710392eb40(uVar10);
    }
  }
  plVar6 = local_150;
  local_158 = &PTR_FUN_710523d9a8;
  local_150 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar6);
  }
  plVar6 = local_140;
  local_148 = &PTR_FUN_710523d9a8;
  local_140 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar6);
  }
  local_138 = &PTR_FUN_710523d9a8;
  local_130 = (long *)0x0;
  if (plVar19 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar19);
  }
  uVar10 = local_120;
  local_128 = &PTR_FUN_710523d9a8;
  local_120 = 0;
  if (uVar10 != 0) {
    FUN_710392eb40(uVar10);
  }
  local_118 = &PTR_FUN_710523d988;
  local_110[0] = 0;
  if (uVar7 != 0) {
    uVar10 = *(ulong *)(uVar7 + 0x18);
    *(undefined ***)(uVar7 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar7 + 0x18) = 0;
    if (uVar10 != 0) {
      FUN_710392eb40(uVar10);
    }
    FUN_710392eb40(uVar7);
  }
  uVar7 = local_c8;
  local_d0 = &PTR_FUN_710523d988;
  local_c8 = 0;
  if (uVar7 != 0) {
    uVar10 = *(ulong *)(uVar7 + 0x18);
    *(undefined ***)(uVar7 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar7 + 0x18) = 0;
    if (uVar10 != 0) {
      FUN_710392eb40(uVar10);
    }
    FUN_710392eb40(uVar7);
  }
  return;
}

