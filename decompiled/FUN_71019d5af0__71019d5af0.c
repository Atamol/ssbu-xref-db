// addr:      71019d5af0
// offset:    0x19d5af0
// name:      FUN_71019d5af0
// mangled:   
// signature: undefined __cdecl FUN_71019d5af0(long param_1, int param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Type propagation algorithm not settling */

void FUN_71019d5af0(long param_1,int param_2,undefined8 param_3,undefined8 param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  int iVar2;
  byte bVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  uint uVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  char *pcVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  byte bVar21;
  byte *pbVar22;
  uint uVar23;
  long *plVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  undefined **local_358;
  ulong local_350 [8];
  undefined **local_310;
  long *local_308;
  undefined **local_300;
  long *local_2f8;
  undefined **local_2f0;
  ulong local_2e8;
  undefined **local_2e0;
  ulong local_2d8;
  undefined **local_2d0;
  long *local_2c8;
  undefined **local_2c0;
  ulong local_2b8;
  undefined **local_2b0;
  long *local_2a8;
  undefined **local_2a0;
  ulong local_298;
  undefined **local_290;
  long *local_288;
  undefined **local_280;
  ulong local_278;
  undefined8 local_270 [2];
  char local_25c;
  short local_24c;
  undefined8 local_160;
  ushort local_158 [12];
  ulong local_140;
  ulong local_138;
  undefined4 local_130;
  undefined2 local_12c;
  undefined1 *local_d0;
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
  
  if (param_2 < 1) {
    return;
  }
  if ((ulong)(*(long *)(param_1 + 0x180) - *(long *)(param_1 + 0x178) >> 2) <= (ulong)(long)param_2)
  {
    return;
  }
  uVar11 = *(uint *)(*(long *)(param_1 + 0x178) + (long)param_2 * 4);
  local_140 = 0x13ffff0000000000;
  local_138 = 0x5affff0000000000;
  local_270[0]._0_4_ = 0;
  local_160 = 0;
  local_158[0] = 0;
  local_12c = 0;
  local_130 = 0;
  local_d0 = &DAT_c1ffff0000000000;
  FUN_71017bd310(local_270);
  uVar12 = FUN_71017c81d0(*(undefined8 **)(*DAT_7105314510 + 0x88),uVar11,(undefined4 *)local_270);
  lVar20 = DAT_710532f730;
  if (*(undefined8 **)(param_1 + 0x18) == *(undefined8 **)(param_1 + 0x10)) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  lVar18 = **(long **)**(undefined8 **)(param_1 + 0x10);
  lVar1 = lVar18 + 8;
  uVar16 = 0;
  FUN_7103776640(&local_280,lVar1,(byte ****)"set_det_column_0%d",0,param_4,param_5,param_6,param_7,
                 param_8);
  FUN_7103776910(&local_290,(long)&local_280,(long ****)"set_txt_det_val_00",uVar16,param_4,param_5,
                 param_6,param_7,param_8);
  plVar7 = local_288;
  if ((long *)local_288[2] != (long *)0x0) {
    param_4 = 1;
    FUN_71037a2270((long *)local_288[2],local_158,0xffffffff,1);
  }
  lVar19 = *local_288;
  bVar3 = (byte)uVar12;
  if (lVar19 != 0) {
    *(byte *)(lVar19 + 0x58) = *(byte *)(lVar19 + 0x58) & 0xfe | bVar3 & 1;
  }
  uVar12 = 1;
  FUN_7103776640(&local_2a0,lVar1,(byte ****)"set_det_column_0%d",1,param_4,param_5,param_6,param_7,
                 param_8);
  FUN_7103776910(&local_2b0,(long)&local_2a0,(long ****)"set_txt_det_val_00",uVar12,param_4,param_5,
                 param_6,param_7,param_8);
  uVar14 = local_138;
  FUN_71032888e0((uint *)&local_c0,*(long *)(*(long *)(lVar20 + 8) + 0x238),local_138,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_710377a120((long)&local_2b0,(char *)&local_b8,uVar14,param_4,param_5,param_6,param_7,param_8);
  plVar6 = local_2a8;
  lVar19 = *local_2a8;
  if (lVar19 != 0) {
    *(byte *)(lVar19 + 0x58) = *(byte *)(lVar19 + 0x58) & 0xfe | bVar3 & 1;
  }
  uVar12 = 2;
  FUN_7103776640(&local_2c0,lVar1,(byte ****)"set_det_column_0%d",2,param_4,param_5,param_6,param_7,
                 param_8);
  FUN_7103776910(&local_2d0,(long)&local_2c0,(long ****)"set_txt_det_val_00",uVar12,param_4,param_5,
                 param_6,param_7,param_8);
  uVar14 = local_140;
  FUN_7103284890((uint *)&local_c0,*(long *)(*(long *)(lVar20 + 8) + 0x248),local_140,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_710377a120((long)&local_2d0,(char *)&local_b8,uVar14,param_4,param_5,param_6,param_7,param_8);
  plVar5 = local_2c8;
  lVar19 = *local_2c8;
  if (lVar19 != 0) {
    *(byte *)(lVar19 + 0x58) = *(byte *)(lVar19 + 0x58) & 0xfe | bVar3 & 1;
  }
  FUN_7103776640(&local_2e0,lVar1,(byte ****)"set_det_column_0%d",3,param_4,param_5,param_6,param_7,
                 param_8);
  FUN_7103778430((long)&local_2e0,"color_%02d",(ulong)(byte)local_130,param_4,param_5,param_6,
                 param_7,param_8);
  uVar14 = local_2d8;
  if ((*(long *)(local_2d8 + 8) != 0) &&
     (lVar19 = *(long *)(*(long *)(local_2d8 + 8) + 0x18), lVar19 != 0)) {
    *(byte *)(lVar19 + 0x58) = *(byte *)(lVar19 + 0x58) & 0xfe | bVar3 & 1;
  }
  bVar21 = local_130._2_1_;
  uVar25 = (ulong)local_130._2_1_;
  bVar8 = local_130._3_1_;
  uVar29 = (ulong)local_130._3_1_;
  bVar9 = (byte)local_12c;
  uVar27 = (ulong)(byte)local_12c;
  bVar10 = local_12c._1_1_;
  uVar26 = (ulong)local_12c._1_1_;
  FUN_7103776640(&local_2f0,lVar1,(byte ****)"set_det_column_0%d",4,param_4,param_5,param_6,param_7,
                 param_8);
  FUN_7103776910(&local_300,(long)&local_2f0,(long ****)"set_txt_special_num_0%d",0,param_4,param_5,
                 param_6,param_7,param_8);
  plVar4 = local_2f8;
  plVar24 = (long *)local_2f8[2];
  if (plVar24 != (long *)0x0) {
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
    uVar11 = FUN_71037ad940((long)&local_c0,0x20,0,bVar21 + 1,0,0);
    param_4 = 0;
    FUN_71037a2270(plVar24,(ushort *)&local_c0,uVar11,0);
  }
  lVar19 = *local_2f8;
  if (lVar19 != 0) {
    *(byte *)(lVar19 + 0x58) = *(byte *)(lVar19 + 0x58) & 0xfe | bVar3 & 1;
  }
  FUN_7103776910(&local_310,(long)&local_2f0,(long ****)"set_txt_special_name_0%d",0,param_4,param_5
                 ,param_6,param_7,param_8);
  FUN_7103262310((uint *)&local_c0,*(long *)(*(long *)(DAT_710532f730 + 8) + 0x168),(ulong)local_d0)
  ;
  puVar17 = &local_b8;
  FUN_71003a4ca0((uint *)&local_358,"nam_special_%s_%02d_%s","normal",uVar25,puVar17,param_5,param_6
                 ,param_7,param_8);
  FUN_710377a120((long)&local_310,(char *)local_350,uVar25,puVar17,param_5,param_6,param_7,param_8);
  plVar24 = local_308;
  lVar19 = *local_308;
  if (lVar19 != 0) {
    *(byte *)(lVar19 + 0x58) = *(byte *)(lVar19 + 0x58) & 0xfe | bVar3 & 1;
  }
  local_310 = &PTR_FUN_710523d9a8;
  local_308 = (long *)0x0;
  if (plVar24 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar24);
  }
  local_300 = &PTR_FUN_710523d9a8;
  local_2f8 = (long *)0x0;
  FUN_710392eb40((ulong)plVar4);
  FUN_7103776910(&local_300,(long)&local_2f0,(long ****)"set_txt_special_num_0%d",1,puVar17,param_5,
                 param_6,param_7,param_8);
  plVar4 = local_2f8;
  plVar24 = (long *)local_2f8[2];
  if (plVar24 != (long *)0x0) {
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
    uVar11 = FUN_71037ad940((long)&local_c0,0x20,0,bVar8 + 1,0,0);
    puVar17 = (undefined8 *)0x0;
    FUN_71037a2270(plVar24,(ushort *)&local_c0,uVar11,0);
  }
  lVar19 = *plVar4;
  if (lVar19 != 0) {
    *(byte *)(lVar19 + 0x58) = *(byte *)(lVar19 + 0x58) & 0xfe | bVar3 & 1;
  }
  FUN_7103776910(&local_310,(long)&local_2f0,(long ****)"set_txt_special_name_0%d",1,puVar17,param_5
                 ,param_6,param_7,param_8);
  FUN_7103262310((uint *)&local_c0,*(long *)(*(long *)(DAT_710532f730 + 8) + 0x168),(ulong)local_d0)
  ;
  puVar17 = &local_b8;
  FUN_71003a4ca0((uint *)&local_358,"nam_special_%s_%02d_%s",&DAT_71043ef195,uVar29,puVar17,param_5,
                 param_6,param_7,param_8);
  FUN_710377a120((long)&local_310,(char *)local_350,uVar29,puVar17,param_5,param_6,param_7,param_8);
  plVar24 = local_308;
  lVar19 = *local_308;
  if (lVar19 != 0) {
    *(byte *)(lVar19 + 0x58) = *(byte *)(lVar19 + 0x58) & 0xfe | bVar3 & 1;
  }
  local_310 = &PTR_FUN_710523d9a8;
  local_308 = (long *)0x0;
  if (plVar24 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar24);
  }
  local_300 = &PTR_FUN_710523d9a8;
  local_2f8 = (long *)0x0;
  FUN_710392eb40((ulong)plVar4);
  FUN_7103776910(&local_300,(long)&local_2f0,(long ****)"set_txt_special_num_0%d",2,puVar17,param_5,
                 param_6,param_7,param_8);
  plVar4 = local_2f8;
  plVar24 = (long *)local_2f8[2];
  if (plVar24 != (long *)0x0) {
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
    uVar11 = FUN_71037ad940((long)&local_c0,0x20,0,bVar9 + 1,0,0);
    puVar17 = (undefined8 *)0x0;
    FUN_71037a2270(plVar24,(ushort *)&local_c0,uVar11,0);
  }
  lVar19 = *plVar4;
  if (lVar19 != 0) {
    *(byte *)(lVar19 + 0x58) = *(byte *)(lVar19 + 0x58) & 0xfe | bVar3 & 1;
  }
  FUN_7103776910(&local_310,(long)&local_2f0,(long ****)"set_txt_special_name_0%d",2,puVar17,param_5
                 ,param_6,param_7,param_8);
  FUN_7103262310((uint *)&local_c0,*(long *)(*(long *)(DAT_710532f730 + 8) + 0x168),(ulong)local_d0)
  ;
  puVar17 = &local_b8;
  FUN_71003a4ca0((uint *)&local_358,"nam_special_%s_%02d_%s","upper",uVar27,puVar17,param_5,param_6,
                 param_7,param_8);
  FUN_710377a120((long)&local_310,(char *)local_350,uVar27,puVar17,param_5,param_6,param_7,param_8);
  plVar24 = local_308;
  lVar19 = *local_308;
  if (lVar19 != 0) {
    *(byte *)(lVar19 + 0x58) = *(byte *)(lVar19 + 0x58) & 0xfe | bVar3 & 1;
  }
  local_310 = &PTR_FUN_710523d9a8;
  local_308 = (long *)0x0;
  if (plVar24 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar24);
  }
  local_300 = &PTR_FUN_710523d9a8;
  local_2f8 = (long *)0x0;
  FUN_710392eb40((ulong)plVar4);
  FUN_7103776910(&local_300,(long)&local_2f0,(long ****)"set_txt_special_num_0%d",3,puVar17,param_5,
                 param_6,param_7,param_8);
  plVar4 = local_2f8;
  plVar24 = (long *)local_2f8[2];
  if (plVar24 != (long *)0x0) {
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
    uVar11 = FUN_71037ad940((long)&local_c0,0x20,0,bVar10 + 1,0,0);
    puVar17 = (undefined8 *)0x0;
    FUN_71037a2270(plVar24,(ushort *)&local_c0,uVar11,0);
  }
  lVar19 = *plVar4;
  if (lVar19 != 0) {
    *(byte *)(lVar19 + 0x58) = *(byte *)(lVar19 + 0x58) & 0xfe | bVar3 & 1;
  }
  FUN_7103776910(&local_310,(long)&local_2f0,(long ****)"set_txt_special_name_0%d",3,puVar17,param_5
                 ,param_6,param_7,param_8);
  FUN_7103262310((uint *)&local_c0,*(long *)(*(long *)(DAT_710532f730 + 8) + 0x168),(ulong)local_d0)
  ;
  puVar17 = &local_b8;
  FUN_71003a4ca0((uint *)&local_358,"nam_special_%s_%02d_%s","lower",uVar26,puVar17,param_5,param_6,
                 param_7,param_8);
  FUN_710377a120((long)&local_310,(char *)local_350,uVar26,puVar17,param_5,param_6,param_7,param_8);
  plVar24 = local_308;
  lVar19 = *local_308;
  if (lVar19 != 0) {
    *(byte *)(lVar19 + 0x58) = *(byte *)(lVar19 + 0x58) & 0xfe | bVar3 & 1;
  }
  local_310 = &PTR_FUN_710523d9a8;
  local_308 = (long *)0x0;
  if (plVar24 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar24);
  }
  local_300 = &PTR_FUN_710523d9a8;
  local_2f8 = (long *)0x0;
  FUN_710392eb40((ulong)plVar4);
  uVar12 = 5;
  FUN_7103776640(&local_358,lVar1,(byte ****)"set_det_column_0%d",5,puVar17,param_5,param_6,param_7,
                 param_8);
  FUN_7103776910(&local_300,(long)&local_358,(long ****)"set_txt_det_val_00",uVar12,puVar17,param_5,
                 param_6,param_7,param_8);
  FUN_7103776910(&local_310,(long)&local_358,(long ****)"set_txt_det_val_01",uVar12,puVar17,param_5,
                 param_6,param_7,param_8);
  uVar25 = local_350[0];
  if (local_130._1_1_ == '%') {
    FUN_7103778300(0x3f800000,local_350[0],0x710424f2a4);
    FUN_710377a120((long)&local_300,"mnu_mmiif_setup_voice_type_none",uVar12,puVar17,param_5,param_6
                   ,param_7,param_8);
    lVar20 = *local_308;
    if (lVar20 == 0) goto LAB_71019d6470;
    bVar21 = *(byte *)(lVar20 + 0x58) & 0xfe;
  }
  else {
    FUN_7103778300(0x3f800000,local_350[0],0x71043f0770);
    FUN_710328cb60(*(long *)(*(long *)(lVar20 + 8) + 600),local_130 >> 8 & 0xff);
    FUN_710377a280((long)&local_300,(byte *)"mnu_mmiif_setup_voice_type_n",1);
    iVar2 = (uint)local_130._1_1_ + (local_130._1_1_ / 3) * -3;
    if (iVar2 == 2) {
      local_c0._4_4_ = 0x1a;
      local_b0 = 0x5f70757465735f66;
      local_a8 = 0x6f76;
      uStack_a6 = 0x69685f656369;
      local_a0 = 0x6867;
      uStack_9e = 0;
      uVar11 = 0x811c9dc5;
      uVar23 = 0x6d;
      pbVar22 = (byte *)((long)&local_b8 + 1);
      do {
        uVar11 = uVar11 * 0x89 ^ uVar23;
        uVar23 = (uint)*pbVar22;
        pbVar22 = pbVar22 + 1;
      } while (uVar23 != 0);
    }
    else if (iVar2 == 0) {
      local_c0._4_4_ = 0x19;
      local_b0 = 0x5f70757465735f66;
      local_a8 = 0x6f76;
      uStack_a6 = 0x6f6c5f656369;
      local_a0 = 0x77;
      uVar11 = 0x811c9dc5;
      uVar23 = 0x6d;
      pbVar22 = (byte *)((long)&local_b8 + 1);
      do {
        uVar11 = uVar11 * 0x89 ^ uVar23;
        uVar23 = (uint)*pbVar22;
        pbVar22 = pbVar22 + 1;
      } while (uVar23 != 0);
    }
    else {
      local_c0._4_4_ = 0x1c;
      local_b0 = 0x5f70757465735f66;
      local_a8 = 0x6f76;
      uStack_a6 = 0x6f6e5f656369;
      local_a0 = 0x6d72;
      uVar11 = 0x811c9dc5;
      uStack_9c = uStack_9c & 0xffffff00;
      uStack_9e = 0x61;
      uStack_9d = 0x6c;
      uVar23 = 0x6d;
      pbVar22 = (byte *)((long)&local_b8 + 1);
      do {
        uVar11 = uVar11 * 0x89 ^ uVar23;
        uVar23 = (uint)*pbVar22;
        pbVar22 = pbVar22 + 1;
      } while (uVar23 != 0);
    }
    local_a8 = 0x6f76;
    local_b0 = 0x5f70757465735f66;
    local_b8 = 0x69696d6d5f756e6d;
    puVar17 = &local_b8;
    uVar12 = 1;
    local_c0 = (undefined **)CONCAT44(local_c0._4_4_,uVar11);
    FUN_710377a280((long)&local_310,(byte *)"mnu_mmiif_setup_voice_02",1);
    lVar20 = *local_308;
    if (lVar20 == 0) goto LAB_71019d6470;
    bVar21 = *(byte *)(lVar20 + 0x58) & 0xfe | bVar3 & 1;
  }
  *(byte *)(lVar20 + 0x58) = bVar21;
LAB_71019d6470:
  uVar29 = local_278;
  plVar24 = local_2f8;
  plVar4 = local_308;
  lVar20 = *local_2f8;
  if (lVar20 != 0) {
    *(byte *)(lVar20 + 0x58) = *(byte *)(lVar20 + 0x58) & 0xfe | bVar3 & 1;
  }
  if (local_25c == '\0') {
    pcVar15 = "edit_enable";
    FUN_7103778300(0x3f800000,local_278,0x71042b3cee);
    FUN_7103778300(0x3f800000,local_298,0x71042b3cee);
    FUN_7103778300(0x3f800000,local_2b8,0x71042b3cee);
    FUN_7103778300(0x3f800000,local_2d8,0x71042b3cee);
    FUN_7103778300(0x3f800000,local_2e8,0x71042b3cee);
    uVar27 = local_2e8;
    uVar26 = local_298;
    uVar28 = local_2b8;
  }
  else {
    FUN_7103778300(0x3f800000,local_278,0x71042d5baa);
    FUN_7103778300(0x3f800000,local_298,0x71042d5baa);
    FUN_7103778300(0x3f800000,local_2b8,0x71042d5baa);
    FUN_7103778300(0x3f800000,local_2d8,0x71042d5baa);
    FUN_7103778300(0x3f800000,local_350[0],0x71042d5baa);
    local_350[0] = local_2e8;
    uVar27 = local_2e8;
    uVar26 = local_298;
    uVar28 = local_2b8;
    if ((local_25c == '\0') || (local_24c != 0)) {
      pcVar15 = "edit_enable";
    }
    else {
      pcVar15 = "edit_disable";
    }
  }
  FUN_7103778300(0x3f800000,local_350[0],(long)pcVar15);
  lVar20 = *(long *)(lVar18 + 0x10);
  if (local_25c == '\0') {
    FUN_7103778300(0x3f800000,lVar20,0x71043df9fa);
  }
  else {
    FUN_7103778300(0x3f800000,lVar20,0x7104421c51);
    FUN_7103776910(&local_c0,lVar1,(long ****)"set_txt_makername",uVar12,puVar17,param_5,param_6,
                   param_7,param_8);
    FUN_710377a310((long)&local_c0,1);
    uVar13 = local_b8;
    local_c0 = &PTR_FUN_710523d9a8;
    local_b8 = 0;
    if (uVar13 != 0) {
      FUN_710392eb40(uVar13);
    }
  }
  local_308 = (long *)0x0;
  local_310 = &PTR_FUN_710523d9a8;
  if (plVar4 != (long *)0x0) {
    local_308 = (long *)0x0;
    local_310 = &PTR_FUN_710523d9a8;
    FUN_710392eb40((ulong)plVar4);
  }
  local_300 = &PTR_FUN_710523d9a8;
  local_2f8 = (long *)0x0;
  if (plVar24 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar24);
  }
  local_358 = &PTR_FUN_710523d988;
  local_350[0] = 0;
  if (uVar25 != 0) {
    uVar13 = *(ulong *)(uVar25 + 0x18);
    *(undefined ***)(uVar25 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar25 + 0x18) = 0;
    if (uVar13 != 0) {
      FUN_710392eb40(uVar13);
    }
    FUN_710392eb40(uVar25);
  }
  local_2f0 = &PTR_FUN_710523d988;
  local_2e8 = 0;
  if (uVar27 != 0) {
    uVar25 = *(ulong *)(uVar27 + 0x18);
    *(undefined ***)(uVar27 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar27 + 0x18) = 0;
    if (uVar25 != 0) {
      FUN_710392eb40(uVar25);
    }
    FUN_710392eb40(uVar27);
  }
  local_2e0 = &PTR_FUN_710523d988;
  local_2d8 = 0;
  if (uVar14 != 0) {
    uVar25 = *(ulong *)(uVar14 + 0x18);
    *(undefined ***)(uVar14 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar14 + 0x18) = 0;
    if (uVar25 != 0) {
      FUN_710392eb40(uVar25);
    }
    FUN_710392eb40(uVar14);
  }
  local_2d0 = &PTR_FUN_710523d9a8;
  local_2c8 = (long *)0x0;
  if (plVar5 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar5);
  }
  local_2c0 = &PTR_FUN_710523d988;
  local_2b8 = 0;
  if (uVar28 != 0) {
    uVar14 = *(ulong *)(uVar28 + 0x18);
    *(undefined ***)(uVar28 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar28 + 0x18) = 0;
    if (uVar14 != 0) {
      FUN_710392eb40(uVar14);
    }
    FUN_710392eb40(uVar28);
  }
  local_2b0 = &PTR_FUN_710523d9a8;
  local_2a8 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar6);
  }
  local_2a0 = &PTR_FUN_710523d988;
  local_298 = 0;
  if (uVar26 != 0) {
    uVar14 = *(ulong *)(uVar26 + 0x18);
    *(undefined ***)(uVar26 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar26 + 0x18) = 0;
    if (uVar14 != 0) {
      FUN_710392eb40(uVar14);
    }
    FUN_710392eb40(uVar26);
  }
  local_290 = &PTR_FUN_710523d9a8;
  local_288 = (long *)0x0;
  if (plVar7 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar7);
  }
  local_280 = &PTR_FUN_710523d988;
  local_278 = 0;
  if (uVar29 != 0) {
    uVar14 = *(ulong *)(uVar29 + 0x18);
    *(undefined ***)(uVar29 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar29 + 0x18) = 0;
    if (uVar14 != 0) {
      FUN_710392eb40(uVar14);
    }
    FUN_710392eb40(uVar29);
  }
  return;
}

