// addr:      7101d89d00
// offset:    0x1d89d00
// name:      FUN_7101d89d00
// mangled:   
// signature: undefined __cdecl FUN_7101d89d00(undefined8 * param_1, undefined8 param_2, char * param_3, long * * * * * * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101d89d00(undefined8 *param_1,undefined8 param_2,char *param_3,long *********param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  char cVar4;
  ushort uVar5;
  short sVar6;
  ulong uVar7;
  bool bVar8;
  bool bVar9;
  undefined1 *puVar10;
  long *plVar11;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  char *pcVar12;
  undefined8 extraout_x1_01;
  char *pcVar13;
  long ****pppplVar14;
  undefined ***pppuVar15;
  undefined8 uVar16;
  uint *puVar17;
  char *param3;
  byte ****ppppbVar18;
  ushort uVar19;
  int iVar20;
  undefined4 uVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  long lVar25;
  undefined2 *puVar26;
  undefined2 *puVar27;
  byte bVar28;
  ulong uVar29;
  ulong uVar30;
  byte *pbVar31;
  ulong uVar32;
  long lVar33;
  long *********ppppppppplVar34;
  long *********ppppppppplVar35;
  long *plVar36;
  long *plVar37;
  undefined1 *puVar38;
  uint uVar39;
  long *plVar40;
  uint uVar41;
  long lVar42;
  undefined1 uVar43;
  uint uVar44;
  undefined **local_278;
  uint local_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined8 local_260;
  undefined4 local_258;
  undefined **local_230;
  uint local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined8 local_218;
  undefined4 local_210;
  undefined **local_208;
  ulong local_200;
  undefined **local_1f8;
  ulong local_1f0;
  undefined **local_1e8;
  ulong local_1e0;
  undefined **local_1d8;
  ulong local_1d0;
  long ********local_1c8;
  ulong local_1c0 [15];
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined2 local_130;
  undefined **local_c8;
  ulong local_c0;
  undefined **local_b8;
  ulong local_b0;
  undefined **local_a8;
  long *local_a0;
  undefined **local_98;
  long *local_90;
  undefined **local_88;
  long *local_80;
  
  FUN_7101d8c730((long)param_1,1,(long ****)param_3,(byte ****)param_4,param_5,param_6,param_7,
                 param_8);
  FUN_7101d8dc90((long)param_1,extraout_x1,(long *********)param_3,(byte ****)param_4,param_5,
                 param_6,param_7,param_8);
  lVar42 = *(long *)(DAT_710532f730 + 8);
  puVar1 = param_1 + 0x24;
  puVar2 = param_1 + 2;
  if (*(short *)(param_1 + 0x40) == -1) {
    ppppppppplVar34 = (long *********)0x0;
    uVar44 = 0;
  }
  else {
    FUN_7103776640(&local_148,(long)puVar1,(byte ****)"set_parts_slot_%02d",0,param_4,param_5,
                   param_6,param_7,param_8);
    uVar19 = *(ushort *)(param_1 + 0x40);
    ppppppppplVar34 = (long *********)(ulong)uVar19;
    FUN_7103778300(0x3f800000,(long)local_140,0x710438b28f);
    lVar22 = *(long *)(lVar42 + 0x1d8);
    if (ppppppppplVar34 == (long *********)0xffff) {
      uVar29 = 0xffffffff;
    }
    else {
      uVar29 = (ulong)*(ushort *)(lVar22 + (long)(short)uVar19 * 2 + 0x60);
    }
    uVar23 = (*(long *)(lVar22 + 0x28) - *(long *)(lVar22 + 0x20) >> 6) * -0x3333333333333333;
    puVar27 = (undefined2 *)(*(long *)(lVar22 + 0x20) + uVar29 * 0x140);
    if (uVar23 < uVar29 || uVar23 - uVar29 == 0) {
      puVar27 = &DAT_7105182b08;
    }
    uVar29 = FUN_71032a0fd0(*(long *)(lVar42 + 0x218),puVar27[0x35]);
    uVar44 = (uint)uVar29 & 0xff;
    pppplVar14 = (long ****)(ulong)uVar44;
    FUN_7103778430((long)&local_148,"slot_%02d",pppplVar14,param_4,param_5,param_6,param_7,param_8);
    FUN_7103776390(&local_1c8,&local_148,pppplVar14,(byte ****)param_4,param_5,param_6,param_7,
                   param_8);
    param_3 = (char *)&local_1c8;
    param_5 = (long ****)0x1;
    param_8 = 2;
    param_6 = 0;
    param_7 = 0;
    FUN_7101d8e0c0(param_1 + 0x41,puVar2,(undefined8 *)param_3,(byte ****)ppppppppplVar34,
                   (long ****)0x1,0,0,2,1,1);
    uVar29 = local_1c0[0];
    local_1c8 = (long ********)&PTR_FUN_710523d988;
    local_1c0[0] = 0;
    param_4 = ppppppppplVar34;
    if (uVar29 != 0) {
      uVar23 = *(ulong *)(uVar29 + 0x18);
      *(undefined ***)(uVar29 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar29 + 0x18) = 0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
        param_4 = ppppppppplVar34;
      }
      FUN_710392eb40(uVar29);
    }
    plVar36 = local_140;
    local_148 = &PTR_FUN_710523d988;
    local_140 = (long *)0x0;
    if (plVar36 != (long *)0x0) {
      uVar29 = plVar36[3];
      plVar36[2] = (long)&PTR_FUN_710523d9a8;
      plVar36[3] = 0;
      if (uVar29 != 0) {
        FUN_710392eb40(uVar29);
      }
      FUN_710392eb40((ulong)plVar36);
    }
    ppppppppplVar34 = (long *********)0x1;
  }
  if (*(short *)((long)param_1 + 0x202) != -1) {
    FUN_7103776640(&local_148,(long)puVar1,(byte ****)"set_parts_slot_%02d",ppppppppplVar34,param_4,
                   param_5,param_6,param_7,param_8);
    uVar19 = *(ushort *)((long)param_1 + 0x202);
    ppppppppplVar35 = (long *********)(ulong)uVar19;
    FUN_7103778300(0x3f800000,(long)local_140,0x710438b28f);
    lVar22 = *(long *)(lVar42 + 0x1d8);
    if (ppppppppplVar35 == (long *********)0xffff) {
      uVar29 = 0xffffffff;
    }
    else {
      uVar29 = (ulong)*(ushort *)(lVar22 + (long)(short)uVar19 * 2 + 0x60);
    }
    uVar23 = (*(long *)(lVar22 + 0x28) - *(long *)(lVar22 + 0x20) >> 6) * -0x3333333333333333;
    puVar27 = (undefined2 *)(*(long *)(lVar22 + 0x20) + uVar29 * 0x140);
    if (uVar23 < uVar29 || uVar23 - uVar29 == 0) {
      puVar27 = &DAT_7105182b08;
    }
    uVar29 = FUN_71032a0fd0(*(long *)(lVar42 + 0x218),puVar27[0x35]);
    uVar41 = (uint)uVar29 & 0xff;
    pppplVar14 = (long ****)(ulong)uVar41;
    FUN_7103778430((long)&local_148,"slot_%02d",pppplVar14,param_4,param_5,param_6,param_7,param_8);
    FUN_7103776390(&local_1c8,&local_148,pppplVar14,(byte ****)param_4,param_5,param_6,param_7,
                   param_8);
    param_3 = (char *)&local_1c8;
    param_5 = (long ****)0x1;
    param_8 = 2;
    param_6 = 0;
    param_7 = 0;
    FUN_7101d8e0c0(param_1 + (long)ppppppppplVar34 * 4 + 0x41,puVar2,(undefined8 *)param_3,
                   (byte ****)ppppppppplVar35,(long ****)0x1,0,0,2,1,1);
    uVar29 = local_1c0[0];
    local_1c8 = (long ********)&PTR_FUN_710523d988;
    local_1c0[0] = 0;
    param_4 = ppppppppplVar35;
    if (uVar29 != 0) {
      uVar23 = *(ulong *)(uVar29 + 0x18);
      *(undefined ***)(uVar29 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar29 + 0x18) = 0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
        param_4 = ppppppppplVar35;
      }
      FUN_710392eb40(uVar29);
    }
    plVar36 = local_140;
    uVar44 = uVar44 + uVar41;
    ppppppppplVar34 = (long *********)(ulong)((int)ppppppppplVar34 + 1);
    local_148 = &PTR_FUN_710523d988;
    local_140 = (long *)0x0;
    if (plVar36 != (long *)0x0) {
      uVar29 = plVar36[3];
      plVar36[2] = (long)&PTR_FUN_710523d9a8;
      plVar36[3] = 0;
      if (uVar29 != 0) {
        FUN_710392eb40(uVar29);
      }
      FUN_710392eb40((ulong)plVar36);
    }
  }
  if (*(short *)((long)param_1 + 0x204) != -1) {
    FUN_7103776640(&local_148,(long)puVar1,(byte ****)"set_parts_slot_%02d",ppppppppplVar34,param_4,
                   param_5,param_6,param_7,param_8);
    uVar19 = *(ushort *)((long)param_1 + 0x204);
    ppppppppplVar35 = (long *********)(ulong)uVar19;
    FUN_7103778300(0x3f800000,(long)local_140,0x710438b28f);
    lVar22 = *(long *)(lVar42 + 0x1d8);
    if (ppppppppplVar35 == (long *********)0xffff) {
      uVar29 = 0xffffffff;
    }
    else {
      uVar29 = (ulong)*(ushort *)(lVar22 + (long)(short)uVar19 * 2 + 0x60);
    }
    uVar23 = (*(long *)(lVar22 + 0x28) - *(long *)(lVar22 + 0x20) >> 6) * -0x3333333333333333;
    puVar27 = (undefined2 *)(*(long *)(lVar22 + 0x20) + uVar29 * 0x140);
    if (uVar23 < uVar29 || uVar23 - uVar29 == 0) {
      puVar27 = &DAT_7105182b08;
    }
    uVar29 = FUN_71032a0fd0(*(long *)(lVar42 + 0x218),puVar27[0x35]);
    uVar41 = (uint)uVar29 & 0xff;
    pppplVar14 = (long ****)(ulong)uVar41;
    FUN_7103778430((long)&local_148,"slot_%02d",pppplVar14,param_4,param_5,param_6,param_7,param_8);
    FUN_7103776390(&local_1c8,&local_148,pppplVar14,(byte ****)param_4,param_5,param_6,param_7,
                   param_8);
    param_3 = (char *)&local_1c8;
    param_5 = (long ****)0x1;
    param_8 = 2;
    param_6 = 0;
    param_7 = 0;
    FUN_7101d8e0c0(param_1 + (long)ppppppppplVar34 * 4 + 0x41,puVar2,(undefined8 *)param_3,
                   (byte ****)ppppppppplVar35,(long ****)0x1,0,0,2,1,1);
    uVar29 = local_1c0[0];
    local_1c8 = (long ********)&PTR_FUN_710523d988;
    local_1c0[0] = 0;
    param_4 = ppppppppplVar35;
    if (uVar29 != 0) {
      uVar23 = *(ulong *)(uVar29 + 0x18);
      *(undefined ***)(uVar29 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar29 + 0x18) = 0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
        param_4 = ppppppppplVar35;
      }
      FUN_710392eb40(uVar29);
    }
    plVar36 = local_140;
    uVar44 = uVar44 + uVar41;
    ppppppppplVar34 = (long *********)(ulong)((int)ppppppppplVar34 + 1);
    local_148 = &PTR_FUN_710523d988;
    local_140 = (long *)0x0;
    if (plVar36 != (long *)0x0) {
      uVar29 = plVar36[3];
      plVar36[2] = (long)&PTR_FUN_710523d9a8;
      plVar36[3] = 0;
      if (uVar29 != 0) {
        FUN_710392eb40(uVar29);
      }
      FUN_710392eb40((ulong)plVar36);
    }
  }
  if ((long)*(short *)((long)param_1 + 0x15c) == -1) {
    uVar41 = 0;
  }
  else {
    lVar42 = *(long *)(lVar42 + 0x1d8);
    uVar29 = (ulong)*(ushort *)(lVar42 + (long)*(short *)((long)param_1 + 0x15c) * 2 + 0x60);
    uVar23 = (*(long *)(lVar42 + 0x28) - *(long *)(lVar42 + 0x20) >> 6) * -0x3333333333333333;
    puVar27 = (undefined2 *)(*(long *)(lVar42 + 0x20) + uVar29 * 0x140);
    if (uVar23 < uVar29 || uVar23 - uVar29 == 0) {
      puVar27 = &DAT_7105182b08;
    }
    uVar41 = (uint)*(byte *)((long)puVar27 + 0x69);
  }
  uVar39 = (uint)ppppppppplVar34;
  ppppppppplVar35 = ppppppppplVar34;
  if (uVar39 < 3) {
    do {
      uVar44 = uVar44 + 1;
      param_3 = (char *)ppppppppplVar34;
      FUN_7103776640(&local_148,(long)puVar1,(byte ****)"set_parts_slot_%02d",ppppppppplVar34,
                     param_4,param_5,param_6,param_7,param_8);
      FUN_71025b0f50((long)&local_148,extraout_x1_00,param_3,param_4,param_5,param_6,param_7,param_8
                    );
      plVar36 = local_140;
      if (uVar41 < uVar44) {
        FUN_7103778300(0x3f800000,(long)local_140,0x7104348100);
      }
      else {
        FUN_7103778300(0x3f800000,(long)local_140,0x710438b28f);
        FUN_7103778300(0x3f800000,(long)plVar36,0x71043be9f8);
        FUN_7103776910(&local_278,(long)&local_148,(long ****)"set_rep_spirit",param_3,param_4,
                       param_5,param_6,param_7,param_8);
        uVar29 = CONCAT44(uStack_26c,local_270);
        FUN_71037790a0(uVar29,1,(long *********)param_3,(byte ****)param_4,param_5,param_6,param_7,
                       param_8);
        FUN_7103776910(&local_230,(long)&local_148,(long ****)"set_rep_aura_00",param_3,param_4,
                       param_5,param_6,param_7,param_8);
        uVar23 = CONCAT44(uStack_224,local_228);
        FUN_71037790a0(uVar23,1,(long *********)param_3,(byte ****)param_4,param_5,param_6,param_7,
                       param_8);
        local_230 = &PTR_FUN_710523d9a8;
        local_228 = 0;
        uStack_224 = 0;
        if (uVar23 != 0) {
          FUN_710392eb40(uVar23);
        }
        ppppppppplVar35 = (long *********)(ulong)((int)ppppppppplVar35 + 1);
        local_278 = &PTR_FUN_710523d9a8;
        local_270 = 0;
        uStack_26c = 0;
        if (uVar29 != 0) {
          FUN_710392eb40(uVar29);
        }
      }
      uVar39 = (int)ppppppppplVar34 + 1;
      ppppppppplVar34 = (long *********)(ulong)uVar39;
      local_148 = &PTR_FUN_710523d988;
      local_140 = (long *)0x0;
      if (plVar36 != (long *)0x0) {
        uVar29 = plVar36[3];
        plVar36[2] = (long)&PTR_FUN_710523d9a8;
        plVar36[3] = 0;
        if (uVar29 != 0) {
          FUN_710392eb40(uVar29);
        }
        FUN_710392eb40((ulong)plVar36);
      }
    } while (uVar39 != 3);
    uVar39 = (uint)ppppppppplVar35;
    ppppppppplVar34 = ppppppppplVar35;
  }
  if (uVar39 != 0) {
    if (*(int *)(param_1 + 0x2b) == 8) {
      param_3 = "view_spt_set_%02d";
      snprintf((char *)&local_148,0x20,"view_spt_set_%02d",(int)ppppppppplVar34);
      FUN_7103778300(0x3f800000,param_1[0x25],(long)&local_148);
      param_4 = ppppppppplVar34;
    }
    else {
      FUN_7103778430((long)puVar1,"view_spt_%02d",ppppppppplVar34,param_4,param_5,param_6,param_7,
                     param_8);
      param_3 = (char *)ppppppppplVar34;
    }
  }
  switch(*(undefined4 *)(param_1 + 0x2b)) {
  case 1:
    lVar42 = param_1[0x27];
    puVar1 = param_1 + 0x26;
    if ((*(long *)(lVar42 + 8) != 0) &&
       (lVar22 = *(long *)(*(long *)(lVar42 + 8) + 0x18), lVar22 != 0)) {
      *(byte *)(lVar22 + 0x58) = *(byte *)(lVar22 + 0x58) & 0xfe | *(byte *)((long)param_1 + 0x339);
      lVar42 = param_1[0x27];
    }
    FUN_7103778300(0x3f800000,lVar42,0x710436a273);
    FUN_7103776910(&local_230,(long)puVar1,(long ****)"set_txt_name_spirit_pv",param_3,param_4,
                   param_5,param_6,param_7,param_8);
    FUN_7103776910(&local_88,(long)puVar1,(long ****)"set_txt_series",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    FUN_7103776910(&local_98,(long)puVar1,(long ****)"set_parts_btn_help_00",param_3,param_4,param_5
                   ,param_6,param_7,param_8);
    uVar19 = *(ushort *)((long)param_1 + 0x15c);
    if ((uVar19 == 0xffff) || (1999 < (short)uVar19)) {
LAB_7101d8aa3c:
      plVar36 = (long *)CONCAT44(uStack_224,local_228);
      lVar42 = *plVar36;
      if (lVar42 != 0) {
        *(byte *)(lVar42 + 0x58) = *(byte *)(lVar42 + 0x58) & 0xfe;
      }
      lVar42 = *local_80;
      if (lVar42 != 0) {
        *(byte *)(lVar42 + 0x58) = *(byte *)(lVar42 + 0x58) & 0xfe;
      }
      lVar42 = *(long *)(param_1[0x29] + 0x1b8);
      if (lVar42 != 0) {
        lVar22 = param_1[0x29] + 0x1b8;
        lVar33 = lVar22;
        do {
          bVar9 = *(int *)(lVar42 + 0x20) < 0;
          if (!bVar9) {
            lVar33 = lVar42;
          }
          lVar42 = *(long *)(lVar42 + (ulong)bVar9 * 8);
        } while (lVar42 != 0);
        if (((lVar33 != lVar22) && (*(int *)(lVar33 + 0x20) < 1)) &&
           (plVar37 = *(long **)(lVar33 + 0x28), plVar37 != (long *)0x0)) {
          (**(code **)(*plVar37 + 0x208))(plVar37,0);
          (**(code **)(*plVar37 + 0x388))(plVar37,1,0);
        }
      }
      lVar42 = *local_90;
      if (lVar42 != 0) {
        *(byte *)(lVar42 + 0x58) = *(byte *)(lVar42 + 0x58) & 0xfe;
      }
      FUN_7103778300(0x3f800000,param_1[0x27],0x710433a4e5);
      plVar37 = local_90;
      plVar40 = local_80;
    }
    else {
      lVar22 = *(long *)(DAT_710532f730 + 8);
      lVar42 = *(long *)(lVar22 + 0x1d8);
      if ((uint)((int)((ulong)(*(long *)(lVar42 + 0x28) - *(long *)(lVar42 + 0x20)) >> 6) *
                -0x33333333) <= (uint)*(ushort *)(lVar42 + (long)(int)(short)uVar19 * 2 + 0x60))
      goto LAB_7101d8aa3c;
      uVar29 = FUN_71032a9470(lVar42,uVar19);
      FUN_71032a9540((uint *)&local_148,lVar42,uVar29);
      FUN_71003a4ca0((uint *)&local_1c8,"spi_%s",&local_140,uVar29,param_4,param_5,param_6,param_7,
                     param_8);
      FUN_710377a120((long)&local_230,(char *)local_1c0,uVar29,param_4,param_5,param_6,param_7,
                     param_8);
      uVar23 = (ulong)*(short *)((long)param_1 + 0x15c);
      lVar42 = *(long *)(lVar22 + 0x1d8);
      if (uVar23 != 0xffffffffffffffff) {
        uVar23 = (ulong)*(ushort *)(lVar42 + uVar23 * 2 + 0x60);
      }
      uVar24 = (*(long *)(lVar42 + 0x28) - *(long *)(lVar42 + 0x20) >> 6) * -0x3333333333333333;
      puVar27 = (undefined2 *)(*(long *)(lVar42 + 0x20) + uVar23 * 0x140);
      if (uVar24 < uVar23 || uVar24 - uVar23 == 0) {
        puVar27 = &DAT_7105182b08;
      }
      FUN_7103776910(&local_148,(long)puVar1,(long ****)"set_txt_num_preview",uVar29,param_4,param_5
                     ,param_6,param_7,param_8);
      puVar17 = (uint *)(ulong)(ushort)puVar27[0x2e];
      FUN_710377a280((long)&local_148,(byte *)"mnu_spirits_directory_view_spirit_n",1);
      plVar36 = local_140;
      local_148 = &PTR_FUN_710523d9a8;
      local_140 = (long *)0x0;
      if (plVar36 != (long *)0x0) {
        FUN_710392eb40((ulong)plVar36);
      }
      uVar29 = *(ulong *)(puVar27 + 0x88);
      if (((uVar29 & 0xff00000000000000) == 0x5c00000000000000) && ((uVar29 & 0xffffffffff) != 0)) {
        if ((uVar29 & 0xffffffffff) == 0x13b2d9832e) {
LAB_7101d8b708:
          lVar42 = *(long *)(lVar22 + 0x1d8);
          uVar29 = FUN_71032a9470(lVar42,*(ushort *)((long)param_1 + 0x15c));
          FUN_71032a9540((uint *)&local_148,lVar42,uVar29);
          FUN_71003a4ca0((uint *)&local_278,"tit_append_%s",&local_140,uVar29,puVar17,param_5,
                         param_6,param_7,param_8);
        }
        else {
          if ((uVar29 & 0xffffffffff) != 0x111d15b4dc) goto LAB_7101d8b754;
          lVar42 = *(long *)(DAT_710532f730 + 8);
          uVar29 = *(ulong *)(puVar27 + 0x30);
          FUN_7103299d20((uint *)&local_148,*(long *)(lVar42 + 0x188),uVar29);
          FUN_71003a4ca0((uint *)&local_278,"tit_series_%s",&local_140,uVar29,puVar17,param_5,
                         param_6,param_7,param_8);
          uVar44 = FUN_710329acf0(*(long *)(lVar42 + 0x188),*(ulong *)(puVar27 + 0x30));
          if ((uVar44 & 1) != 0) goto LAB_7101d8b79c;
LAB_7101d8a76c:
          puVar17 = &local_270;
        }
        FUN_710377a120((long)&local_88,(char *)&local_270,uVar29,puVar17,param_5,param_6,param_7,
                       param_8);
      }
      else {
        if ((uVar29 & 0xffffffffff) == 0x13b2d9832e) goto LAB_7101d8b708;
LAB_7101d8b754:
        lVar42 = *(long *)(DAT_710532f730 + 8);
        FUN_710327c1a0((uint *)&local_148,*(long *)(lVar42 + 0x2b8),uVar29);
        FUN_71003a4ca0((uint *)&local_278,"tit_%s",&local_140,uVar29,puVar17,param_5,param_6,param_7
                       ,param_8);
        uVar44 = FUN_710327cba0(*(long *)(lVar42 + 0x2b8),*(ulong *)(puVar27 + 0x88));
        if ((uVar44 & 1) == 0) goto LAB_7101d8a76c;
LAB_7101d8b79c:
        puVar17 = &local_270;
        uVar29 = 1;
        FUN_710377a280((long)&local_88,(byte *)"mnu_spirits_directory_view_series",1);
      }
      plVar36 = (long *)CONCAT44(uStack_224,local_228);
      lVar42 = *plVar36;
      if (lVar42 != 0) {
        *(byte *)(lVar42 + 0x58) = *(byte *)(lVar42 + 0x58) | 1;
      }
      lVar42 = *local_80;
      if (lVar42 != 0) {
        *(byte *)(lVar42 + 0x58) = *(byte *)(lVar42 + 0x58) | 1;
      }
      uVar19 = *(ushort *)((long)param_1 + 0x15c);
      lVar42 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
      if (uVar19 == 0xffff) {
        uVar23 = 0xffffffff;
      }
      else {
        uVar23 = (ulong)*(ushort *)(lVar42 + (long)(short)uVar19 * 2 + 0x60);
      }
      uVar24 = (*(long *)(lVar42 + 0x28) - *(long *)(lVar42 + 0x20) >> 6) * -0x3333333333333333;
      puVar26 = (undefined2 *)(*(long *)(lVar42 + 0x20) + uVar23 * 0x140);
      if (uVar24 < uVar23 || uVar24 - uVar23 == 0) {
        puVar26 = &DAT_7105182b08;
      }
      if (*(char *)(puVar26 + 0x2f) == '\x03') {
        bVar9 = FUN_71025c9890(uVar19);
        bVar9 = !bVar9;
      }
      else {
        bVar9 = false;
      }
      lVar42 = *(long *)(param_1[0x29] + 0x1b8);
      if (lVar42 != 0) {
        lVar22 = param_1[0x29] + 0x1b8;
        lVar33 = lVar22;
        do {
          bVar8 = *(int *)(lVar42 + 0x20) < 0;
          if (!bVar8) {
            lVar33 = lVar42;
          }
          lVar42 = *(long *)(lVar42 + (ulong)bVar8 * 8);
        } while (lVar42 != 0);
        if (((lVar33 != lVar22) && (*(int *)(lVar33 + 0x20) < 1)) &&
           (plVar37 = *(long **)(lVar33 + 0x28), plVar37 != (long *)0x0)) {
          (**(code **)(*plVar37 + 0x208))(plVar37,bVar9);
          uVar29 = 0;
          (**(code **)(*plVar37 + 0x388))(plVar37,~bVar9 & 1);
        }
      }
      lVar42 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
      uVar44 = 0;
      iVar20 = (int)*(short *)((long)param_1 + 0x15c);
      lVar22 = (long)iVar20;
      if ((iVar20 != -1) && (*(short *)((long)param_1 + 0x15c) < 2000)) {
        if ((uint)*(ushort *)(lVar42 + lVar22 * 2 + 0x60) <
            (uint)((int)((ulong)(*(long *)(lVar42 + 0x28) - *(long *)(lVar42 + 0x20)) >> 6) *
                  -0x33333333)) {
          uVar44 = *(byte *)(*(long *)(*DAT_7105329f98 + 0x30) + lVar22 * 0x24 + 1) >> 3 & 1;
        }
        else {
          uVar44 = 0;
        }
      }
      if ((((*(int *)(param_1 + 0x2b) == 1) && (*(char *)((long)param_1 + 0x355) != '\0')) &&
          (*(char *)((long)param_1 + 0x354) != '\0')) && ((iVar20 != -1 && (iVar20 < 2000)))) {
        uVar19 = *(ushort *)(lVar42 + lVar22 * 2 + 0x60);
        uVar24 = (ulong)uVar19;
        uVar23 = (*(long *)(lVar42 + 0x28) - *(long *)(lVar42 + 0x20) >> 6) * -0x3333333333333333;
        if ((uint)uVar19 < (uint)uVar23) {
          puVar26 = (undefined2 *)(*(long *)(lVar42 + 0x20) + uVar24 * 0x140);
          if (uVar23 < uVar24 || uVar23 - uVar24 == 0) {
            puVar26 = &DAT_7105182b08;
          }
          if (*(char *)(puVar26 + 0x2d) == '\0') {
            if (*(char *)(puVar26 + 0x90) != '\0') {
              puVar38 = *(undefined1 **)(puVar26 + 0x4c);
              puVar10 = FUN_71032631a0(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x168),0xfd5f7fa78)
              ;
              if (((((ulong)puVar38 & 0xff00000000000000) == 0xc100000000000000 &&
                    ((ulong)puVar38 & 0xffffffffff) != 0) &&
                  (((ulong)puVar10 & 0xff00000000000000) == 0xc100000000000000)) &&
                 (((ulong)puVar10 & 0xffffffffff) != 0)) {
                if ((((ulong)puVar10 ^ (ulong)puVar38) & 0xffffffffff) != 0) {
LAB_7101d8c6c8:
                  uVar29 = 0;
                  uVar23 = FUN_7101797560(puVar38,0,0);
                  uVar44 = (uint)uVar23 & uVar44;
                }
              }
              else if ((((ulong)puVar10 & 0xffffffffff) != 0 &&
                       ((ulong)puVar10 & 0xff00000000000000) == 0xc100000000000000) !=
                       (((ulong)puVar38 & 0xff00000000000000) == 0xc100000000000000 &&
                       ((ulong)puVar38 & 0xffffffffff) != 0)) goto LAB_7101d8c6c8;
              if (uVar44 != 0) goto LAB_7101d8b9e4;
            }
          }
          else if ((*(char *)(puVar26 + 0x49) != '\0') && (uVar44 == 1)) {
LAB_7101d8b9e4:
            if (((ulong)(long)*(short *)((long)param_1 + 0x15c) < 2000) &&
               (uVar44 = *(uint *)(*(long *)**(undefined8 **)(*DAT_7105314510 + 0x268) +
                                   (long)*(short *)((long)param_1 + 0x15c) * 4 + 0x65a0),
               uVar44 != 0)) {
              FUN_7103776910(&local_148,(long)puVar1,(long ****)"set_txt_score",uVar29,puVar17,
                             param_5,param_6,param_7,param_8);
              uVar29 = 1;
              puVar17 = (uint *)(ulong)uVar44;
              FUN_710377a280((long)&local_148,(byte *)"mnu_spirits_directory_battle_high_score_n",1)
              ;
            }
            else {
              FUN_7103776910(&local_148,(long)puVar1,(long ****)"set_txt_score",uVar29,puVar17,
                             param_5,param_6,param_7,param_8);
              FUN_710377a120((long)&local_148,"mnu_spirits_directory_battle_high_score_none",uVar29,
                             puVar17,param_5,param_6,param_7,param_8);
            }
            uVar23 = (ulong)local_140;
            local_148 = &PTR_FUN_710523d9a8;
            local_140 = (long *)0x0;
            if (uVar23 != 0) {
              FUN_710392eb40(uVar23);
            }
          }
        }
      }
      iVar20 = *(int *)((long)param_1 + 0x35c);
      uVar44 = 0x811c9dc5;
      local_140 = (long *)((ulong)local_140 & 0xffffffffffffff00);
      local_148 = (undefined **)0x811c9dc5;
      if (iVar20 == 2) {
        local_138 = 0x6c747461625f6e6f;
        local_130 = 0x65;
        local_148._4_4_ = 0x11;
        uVar41 = 0x6b;
        pbVar31 = (byte *)((long)&local_140 + 1);
        do {
          uVar44 = uVar44 * 0x89 ^ uVar41;
          uVar41 = (uint)*pbVar31;
          pbVar31 = pbVar31 + 1;
        } while (uVar41 != 0);
LAB_7101d8c494:
        local_140 = (long *)0x5f706c656879656b;
        local_148 = (undefined **)CONCAT44(local_148._4_4_,uVar44);
      }
      else {
        if (iVar20 == 1) {
          local_138 = CONCAT26(local_138._6_2_,0x7700000000);
          local_138 = CONCAT44(local_138._4_4_,0x615f6e6f);
          uVar41 = 0x6b;
          local_148._4_4_ = 0xd;
          pbVar31 = (byte *)((long)&local_140 + 1);
          do {
            uVar44 = uVar44 * 0x89 ^ uVar41;
            uVar41 = (uint)*pbVar31;
            pbVar31 = pbVar31 + 1;
          } while (uVar41 != 0);
          goto LAB_7101d8c494;
        }
        if (iVar20 == 0) {
          local_138 = CONCAT44(local_138._4_4_,0x66666f);
          local_148._4_4_ = 0xb;
          uVar41 = 0x6b;
          pbVar31 = (byte *)((long)&local_140 + 1);
          do {
            uVar44 = uVar44 * 0x89 ^ uVar41;
            uVar41 = (uint)*pbVar31;
            pbVar31 = pbVar31 + 1;
          } while (uVar41 != 0);
          goto LAB_7101d8c494;
        }
      }
      if (*(char *)(param_1 + 0x6c) == '\0') {
        FUN_7103778300(0x3f800000,param_1[0x27],(long)&local_140);
      }
      else {
        FUN_7103778760(param_1[0x27],(long)&local_140);
      }
      *(int *)(param_1 + 0x6b) = iVar20;
      *(undefined1 *)(param_1 + 0x6c) = 0;
      if (*(char *)(puVar27 + 0x2f) == '\x02') {
        lVar42 = *(long *)(DAT_710532f730 + 8);
        uVar23 = FUN_71032a4c20(*(long *)(lVar42 + 0x208),*(ushort *)((long)param_1 + 0x15c));
        if ((uVar23 & 0xff00000000000000) != 0x5200000000000000 || (uVar23 & 0xffffffffff) == 0)
        goto LAB_7101d8c4f4;
        FUN_7103776910(&local_278,(long)puVar1,(long ****)"set_txt_style",uVar29,puVar17,param_5,
                       param_6,param_7,param_8);
        FUN_71032a4e40((uint *)&local_148,*(long *)(lVar42 + 0x208),uVar23);
        FUN_710377a120((long)&local_278,(char *)&local_140,uVar23,puVar17,param_5,param_6,param_7,
                       param_8);
        plVar37 = (long *)CONCAT44(uStack_26c,local_270);
        local_278 = &PTR_FUN_710523d9a8;
        local_270 = 0;
        uStack_26c = 0;
      }
      else {
LAB_7101d8c4f4:
        FUN_7103776910(&local_148,(long)puVar1,(long ****)"set_txt_style",uVar29,puVar17,param_5,
                       param_6,param_7,param_8);
        plVar37 = local_140;
        if ((long *)local_140[2] != (long *)0x0) {
          FUN_71037a28a0((long *)local_140[2],&DAT_7104867c2e);
        }
        local_148 = &PTR_FUN_710523d9a8;
        local_140 = (long *)0x0;
        uVar23 = uVar29;
      }
      if (plVar37 != (long *)0x0) {
        FUN_710392eb40((ulong)plVar37);
      }
      plVar40 = local_80;
      if (*(byte *)(puVar27 + 0x2f) - 2 < 2) {
        FUN_7103776910(&local_148,(long)puVar1,(long ****)"set_parts_class",uVar23,puVar17,param_5,
                       param_6,param_7,param_8);
        plVar11 = local_140;
        lVar42 = *local_140;
        if (lVar42 != 0) {
          *(byte *)(lVar42 + 0x58) = *(byte *)(lVar42 + 0x58) & 0xfe;
        }
        local_148 = &PTR_FUN_710523d9a8;
        local_140 = (long *)0x0;
        plVar37 = local_90;
        if (plVar11 != (long *)0x0) {
LAB_7101d8c648:
          FUN_710392eb40((ulong)plVar11);
          plVar37 = local_90;
        }
      }
      else {
        plVar37 = local_90;
        if (*(byte *)(puVar27 + 0x2f) < 2) {
          FUN_7103776910(&local_148,(long)puVar1,(long ****)"set_parts_class",uVar23,puVar17,param_5
                         ,param_6,param_7,param_8);
          plVar37 = local_140;
          lVar42 = *local_140;
          if (lVar42 != 0) {
            *(byte *)(lVar42 + 0x58) = *(byte *)(lVar42 + 0x58) | 1;
          }
          local_148 = &PTR_FUN_710523d9a8;
          local_140 = (long *)0x0;
          if (plVar37 != (long *)0x0) {
            FUN_710392eb40((ulong)plVar37);
          }
          FUN_7103776640(&local_148,(long)puVar1,(byte ****)"set_parts_class",uVar23,puVar17,param_5
                         ,param_6,param_7,param_8);
          FUN_71025b10e0((long)&local_148,*(undefined1 *)(puVar27 + 0x34));
          plVar11 = local_140;
          local_148 = &PTR_FUN_710523d988;
          local_140 = (long *)0x0;
          plVar37 = local_90;
          if (plVar11 != (long *)0x0) {
            uVar29 = plVar11[3];
            plVar11[2] = (long)&PTR_FUN_710523d9a8;
            plVar11[3] = 0;
            if (uVar29 != 0) {
              FUN_710392eb40(uVar29);
            }
            goto LAB_7101d8c648;
          }
        }
      }
    }
    local_98 = &PTR_FUN_710523d9a8;
    local_90 = (long *)0x0;
    if (plVar37 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar37);
    }
    local_88 = &PTR_FUN_710523d9a8;
    local_80 = (long *)0x0;
    if (plVar40 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar40);
    }
    local_230 = &PTR_FUN_710523d9a8;
    local_228 = 0;
    uStack_224 = 0;
    break;
  default:
    puVar1 = param_1 + 0x26;
    if ((*(long *)(param_1[0x27] + 8) != 0) &&
       (lVar42 = *(long *)(*(long *)(param_1[0x27] + 8) + 0x18), lVar42 != 0)) {
      *(byte *)(lVar42 + 0x58) = *(byte *)(lVar42 + 0x58) | 1;
    }
    lVar42 = *(long *)(DAT_710532f730 + 8);
    FUN_7103776640(&local_230,(long)puVar1,(byte ****)"set_parts_param_00",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    FUN_7103776640(&local_88,(long)puVar1,(byte ****)"set_parts_param_01",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    sVar6 = *(short *)((long)param_1 + 0x15c);
    if ((sVar6 == -1) || (iVar20 = (int)sVar6, 1999 < iVar20)) {
LAB_7101d8ab10:
      FUN_71025c7300((long)&local_230,(long)&local_88,(long *********)param_3,(byte ****)param_4,
                     param_5,param_6,param_7,param_8);
    }
    else {
      lVar22 = *(long *)(lVar42 + 0x1d8);
      uVar19 = *(ushort *)(lVar22 + (long)iVar20 * 2 + 0x60);
      uVar29 = (ulong)uVar19;
      uVar23 = (*(long *)(lVar22 + 0x28) - *(long *)(lVar22 + 0x20) >> 6) * -0x3333333333333333;
      if ((uint)uVar23 <= (uint)uVar19) goto LAB_7101d8ab10;
      lVar33 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
      uVar19 = *(ushort *)(lVar33 + (long)iVar20 * 2 + 0x60);
      uVar24 = (ulong)uVar19;
      uVar30 = (*(long *)(lVar33 + 0x28) - *(long *)(lVar33 + 0x20) >> 6) * -0x3333333333333333;
      puVar27 = (undefined2 *)(*(long *)(lVar22 + 0x20) + uVar29 * 0x140);
      if (uVar23 < uVar29 || uVar23 - uVar29 == 0) {
        puVar27 = &DAT_7105182b08;
      }
      if ((uint)uVar19 < (uint)uVar30) {
        puVar26 = (undefined2 *)(*(long *)(lVar33 + 0x20) + uVar24 * 0x140);
        if (uVar30 < uVar24 || uVar30 - uVar24 == 0) {
          puVar26 = &DAT_7105182b08;
        }
        if (*(char *)(puVar26 + 0x2f) == '\0') {
          if (2 < *(byte *)(puVar26 + 0x36) - 1) goto LAB_7101d8ba70;
          uVar44 = 0x20301 >> (ulong)((*(byte *)(puVar26 + 0x36) - 1 & 3) << 3);
        }
        else {
          uVar44 = 4;
        }
      }
      else {
LAB_7101d8ba70:
        uVar44 = 0;
      }
      FUN_7103776640(&local_98,(long)puVar1,(byte ****)"set_parts_class",param_3,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_71025b10e0((long)&local_98,*(undefined1 *)(puVar27 + 0x34));
      ppppbVar18 = (byte ****)(ulong)*(ushort *)((long)param_1 + 0x15c);
      pppplVar14 = (long ****)(ulong)*(ushort *)((long)param_1 + 0x15e);
      pppuVar15 = &local_88;
      FUN_71025c7b60(param_1 + 1,(long)&local_230,(long)pppuVar15,ppppbVar18,(ulong)pppplVar14,
                     param_6,param_7,param_8);
      cVar4 = *(char *)(puVar27 + 0x2f);
      if (cVar4 == '\x01') {
        *(undefined4 *)(param_1 + 0x68) = 0x5a;
        cVar4 = *(char *)(puVar27 + 0x2f);
      }
      if (cVar4 == '\x01') {
        lVar22 = param_1[0x27];
        pcVar13 = "supporter";
LAB_7101d8baec:
        FUN_7103778300(0x3f800000,lVar22,(long)pcVar13);
      }
      else if (cVar4 == '\0') {
        lVar22 = param_1[0x27];
        pcVar13 = "attacker";
        goto LAB_7101d8baec;
      }
      FUN_7103776640(&local_a8,(long)puVar1,(byte ****)"set_parts_icon_condition",pppuVar15,
                     ppppbVar18,pppplVar14,param_6,param_7,param_8);
      plVar36 = local_a0;
      lVar22 = local_a0[1];
      if (*(int *)(param_1 + 0x2b) == 3) {
        if ((lVar22 != 0) && (lVar22 = *(long *)(lVar22 + 0x18), lVar22 != 0)) {
          *(byte *)(lVar22 + 0x58) = *(byte *)(lVar22 + 0x58) | 1;
        }
        uVar19 = *(ushort *)((long)param_1 + 0x15e);
        uVar29 = (ulong)uVar19;
        if (uVar19 >> 4 < 0x177) {
          bVar28 = *(byte *)(*(long *)(*DAT_7105329f98 + 0x30) + uVar29 * 0x50 + 0x1197e) >> 1 & 1;
        }
        else {
          bVar28 = 0;
        }
        uVar23 = param_1[0x69];
        if (((uVar23 & 0xff00000000000000) == 0x5200000000000000) && ((uVar23 & 0xffffffffff) != 0))
        {
          if (uVar19 >> 4 < 0x177) {
            puVar26 = (undefined2 *)(*(long *)(*DAT_7105329f98 + 0x30) + uVar29 * 0x50 + 72000);
          }
          else {
            puVar26 = &DAT_710532a878;
            if (((ushort)(uVar19 + 0xe890) < 100) &&
               (lVar22 = *(long *)(*DAT_7105329f98 + 0x30) + (ulong)(ushort)(uVar19 + 0xe890) * 0x50
               , *(short *)(lVar22 + 0x88cc8) != -1)) {
              puVar26 = (undefined2 *)(lVar22 + 0x88cc0);
            }
          }
          uVar24 = *(ulong *)(puVar26 + 0xc);
          if ((((uVar24 & 0xff00000000000000) == 0x5200000000000000) &&
              ((uVar24 & 0xffffffffff) != 0)) && (((uVar23 ^ uVar24) & 0xffffffffff) == 0))
          goto LAB_7101d8bedc;
          uVar24 = FUN_71032a3d90(*(long *)(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x208) + 8),
                                  0x1530ff0e86);
          if (((uVar24 & 0xff00000000000000) == 0x5200000000000000) &&
             ((uVar24 & 0xffffffffff) != 0)) {
            if (((uVar24 ^ uVar23) & 0xffffffffff) != 0) {
LAB_7101d8bea4:
              bVar9 = FUN_71025ca280(uVar29,uVar23);
              if (!bVar9) goto LAB_7101d8bedc;
            }
          }
          else if (((uVar24 & 0xffffffffff) == 0) ||
                  ((uVar24 & 0xff00000000000000) != 0x5200000000000000)) goto LAB_7101d8bea4;
          uVar41 = FUN_71025cba90(*(float *)(param_1 + 0x6a),*(ushort *)((long)param_1 + 0x15c));
          if ((uVar41 & 0xff) == 2) {
LAB_7101d8bf14:
            pcVar13 = "bad";
          }
          else {
            if ((uVar41 & 0xff) == 0) goto LAB_7101d8bf08;
LAB_7101d8bed0:
            pcVar13 = "off";
          }
        }
        else {
LAB_7101d8bedc:
          if (bVar28 == 0) {
            uVar41 = FUN_71025cba90(*(float *)(param_1 + 0x6a),*(ushort *)((long)param_1 + 0x15c));
            if ((uVar41 & 0xff) == 2) goto LAB_7101d8bf14;
            if ((uVar41 & 0xff) != 0) goto LAB_7101d8bed0;
LAB_7101d8bf08:
            pcVar13 = "good";
          }
          else {
            pcVar13 = "tired";
          }
        }
        FUN_7103778300(0x3f800000,(long)local_a0,(long)pcVar13);
      }
      else if ((lVar22 != 0) && (lVar22 = *(long *)(lVar22 + 0x18), lVar22 != 0)) {
        *(byte *)(lVar22 + 0x58) = *(byte *)(lVar22 + 0x58) & 0xfe;
      }
      FUN_7103776640(&local_b8,(long)puVar1,(byte ****)"set_parts_btn_style",pppuVar15,ppppbVar18,
                     pppplVar14,param_6,param_7,param_8);
      uVar29 = local_b0;
      if ((*(char *)(puVar27 + 0x2f) == '\0') && (*(int *)(param_1 + 0x2b) != 5)) {
        if ((*(long *)(local_b0 + 8) != 0) &&
           (lVar22 = *(long *)(*(long *)(local_b0 + 8) + 0x18), lVar22 != 0)) {
          *(byte *)(lVar22 + 0x58) = *(byte *)(lVar22 + 0x58) | 1;
        }
        FUN_7103776910(&local_148,(long)&local_b8,(long ****)"txt_help",pppuVar15,ppppbVar18,
                       pppplVar14,param_6,param_7,param_8);
        FUN_710377a120((long)&local_148,"mnu_spirits_select_detail",pppuVar15,ppppbVar18,pppplVar14,
                       param_6,param_7,param_8);
        plVar37 = local_140;
        local_148 = &PTR_FUN_710523d9a8;
        local_140 = (long *)0x0;
        if (plVar37 != (long *)0x0) {
          FUN_710392eb40((ulong)plVar37);
        }
      }
      else if ((*(long *)(local_b0 + 8) != 0) &&
              (lVar22 = *(long *)(*(long *)(local_b0 + 8) + 0x18), lVar22 != 0)) {
        *(byte *)(lVar22 + 0x58) = *(byte *)(lVar22 + 0x58) & 0xfe;
      }
      lVar42 = *(long *)(lVar42 + 0x1d8);
      uVar23 = FUN_71032a9470(lVar42,*(ushort *)((long)param_1 + 0x15c));
      FUN_71032a9540((uint *)&local_148,lVar42,uVar23);
      FUN_71003a4ca0((uint *)&local_1c8,"spi_%s",&local_140,uVar23,ppppbVar18,pppplVar14,param_6,
                     param_7,param_8);
      FUN_7103776910(&local_148,(long)puVar1,(long ****)"set_txt_name_spirit",uVar23,ppppbVar18,
                     pppplVar14,param_6,param_7,param_8);
      FUN_710377a120((long)&local_148,(char *)local_1c0,uVar23,ppppbVar18,pppplVar14,param_6,param_7
                     ,param_8);
      plVar37 = local_140;
      local_148 = &PTR_FUN_710523d9a8;
      local_140 = (long *)0x0;
      if (plVar37 != (long *)0x0) {
        FUN_710392eb40((ulong)plVar37);
      }
      if ((uVar44 & 0xff) == 4) {
        FUN_7103776640(&local_148,(long)puVar1,(byte ****)"set_parts_power",uVar23,ppppbVar18,
                       pppplVar14,param_6,param_7,param_8);
        uVar23 = (ulong)local_140;
        if ((*(long *)((long)local_140 + 8) != 0) &&
           (lVar42 = *(long *)(*(long *)((long)local_140 + 8) + 0x18), lVar42 != 0)) {
          *(byte *)(lVar42 + 0x58) = *(byte *)(lVar42 + 0x58) & 0xfe;
        }
        local_148 = &PTR_FUN_710523d988;
        local_140 = (long *)0x0;
      }
      else {
        uVar23 = 1;
        local_278 = (undefined **)0x1;
        local_270 = local_270 & 0xffffff00;
        uStack_26c = 0;
        uStack_268 = 0;
        local_260 = 0x52ffff0000000000;
        local_258 = 0;
        uVar19 = *(ushort *)((long)param_1 + 0x15e);
        if ((ulong)uVar19 != 0xffff) {
          if (uVar19 >> 4 < 0x177) {
            puVar27 = (undefined2 *)
                      (*(long *)(*DAT_7105329f98 + 0x30) + (ulong)uVar19 * 0x50 + 72000);
          }
          else {
            puVar27 = &DAT_710532a878;
            if (((ushort)(uVar19 + 0xe890) < 100) &&
               (lVar42 = *(long *)(*DAT_7105329f98 + 0x30) + (ulong)(ushort)(uVar19 + 0xe890) * 0x50
               , *(short *)(lVar42 + 0x88cc8) != -1)) {
              puVar27 = (undefined2 *)(lVar42 + 0x88cc0);
            }
          }
          uVar23 = (ulong)(ushort)puVar27[8];
        }
        FUN_71025ca840((int *)&local_278,*(ushort *)((long)param_1 + 0x15c),(int)uVar23);
        uVar41 = FUN_71025cb8d0((long)&local_278);
        uVar24 = (ulong)uVar41;
        *(uint *)((long)param_1 + 0x27c) = uVar41;
        FUN_7103776640(&local_c8,(long)puVar1,(byte ****)"set_parts_power",uVar23,ppppbVar18,
                       pppplVar14,param_6,param_7,param_8);
        FUN_7103776910(&local_148,(long)&local_c8,(long ****)"set_txt_power_00",uVar23,ppppbVar18,
                       pppplVar14,param_6,param_7,param_8);
        uVar16 = 1;
        FUN_710377a280((long)&local_148,(byte *)"mnu_spirits_select_power_n",1);
        uVar23 = (ulong)local_140;
        local_148 = &PTR_FUN_710523d9a8;
        local_140 = (long *)0x0;
        if (uVar23 != 0) {
          FUN_710392eb40(uVar23);
        }
        FUN_7103776910(&local_148,(long)&local_c8,(long ****)"set_txt_power_sdw",uVar16,uVar24,
                       pppplVar14,param_6,param_7,param_8);
        FUN_710377a280((long)&local_148,(byte *)"mnu_spirits_select_power_n",1);
        uVar23 = (ulong)local_140;
        local_148 = &PTR_FUN_710523d9a8;
        local_140 = (long *)0x0;
        if (uVar23 != 0) {
          FUN_710392eb40(uVar23);
        }
        FUN_710339dde0((uint *)&local_148,(char)uVar44,'\0');
        uVar23 = local_c0;
        FUN_7103778300(0x3f800000,local_c0,(long)&local_140);
        if ((*(long *)(local_c0 + 8) != 0) &&
           (lVar42 = *(long *)(*(long *)(local_c0 + 8) + 0x18), lVar42 != 0)) {
          *(byte *)(lVar42 + 0x58) = *(byte *)(lVar42 + 0x58) | 1;
        }
        local_c8 = &PTR_FUN_710523d988;
        local_c0 = 0;
      }
      if (uVar23 != 0) {
        uVar24 = *(ulong *)(uVar23 + 0x18);
        *(undefined ***)(uVar23 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar23 + 0x18) = 0;
        if (uVar24 != 0) {
          FUN_710392eb40(uVar24);
        }
        FUN_710392eb40(uVar23);
      }
      FUN_71025c9570((long *)*param_1,(long)puVar1,(ulong)*(ushort *)((long)param_1 + 0x15c),
                     (ulong)*(ushort *)((long)param_1 + 0x15e),pppplVar14,param_6,param_7,param_8);
      local_b8 = &PTR_FUN_710523d988;
      local_b0 = 0;
      if (uVar29 != 0) {
        uVar23 = *(ulong *)(uVar29 + 0x18);
        *(undefined ***)(uVar29 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar29 + 0x18) = 0;
        if (uVar23 != 0) {
          FUN_710392eb40(uVar23);
        }
        FUN_710392eb40(uVar29);
      }
      local_a8 = &PTR_FUN_710523d988;
      local_a0 = (long *)0x0;
      if (plVar36 != (long *)0x0) {
        uVar29 = plVar36[3];
        plVar36[2] = (long)&PTR_FUN_710523d9a8;
        plVar36[3] = 0;
        if (uVar29 != 0) {
          FUN_710392eb40(uVar29);
        }
        FUN_710392eb40((ulong)plVar36);
      }
      plVar36 = local_90;
      local_98 = &PTR_FUN_710523d988;
      local_90 = (long *)0x0;
      if (plVar36 != (long *)0x0) {
        uVar29 = plVar36[3];
        plVar36[2] = (long)&PTR_FUN_710523d9a8;
        plVar36[3] = 0;
        if (uVar29 != 0) {
          FUN_710392eb40(uVar29);
        }
        FUN_710392eb40((ulong)plVar36);
      }
    }
    plVar36 = local_80;
    local_88 = &PTR_FUN_710523d988;
    local_80 = (long *)0x0;
    if (plVar36 != (long *)0x0) {
      uVar29 = plVar36[3];
      plVar36[2] = (long)&PTR_FUN_710523d9a8;
      plVar36[3] = 0;
      if (uVar29 != 0) {
        FUN_710392eb40(uVar29);
      }
      FUN_710392eb40((ulong)plVar36);
    }
    plVar36 = (long *)CONCAT44(uStack_224,local_228);
    local_230 = &PTR_FUN_710523d988;
    local_228 = 0;
    uStack_224 = 0;
    if (plVar36 == (long *)0x0) {
      return;
    }
    plVar36[2] = (long)&PTR_FUN_710523d9a8;
    goto LAB_7101d8be00;
  case 4:
    puVar1 = param_1 + 0x26;
    lVar42 = *(long *)(param_1[0x27] + 8);
    if (*(short *)((long)param_1 + 0x15e) == -1) {
      if ((lVar42 != 0) && (lVar42 = *(long *)(lVar42 + 0x18), lVar42 != 0)) {
        bVar28 = *(byte *)(lVar42 + 0x58) & 0xfe;
        goto LAB_7101d8adc4;
      }
    }
    else if ((lVar42 != 0) && (lVar42 = *(long *)(lVar42 + 0x18), lVar42 != 0)) {
      bVar28 = *(byte *)(lVar42 + 0x58) | 1;
LAB_7101d8adc4:
      *(byte *)(lVar42 + 0x58) = bVar28;
    }
    sVar6 = *(short *)((long)param_1 + 0x15c);
    if ((sVar6 != -1) && (sVar6 < 2000)) {
      lVar42 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
      uVar19 = *(ushort *)(lVar42 + (long)(int)sVar6 * 2 + 0x60);
      uVar29 = (ulong)uVar19;
      uVar23 = (*(long *)(lVar42 + 0x28) - *(long *)(lVar42 + 0x20) >> 6) * -0x3333333333333333;
      if ((uint)uVar19 < (uint)uVar23) {
        puVar27 = (undefined2 *)(*(long *)(lVar42 + 0x20) + uVar29 * 0x140);
        if (uVar23 < uVar29 || uVar23 - uVar29 == 0) {
          puVar27 = &DAT_7105182b08;
        }
        if (*(char *)(puVar27 + 0x2f) == '\0') {
          if (*(byte *)(puVar27 + 0x36) - 1 < 3) {
            uVar43 = (undefined1)(0x20301 >> (ulong)((*(byte *)(puVar27 + 0x36) - 1 & 3) << 3));
          }
          else {
            uVar43 = 0;
          }
        }
        else {
          uVar43 = 4;
        }
        FUN_7103776640(&local_1c8,(long)puVar1,(byte ****)"set_parts_param_03",param_3,param_4,
                       param_5,param_6,param_7,param_8);
        uVar16 = 0;
        FUN_710339dde0((uint *)&local_148,uVar43,'\0');
        uVar23 = local_1c0[0];
        FUN_7103778300(0x3f800000,local_1c0[0],(long)&local_140);
        FUN_7103776640(&local_278,(long)&local_1c8,(byte ****)"set_parts_icon_atr",uVar16,param_4,
                       param_5,param_6,param_7,param_8);
        param_4 = (long *********)0x0;
        param_5 = (long ****)0x0;
        FUN_71025b12c0((long)&local_278,uVar43,-1,0,0,param_6,param_7,param_8);
        uVar29 = CONCAT44(uStack_26c,local_270);
        local_278 = &PTR_FUN_710523d988;
        local_270 = 0;
        uStack_26c = 0;
        if (uVar29 != 0) {
          uVar24 = *(ulong *)(uVar29 + 0x18);
          *(undefined ***)(uVar29 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar29 + 0x18) = 0;
          if (uVar24 != 0) {
            FUN_710392eb40(uVar24);
          }
          FUN_710392eb40(uVar29);
        }
        local_1c8 = (long ********)&PTR_FUN_710523d988;
        local_1c0[0] = 0;
        if (uVar23 != 0) {
          uVar29 = *(ulong *)(uVar23 + 0x18);
          *(undefined ***)(uVar23 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar23 + 0x18) = 0;
          if (uVar29 != 0) {
            FUN_710392eb40(uVar29);
          }
          FUN_710392eb40(uVar23);
        }
      }
    }
    uVar16 = 0;
    FUN_7101d8cfb0((long)param_1,0,0,(ulong)param_4,param_5,param_6,param_7,param_8);
    FUN_7101d8d450((long)param_1,extraout_x1_01,uVar16,(ulong)param_4,param_5,param_6,param_7,
                   param_8);
    FUN_7103776640(&local_148,(long)puVar1,(byte ****)"set_parts_sp",uVar16,param_4,param_5,param_6,
                   param_7,param_8);
    FUN_7103776640(&local_1c8,(long)&local_148,(byte ****)"set_parts_sp_icon_txt",uVar16,param_4,
                   param_5,param_6,param_7,param_8);
    FUN_7103776910(&local_278,(long)&local_1c8,(long ****)"set_txt_help",uVar16,param_4,param_5,
                   param_6,param_7,param_8);
    uVar23 = (ulong)*(uint *)(param_1 + 0x51);
    uVar16 = 1;
    FUN_710377a280((long)&local_278,(byte *)"mnu_spirits_raise_sp_n",1);
    uVar29 = CONCAT44(uStack_26c,local_270);
    local_278 = &PTR_FUN_710523d9a8;
    local_270 = 0;
    uStack_26c = 0;
    if (uVar29 != 0) {
      FUN_710392eb40(uVar29);
    }
    uVar29 = local_1c0[0];
    local_1c8 = (long ********)&PTR_FUN_710523d988;
    local_1c0[0] = 0;
    if (uVar29 != 0) {
      uVar24 = *(ulong *)(uVar29 + 0x18);
      *(undefined ***)(uVar29 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar29 + 0x18) = 0;
      if (uVar24 != 0) {
        FUN_710392eb40(uVar24);
      }
      FUN_710392eb40(uVar29);
    }
    plVar36 = local_140;
    local_148 = &PTR_FUN_710523d988;
    local_140 = (long *)0x0;
    if (plVar36 != (long *)0x0) {
      uVar29 = plVar36[3];
      plVar36[2] = (long)&PTR_FUN_710523d9a8;
      plVar36[3] = 0;
      if (uVar29 != 0) {
        FUN_710392eb40(uVar29);
      }
      FUN_710392eb40((ulong)plVar36);
    }
    FUN_7103776640(&local_148,(long)puVar1,(byte ****)"set_parts_btn_style",uVar16,uVar23,param_5,
                   param_6,param_7,param_8);
    plVar36 = local_140;
    if ((local_140[1] != 0) && (lVar42 = *(long *)(local_140[1] + 0x18), lVar42 != 0)) {
      *(byte *)(lVar42 + 0x58) = *(byte *)(lVar42 + 0x58) & 0xfe;
    }
    FUN_7103778300(0x3f800000,param_1[0x27],0x710436a273);
    local_148 = &PTR_FUN_710523d988;
    local_140 = (long *)0x0;
    if (plVar36 == (long *)0x0) {
      return;
    }
    plVar36[2] = (long)&PTR_FUN_710523d9a8;
LAB_7101d8be00:
    uVar29 = plVar36[3];
    plVar36[3] = 0;
    if (uVar29 != 0) {
      FUN_710392eb40(uVar29);
    }
    goto LAB_7101d8c684;
  case 5:
    if ((*(long *)(param_1[0x27] + 8) != 0) &&
       (lVar42 = *(long *)(*(long *)(param_1[0x27] + 8) + 0x18), lVar42 != 0)) {
      *(byte *)(lVar42 + 0x58) = *(byte *)(lVar42 + 0x58) | 1;
    }
    lVar42 = *(long *)(DAT_710532f730 + 8);
    FUN_7103776910(&local_278,(long)(param_1 + 0x26),(long ****)"set_txt_name_spirit_00",param_3,
                   param_4,param_5,param_6,param_7,param_8);
    FUN_7103776640(&local_230,(long)(param_1 + 0x26),(byte ****)"set_parts_paramset_00",param_3,
                   param_4,param_5,param_6,param_7,param_8);
    uVar19 = *(ushort *)((long)param_1 + 0x15c);
    if (((uVar19 == 0xffff) || (1999 < (short)uVar19)) ||
       (lVar22 = *(long *)(lVar42 + 0x1d8),
       (uint)((int)((ulong)(*(long *)(lVar22 + 0x28) - *(long *)(lVar22 + 0x20)) >> 6) * -0x33333333
             ) <= (uint)*(ushort *)(lVar22 + (long)(int)(short)uVar19 * 2 + 0x60))) {
      *(undefined4 *)(param_1 + 0x68) = 0;
      plVar36 = *(long **)(CONCAT44(uStack_26c,local_270) + 0x10);
      if (plVar36 != (long *)0x0) {
        local_148 = (undefined **)((ulong)local_148 & 0xffffffff00000000);
        FUN_71037a2270(plVar36,(ushort *)&local_148,0,0);
      }
      uVar29 = CONCAT44(uStack_224,local_228);
      if ((*(long *)(uVar29 + 8) != 0) &&
         (lVar42 = *(long *)(*(long *)(uVar29 + 8) + 0x18), lVar42 != 0)) {
        *(byte *)(lVar42 + 0x58) = *(byte *)(lVar42 + 0x58) & 0xfe;
      }
    }
    else {
      uVar29 = FUN_71032a9470(lVar22,uVar19);
      FUN_71032a9540((uint *)&local_148,lVar22,uVar29);
      FUN_71003a4ca0((uint *)&local_1c8,"spi_%s",&local_140,uVar29,param_4,param_5,param_6,param_7,
                     param_8);
      FUN_710377a120((long)&local_278,(char *)local_1c0,uVar29,param_4,param_5,param_6,param_7,
                     param_8);
      uVar29 = CONCAT44(uStack_224,local_228);
      if ((*(long *)(uVar29 + 8) != 0) &&
         (lVar22 = *(long *)(*(long *)(uVar29 + 8) + 0x18), lVar22 != 0)) {
        *(byte *)(lVar22 + 0x58) = *(byte *)(lVar22 + 0x58) | 1;
      }
      FUN_7101b14960((long *)*param_1,(long)&local_230,*(ushort *)((long)param_1 + 0x15c),
                     (byte ****)param_4,param_5,param_6,param_7,param_8);
      uVar23 = (ulong)*(short *)((long)param_1 + 0x15c);
      lVar42 = *(long *)(lVar42 + 0x1d8);
      if (uVar23 != 0xffffffffffffffff) {
        uVar23 = (ulong)*(ushort *)(lVar42 + uVar23 * 2 + 0x60);
      }
      uVar24 = (*(long *)(lVar42 + 0x28) - *(long *)(lVar42 + 0x20) >> 6) * -0x3333333333333333;
      puVar27 = (undefined2 *)(*(long *)(lVar42 + 0x20) + uVar23 * 0x140);
      if (uVar24 < uVar23 || uVar24 - uVar23 == 0) {
        puVar27 = &DAT_7105182b08;
      }
      cVar4 = *(char *)(puVar27 + 0x2f);
      if (cVar4 == '\x03') {
        FUN_7103778300(0x3f800000,uVar29,0x710424f898);
        cVar4 = *(char *)(puVar27 + 0x2f);
      }
      uVar21 = 0x5a;
      if (cVar4 != '\x01') {
        uVar21 = 0;
      }
      *(undefined4 *)(param_1 + 0x68) = uVar21;
    }
    local_230 = &PTR_FUN_710523d988;
    local_228 = 0;
    uStack_224 = 0;
    if (uVar29 != 0) {
      uVar23 = *(ulong *)(uVar29 + 0x18);
      *(undefined ***)(uVar29 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar29 + 0x18) = 0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      FUN_710392eb40(uVar29);
    }
    plVar36 = (long *)CONCAT44(uStack_26c,local_270);
    local_278 = &PTR_FUN_710523d9a8;
    local_270 = 0;
    uStack_26c = 0;
    break;
  case 6:
  case 7:
    puVar3 = param_1 + 0x26;
    if ((*(long *)(param_1[0x27] + 8) != 0) &&
       (lVar42 = *(long *)(*(long *)(param_1[0x27] + 8) + 0x18), lVar42 != 0)) {
      *(byte *)(lVar42 + 0x58) = *(byte *)(lVar42 + 0x58) | 1;
    }
    FUN_7103776910(&local_88,(long)puVar3,(long ****)"set_txt_name_spirit_pv",param_3,param_4,
                   param_5,param_6,param_7,param_8);
    FUN_7103776910(&local_98,(long)puVar3,(long ****)"set_txt_series",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    FUN_7103776910(&local_a8,(long)puVar3,(long ****)"set_parts_btn_help_00",param_3,param_4,param_5
                   ,param_6,param_7,param_8);
    lVar22 = *(long *)(DAT_710532f730 + 8);
    lVar42 = *DAT_7105329f98;
    uVar19 = *(ushort *)((long)param_1 + 0x15c);
    if ((uVar19 == 0xffff) || (iVar20 = (int)(short)uVar19, 1999 < iVar20)) {
LAB_7101d8a450:
      FUN_7103776910(&local_148,(long)puVar3,(long ****)"set_txt_name_spirit",param_3,param_4,
                     param_5,param_6,param_7,param_8);
      pcVar13 = "mnu_spirits_recall_question";
    }
    else {
      lVar33 = *(long *)(lVar22 + 0x1d8);
      if (((uint)((int)((ulong)(*(long *)(lVar33 + 0x28) - *(long *)(lVar33 + 0x20)) >> 6) *
                 -0x33333333) <= (uint)*(ushort *)(lVar33 + (long)iVar20 * 2 + 0x60)) ||
         ((*(byte *)(*(long *)(lVar42 + 0x30) + (long)iVar20 * 0x24 + 1) >> 3 & 1) == 0))
      goto LAB_7101d8a450;
      param_3 = (char *)FUN_71032a9470(lVar33,uVar19);
      FUN_71032a9540((uint *)&local_148,lVar33,(ulong)param_3);
      FUN_71003a4ca0((uint *)&local_1c8,"spi_%s",&local_140,param_3,param_4,param_5,param_6,param_7,
                     param_8);
      FUN_7103776910(&local_148,(long)puVar3,(long ****)"set_txt_name_spirit",param_3,param_4,
                     param_5,param_6,param_7,param_8);
      pcVar13 = (char *)local_1c0;
    }
    FUN_710377a120((long)&local_148,pcVar13,param_3,param_4,param_5,param_6,param_7,param_8);
    plVar36 = local_140;
    local_148 = &PTR_FUN_710523d9a8;
    local_140 = (long *)0x0;
    if (plVar36 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar36);
    }
    FUN_7103776640(&local_b8,(long)puVar3,(byte ****)"set_parts_class",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    uVar29 = local_b0;
    uVar23 = (ulong)*(short *)((long)param_1 + 0x15c);
    lVar33 = *(long *)(lVar22 + 0x1d8);
    if (uVar23 != 0xffffffffffffffff) {
      uVar23 = (ulong)*(ushort *)(lVar33 + uVar23 * 2 + 0x60);
    }
    uVar24 = (*(long *)(lVar33 + 0x28) - *(long *)(lVar33 + 0x20) >> 6) * -0x3333333333333333;
    puVar27 = (undefined2 *)(*(long *)(lVar33 + 0x20) + uVar23 * 0x140);
    if (uVar24 < uVar23 || uVar24 - uVar23 == 0) {
      puVar27 = &DAT_7105182b08;
    }
    switch(*(undefined1 *)(puVar27 + 0x34)) {
    case 0:
      pcVar13 = "class_none";
      break;
    case 1:
      pcVar13 = "class_hope";
      break;
    case 2:
      pcVar13 = "class_ace";
      break;
    case 3:
      pcVar13 = "class_legend";
      break;
    default:
      if ((*(long *)(local_b0 + 8) != 0) &&
         (lVar33 = *(long *)(*(long *)(local_b0 + 8) + 0x18), lVar33 != 0)) {
        *(byte *)(lVar33 + 0x58) = *(byte *)(lVar33 + 0x58) & 0xfe;
      }
      goto LAB_7101d8ac54;
    }
    FUN_7103778300(0x3f800000,local_b0,(long)pcVar13);
LAB_7101d8ac54:
    FUN_7103776640(&local_c8,(long)puVar3,(byte ****)"set_parts_summon_view_00",param_3,param_4,
                   param_5,param_6,param_7,param_8);
    uVar23 = local_c0;
    FUN_7103778300(0x3f800000,local_c0,0x710436c7b4);
    FUN_71037a8790((long)&local_148,0x80,(byte *)"mnu_spirits_recall_spirit_possess");
    sVar6 = *(short *)((long)param_1 + 0x15c);
    pppplVar14 = (long ****)0x0;
    if ((sVar6 != -1) && (iVar20 = (int)sVar6, iVar20 < 2000)) {
      lVar33 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
      if ((uint)*(ushort *)(lVar33 + (long)iVar20 * 2 + 0x60) <
          (uint)((int)((ulong)(*(long *)(lVar33 + 0x28) - *(long *)(lVar33 + 0x20)) >> 6) *
                -0x33333333)) {
        pppplVar14 = (long ****)
                     (ulong)*(ushort *)(*(long *)(lVar42 + 0x30) + (long)iVar20 * 0x24 + 0x20);
      }
      else {
        pppplVar14 = (long ****)0x0;
      }
    }
    pcVar13 = "%s %u";
    param3 = (char *)&local_148;
    snprintf((char *)&local_1c8,0x80,"%s %u",param3,(uint)pppplVar14);
    FUN_7103776910(&local_278,(long)&local_c8,(long ****)"set_txt_num_have",pcVar13,param3,
                   pppplVar14,param_6,param_7,param_8);
    uVar24 = CONCAT44(uStack_26c,local_270);
    if (*(long **)(uVar24 + 0x10) != (long *)0x0) {
      FUN_71037a28a0(*(long **)(uVar24 + 0x10),(byte *)&local_1c8);
    }
    local_278 = &PTR_FUN_710523d9a8;
    local_270 = 0;
    uStack_26c = 0;
    if (uVar24 != 0) {
      FUN_710392eb40(uVar24);
    }
    if (*(int *)(param_1 + 0x5f) < 1) {
      if (*(char *)((long)param_1 + 0x2f4) == '\0') {
        pcVar12 = "show_not_enough_base";
      }
      else {
        pcVar12 = "hide_not_enough_base";
      }
      FUN_7103778300(0x3f800000,local_c0,(long)pcVar12);
      FUN_7101d8cda0((long)param_1,1,pcVar13,param3,pppplVar14,param_6,param_7,param_8);
      if (*(char *)((long)param_1 + 0x2f6) != '\0') {
        iVar20 = *(int *)(*(long *)**(undefined8 **)(*DAT_7105314510 + 0xd8) + 0x24);
        if (*(int *)(param_1[0x60] + 0x94) != iVar20) {
          FUN_7103399f50(param_1[0x60],iVar20,(long ****)pcVar13,(byte ****)param3,pppplVar14,
                         param_6,param_7,param_8);
        }
      }
      *(undefined1 *)((long)param_1 + 0x2f6) = 0;
    }
    else {
      FUN_7103778300(0x3f800000,local_c0,0x71044334d2);
      FUN_7101d8cda0((long)param_1,0,pcVar13,param3,pppplVar14,param_6,param_7,param_8);
      *(int *)(param_1 + 0x5f) = *(int *)(param_1 + 0x5f) + -1;
    }
    uVar19 = *(ushort *)((long)param_1 + 0x15c);
    lVar42 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
    if (uVar19 == 0xffff) {
      uVar24 = 0xffffffff;
    }
    else {
      uVar24 = (ulong)*(ushort *)(lVar42 + (long)(short)uVar19 * 2 + 0x60);
    }
    uVar30 = (*(long *)(lVar42 + 0x28) - *(long *)(lVar42 + 0x20) >> 6) * -0x3333333333333333;
    puVar27 = (undefined2 *)(*(long *)(lVar42 + 0x20) + uVar24 * 0x140);
    if (uVar30 < uVar24 || uVar30 - uVar24 == 0) {
      puVar27 = &DAT_7105182b08;
    }
    if (*(char *)(puVar27 + 0x2f) == '\x03') {
      bVar9 = FUN_71025c9890(uVar19);
      bVar9 = !bVar9;
    }
    else {
      bVar9 = false;
    }
    lVar42 = *(long *)(param_1[0x29] + 0x1b8);
    if (lVar42 != 0) {
      lVar33 = param_1[0x29] + 0x1b8;
      lVar25 = lVar33;
      do {
        bVar8 = *(int *)(lVar42 + 0x20) < 0;
        if (!bVar8) {
          lVar25 = lVar42;
        }
        lVar42 = *(long *)(lVar42 + (ulong)bVar8 * 8);
      } while (lVar42 != 0);
      if (((lVar25 != lVar33) && (*(int *)(lVar25 + 0x20) < 1)) &&
         (plVar36 = *(long **)(lVar25 + 0x28), plVar36 != (long *)0x0)) {
        (**(code **)(*plVar36 + 0x208))(plVar36,bVar9);
        pcVar13 = (char *)0x0;
        (**(code **)(*plVar36 + 0x388))(plVar36,~bVar9 & 1);
      }
    }
    plVar36 = local_a0;
    lVar42 = *local_a0;
    if (lVar42 != 0) {
      *(byte *)(lVar42 + 0x58) = *(byte *)(lVar42 + 0x58) & 0xfe | bVar9;
    }
    uVar44 = *(uint *)(param_1 + 0x5e);
    if (uVar44 == 0) {
      lVar42 = *local_80;
      if (lVar42 != 0) {
        *(byte *)(lVar42 + 0x58) = *(byte *)(lVar42 + 0x58) & 0xfe;
      }
      lVar42 = *local_90;
      if (lVar42 != 0) {
        *(byte *)(lVar42 + 0x58) = *(byte *)(lVar42 + 0x58) & 0xfe;
      }
      lVar42 = *(long *)(param_1[0x29] + 0x1b8);
      if (lVar42 != 0) {
        lVar33 = param_1[0x29] + 0x1b8;
        lVar25 = lVar33;
        do {
          bVar9 = *(int *)(lVar42 + 0x20) < 0;
          if (!bVar9) {
            lVar25 = lVar42;
          }
          lVar42 = *(long *)(lVar42 + (ulong)bVar9 * 8);
        } while (lVar42 != 0);
        if (((lVar25 != lVar33) && (*(int *)(lVar25 + 0x20) < 1)) &&
           (plVar37 = *(long **)(lVar25 + 0x28), plVar37 != (long *)0x0)) {
          (**(code **)(*plVar37 + 0x208))(plVar37,0);
          pcVar13 = (char *)0x0;
          (**(code **)(*plVar37 + 0x388))(plVar37,1);
        }
      }
      lVar42 = *local_a0;
      if (lVar42 != 0) {
        *(byte *)(lVar42 + 0x58) = *(byte *)(lVar42 + 0x58) & 0xfe;
      }
      FUN_7103778300(0x3f800000,local_c0,0x710425f84f);
    }
    else {
      FUN_7103778300(0x3f800000,local_c0,0x71043be9e9);
      FUN_7103776910(&local_278,(long)&local_c8,(long ****)"set_txt_num_return_sp",pcVar13,param3,
                     pppplVar14,param_6,param_7,param_8);
      pcVar13 = (char *)0x1;
      param3 = (char *)(ulong)uVar44;
      FUN_710377a280((long)&local_278,(byte *)"mnu_spirits_recall_return_sp_n",1);
      uVar24 = CONCAT44(uStack_26c,local_270);
      local_278 = &PTR_FUN_710523d9a8;
      local_270 = 0;
      uStack_26c = 0;
      if (uVar24 != 0) {
        FUN_710392eb40(uVar24);
      }
    }
    sVar6 = *(short *)((long)param_1 + 0x15c);
    lVar42 = *(long *)(lVar22 + 0x1d8);
    if ((long)sVar6 == -1) {
      uVar24 = 0xffffffff;
    }
    else {
      uVar24 = (ulong)*(ushort *)(lVar42 + (long)sVar6 * 2 + 0x60);
    }
    uVar30 = (*(long *)(lVar42 + 0x28) - *(long *)(lVar42 + 0x20) >> 6) * -0x3333333333333333;
    puVar27 = (undefined2 *)(*(long *)(lVar42 + 0x20) + uVar24 * 0x140);
    if (uVar30 < uVar24 || uVar30 - uVar24 == 0) {
      puVar27 = &DAT_7105182b08;
    }
    uVar41 = *(uint *)(puVar27 + 0x5c);
    if (sVar6 != -1) {
      FUN_7103776910(&local_278,(long)&local_c8,(long ****)"set_txt_num_cost_sp",pcVar13,param3,
                     pppplVar14,param_6,param_7,param_8);
      pcVar13 = (char *)0x1;
      param3 = (char *)(ulong)uVar41;
      FUN_710377a280((long)&local_278,(byte *)"mnu_spirits_recall_need_sp_n",1);
      uVar24 = CONCAT44(uStack_26c,local_270);
      local_278 = &PTR_FUN_710523d9a8;
      local_270 = 0;
      uStack_26c = 0;
      if (uVar24 != 0) {
        FUN_710392eb40(uVar24);
      }
    }
    uVar39 = *(uint *)(*(long *)**(undefined8 **)(*DAT_7105314510 + 0xd8) + 0x24);
    FUN_7103776640(&local_1d8,(long)&local_c8,(byte ****)"set_parts_sp",pcVar13,param3,pppplVar14,
                   param_6,param_7,param_8);
    if (*(char *)(param_1 + 0x61) == '\0') {
      FUN_7103399950((undefined1 *)param_1[0x60],(long)&local_1d8,(long ****)"set_txt_num_sp",
                     0x7104412cc5,pppplVar14,param_6,param_7,param_8);
      pcVar13 = "anim_count";
      param3 = "anim_stop";
      FUN_7103399a70(param_1[0x60],(long)&local_1d8,(long ****)"anim_count",(byte ****)"anim_stop",
                     pppplVar14,param_6,param_7,param_8);
      lVar42 = param_1[0x60];
      *(undefined8 *)(lVar42 + 0x58) = 0x205bf6fc80;
      *(undefined8 *)(lVar42 + 0x60) = 0x257123f4dd;
      lVar42 = param_1[0x60];
      *(undefined8 *)(lVar42 + 0x68) = 0x21fc221a56;
      *(undefined8 *)(lVar42 + 0x70) = 0x26ef44d702;
      lVar42 = param_1[0x60];
      if (*(uint *)(lVar42 + 0x94) != uVar39) {
        pcVar13 = (char *)0x1;
        param3 = (char *)(ulong)uVar39;
        *(uint *)(lVar42 + 0x94) = uVar39;
        FUN_710377a280(lVar42,(byte *)(lVar42 + 0x18),1);
      }
      *(undefined1 *)(param_1 + 0x61) = 1;
    }
    if (uVar39 + uVar44 < uVar41) {
      pcVar12 = "not_enough_sp";
    }
    else {
      pcVar12 = "enough_sp";
    }
    FUN_7103778300(0x3f800000,local_c0,(long)pcVar12);
    FUN_7103776640(&local_1e8,(long)puVar3,(byte ****)"set_parts_param_00",pcVar13,param3,pppplVar14
                   ,param_6,param_7,param_8);
    FUN_7103776640(&local_1f8,(long)puVar3,(byte ****)"set_parts_param_01",pcVar13,param3,pppplVar14
                   ,param_6,param_7,param_8);
    ppppbVar18 = (byte ****)(ulong)*(ushort *)((long)param_1 + 0x15c);
    pppuVar15 = &local_1f8;
    pppplVar14 = (long ****)0xffff;
    FUN_71025c7b60(param_1 + 1,(long)&local_1e8,(long)pppuVar15,ppppbVar18,0xffff,param_6,param_7,
                   param_8);
    FUN_7103776640(&local_208,(long)puVar3,(byte ****)"set_parts_power",pppuVar15,ppppbVar18,
                   pppplVar14,param_6,param_7,param_8);
    uVar24 = local_200;
    uVar19 = *(ushort *)((long)param_1 + 0x15c);
    uVar43 = 0;
    if (((long)(short)uVar19 == -1) || (1999 < (short)uVar19)) {
LAB_7101d8b404:
      if ((*(long *)(local_200 + 8) != 0) &&
         (lVar42 = *(long *)(*(long *)(local_200 + 8) + 0x18), lVar42 != 0)) {
        *(byte *)(lVar42 + 0x58) = *(byte *)(lVar42 + 0x58) | 1;
        uVar19 = *(ushort *)((long)param_1 + 0x15c);
      }
      local_230 = (undefined **)0x1;
      uVar16 = 1;
      local_228 = local_228 & 0xffffff00;
      uStack_224 = 0;
      uStack_220 = 0;
      local_218 = 0x52ffff0000000000;
      local_210 = 0;
      FUN_71025ca840((int *)&local_230,uVar19,1);
      uVar44 = FUN_71025cb8d0((long)&local_230);
      uVar32 = (ulong)uVar44;
      FUN_7103776910(&local_278,(long)&local_208,(long ****)"set_txt_power_00",uVar16,ppppbVar18,
                     pppplVar14,param_6,param_7,param_8);
      uVar16 = 1;
      FUN_710377a280((long)&local_278,(byte *)"mnu_spirits_select_power_n",1);
      uVar30 = CONCAT44(uStack_26c,local_270);
      local_278 = &PTR_FUN_710523d9a8;
      local_270 = 0;
      uStack_26c = 0;
      if (uVar30 != 0) {
        FUN_710392eb40(uVar30);
      }
      FUN_7103776910(&local_278,(long)&local_208,(long ****)"set_txt_power_sdw",uVar16,uVar32,
                     pppplVar14,param_6,param_7,param_8);
      FUN_710377a280((long)&local_278,(byte *)"mnu_spirits_select_power_n",1);
      uVar30 = CONCAT44(uStack_26c,local_270);
      local_278 = &PTR_FUN_710523d9a8;
      local_270 = 0;
      uStack_26c = 0;
      if (uVar30 != 0) {
        FUN_710392eb40(uVar30);
      }
      FUN_710339dde0((uint *)&local_278,uVar43,'\0');
      FUN_7103778300(0x3f800000,local_200,(long)&local_270);
    }
    else {
      lVar42 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
      uVar32 = (*(long *)(lVar42 + 0x28) - *(long *)(lVar42 + 0x20) >> 6) * -0x3333333333333333;
      uVar5 = *(ushort *)(lVar42 + (long)(short)uVar19 * 2 + 0x60);
      uVar30 = (ulong)uVar5;
      if ((uint)uVar32 <= (uint)uVar5) {
LAB_7101d8b400:
        uVar43 = 0;
        goto LAB_7101d8b404;
      }
      puVar26 = (undefined2 *)(*(long *)(lVar42 + 0x20) + uVar30 * 0x140);
      if (uVar32 < uVar30 || uVar32 - uVar30 == 0) {
        puVar26 = &DAT_7105182b08;
      }
      if (*(char *)(puVar26 + 0x2f) == '\0') {
        if (2 < *(byte *)(puVar26 + 0x36) - 1) goto LAB_7101d8b400;
        uVar44 = 0x20301 >> (ulong)((*(byte *)(puVar26 + 0x36) - 1 & 3) << 3);
        uVar43 = (undefined1)uVar44;
        if ((uVar44 & 0xff) != 4) goto LAB_7101d8b404;
      }
      if ((*(long *)(local_200 + 8) != 0) &&
         (lVar42 = *(long *)(*(long *)(local_200 + 8) + 0x18), lVar42 != 0)) {
        *(byte *)(lVar42 + 0x58) = *(byte *)(lVar42 + 0x58) & 0xfe;
      }
      *(undefined4 *)(param_1 + 0x68) = 0x5a;
    }
    uVar30 = (ulong)*(ushort *)((long)param_1 + 0x15c);
    uVar32 = (ulong)*(ushort *)((long)param_1 + 0x15e);
    FUN_71025c9570((long *)*param_1,(long)puVar3,uVar30,uVar32,pppplVar14,param_6,param_7,param_8);
    if (*(char *)(puVar27 + 0x2f) == '\x01') {
      lVar42 = param_1[0x27];
      pcVar13 = "supporter";
LAB_7101d8b548:
      FUN_7103778300(0x3f800000,lVar42,(long)pcVar13);
    }
    else if (*(char *)(puVar27 + 0x2f) == '\0') {
      lVar42 = param_1[0x27];
      pcVar13 = "attacker";
      goto LAB_7101d8b548;
    }
    (**(code **)(*(long *)param_1[0x2a] + 0x60))((long *)param_1[0x2a],1);
    FUN_7103776640(&local_278,(long)puVar3,(byte ****)"set_parts_icon_super",uVar30,uVar32,
                   pppplVar14,param_6,param_7,param_8);
    uVar7 = CONCAT44(uStack_26c,local_270);
    if ((*(long *)(uVar7 + 8) != 0) &&
       (lVar42 = *(long *)(*(long *)(uVar7 + 8) + 0x18), lVar42 != 0)) {
      *(byte *)(lVar42 + 0x58) = *(byte *)(lVar42 + 0x58) & 0xfe;
    }
    FUN_7103776640(&local_230,(long)puVar1,(byte ****)"set_parts_aw",uVar30,uVar32,pppplVar14,
                   param_6,param_7,param_8);
    uVar30 = CONCAT44(uStack_224,local_228);
    local_230 = &PTR_FUN_710523d988;
    local_228 = 0;
    uStack_224 = 0;
    if (uVar30 != 0) {
      uVar32 = *(ulong *)(uVar30 + 0x18);
      *(undefined ***)(uVar30 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar30 + 0x18) = 0;
      if (uVar32 != 0) {
        FUN_710392eb40(uVar32);
      }
      FUN_710392eb40(uVar30);
    }
    local_278 = &PTR_FUN_710523d988;
    local_270 = 0;
    uStack_26c = 0;
    if (uVar7 != 0) {
      uVar30 = *(ulong *)(uVar7 + 0x18);
      *(undefined ***)(uVar7 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar7 + 0x18) = 0;
      if (uVar30 != 0) {
        FUN_710392eb40(uVar30);
      }
      FUN_710392eb40(uVar7);
    }
    local_208 = &PTR_FUN_710523d988;
    local_200 = 0;
    if (uVar24 != 0) {
      uVar30 = *(ulong *)(uVar24 + 0x18);
      *(undefined ***)(uVar24 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar24 + 0x18) = 0;
      if (uVar30 != 0) {
        FUN_710392eb40(uVar30);
      }
      FUN_710392eb40(uVar24);
    }
    uVar24 = local_1f0;
    local_1f8 = &PTR_FUN_710523d988;
    local_1f0 = 0;
    if (uVar24 != 0) {
      uVar30 = *(ulong *)(uVar24 + 0x18);
      *(undefined ***)(uVar24 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar24 + 0x18) = 0;
      if (uVar30 != 0) {
        FUN_710392eb40(uVar30);
      }
      FUN_710392eb40(uVar24);
    }
    uVar24 = local_1e0;
    local_1e8 = &PTR_FUN_710523d988;
    local_1e0 = 0;
    if (uVar24 != 0) {
      uVar30 = *(ulong *)(uVar24 + 0x18);
      *(undefined ***)(uVar24 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar24 + 0x18) = 0;
      if (uVar30 != 0) {
        FUN_710392eb40(uVar30);
      }
      FUN_710392eb40(uVar24);
    }
    uVar24 = local_1d0;
    local_1d8 = &PTR_FUN_710523d988;
    local_1d0 = 0;
    if (uVar24 != 0) {
      uVar30 = *(ulong *)(uVar24 + 0x18);
      *(undefined ***)(uVar24 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar24 + 0x18) = 0;
      if (uVar30 != 0) {
        FUN_710392eb40(uVar30);
      }
      FUN_710392eb40(uVar24);
    }
    local_c8 = &PTR_FUN_710523d988;
    local_c0 = 0;
    if (uVar23 != 0) {
      uVar24 = *(ulong *)(uVar23 + 0x18);
      *(undefined ***)(uVar23 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar23 + 0x18) = 0;
      if (uVar24 != 0) {
        FUN_710392eb40(uVar24);
      }
      FUN_710392eb40(uVar23);
    }
    local_b8 = &PTR_FUN_710523d988;
    local_b0 = 0;
    if (uVar29 != 0) {
      uVar23 = *(ulong *)(uVar29 + 0x18);
      *(undefined ***)(uVar29 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar29 + 0x18) = 0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      FUN_710392eb40(uVar29);
    }
    local_a8 = &PTR_FUN_710523d9a8;
    local_a0 = (long *)0x0;
    if (plVar36 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar36);
    }
    plVar36 = local_90;
    local_98 = &PTR_FUN_710523d9a8;
    local_90 = (long *)0x0;
    if (plVar36 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar36);
    }
    plVar36 = local_80;
    local_88 = &PTR_FUN_710523d9a8;
    local_80 = (long *)0x0;
    break;
  case 8:
  case 9:
    if (*(long *)(param_1[0x27] + 8) == 0) {
      return;
    }
    lVar42 = *(long *)(*(long *)(param_1[0x27] + 8) + 0x18);
    if (lVar42 == 0) {
      return;
    }
    *(byte *)(lVar42 + 0x58) = *(byte *)(lVar42 + 0x58) & 0xfe;
    return;
  }
  if (plVar36 != (long *)0x0) {
LAB_7101d8c684:
    FUN_710392eb40((ulong)plVar36);
  }
  return;
}

