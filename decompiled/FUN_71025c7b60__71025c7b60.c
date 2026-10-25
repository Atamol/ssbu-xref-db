// addr:      71025c7b60
// offset:    0x25c7b60
// name:      FUN_71025c7b60
// mangled:   
// signature: undefined __cdecl FUN_71025c7b60(long * param_1, long param_2, long param_3, byte * * * * param_4, ulong param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71025c7b60(long *param_1,long param_2,long param_3,byte ****param_4,ulong param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined2 *puVar1;
  long lVar2;
  ushort uVar3;
  ushort uVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long *plVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  undefined8 extraout_x1;
  char *pcVar15;
  undefined8 uVar16;
  long *********ppppppppplVar17;
  ulong uVar18;
  long ****pppplVar19;
  byte ****ppppbVar20;
  long ****pppplVar21;
  long lVar22;
  undefined2 *puVar23;
  byte bVar24;
  ulong uVar25;
  ulong uVar26;
  long lVar27;
  undefined8 *puVar28;
  uint uVar29;
  uint uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined **local_240;
  long *local_238;
  undefined **local_230;
  long *local_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined **local_1f8;
  ulong local_1f0;
  undefined **local_1e8;
  ulong local_1e0;
  undefined **local_1d8;
  ulong local_1d0 [8];
  undefined **local_190;
  ulong local_188;
  undefined **local_180;
  uint local_178;
  float fStack_174;
  float local_170;
  undefined8 local_168;
  undefined4 local_160;
  undefined **local_138;
  ulong local_130;
  uint auStack_128 [2];
  undefined1 auStack_120 [64];
  undefined8 local_e0;
  long *local_d8 [9];
  
  lVar27 = *(long *)(DAT_710532f730 + 8);
  lVar22 = *(long *)(lVar27 + 0x1d8);
  uVar4 = (ushort)param_4;
  if ((~(uint)param_4 & 0xffff) == 0) {
    uVar26 = 0xffffffff;
  }
  else {
    uVar26 = (ulong)*(ushort *)(lVar22 + (((long)param_4 << 0x30) >> 0x2f) + 0x60);
  }
  lVar2 = *(long *)(lVar22 + 0x20);
  uVar25 = (*(long *)(lVar22 + 0x28) - lVar2 >> 6) * -0x3333333333333333;
  puVar1 = (undefined2 *)(lVar2 + uVar26 * 0x140);
  if (uVar25 < uVar26 || uVar25 - uVar26 == 0) {
    puVar1 = &DAT_7105182b08;
  }
  if ((uVar4 != 0xffff && (short)uVar4 < 2000) &&
     (uVar3 = *(ushort *)(lVar22 + (((long)param_4 << 0x30) >> 0x2f) + 0x60), uVar26 = (ulong)uVar3,
     (uint)uVar3 < (uint)uVar25)) {
    puVar23 = (undefined2 *)(lVar2 + uVar26 * 0x140);
    if (uVar25 < uVar26 || uVar25 - uVar26 == 0) {
      puVar23 = &DAT_7105182b08;
    }
    if (*(char *)(puVar23 + 0x2f) == '\0') {
      if (2 < *(byte *)(puVar23 + 0x36) - 1) goto LAB_71025c7c88;
      uVar29 = 0x20301 >> (ulong)((*(byte *)(puVar23 + 0x36) - 1 & 3) << 3);
    }
    else {
      uVar29 = 4;
    }
  }
  else {
LAB_71025c7c88:
    uVar29 = 0;
  }
  uVar16 = 0;
  ppppbVar20 = param_4;
  pppplVar21 = (long ****)param_5;
  FUN_710339dde0(auStack_128,(char)uVar29,'\0');
  FUN_7103778300(0x3f800000,*(long *)(param_2 + 8),(long)auStack_120);
  FUN_7103778300(0x3f800000,*(long *)(param_3 + 8),(long)auStack_120);
  FUN_7103776640(&local_138,param_2,(byte ****)"set_parts_icon_atr",uVar16,ppppbVar20,pppplVar21,
                 param_6,param_7,param_8);
  uVar16 = 0;
  FUN_710339dde0((uint *)&local_e0,(char)uVar29,'\0');
  uVar26 = local_130;
  FUN_7103778300(0x3f800000,local_130,(long)local_d8);
  FUN_7103776910(&local_180,(long)&local_138,(long ****)"set_txt_num",uVar16,ppppbVar20,pppplVar21,
                 param_6,param_7,param_8);
  plVar10 = (long *)CONCAT44(fStack_174,local_178);
  lVar22 = *plVar10;
  if (lVar22 != 0) {
    *(byte *)(lVar22 + 0x58) = *(byte *)(lVar22 + 0x58) & 0xfe;
  }
  FUN_7103778300(0x3f800000,uVar26,0x71043ab85a);
  local_180 = &PTR_FUN_710523d9a8;
  local_178 = 0;
  fStack_174 = 0.0;
  if (plVar10 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar10);
  }
  if ((uVar29 & 0xff) == 4) {
    lVar22 = *(long *)(DAT_710532f730 + 8);
    FUN_71032a0c90((uint *)&local_e0,lVar22 + 0x210,puVar1[0x35],ppppbVar20,pppplVar21,param_6,
                   param_7,param_8);
    ppppppppplVar17 = (long *********)(ulong)(ushort)puVar1[0x35];
    FUN_71032a0e30((uint *)&local_180,lVar22 + 0x210,puVar1[0x35],ppppbVar20,pppplVar21,param_6,
                   param_7,param_8);
    FUN_7103776640(&local_1d8,param_3,(byte ****)"set_parts_it_supporter",ppppppppplVar17,ppppbVar20
                   ,pppplVar21,param_6,param_7,param_8);
    uVar26 = FUN_71032a1630(*(long *)(lVar22 + 0x218),puVar1[0x35]);
    local_190 = (undefined **)FUN_7103238e70(uVar26,0x13);
    if (((ulong)local_190 & 0xffffffffff) != 0) {
      lVar27 = *param_1;
      ppppppppplVar17 = (long *********)(long)*(int *)(lVar27 + 0x70);
      ppppbVar20 = (byte ****)(ulong)*(uint *)(lVar27 + 0x68);
      FUN_710323c4e0(lVar27,(ulong *)&local_190,ppppppppplVar17,ppppbVar20,pppplVar21,param_6,
                     param_7,param_8);
    }
    plVar10 = FUN_710323f760(param_1,uVar26,(long ****)ppppppppplVar17,ppppbVar20,pppplVar21,param_6
                             ,param_7,param_8);
    FUN_7103776910(&local_190,(long)&local_1d8,(long ****)"set_pic_icon",ppppppppplVar17,ppppbVar20,
                   pppplVar21,param_6,param_7,param_8);
    uVar26 = local_188;
    FUN_7103778b80(local_188,(long)plVar10,ppppppppplVar17,ppppbVar20,pppplVar21,param_6,param_7,
                   param_8);
    local_190 = &PTR_FUN_710523d9a8;
    local_188 = 0;
    if (uVar26 != 0) {
      FUN_710392eb40(uVar26);
    }
    FUN_7103776910(&local_190,(long)&local_1d8,(long ****)"set_txt_help",ppppppppplVar17,ppppbVar20,
                   pppplVar21,param_6,param_7,param_8);
    FUN_710377a120((long)&local_190,(char *)local_d8,ppppppppplVar17,ppppbVar20,pppplVar21,param_6,
                   param_7,param_8);
    uVar26 = local_188;
    local_190 = &PTR_FUN_710523d9a8;
    local_188 = 0;
    if (uVar26 != 0) {
      FUN_710392eb40(uVar26);
    }
    uVar26 = local_1d0[0];
    local_1d8 = &PTR_FUN_710523d988;
    local_1d0[0] = 0;
    if (uVar26 != 0) {
      uVar25 = *(ulong *)(uVar26 + 0x18);
      *(undefined ***)(uVar26 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar26 + 0x18) = 0;
      if (uVar25 != 0) {
        FUN_710392eb40(uVar25);
      }
      FUN_710392eb40(uVar26);
    }
    FUN_7103776640(&local_1d8,param_3,(byte ****)"set_parts_text_scroll",ppppppppplVar17,ppppbVar20,
                   pppplVar21,param_6,param_7,param_8);
    FUN_7103776910(&local_190,(long)&local_1d8,(long ****)"set_txt_mask",ppppppppplVar17,ppppbVar20,
                   pppplVar21,param_6,param_7,param_8);
    FUN_710377a120((long)&local_190,(char *)&local_178,ppppppppplVar17,ppppbVar20,pppplVar21,param_6
                   ,param_7,param_8);
    uVar26 = local_188;
    local_190 = &PTR_FUN_710523d9a8;
    local_188 = 0;
    if (uVar26 != 0) {
      FUN_710392eb40(uVar26);
    }
    FUN_7103776910(&local_190,(long)&local_1d8,(long ****)"set_txt_main",ppppppppplVar17,ppppbVar20,
                   pppplVar21,param_6,param_7,param_8);
    FUN_710377a120((long)&local_190,(char *)&local_178,ppppppppplVar17,ppppbVar20,pppplVar21,param_6
                   ,param_7,param_8);
    uVar26 = local_188;
    local_190 = &PTR_FUN_710523d9a8;
    local_188 = 0;
    if (uVar26 != 0) {
      FUN_710392eb40(uVar26);
    }
    uVar26 = local_1d0[0];
    FUN_7103778950(*(long *)(local_1d0[0] + 8));
    if (*(long *)(uVar26 + 8) != 0) {
      puVar28 = *(undefined8 **)(*(long *)(uVar26 + 8) + 0x78);
      if (((DAT_710593ba40 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_710593ba40), iVar9 != 0))
      {
        if (((DAT_710593ba48 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(&DAT_710593ba48), iVar9 != 0)) {
          DAT_710593ba50 = 0;
          __cxa_guard_release(&DAT_710593ba48);
        }
        DAT_710593ba58 = &DAT_710593ba50;
        __cxa_guard_release(&DAT_710593ba40);
      }
      if (puVar28 != (undefined8 *)0x0) {
        for (puVar11 = (undefined8 *)(**(code **)*puVar28)(puVar28); puVar11 != (undefined8 *)0x0;
            puVar11 = (undefined8 *)*puVar11) {
          if ((undefined8 **)puVar11 == &DAT_710593ba58) {
            lVar27 = puVar28[3];
            *(undefined4 *)(puVar28 + 0xb) = *(undefined4 *)((long)puVar28 + 0x54);
            if (lVar27 != 0) {
              *(undefined4 *)(lVar27 + 0x30) = *(undefined4 *)((long)puVar28 + 0x54);
              *(byte *)(lVar27 + 0x58) = *(byte *)(lVar27 + 0x58) | 0x10;
            }
            lVar27 = puVar28[4];
            if (lVar27 != 0) {
              *(undefined4 *)(lVar27 + 0x30) = *(undefined4 *)(puVar28 + 0xb);
              *(byte *)(lVar27 + 0x58) = *(byte *)(lVar27 + 0x58) | 0x10;
            }
            if ((long *)puVar28[5] != (long *)0x0) {
              (**(code **)(*(long *)puVar28[5] + 0x180))(0);
            }
            plVar10 = (long *)puVar28[6];
            if (plVar10 != (long *)0x0) {
              if (*(char *)((long)puVar28 + 99) == '\0') {
                (**(code **)(*plVar10 + 0x180))(0);
              }
              else {
                (**(code **)(*plVar10 + 400))();
              }
            }
            *(undefined2 *)((long)puVar28 + 100) = 0;
            break;
          }
        }
      }
    }
    uVar26 = local_1d0[0];
    local_1d8 = &PTR_FUN_710523d988;
    local_1d0[0] = 0;
    if (uVar26 != 0) {
      uVar25 = *(ulong *)(uVar26 + 0x18);
      *(undefined ***)(uVar26 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar26 + 0x18) = 0;
      if (uVar25 != 0) {
        FUN_710392eb40(uVar25);
      }
      FUN_710392eb40(uVar26);
    }
    FUN_7103776640(&local_1d8,param_3,(byte ****)"set_part_icon_counter",ppppppppplVar17,ppppbVar20,
                   pppplVar21,param_6,param_7,param_8);
    uVar26 = local_1d0[0];
    FUN_7103778300(0x3f800000,local_1d0[0],0x71043cd335);
    local_1d8 = &PTR_FUN_710523d988;
    local_1d0[0] = 0;
    if (uVar26 != 0) {
      uVar25 = *(ulong *)(uVar26 + 0x18);
      *(undefined ***)(uVar26 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar26 + 0x18) = 0;
      if (uVar25 != 0) {
        FUN_710392eb40(uVar25);
      }
      FUN_710392eb40(uVar26);
    }
    uVar26 = FUN_71032a0fd0(*(long *)(lVar22 + 0x218),puVar1[0x35]);
    FUN_71003a4ca0((uint *)&local_1d8,"slot_0%d",(ulong)((uint)uVar26 & 0xff),ppppppppplVar17,
                   ppppbVar20,pppplVar21,param_6,param_7,param_8);
    FUN_7103778300(0x3f800000,*(long *)(param_3 + 8),(long)local_1d0);
    uVar26 = local_130;
    goto LAB_71025c8b60;
  }
  uVar25 = 1;
  local_180 = (undefined **)0x1;
  local_178 = local_178 & 0xffffff00;
  fStack_174 = 0.0;
  local_170 = 0.0;
  local_168 = 0x52ffff0000000000;
  uVar30 = (uint)param_5;
  local_160 = 0;
  if ((~uVar30 & 0xffff) == 0) {
    iVar9 = 0;
  }
  else {
    if ((uVar30 >> 4 & 0xfff) < 0x177) {
      puVar23 = (undefined2 *)
                (*(long *)(*DAT_7105329f98 + 0x30) + (param_5 & 0xffff) * 0x50 + 72000);
    }
    else {
      puVar23 = &DAT_710532a878;
      if (((uVar30 - 6000 & 0xffff) < 100) &&
         (lVar22 = *(long *)(*DAT_7105329f98 + 0x30) + ((ulong)(uVar30 - 6000) & 0xffff) * 0x50,
         *(short *)(lVar22 + 0x88cc8) != -1)) {
        puVar23 = (undefined2 *)(lVar22 + 0x88cc0);
      }
    }
    uVar25 = (ulong)(ushort)puVar23[8];
    iVar9 = *(int *)(puVar23 + 6);
  }
  uVar30 = (uint)uVar25;
  uVar18 = uVar25;
  FUN_71025ca840((int *)&local_180,uVar4,uVar30);
  FUN_71025cb8d0((long)&local_180);
  FUN_7103776910(&local_e0,param_2,(long ****)"set_txt_lv",uVar18,ppppbVar20,pppplVar21,param_6,
                 param_7,param_8);
  uVar16 = 1;
  FUN_710377a280((long)&local_e0,(byte *)"mnu_spirits_select_lv",1);
  plVar10 = local_d8[0];
  local_e0 = &PTR_FUN_710523d9a8;
  local_d8[0] = (long *)0x0;
  if (plVar10 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar10);
  }
  if (uVar30 == 99) {
    FUN_7103776910(&local_e0,param_2,(long ****)"set_txt_level_max",uVar16,uVar25,pppplVar21,param_6
                   ,param_7,param_8);
    uVar25 = 99;
    uVar16 = 1;
    FUN_710377a280((long)&local_e0,(byte *)"mnu_spirits_select_lv",1);
    plVar10 = local_d8[0];
    local_e0 = &PTR_FUN_710523d9a8;
    local_d8[0] = (long *)0x0;
    if (plVar10 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar10);
    }
    FUN_7103776910(&local_e0,param_2,(long ****)"set_bar_exp",uVar16,uVar25,pppplVar21,param_6,
                   param_7,param_8);
    plVar10 = local_d8[0];
    lVar22 = *local_d8[0];
    if (lVar22 != 0) {
      *(undefined1 **)(lVar22 + 0x48) = &DAT_3f8000003f800000;
      *(byte *)(lVar22 + 0x58) = *(byte *)(lVar22 + 0x58) | 0x10;
    }
    local_e0 = &PTR_FUN_710523d9a8;
    local_d8[0] = (long *)0x0;
    if (plVar10 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar10);
    }
    lVar22 = *(long *)(param_2 + 8);
    pcVar15 = "lv_max";
  }
  else {
    iVar7 = FUN_71025c9e50(uVar4,uVar30);
    iVar8 = FUN_71025c9e50(uVar4,uVar30 + 1);
    if (iVar8 - iVar7 == 0) {
      fVar34 = 0.0;
    }
    else {
      fVar34 = (float)(uint)(iVar9 - iVar7) / (float)(uint)(iVar8 - iVar7);
    }
    FUN_7103776910(&local_e0,param_2,(long ****)"set_bar_exp",uVar16,uVar25,pppplVar21,param_6,
                   param_7,param_8);
    plVar10 = local_d8[0];
    lVar22 = *local_d8[0];
    if (lVar22 != 0) {
      *(undefined4 *)(lVar22 + 0x4c) = 0x3f800000;
      *(float *)(lVar22 + 0x48) = fVar34;
      *(byte *)(lVar22 + 0x58) = *(byte *)(lVar22 + 0x58) | 0x10;
    }
    local_e0 = &PTR_FUN_710523d9a8;
    local_d8[0] = (long *)0x0;
    if (plVar10 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar10);
    }
    lVar22 = *(long *)(param_2 + 8);
    pcVar15 = "lv_normal";
  }
  FUN_7103778300(0x3f800000,lVar22,(long)pcVar15);
  FUN_7103776910(&local_e0,param_2,(long ****)"set_txt_param_attacker",uVar16,uVar25,pppplVar21,
                 param_6,param_7,param_8);
  plVar10 = local_d8[0];
  lVar22 = *local_d8[0];
  if (lVar22 != 0) {
    *(byte *)(lVar22 + 0x58) = *(byte *)(lVar22 + 0x58) & 0xfe;
  }
  local_e0 = &PTR_FUN_710523d9a8;
  local_d8[0] = (long *)0x0;
  if (plVar10 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar10);
  }
  FUN_7103776910(&local_e0,param_2,(long ****)"set_txt_offense",uVar16,uVar25,pppplVar21,param_6,
                 param_7,param_8);
  fVar34 = fStack_174;
  uVar25 = (ulong)(uint)(int)fStack_174;
  uVar16 = 1;
  FUN_710377a280((long)&local_e0,(byte *)"mnu_spirits_setorg_org_attack_n",1);
  plVar10 = local_d8[0];
  local_e0 = &PTR_FUN_710523d9a8;
  local_d8[0] = (long *)0x0;
  if (plVar10 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar10);
  }
  FUN_7103776910(&local_e0,param_2,(long ****)"set_txt_defense",uVar16,uVar25,pppplVar21,param_6,
                 param_7,param_8);
  fVar33 = local_170;
  ppppbVar20 = (byte ****)(ulong)(uint)(int)local_170;
  pppplVar19 = (long ****)0x1;
  FUN_710377a280((long)&local_e0,(byte *)"mnu_spirits_setorg_org_defense_n",1);
  plVar10 = local_d8[0];
  local_e0 = &PTR_FUN_710523d9a8;
  local_d8[0] = (long *)0x0;
  if (plVar10 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar10);
  }
  fVar32 = fVar34 / 10000.0;
  fVar35 = fVar33;
  if (fVar33 <= fVar34) {
    fVar35 = fVar34;
  }
  fVar34 = fVar32;
  if (1.0 < fVar32) {
    fVar34 = 1.0;
  }
  fVar33 = fVar33 / 10000.0;
  fVar31 = 0.0;
  if (0.0 <= fVar32) {
    fVar31 = fVar34;
  }
  fVar34 = fVar33;
  if (1.0 < fVar33) {
    fVar34 = 1.0;
  }
  fVar32 = 0.0;
  if (0.0 <= fVar33) {
    fVar32 = fVar34;
  }
  if (1.0 <= fVar35) {
    if (10000.0 < fVar35) {
      fVar35 = 10000.0;
    }
    fVar35 = fVar35 / 10000.0;
  }
  else {
    fVar35 = 0.0001;
  }
  fVar34 = *(float *)(*DAT_7105329fa0 + 0x2d0);
  if (*(float *)(*DAT_7105329fa0 + 0x2d0) <= 0.001) {
    fVar34 = 0.001;
  }
  fVar33 = powf(ABS(1.0 - fVar35),fVar34);
  fVar34 = powf(fVar35,1.0 / fVar34);
  fVar35 = (((1.0 - fVar33) + fVar34) * 0.5) / fVar35;
  fVar31 = fVar31 * fVar35;
  fVar32 = fVar32 * fVar35;
  fVar34 = fVar31;
  if (1.0 < fVar31) {
    fVar34 = 1.0;
  }
  fVar33 = fVar32;
  if (1.0 < fVar32) {
    fVar33 = 1.0;
  }
  FUN_7103776910(&local_1d8,param_2,(long ****)"set_bar_offense",pppplVar19,ppppbVar20,pppplVar21,
                 param_6,param_7,param_8);
  FUN_7103776910(&local_190,param_2,(long ****)"set_bar_offense_sdw",pppplVar19,ppppbVar20,
                 pppplVar21,param_6,param_7,param_8);
  FUN_7103776910(&local_1e8,param_2,(long ****)"set_bar_defense",pppplVar19,ppppbVar20,pppplVar21,
                 param_6,param_7,param_8);
  FUN_7103776910(&local_1f8,param_2,(long ****)"set_bar_defense_sdw",pppplVar19,ppppbVar20,
                 pppplVar21,param_6,param_7,param_8);
  uVar25 = local_1d0[0];
  if (*(long **)(local_1d0[0] + 8) == (long *)0x0) {
    uVar18 = _ConstantZero;
    if (((*(long *)(local_1d0[0] + 0x18) != 0) &&
        (lVar22 = *(long *)(*(long *)(local_1d0[0] + 0x18) + 0x118), lVar22 != 0)) &&
       ((*(byte *)(lVar22 + 0x14) & 3) != 0)) {
      plVar10 = *(long **)(*(long *)(lVar22 + 0x18) + 8);
      goto joined_r0x0071025c83e4;
    }
  }
  else {
    lVar22 = FUN_71000597e0(*(long **)(local_1d0[0] + 8));
    uVar18 = _ConstantZero;
    if ((lVar22 != 0) && ((*(byte *)(lVar22 + 0x14) & 3) != 0)) {
      plVar10 = *(long **)(*(long *)(lVar22 + 0x18) + 8);
joined_r0x0071025c83e4:
      _ConstantZero = uVar18;
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x20))(&local_e0);
        uVar30 = NEON_ucvtf((uint)(ushort)local_e0);
        NEON_ucvtf((uint)local_e0._2_2_);
        uVar18 = (ulong)uVar30;
      }
    }
  }
  uStack_208 = uRam0000007107459008;
  fVar35 = 0.93;
  if (0.0 <= fVar31) {
    fVar35 = 1.0 - (fVar34 * 0.93 + 0.07);
  }
  local_210 = CONCAT44((int)(_ConstantZero >> 0x20),-(fVar35 * (float)uVar18));
  FUN_7103779770(1.0,local_1d0[0],&local_210);
  uVar6 = local_188;
  FUN_7103779770(1.0,local_188,&local_210);
  uVar5 = local_1e0;
  fVar34 = 0.93;
  if (0.0 <= fVar32) {
    fVar34 = 1.0 - (fVar33 * 0.93 + 0.07);
  }
  uStack_218 = uRam0000007107459008;
  local_220 = CONCAT44((int)(_ConstantZero >> 0x20),-(fVar34 * (float)uVar18));
  FUN_7103779770(1.0,local_1e0,&local_220);
  uVar18 = local_1f0;
  FUN_7103779770(1.0,local_1f0,&local_220);
  FUN_7103776290(&local_230,extraout_x1,pppplVar19,ppppbVar20,pppplVar21,param_6,param_7,param_8);
  switch(uVar29 & 0xff) {
  case 0:
    pcVar15 = "set_parts_it_non";
    break;
  case 1:
    pcVar15 = "set_parts_it_offense";
    break;
  case 2:
    pcVar15 = "set_parts_it_defense";
    break;
  case 3:
    pcVar15 = "set_parts_it_throw";
    break;
  default:
    goto switchD_71025c84e4_default;
  }
  FUN_7103776640(&local_e0,param_3,(byte ****)pcVar15,pppplVar19,ppppbVar20,pppplVar21,param_6,
                 param_7,param_8);
  plVar13 = local_d8[0];
  plVar10 = local_228;
  local_d8[0] = (long *)0x0;
  local_228 = plVar13;
  if (plVar10 != (long *)0x0) {
    uVar12 = plVar10[3];
    plVar10[2] = (long)&PTR_FUN_710523d9a8;
    plVar10[3] = 0;
    if (uVar12 != 0) {
      FUN_710392eb40(uVar12);
    }
    FUN_710392eb40((ulong)plVar10);
  }
  local_e0 = &PTR_FUN_710523d988;
  local_d8[0] = (long *)0x0;
switchD_71025c84e4_default:
  uVar3 = puVar1[0x35];
  ppppppppplVar17 = (long *********)(ulong)uVar3;
  if (uVar3 == 0) {
    if (uVar4 != 0xffff && (short)uVar4 < 2000) {
      lVar22 = *(long *)(lVar27 + 0x1d8);
      uVar4 = *(ushort *)(lVar22 + (((long)param_4 << 0x30) >> 0x2f) + 0x60);
      uVar29 = (int)((ulong)(*(long *)(lVar22 + 0x28) - *(long *)(lVar22 + 0x20)) >> 6) *
               -0x33333333;
      if (((uVar4 < uVar29) &&
          (uVar4 = *(ushort *)(lVar22 + (ulong)uVar4 * 2 + 0x1000), uVar4 < uVar29)) &&
         (*(short *)(*(long *)(lVar22 + 0x20) + (ulong)uVar4 * 0x140) != -1)) {
        FUN_7103776910(&local_e0,(long)&local_230,(long ****)"set_txt_help",0,ppppbVar20,pppplVar21,
                       param_6,param_7,param_8);
        FUN_710377a120((long)&local_e0,"mnu_spirits_select_grade_up_99",ppppppppplVar17,ppppbVar20,
                       pppplVar21,param_6,param_7,param_8);
        plVar10 = local_d8[0];
        local_e0 = &PTR_FUN_710523d9a8;
        local_d8[0] = (long *)0x0;
        if (plVar10 != (long *)0x0) {
          FUN_710392eb40((ulong)plVar10);
        }
        local_e0 = (undefined **)FUN_7103238e70(0x71ffff14e11d26c7,0x13);
        if (((ulong)local_e0 & 0xffffffffff) != 0) {
          lVar22 = *param_1;
          ppppppppplVar17 = (long *********)(long)*(int *)(lVar22 + 0x70);
          ppppbVar20 = (byte ****)(ulong)*(uint *)(lVar22 + 0x68);
          FUN_710323c4e0(lVar22,&local_e0,ppppppppplVar17,ppppbVar20,pppplVar21,param_6,param_7,
                         param_8);
        }
        plVar13 = FUN_710323f760(param_1,0x71ffff14e11d26c7,(long ****)ppppppppplVar17,ppppbVar20,
                                 pppplVar21,param_6,param_7,param_8);
        FUN_7103776910(&local_e0,(long)&local_230,(long ****)"set_pic_icon",ppppppppplVar17,
                       ppppbVar20,pppplVar21,param_6,param_7,param_8);
        plVar10 = local_d8[0];
        FUN_7103778b80((long)local_d8[0],(long)plVar13,ppppppppplVar17,ppppbVar20,pppplVar21,param_6
                       ,param_7,param_8);
        local_e0 = &PTR_FUN_710523d9a8;
        local_d8[0] = (long *)0x0;
        goto joined_r0x0071025c8744;
      }
    }
    FUN_7103776910(&local_e0,(long)&local_230,(long ****)"set_txt_help",0,ppppbVar20,pppplVar21,
                   param_6,param_7,param_8);
    FUN_710377a120((long)&local_e0,"",ppppppppplVar17,ppppbVar20,pppplVar21,param_6,param_7,param_8)
    ;
    plVar10 = local_d8[0];
    local_e0 = &PTR_FUN_710523d9a8;
    local_d8[0] = (long *)0x0;
    if (plVar10 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar10);
    }
    FUN_7103776910(&local_e0,(long)&local_230,(long ****)"set_pic_icon",ppppppppplVar17,ppppbVar20,
                   pppplVar21,param_6,param_7,param_8);
    plVar10 = local_d8[0];
    FUN_71037790a0((long)local_d8[0],1,ppppppppplVar17,ppppbVar20,pppplVar21,param_6,param_7,param_8
                  );
    local_e0 = &PTR_FUN_710523d9a8;
    local_d8[0] = (long *)0x0;
    if (plVar10 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar10);
    }
  }
  else {
    lVar22 = *(long *)(DAT_710532f730 + 8);
    FUN_71032a0c90((uint *)&local_e0,lVar22 + 0x210,uVar3,ppppbVar20,pppplVar21,param_6,param_7,
                   param_8);
    FUN_7103776910(&local_240,(long)&local_230,(long ****)"set_txt_help",ppppppppplVar17,ppppbVar20,
                   pppplVar21,param_6,param_7,param_8);
    FUN_710377a120((long)&local_240,(char *)local_d8,ppppppppplVar17,ppppbVar20,pppplVar21,param_6,
                   param_7,param_8);
    plVar10 = local_238;
    local_240 = &PTR_FUN_710523d9a8;
    local_238 = (long *)0x0;
    if (plVar10 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar10);
    }
    uVar12 = FUN_71032a1630(*(long *)(lVar22 + 0x218),puVar1[0x35]);
    local_240 = (undefined **)FUN_7103238e70(uVar12,0x13);
    if (((ulong)local_240 & 0xffffffffff) != 0) {
      lVar22 = *param_1;
      ppppppppplVar17 = (long *********)(long)*(int *)(lVar22 + 0x70);
      ppppbVar20 = (byte ****)(ulong)*(uint *)(lVar22 + 0x68);
      FUN_710323c4e0(lVar22,(ulong *)&local_240,ppppppppplVar17,ppppbVar20,pppplVar21,param_6,
                     param_7,param_8);
    }
    plVar13 = FUN_710323f760(param_1,uVar12,(long ****)ppppppppplVar17,ppppbVar20,pppplVar21,param_6
                             ,param_7,param_8);
    FUN_7103776910(&local_240,(long)&local_230,(long ****)"set_pic_icon",ppppppppplVar17,ppppbVar20,
                   pppplVar21,param_6,param_7,param_8);
    plVar10 = local_238;
    FUN_7103778b80((long)local_238,(long)plVar13,ppppppppplVar17,ppppbVar20,pppplVar21,param_6,
                   param_7,param_8);
    local_240 = &PTR_FUN_710523d9a8;
    local_238 = (long *)0x0;
joined_r0x0071025c8744:
    if (plVar10 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar10);
    }
  }
  FUN_71003a4ca0((uint *)&local_e0,"slot_0%d",(ulong)*(byte *)((long)puVar1 + 0x69),ppppppppplVar17,
                 ppppbVar20,pppplVar21,param_6,param_7,param_8);
  FUN_7103778300(0x3f800000,*(long *)(param_3 + 8),(long)local_d8);
  uVar12 = FUN_710329a390(*(long *)(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x188) + 8),
                          0xda9120d1c);
  uVar14 = *(ulong *)(puVar1 + 0x30);
  if (((((uVar14 & 0xff00000000000000) == 0x2d00000000000000) && ((uVar14 & 0xffffffffff) != 0)) &&
      ((uVar12 & 0xff00000000000000) == 0x2d00000000000000)) && ((uVar12 & 0xffffffffff) != 0)) {
    if (((uVar12 ^ uVar14) & 0xffffffffff) == 0) goto LAB_71025c8950;
LAB_71025c8840:
    local_240 = (undefined **)FUN_7103238d60(uVar14,0x11);
    if (((ulong)local_240 & 0xffffffffff) != 0) {
      lVar22 = *param_1;
      ppppbVar20 = (byte ****)(ulong)*(uint *)(lVar22 + 0x68);
      FUN_710323c4e0(lVar22,(ulong *)&local_240,(long *********)(long)*(int *)(lVar22 + 0x70),
                     ppppbVar20,pppplVar21,param_6,param_7,param_8);
    }
    ppppppppplVar17 = (long *********)&DAT_00000011;
    plVar13 = FUN_710323f600(param_1,*(ulong *)(puVar1 + 0x30),(long ****)&DAT_00000011,ppppbVar20,
                             pppplVar21,param_6,param_7,param_8);
    FUN_7103776910(&local_240,param_3,(long ****)"set_rep_series",ppppppppplVar17,ppppbVar20,
                   pppplVar21,param_6,param_7,param_8);
    plVar10 = local_238;
    FUN_7103778b80((long)local_238,(long)plVar13,ppppppppplVar17,ppppbVar20,pppplVar21,param_6,
                   param_7,param_8);
    local_240 = &PTR_FUN_710523d9a8;
    local_238 = (long *)0x0;
    if (plVar10 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar10);
    }
    FUN_7103776910(&local_240,param_3,(long ****)"set_rep_series",ppppppppplVar17,ppppbVar20,
                   pppplVar21,param_6,param_7,param_8);
    plVar10 = local_238;
    lVar22 = *local_238;
    if (lVar22 != 0) {
      *(byte *)(lVar22 + 0x58) = *(byte *)(lVar22 + 0x58) | 1;
    }
    local_240 = &PTR_FUN_710523d9a8;
    local_238 = (long *)0x0;
    if (plVar10 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar10);
    }
    FUN_7103776910(&local_240,param_3,(long ****)"circle_series",ppppppppplVar17,ppppbVar20,
                   pppplVar21,param_6,param_7,param_8);
    lVar22 = *local_238;
    plVar10 = local_238;
    if (lVar22 != 0) {
      bVar24 = *(byte *)(lVar22 + 0x58) | 1;
      goto LAB_71025c89b0;
    }
  }
  else {
    if (((uVar12 & 0xffffffffff) != 0 && (uVar12 & 0xff00000000000000) == 0x2d00000000000000) !=
        ((uVar14 & 0xff00000000000000) == 0x2d00000000000000 && (uVar14 & 0xffffffffff) != 0))
    goto LAB_71025c8840;
LAB_71025c8950:
    FUN_7103776910(&local_240,param_3,(long ****)"set_rep_series",ppppppppplVar17,ppppbVar20,
                   pppplVar21,param_6,param_7,param_8);
    plVar10 = local_238;
    lVar22 = *local_238;
    if (lVar22 != 0) {
      *(byte *)(lVar22 + 0x58) = *(byte *)(lVar22 + 0x58) & 0xfe;
    }
    local_240 = &PTR_FUN_710523d9a8;
    local_238 = (long *)0x0;
    if (plVar10 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar10);
    }
    FUN_7103776910(&local_240,param_3,(long ****)"circle_series",ppppppppplVar17,ppppbVar20,
                   pppplVar21,param_6,param_7,param_8);
    lVar22 = *local_238;
    plVar10 = local_238;
    if (lVar22 != 0) {
      bVar24 = *(byte *)(lVar22 + 0x58) & 0xfe;
LAB_71025c89b0:
      *(byte *)(lVar22 + 0x58) = bVar24;
      plVar10 = local_238;
    }
  }
  local_240 = &PTR_FUN_710523d9a8;
  local_238 = (long *)0x0;
  if (plVar10 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar10);
  }
  plVar10 = local_228;
  local_230 = &PTR_FUN_710523d988;
  local_228 = (long *)0x0;
  if (plVar10 != (long *)0x0) {
    uVar12 = plVar10[3];
    plVar10[2] = (long)&PTR_FUN_710523d9a8;
    plVar10[3] = 0;
    if (uVar12 != 0) {
      FUN_710392eb40(uVar12);
    }
    FUN_710392eb40((ulong)plVar10);
  }
  local_1f8 = &PTR_FUN_710523d9a8;
  local_1f0 = 0;
  if (uVar18 != 0) {
    FUN_710392eb40(uVar18);
  }
  local_1e8 = &PTR_FUN_710523d9a8;
  local_1e0 = 0;
  if (uVar5 != 0) {
    FUN_710392eb40(uVar5);
  }
  local_190 = &PTR_FUN_710523d9a8;
  local_188 = 0;
  if (uVar6 != 0) {
    FUN_710392eb40(uVar6);
  }
  local_1d8 = &PTR_FUN_710523d9a8;
  local_1d0[0] = 0;
  if (uVar25 != 0) {
    FUN_710392eb40(uVar25);
  }
LAB_71025c8b60:
  local_138 = &PTR_FUN_710523d988;
  local_130 = 0;
  if (uVar26 != 0) {
    uVar25 = *(ulong *)(uVar26 + 0x18);
    *(undefined ***)(uVar26 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar26 + 0x18) = 0;
    if (uVar25 != 0) {
      FUN_710392eb40(uVar25);
    }
    FUN_710392eb40(uVar26);
  }
  return;
}

