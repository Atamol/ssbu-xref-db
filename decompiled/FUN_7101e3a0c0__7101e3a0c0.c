// addr:      7101e3a0c0
// offset:    0x1e3a0c0
// name:      FUN_7101e3a0c0
// mangled:   
// signature: undefined __cdecl FUN_7101e3a0c0(long param_1, uint param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101e3a0c0(long param_1,uint param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined2 *puVar1;
  char cVar2;
  ushort uVar3;
  ushort uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  long *plVar16;
  ulong uVar17;
  long *plVar18;
  ulong uVar19;
  ulong uVar20;
  long ***ppplVar21;
  ulong uVar22;
  undefined1 uVar23;
  char *pcVar24;
  undefined *puVar25;
  long ****pppplVar26;
  long *********ppppppppplVar27;
  undefined8 uVar28;
  byte ****ppppbVar29;
  uint uVar30;
  long **pplVar31;
  ushort *puVar32;
  ulong uVar33;
  long lVar34;
  byte *pbVar35;
  ulong uVar36;
  ulong uVar37;
  uint uVar38;
  long lVar39;
  long lVar40;
  undefined2 *puVar41;
  undefined **local_210;
  ulong local_208;
  undefined **local_200;
  ulong local_1f8;
  undefined **local_1f0;
  ulong local_1e8;
  undefined **local_1e0;
  ulong local_1d8;
  undefined **local_1d0;
  ulong local_1c8;
  undefined **local_1c0;
  ulong local_1b8;
  undefined **local_1b0;
  ulong local_1a8;
  undefined **local_1a0;
  ulong local_198;
  undefined **local_190;
  ulong local_188;
  undefined **local_180;
  ulong local_178;
  undefined **local_170;
  ulong local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined4 local_150;
  undefined1 local_14c;
  long ***local_118;
  long *local_110 [8];
  undefined **local_d0;
  ulong local_c8;
  undefined **local_c0;
  long *local_b8;
  undefined **local_b0;
  long *local_a8;
  uint local_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined2 local_80;
  
  pppplVar26 = param_3;
  plVar16 = (long *)FUN_710392e290(0x10,8,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar16 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_160 = local_160 & 0xffffffff00000000;
      local_118 = (long ***)&DAT_00000008;
      pppplVar26 = &local_118;
      uVar17 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_160);
      if (((uVar17 & 1) != 0) &&
         (plVar16 = (long *)FUN_710392e290(0x10,8,pppplVar26,param_4,param_5,param_6,param_7,param_8
                                          ), plVar16 != (long *)0x0)) goto LAB_7101e3a14c;
    }
    plVar16 = (long *)0x0;
  }
LAB_7101e3a14c:
  *plVar16 = 0;
  pplVar31 = param_3[1][1];
  if ((pplVar31 == (long **)0x0) || (pplVar31[0xc] == (long *)0x0)) {
    *plVar16 = 0;
  }
  else {
    plVar18 = (long *)FUN_7103796f20((long)pplVar31[0xc],(long)(pplVar31[3] + 0x16));
    *plVar16 = (long)plVar18;
    if (plVar18 != (long *)0x0) {
      (**(code **)(*plVar18 + 0x2e0))(plVar18,0);
    }
  }
  FUN_710392eb40((ulong)plVar16);
  if (*(char *)(param_1 + 0x54) == '\0') {
    bVar13 = false;
  }
  else {
    if ((ulong)(*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 3) <=
        (ulong)(long)(int)param_2) goto LAB_7101e3b6c4;
    uVar3 = **(ushort **)(*(long *)(param_1 + 8) + (long)(int)param_2 * 8);
    if (uVar3 >> 4 < 0x177) {
      bVar13 = (*(uint *)(param_1 + ((ulong)(uVar3 >> 3) & 0x1ffc) + 0x5c) &
               1 << (ulong)(uVar3 & 0x1f)) != 0;
    }
    else {
      bVar13 = false;
    }
  }
  uVar17 = (ulong)(int)param_2;
  plVar16 = (long *)FUN_710392e290(0x10,8,pppplVar26,param_4,param_5,param_6,param_7,param_8);
  if (plVar16 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_160 = local_160 & 0xffffffff00000000;
      local_118 = (long ***)&DAT_00000008;
      pppplVar26 = &local_118;
      uVar19 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_160);
      if (((uVar19 & 1) != 0) &&
         (plVar16 = (long *)FUN_710392e290(0x10,8,pppplVar26,param_4,param_5,param_6,param_7,param_8
                                          ), plVar16 != (long *)0x0)) goto LAB_7101e3a264;
    }
    plVar16 = (long *)0x0;
  }
LAB_7101e3a264:
  *plVar16 = 0;
  pplVar31 = param_3[1][1];
  if ((pplVar31 == (long **)0x0) || (pplVar31[0xc] == (long *)0x0)) {
    *plVar16 = 0;
  }
  else {
    plVar18 = (long *)FUN_7103796f20((long)pplVar31[0xc],(long)(pplVar31[3] + 0x16));
    *plVar16 = (long)plVar18;
    if (plVar18 != (long *)0x0) {
      (**(code **)(*plVar18 + 0x2f0))(plVar18,bVar13,0);
    }
  }
  FUN_710392eb40((ulong)plVar16);
  if ((ulong)(*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 3) <= uVar17) {
LAB_7101e3b6c4:
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  uVar3 = *(ushort *)(*(long *)(*(long *)(param_1 + 8) + uVar17 * 8) + 8);
  lVar40 = *DAT_7105329f98;
  ppppbVar29 = (byte ****)&DAT_00000010;
  ppppppppplVar27 = (long *********)(ulong)uVar3;
  FUN_710259c150(*(long *)(lVar40 + 0x20),1,uVar3,(byte ****)&DAT_00000010,param_5,param_6,param_7,
                 param_8);
  lVar40 = *(long *)(lVar40 + 0x20);
  if ((long *********)(ulong)uVar3 != (long *********)0xffff) {
    puVar32 = *(ushort **)(lVar40 + 0x28);
    lVar39 = *(long *)(lVar40 + 0x30) - (long)puVar32;
    uVar19 = lVar39 >> 3;
    if (0 < (int)uVar19) {
      uVar36 = 0;
      do {
        if (uVar19 <= uVar36) goto LAB_7101e3b6c4;
        if (*puVar32 == uVar3) {
          if (-1 < (int)uVar36) {
            uVar19 = FUN_71032a9470(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8),uVar3);
            ppppppppplVar27 = (long *********)&SUB_00000018;
            plVar16 = FUN_710323faf0((long *)(lVar40 + 8),uVar19,(undefined **)&SUB_00000018,
                                     ppppbVar29,param_5,param_6,param_7,param_8);
            goto LAB_7101e3a388;
          }
          break;
        }
        uVar36 = uVar36 + 1;
        puVar32 = puVar32 + 4;
      } while ((long)uVar36 < lVar39 * 0x20000000 >> 0x20);
    }
  }
  plVar16 = (long *)(lVar40 + 0x70);
LAB_7101e3a388:
  lVar40 = (long)(short)uVar3;
  FUN_7103776910(&local_c0,(long)param_3,(long ****)"set_rep_spirits",ppppppppplVar27,ppppbVar29,
                 param_5,param_6,param_7,param_8);
  plVar12 = local_b8;
  plVar18 = local_b8;
  if (*local_b8 == 0) {
    FUN_7103776910(&local_118,(long)param_3,(long ****)"set_rep_spirit",ppppppppplVar27,ppppbVar29,
                   param_5,param_6,param_7,param_8);
    plVar18 = local_110[0];
    local_110[0] = (long *)0x0;
    local_b8 = plVar18;
    if (plVar12 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar12);
    }
    local_118 = (long ***)&PTR_FUN_710523d9a8;
    local_110[0] = (long *)0x0;
  }
  FUN_7103776910(&local_d0,(long)param_3,(long ****)"set_rep_aura",ppppppppplVar27,ppppbVar29,
                 param_5,param_6,param_7,param_8);
  FUN_7103778b80((long)plVar18,(long)plVar16,ppppppppplVar27,ppppbVar29,param_5,param_6,param_7,
                 param_8);
  uVar19 = local_c8;
  FUN_7103778b80(local_c8,(long)plVar16,ppppppppplVar27,ppppbVar29,param_5,param_6,param_7,param_8);
  lVar39 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
  if (uVar3 == 0xffff) {
    uVar36 = 0xffffffff;
  }
  else {
    uVar36 = (ulong)*(ushort *)(lVar39 + lVar40 * 2 + 0x60);
  }
  lVar34 = *(long *)(lVar39 + 0x20);
  uVar37 = (*(long *)(lVar39 + 0x28) - lVar34 >> 6) * -0x3333333333333333;
  puVar41 = (undefined2 *)(lVar34 + uVar36 * 0x140);
  if (uVar37 < uVar36 || uVar37 - uVar36 == 0) {
    puVar41 = &DAT_7105182b08;
  }
  bVar14 = uVar3 == 0xffff;
  cVar2 = *(char *)(puVar41 + 0x2f);
  bVar13 = 1999 < (short)uVar3;
  if ((bVar14 || bVar13) ||
     (uVar4 = *(ushort *)(lVar39 + lVar40 * 2 + 0x60), uVar36 = (ulong)uVar4,
     (uint)uVar37 <= (uint)uVar4)) {
LAB_7101e3a4f8:
    uVar23 = 0;
  }
  else {
    puVar1 = (undefined2 *)(lVar34 + uVar36 * 0x140);
    if (uVar37 < uVar36 || uVar37 - uVar36 == 0) {
      puVar1 = &DAT_7105182b08;
    }
    if (*(char *)(puVar1 + 0x2f) == '\0') {
      if (2 < *(byte *)(puVar1 + 0x36) - 1) goto LAB_7101e3a4f8;
      uVar23 = (undefined1)(0x20301 >> (ulong)((*(byte *)(puVar1 + 0x36) - 1 & 3) << 3));
    }
    else {
      uVar23 = 4;
    }
  }
  uVar28 = 0;
  FUN_710339dde0((uint *)&local_118,uVar23,'\0');
  FUN_7103778300(0x3f800000,(long)param_3[1],(long)local_110);
  switch(*(undefined1 *)(puVar41 + 0x34)) {
  case 0:
    local_160._4_4_ = 10;
    local_158 = 0x6f6e5f7373616c63;
    uVar30 = 0x811c9dc5;
    local_150 = CONCAT13(local_150._3_1_,0x656e);
    uVar38 = 99;
    pbVar35 = (byte *)((long)&local_158 + 1);
    do {
      uVar30 = uVar30 * 0x89 ^ uVar38;
      uVar38 = (uint)*pbVar35;
      pbVar35 = pbVar35 + 1;
    } while (uVar38 != 0);
    break;
  case 1:
    local_160._4_4_ = 10;
    local_158 = 0x6f685f7373616c63;
    uVar30 = 0x811c9dc5;
    local_150 = CONCAT13(local_150._3_1_,0x6570);
    uVar38 = 99;
    pbVar35 = (byte *)((long)&local_158 + 1);
    do {
      uVar30 = uVar30 * 0x89 ^ uVar38;
      uVar38 = (uint)*pbVar35;
      pbVar35 = pbVar35 + 1;
    } while (uVar38 != 0);
    break;
  case 2:
    local_160._4_4_ = 9;
    local_158 = 0x63615f7373616c63;
    local_150 = CONCAT22(local_150._2_2_,0x65);
    uVar30 = 0x811c9dc5;
    uVar38 = 99;
    pbVar35 = (byte *)((long)&local_158 + 1);
    do {
      uVar30 = uVar30 * 0x89 ^ uVar38;
      uVar38 = (uint)*pbVar35;
      pbVar35 = pbVar35 + 1;
    } while (uVar38 != 0);
    break;
  case 3:
    local_160._4_4_ = 0xc;
    local_158 = 0x656c5f7373616c63;
    uVar30 = 0x811c9dc5;
    local_150 = 0x646e6567;
    uVar38 = 99;
    local_14c = 0;
    pbVar35 = (byte *)((long)&local_158 + 1);
    do {
      uVar30 = uVar30 * 0x89 ^ uVar38;
      uVar38 = (uint)*pbVar35;
      pbVar35 = pbVar35 + 1;
    } while (uVar38 != 0);
    break;
  default:
    local_160._4_4_ = 10;
    local_158 = 0x6f6e5f7373616c63;
    uVar30 = 0x811c9dc5;
    local_150 = CONCAT13(local_150._3_1_,0x656e);
    uVar38 = 99;
    pbVar35 = (byte *)((long)&local_158 + 1);
    do {
      uVar30 = uVar30 * 0x89 ^ uVar38;
      uVar38 = (uint)*pbVar35;
      pbVar35 = pbVar35 + 1;
    } while (uVar38 != 0);
  }
  local_160 = CONCAT44(local_160._4_4_,uVar30);
  FUN_7103776640(&local_170,(long)param_3,(byte ****)"set_parts_atr_icon",uVar28,ppppbVar29,param_5,
                 param_6,param_7,param_8);
  uVar11 = local_168;
  FUN_7103778300(0x3f800000,local_168,(long)local_110);
  FUN_7103776640(&local_180,(long)param_3,(byte ****)"set_parts_atr_bg",uVar28,ppppbVar29,param_5,
                 param_6,param_7,param_8);
  uVar37 = local_178;
  FUN_7103778300(0x3f800000,local_178,(long)&local_158);
  FUN_7103778300(0x3f800000,local_178,(long)local_110);
  FUN_7103776910((undefined8 *)&local_a0,(long)&local_180,(long ****)"set_fxui_eff_aura_%02d",0,
                 ppppbVar29,param_5,param_6,param_7,param_8);
  FUN_710377aa20(*(long **)CONCAT44(uStack_94,local_98),0);
  uVar36 = CONCAT44(uStack_94,local_98);
  local_a0 = 0x523d9a8;
  uStack_9c = 0x71;
  local_98 = 0;
  uStack_94 = 0;
  if (uVar36 != 0) {
    FUN_710392eb40(uVar36);
  }
  FUN_7103776910((undefined8 *)&local_a0,(long)&local_180,(long ****)"set_fxui_eff_aura_%02d",1,
                 ppppbVar29,param_5,param_6,param_7,param_8);
  FUN_710377aa20(*(long **)CONCAT44(uStack_94,local_98),0);
  uVar36 = CONCAT44(uStack_94,local_98);
  local_a0 = 0x523d9a8;
  uStack_9c = 0x71;
  local_98 = 0;
  uStack_94 = 0;
  if (uVar36 != 0) {
    FUN_710392eb40(uVar36);
  }
  FUN_7103776910((undefined8 *)&local_a0,(long)&local_180,(long ****)"set_fxui_eff_aura_%02d",2,
                 ppppbVar29,param_5,param_6,param_7,param_8);
  FUN_710377aa20(*(long **)CONCAT44(uStack_94,local_98),0);
  uVar36 = CONCAT44(uStack_94,local_98);
  local_a0 = 0x523d9a8;
  uStack_9c = 0x71;
  local_98 = 0;
  uStack_94 = 0;
  if (uVar36 != 0) {
    FUN_710392eb40(uVar36);
  }
  FUN_7103776910((undefined8 *)&local_a0,(long)&local_180,(long ****)"set_fxui_eff_aura_%02d",3,
                 ppppbVar29,param_5,param_6,param_7,param_8);
  FUN_710377aa20(*(long **)CONCAT44(uStack_94,local_98),0);
  uVar36 = CONCAT44(uStack_94,local_98);
  local_a0 = 0x523d9a8;
  uStack_9c = 0x71;
  local_98 = 0;
  uStack_94 = 0;
  if (uVar36 != 0) {
    FUN_710392eb40(uVar36);
  }
  FUN_7103776910((undefined8 *)&local_a0,(long)&local_180,(long ****)"set_fxui_eff_aura_%02d",4,
                 ppppbVar29,param_5,param_6,param_7,param_8);
  FUN_710377aa20(*(long **)CONCAT44(uStack_94,local_98),0);
  uVar36 = CONCAT44(uStack_94,local_98);
  local_a0 = 0x523d9a8;
  uStack_9c = 0x71;
  local_98 = 0;
  uStack_94 = 0;
  if (uVar36 != 0) {
    FUN_710392eb40(uVar36);
  }
  FUN_7103776910((undefined8 *)&local_a0,(long)&local_180,(long ****)"set_fxui_eff_aura_%02d",5,
                 ppppbVar29,param_5,param_6,param_7,param_8);
  FUN_710377aa20(*(long **)CONCAT44(uStack_94,local_98),0);
  uVar36 = CONCAT44(uStack_94,local_98);
  local_a0 = 0x523d9a8;
  uStack_9c = 0x71;
  local_98 = 0;
  uStack_94 = 0;
  if (uVar36 != 0) {
    FUN_710392eb40(uVar36);
  }
  FUN_7103776910((undefined8 *)&local_a0,(long)&local_180,(long ****)"set_fxui_eff_aura_%02d",6,
                 ppppbVar29,param_5,param_6,param_7,param_8);
  FUN_710377aa20(*(long **)CONCAT44(uStack_94,local_98),0);
  uVar36 = CONCAT44(uStack_94,local_98);
  local_a0 = 0x523d9a8;
  uStack_9c = 0x71;
  local_98 = 0;
  uStack_94 = 0;
  if (uVar36 != 0) {
    FUN_710392eb40(uVar36);
  }
  FUN_7103776910((undefined8 *)&local_a0,(long)&local_180,(long ****)"set_fxui_eff_aura_%02d",7,
                 ppppbVar29,param_5,param_6,param_7,param_8);
  FUN_710377aa20(*(long **)CONCAT44(uStack_94,local_98),0);
  uVar36 = CONCAT44(uStack_94,local_98);
  local_a0 = 0x523d9a8;
  uStack_9c = 0x71;
  local_98 = 0;
  uStack_94 = 0;
  if (uVar36 != 0) {
    FUN_710392eb40(uVar36);
  }
  FUN_7103776910((undefined8 *)&local_a0,(long)&local_180,(long ****)"set_fxui_eff_aura_%02d",8,
                 ppppbVar29,param_5,param_6,param_7,param_8);
  FUN_710377aa20(*(long **)CONCAT44(uStack_94,local_98),0);
  uVar36 = CONCAT44(uStack_94,local_98);
  local_a0 = 0x523d9a8;
  uStack_9c = 0x71;
  local_98 = 0;
  uStack_94 = 0;
  if (uVar36 != 0) {
    FUN_710392eb40(uVar36);
  }
  FUN_7103776910((undefined8 *)&local_a0,(long)&local_180,(long ****)"set_fxui_eff_aura_%02d",9,
                 ppppbVar29,param_5,param_6,param_7,param_8);
  FUN_710377aa20(*(long **)CONCAT44(uStack_94,local_98),0);
  uVar36 = CONCAT44(uStack_94,local_98);
  local_a0 = 0x523d9a8;
  uStack_9c = 0x71;
  local_98 = 0;
  uStack_94 = 0;
  if (uVar36 != 0) {
    FUN_710392eb40(uVar36);
  }
  FUN_7103776910((undefined8 *)&local_a0,(long)&local_180,(long ****)"set_fxui_eff_aura_%02d",10,
                 ppppbVar29,param_5,param_6,param_7,param_8);
  FUN_710377aa20(*(long **)CONCAT44(uStack_94,local_98),0);
  uVar36 = CONCAT44(uStack_94,local_98);
  local_a0 = 0x523d9a8;
  uStack_9c = 0x71;
  local_98 = 0;
  uStack_94 = 0;
  if (uVar36 != 0) {
    FUN_710392eb40(uVar36);
  }
  FUN_7103776910((undefined8 *)&local_a0,(long)&local_180,(long ****)"set_fxui_eff_aura_%02d",0xb,
                 ppppbVar29,param_5,param_6,param_7,param_8);
  FUN_710377aa20(*(long **)CONCAT44(uStack_94,local_98),0);
  uVar36 = CONCAT44(uStack_94,local_98);
  local_a0 = 0x523d9a8;
  uStack_9c = 0x71;
  local_98 = 0;
  uStack_94 = 0;
  if (uVar36 != 0) {
    FUN_710392eb40(uVar36);
  }
  FUN_7103776910((undefined8 *)&local_a0,(long)&local_180,(long ****)"set_fxui_eff_aura_%02d",0xc,
                 ppppbVar29,param_5,param_6,param_7,param_8);
  FUN_710377aa20(*(long **)CONCAT44(uStack_94,local_98),0);
  uVar36 = CONCAT44(uStack_94,local_98);
  local_a0 = 0x523d9a8;
  uStack_9c = 0x71;
  local_98 = 0;
  uStack_94 = 0;
  if (uVar36 != 0) {
    FUN_710392eb40(uVar36);
  }
  FUN_7103776910((undefined8 *)&local_a0,(long)&local_180,(long ****)"set_fxui_eff_aura_%02d",0xd,
                 ppppbVar29,param_5,param_6,param_7,param_8);
  FUN_710377aa20(*(long **)CONCAT44(uStack_94,local_98),0);
  uVar36 = CONCAT44(uStack_94,local_98);
  local_a0 = 0x523d9a8;
  uStack_9c = 0x71;
  local_98 = 0;
  uStack_94 = 0;
  if (uVar36 != 0) {
    FUN_710392eb40(uVar36);
  }
  FUN_7103776910((undefined8 *)&local_a0,(long)&local_180,(long ****)"set_fxui_eff_aura_%02d",0xe,
                 ppppbVar29,param_5,param_6,param_7,param_8);
  FUN_710377aa20(*(long **)CONCAT44(uStack_94,local_98),0);
  uVar36 = CONCAT44(uStack_94,local_98);
  local_a0 = 0x523d9a8;
  uStack_9c = 0x71;
  local_98 = 0;
  uStack_94 = 0;
  if (uVar36 != 0) {
    FUN_710392eb40(uVar36);
  }
  uVar28 = 0xf;
  FUN_7103776910((undefined8 *)&local_a0,(long)&local_180,(long ****)"set_fxui_eff_aura_%02d",0xf,
                 ppppbVar29,param_5,param_6,param_7,param_8);
  FUN_710377aa20(*(long **)CONCAT44(uStack_94,local_98),0);
  uVar36 = CONCAT44(uStack_94,local_98);
  local_a0 = 0x523d9a8;
  uStack_9c = 0x71;
  local_98 = 0;
  uStack_94 = 0;
  if (uVar36 != 0) {
    FUN_710392eb40(uVar36);
  }
  FUN_7103776640(&local_190,(long)param_3,(byte ****)"set_parts_class_star",uVar28,ppppbVar29,
                 param_5,param_6,param_7,param_8);
  uVar10 = local_188;
  FUN_7103778300(0x3f800000,local_188,(long)&local_158);
  FUN_7103776640(&local_1a0,(long)param_3,(byte ****)"set_parts_icon_new",uVar28,ppppbVar29,param_5,
                 param_6,param_7,param_8);
  uVar9 = local_198;
  FUN_7103778300(0x3f800000,local_198,0x71043cd335);
  FUN_7103776640(&local_1b0,(long)param_3,(byte ****)"set_parts_icon_condition",uVar28,ppppbVar29,
                 param_5,param_6,param_7,param_8);
  uVar36 = local_1a8;
  FUN_7103778300(0x3f800000,local_1a8,0x71043cd335);
  FUN_7103776640(&local_1c0,(long)param_3,(byte ****)"set_parts_icon_using",uVar28,ppppbVar29,
                 param_5,param_6,param_7,param_8);
  if ((ulong)(*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 3) <= uVar17)
  goto LAB_7101e3b6b8;
  uVar20 = FUN_710251a7e0(*DAT_7105329f98 + 0x38,**(short **)(*(long *)(param_1 + 8) + uVar17 * 8));
  uVar8 = local_1b8;
  if ((uVar20 & 1) == 0) {
    puVar25 = &DAT_71043cd335;
  }
  else {
    puVar25 = &DAT_710429257e;
  }
  FUN_7103778300(0x3f800000,local_1b8,(long)puVar25);
  FUN_7103776640(&local_1d0,(long)param_3,(byte ****)"set_parts_icon_indvi",uVar28,ppppbVar29,
                 param_5,param_6,param_7,param_8);
  uVar7 = local_1c8;
  FUN_7103778300(0x3f800000,local_1c8,0x71043cd335);
  FUN_7103776640(&local_1e0,(long)param_3,(byte ****)"set_parts_icon_skill",uVar28,ppppbVar29,
                 param_5,param_6,param_7,param_8);
  uVar6 = local_1d8;
  FUN_7103778300(0x3f800000,local_1d8,0x71043cd335);
  FUN_7103776640(&local_1f0,(long)param_3,(byte ****)"set_parts_icon_counter",uVar28,ppppbVar29,
                 param_5,param_6,param_7,param_8);
  uVar5 = local_1e8;
  FUN_7103778300(0x3f800000,local_1e8,0x71043cd335);
  FUN_7103776640(&local_200,(long)param_3,(byte ****)"set_parts_icon_super",uVar28,ppppbVar29,
                 param_5,param_6,param_7,param_8);
  uVar20 = local_1f8;
  lVar39 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
  if (bVar14 || bVar13) {
LAB_7101e3acf8:
    if (uVar3 == 0xffff) {
      uVar22 = 0xffffffff;
    }
    else {
      uVar22 = (ulong)*(ushort *)(lVar39 + lVar40 * 2 + 0x60);
    }
    uVar33 = (*(long *)(lVar39 + 0x28) - *(long *)(lVar39 + 0x20) >> 6) * -0x3333333333333333;
    puVar41 = (undefined2 *)(*(long *)(lVar39 + 0x20) + uVar22 * 0x140);
    if (uVar33 < uVar22 || uVar33 - uVar22 == 0) {
      puVar41 = &DAT_7105182b08;
    }
    if (puVar41[0x48] == 0) {
      pcVar24 = "off";
    }
    else {
      pcVar24 = "super";
    }
  }
  else {
    uVar4 = *(ushort *)(lVar39 + lVar40 * 2 + 0x60);
    uVar30 = (int)((ulong)(*(long *)(lVar39 + 0x28) - *(long *)(lVar39 + 0x20)) >> 6) * -0x33333333;
    if (((uVar30 <= uVar4) ||
        (uVar4 = *(ushort *)(lVar39 + (ulong)uVar4 * 2 + 0x1000), uVar30 <= uVar4)) ||
       (*(short *)(*(long *)(lVar39 + 0x20) + (ulong)uVar4 * 0x140) == -1)) goto LAB_7101e3acf8;
    pcVar24 = "pre_super";
  }
  FUN_7103778300(0x3f800000,local_1f8,(long)pcVar24);
  if ((ulong)(*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 3) <= uVar17) {
LAB_7101e3b6b8:
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  lVar39 = *DAT_7105329f98;
  uVar4 = **(ushort **)(*(long *)(param_1 + 8) + uVar17 * 8);
  if (uVar4 >> 4 < 0x177) {
    puVar41 = (undefined2 *)(*(long *)(lVar39 + 0x30) + (ulong)uVar4 * 0x50 + 72000);
  }
  else {
    puVar41 = &DAT_710532a878;
    if (((ushort)(uVar4 + 0xe890) < 100) &&
       (lVar34 = *(long *)(lVar39 + 0x30) + (ulong)(ushort)(uVar4 + 0xe890) * 0x50,
       *(short *)(lVar34 + 0x88cc8) != -1)) {
      puVar41 = (undefined2 *)(lVar34 + 0x88cc0);
    }
  }
  FUN_7103776640(&local_210,(long)param_3,(byte ****)"set_parts_icon_favorite",uVar28,ppppbVar29,
                 param_5,param_6,param_7,param_8);
  uVar17 = local_208;
  if ((*(byte *)(puVar41 + 0x1f) & 1) == 0) {
    puVar25 = &DAT_71043cd335;
  }
  else {
    puVar25 = &DAT_710429257e;
  }
  FUN_7103778300(0x3f800000,local_208,(long)puVar25);
  if (((bVar14 || bVar13) ||
      (lVar34 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8),
      (uint)((int)((ulong)(*(long *)(lVar34 + 0x28) - *(long *)(lVar34 + 0x20)) >> 6) * -0x33333333)
      <= (uint)*(ushort *)(lVar34 + lVar40 * 2 + 0x60))) ||
     (*(short *)(*(long *)(lVar39 + 0x30) + lVar40 * 0x24 + 0x20) == 0)) {
    FUN_7103778300(0x3f800000,(long)param_3[1],0x71043bec15);
    FUN_7103776910((undefined8 *)&local_a0,(long)param_3,(long ****)"txt_nohave",uVar28,ppppbVar29,
                   param_5,param_6,param_7,param_8);
    FUN_710377a120((long)&local_a0,"mnu_spirits_recall_not_have",uVar28,ppppbVar29,param_5,param_6,
                   param_7,param_8);
    uVar22 = CONCAT44(uStack_94,local_98);
    local_a0 = 0x523d9a8;
    uStack_9c = 0x71;
    local_98 = 0;
    uStack_94 = 0;
    if (uVar22 != 0) {
      FUN_710392eb40(uVar22);
    }
  }
  else {
    FUN_7103778300(0x3f800000,(long)param_3[1],0x71042d68b4);
  }
  bVar15 = FUN_7101e3b6d0(uVar3);
  if (bVar15) {
    FUN_7103778300(0x3f800000,(long)param_3[1],0x7104281086);
  }
  else {
    if (((bVar14 || bVar13) ||
        (lVar34 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8),
        (uint)((int)((ulong)(*(long *)(lVar34 + 0x28) - *(long *)(lVar34 + 0x20)) >> 6) *
              -0x33333333) <= (uint)*(ushort *)(lVar34 + lVar40 * 2 + 0x60))) ||
       ((*(byte *)(*(long *)(lVar39 + 0x30) + lVar40 * 0x24 + 1) >> 3 & 1) == 0)) {
      ppplVar21 = param_3[1];
      pcVar24 = "view_impossible";
    }
    else {
      ppplVar21 = param_3[1];
      pcVar24 = "view_impossible_owned";
    }
    FUN_7103778300(0x3f800000,(long)ppplVar21,(long)pcVar24);
  }
  switch(*(undefined4 *)(param_1 + 0x50)) {
  case 0:
  case 7:
  case 8:
    ppplVar21 = param_3[1];
    pcVar24 = "view_sort_level";
    break;
  case 1:
  case 2:
    ppplVar21 = param_3[1];
    pcVar24 = "view_sort_get";
    break;
  case 3:
    ppplVar21 = param_3[1];
    pcVar24 = "view_sort_atr";
    break;
  case 4:
    ppplVar21 = param_3[1];
    pcVar24 = "view_sort_owned_num";
    break;
  case 5:
  case 6:
    ppplVar21 = param_3[1];
    pcVar24 = "view_sort_class";
    break;
  case 9:
    FUN_7103778300(0x3f800000,(long)param_3[1],0x71043e0745);
    FUN_7103776910(&local_b0,(long)param_3,(long ****)"set_txt_num_status",uVar28,ppppbVar29,param_5
                   ,param_6,param_7,param_8);
    if (cVar2 != '\0') goto LAB_7101e3b1d8;
    lVar40 = *(long *)(*(long *)(param_1 + 8) + (ulong)(param_2 & 0xffff) * 8);
    local_a0 = local_a0 & 0xffffff00;
    uStack_9c = 0;
    local_98 = 0;
    local_90 = 0x52ffff0000000000;
    uStack_88 = 0;
    local_80 = 0;
    FUN_71025caab0((long)&local_a0,*(ushort *)(lVar40 + 8),(uint)*(ushort *)(lVar40 + 0x10));
    lVar40 = *local_a8;
    if (lVar40 != 0) {
      *(byte *)(lVar40 + 0x58) = *(byte *)(lVar40 + 0x58) | 1;
    }
    pcVar24 = "mnu_spirits_select_power_n";
    plVar16 = local_a8;
LAB_7101e3b4cc:
    FUN_710377a280((long)&local_b0,(byte *)pcVar24,1);
    local_b0 = &PTR_FUN_710523d9a8;
    local_a8 = (long *)0x0;
    goto joined_r0x007101e3b1f4;
  case 10:
    FUN_7103778300(0x3f800000,(long)param_3[1],0x7104401ab9);
    FUN_7103776910(&local_b0,(long)param_3,(long ****)"set_txt_num_status",uVar28,ppppbVar29,param_5
                   ,param_6,param_7,param_8);
    if (cVar2 == '\0') {
      lVar40 = *(long *)(*(long *)(param_1 + 8) + (ulong)(param_2 & 0xffff) * 8);
      local_a0 = local_a0 & 0xffffff00;
      uStack_9c = 0;
      local_98 = 0;
      local_90 = 0x52ffff0000000000;
      uStack_88 = 0;
      local_80 = 0;
      FUN_71025caab0((long)&local_a0,*(ushort *)(lVar40 + 8),(uint)*(ushort *)(lVar40 + 0x10));
      lVar40 = *local_a8;
      if (lVar40 != 0) {
        *(byte *)(lVar40 + 0x58) = *(byte *)(lVar40 + 0x58) | 1;
      }
      pcVar24 = "mnu_spirits_select_attack_n";
      plVar16 = local_a8;
      goto LAB_7101e3b4cc;
    }
    goto LAB_7101e3b1d8;
  case 0xb:
    FUN_7103778300(0x3f800000,(long)param_3[1],0x7104412eb0);
    FUN_7103776910(&local_b0,(long)param_3,(long ****)"set_txt_num_status",uVar28,ppppbVar29,param_5
                   ,param_6,param_7,param_8);
    if (cVar2 == '\0') {
      lVar40 = *(long *)(*(long *)(param_1 + 8) + (ulong)(param_2 & 0xffff) * 8);
      local_a0 = local_a0 & 0xffffff00;
      uStack_9c = 0;
      local_98 = 0;
      local_90 = 0x52ffff0000000000;
      uStack_88 = 0;
      local_80 = 0;
      FUN_71025caab0((long)&local_a0,*(ushort *)(lVar40 + 8),(uint)*(ushort *)(lVar40 + 0x10));
      lVar40 = *local_a8;
      if (lVar40 != 0) {
        *(byte *)(lVar40 + 0x58) = *(byte *)(lVar40 + 0x58) | 1;
      }
      pcVar24 = "mnu_spirits_select_defense_n";
      plVar16 = local_a8;
      goto LAB_7101e3b4cc;
    }
LAB_7101e3b1d8:
    plVar16 = local_a8;
    lVar40 = *local_a8;
    if (lVar40 != 0) {
      *(byte *)(lVar40 + 0x58) = *(byte *)(lVar40 + 0x58) & 0xfe;
    }
    local_b0 = &PTR_FUN_710523d9a8;
    local_a8 = (long *)0x0;
joined_r0x007101e3b1f4:
    if (plVar16 == (long *)0x0) goto switchD_7101e3afb4_default;
    goto LAB_7101e3b4e4;
  case 0xc:
    ppplVar21 = param_3[1];
    pcVar24 = "view_sort_strength";
    break;
  case 0xd:
    ppplVar21 = param_3[1];
    pcVar24 = "view_sort_series";
    break;
  case 0xe:
    ppplVar21 = param_3[1];
    pcVar24 = "view_sort_individuality";
    break;
  case 0xf:
    ppplVar21 = param_3[1];
    pcVar24 = "view_sort_style";
    break;
  case 0x10:
    ppplVar21 = param_3[1];
    pcVar24 = "view_sort_skill";
    break;
  case 0x11:
    ppplVar21 = param_3[1];
    pcVar24 = "view_sort_counter";
    break;
  case 0x12:
    FUN_7103778300(0x3f800000,(long)param_3[1],0x71042c5414);
    FUN_7103776910((undefined8 *)&local_a0,(long)param_3,(long ****)"set_txt_num_slot",uVar28,
                   ppppbVar29,param_5,param_6,param_7,param_8);
    if (cVar2 != '\0') goto LAB_7101e3b448;
    plVar16 = (long *)CONCAT44(uStack_94,local_98);
    lVar40 = *plVar16;
    if (lVar40 != 0) {
      *(byte *)(lVar40 + 0x58) = *(byte *)(lVar40 + 0x58) | 1;
    }
LAB_7101e3b430:
    FUN_710377a280((long)&local_a0,(byte *)"mnu_spirits_select_sort_n",1);
    goto LAB_7101e3b460;
  case 0x13:
    FUN_7103778300(0x3f800000,(long)param_3[1],0x71042c5414);
    FUN_7103776910((undefined8 *)&local_a0,(long)param_3,(long ****)"set_txt_num_slot",uVar28,
                   ppppbVar29,param_5,param_6,param_7,param_8);
    if (cVar2 != '\0') {
      uVar22 = (ulong)*(short *)(*(long *)(*(long *)(param_1 + 8) + (ulong)(param_2 & 0xffff) * 8) +
                                8);
      lVar40 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
      if (uVar22 != 0xffffffffffffffff) {
        uVar22 = (ulong)*(ushort *)(lVar40 + uVar22 * 2 + 0x60);
      }
      uVar33 = (*(long *)(lVar40 + 0x28) - *(long *)(lVar40 + 0x20) >> 6) * -0x3333333333333333;
      puVar41 = (undefined2 *)(*(long *)(lVar40 + 0x20) + uVar22 * 0x140);
      if (uVar33 < uVar22 || uVar33 - uVar22 == 0) {
        puVar41 = &DAT_7105182b08;
      }
      FUN_71032a0fd0(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x218),puVar41[0x35]);
      plVar16 = (long *)CONCAT44(uStack_94,local_98);
      lVar40 = *plVar16;
      if (lVar40 != 0) {
        *(byte *)(lVar40 + 0x58) = *(byte *)(lVar40 + 0x58) | 1;
      }
      goto LAB_7101e3b430;
    }
LAB_7101e3b448:
    plVar16 = (long *)CONCAT44(uStack_94,local_98);
    lVar40 = *plVar16;
    if (lVar40 != 0) {
      *(byte *)(lVar40 + 0x58) = *(byte *)(lVar40 + 0x58) & 0xfe;
    }
LAB_7101e3b460:
    local_a0 = 0x523d9a8;
    uStack_9c = 0x71;
    local_98 = 0;
    uStack_94 = 0;
    goto joined_r0x007101e3b1f4;
  case 0x14:
    ppplVar21 = param_3[1];
    pcVar24 = "view_sort_favorite";
    break;
  default:
    goto switchD_7101e3afb4_default;
  }
  FUN_7103778300(0x3f800000,(long)ppplVar21,(long)pcVar24);
  FUN_7103776910((undefined8 *)&local_a0,(long)param_3,(long ****)"set_txt_level",uVar28,ppppbVar29,
                 param_5,param_6,param_7,param_8);
  plVar16 = (long *)CONCAT44(uStack_94,local_98);
  lVar40 = *plVar16;
  if (cVar2 == '\0') {
    if (lVar40 != 0) {
      *(byte *)(lVar40 + 0x58) = *(byte *)(lVar40 + 0x58) | 1;
    }
    FUN_710377a280((long)&local_a0,(byte *)"mnu_spirits_select_lv",1);
  }
  else if (lVar40 != 0) {
    *(byte *)(lVar40 + 0x58) = *(byte *)(lVar40 + 0x58) & 0xfe;
  }
  uStack_94 = 0;
  local_98 = 0;
  uStack_9c = 0x71;
  local_a0 = 0x523d9a8;
  if (plVar16 != (long *)0x0) {
    uStack_94 = 0;
    local_98 = 0;
    uStack_9c = 0x71;
    local_a0 = 0x523d9a8;
LAB_7101e3b4e4:
    FUN_710392eb40((ulong)plVar16);
  }
switchD_7101e3afb4_default:
  local_210 = &PTR_FUN_710523d988;
  local_208 = 0;
  if (uVar17 != 0) {
    uVar22 = *(ulong *)(uVar17 + 0x18);
    *(undefined ***)(uVar17 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar17 + 0x18) = 0;
    if (uVar22 != 0) {
      FUN_710392eb40(uVar22);
    }
    FUN_710392eb40(uVar17);
  }
  local_200 = &PTR_FUN_710523d988;
  local_1f8 = 0;
  if (uVar20 != 0) {
    uVar17 = *(ulong *)(uVar20 + 0x18);
    *(undefined ***)(uVar20 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar20 + 0x18) = 0;
    if (uVar17 != 0) {
      FUN_710392eb40(uVar17);
    }
    FUN_710392eb40(uVar20);
  }
  local_1f0 = &PTR_FUN_710523d988;
  local_1e8 = 0;
  if (uVar5 != 0) {
    uVar17 = *(ulong *)(uVar5 + 0x18);
    *(undefined ***)(uVar5 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar5 + 0x18) = 0;
    if (uVar17 != 0) {
      FUN_710392eb40(uVar17);
    }
    FUN_710392eb40(uVar5);
  }
  local_1e0 = &PTR_FUN_710523d988;
  local_1d8 = 0;
  if (uVar6 != 0) {
    uVar17 = *(ulong *)(uVar6 + 0x18);
    *(undefined ***)(uVar6 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar6 + 0x18) = 0;
    if (uVar17 != 0) {
      FUN_710392eb40(uVar17);
    }
    FUN_710392eb40(uVar6);
  }
  local_1d0 = &PTR_FUN_710523d988;
  local_1c8 = 0;
  if (uVar7 != 0) {
    uVar17 = *(ulong *)(uVar7 + 0x18);
    *(undefined ***)(uVar7 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar7 + 0x18) = 0;
    if (uVar17 != 0) {
      FUN_710392eb40(uVar17);
    }
    FUN_710392eb40(uVar7);
  }
  local_1c0 = &PTR_FUN_710523d988;
  local_1b8 = 0;
  if (uVar8 != 0) {
    uVar17 = *(ulong *)(uVar8 + 0x18);
    *(undefined ***)(uVar8 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar8 + 0x18) = 0;
    if (uVar17 != 0) {
      FUN_710392eb40(uVar17);
    }
    FUN_710392eb40(uVar8);
  }
  local_1b0 = &PTR_FUN_710523d988;
  local_1a8 = 0;
  if (uVar36 != 0) {
    uVar17 = *(ulong *)(uVar36 + 0x18);
    *(undefined ***)(uVar36 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar36 + 0x18) = 0;
    if (uVar17 != 0) {
      FUN_710392eb40(uVar17);
    }
    FUN_710392eb40(uVar36);
  }
  local_1a0 = &PTR_FUN_710523d988;
  local_198 = 0;
  if (uVar9 != 0) {
    uVar17 = *(ulong *)(uVar9 + 0x18);
    *(undefined ***)(uVar9 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar9 + 0x18) = 0;
    if (uVar17 != 0) {
      FUN_710392eb40(uVar17);
    }
    FUN_710392eb40(uVar9);
  }
  local_190 = &PTR_FUN_710523d988;
  local_188 = 0;
  if (uVar10 != 0) {
    uVar17 = *(ulong *)(uVar10 + 0x18);
    *(undefined ***)(uVar10 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar10 + 0x18) = 0;
    if (uVar17 != 0) {
      FUN_710392eb40(uVar17);
    }
    FUN_710392eb40(uVar10);
  }
  local_180 = &PTR_FUN_710523d988;
  local_178 = 0;
  if (uVar37 != 0) {
    uVar17 = *(ulong *)(uVar37 + 0x18);
    *(undefined ***)(uVar37 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar37 + 0x18) = 0;
    if (uVar17 != 0) {
      FUN_710392eb40(uVar17);
    }
    FUN_710392eb40(uVar37);
  }
  local_170 = &PTR_FUN_710523d988;
  local_168 = 0;
  if (uVar11 != 0) {
    uVar17 = *(ulong *)(uVar11 + 0x18);
    *(undefined ***)(uVar11 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar11 + 0x18) = 0;
    if (uVar17 != 0) {
      FUN_710392eb40(uVar17);
    }
    FUN_710392eb40(uVar11);
  }
  local_d0 = &PTR_FUN_710523d9a8;
  local_c8 = 0;
  if (uVar19 != 0) {
    FUN_710392eb40(uVar19);
  }
  local_c0 = &PTR_FUN_710523d9a8;
  local_b8 = (long *)0x0;
  if (plVar18 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar18);
  }
  return;
}

