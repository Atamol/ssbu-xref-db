// addr:      7103392c70
// offset:    0x3392c70
// name:      FUN_7103392c70
// mangled:   
// signature: undefined __cdecl FUN_7103392c70(undefined1 * param_1, undefined8 * param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Removing unreachable block (ram,0x007103392f1c) */

void FUN_7103392c70(undefined1 *param_1,undefined8 *param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  byte ***pppbVar4;
  uint3 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar9;
  undefined8 extraout_x1_01;
  ulong uVar10;
  undefined8 *puVar11;
  byte *pbVar12;
  long lVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  undefined4 *puVar17;
  long lVar18;
  int iVar19;
  char cVar20;
  uint uVar21;
  char *pcVar22;
  undefined **local_150;
  undefined8 *local_148;
  undefined **local_140;
  ulong local_138;
  undefined **local_130;
  ulong local_128;
  undefined **local_120;
  ulong local_118;
  undefined8 local_110;
  byte ***local_108 [8];
  uint local_c8 [2];
  undefined8 local_c0;
  int iStack_b8;
  undefined4 auStack_b4 [17];
  
  uVar21 = (uint)param_3;
  FUN_7103776390(&local_150,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  if ((undefined ***)param_1 != &local_150) {
    **(undefined8 **)(param_1 + 8) = *local_148;
    *(undefined8 *)(*(long *)(param_1 + 8) + 8) = local_148[1];
    puVar11 = *(undefined8 **)(param_1 + 8);
    if (puVar11 != local_148) {
      *(undefined8 *)puVar11[3] = *(undefined8 *)local_148[3];
      *(undefined8 *)(puVar11[3] + 8) = *(undefined8 *)(local_148[3] + 8);
      *(undefined8 *)(puVar11[3] + 0x10) = *(undefined8 *)(local_148[3] + 0x10);
      *(undefined8 *)(puVar11[3] + 0x18) = *(undefined8 *)(local_148[3] + 0x18);
    }
  }
  auStack_b4[0xe] = 0;
  auStack_b4[0xc] = 0;
  auStack_b4[0xd] = 0;
  auStack_b4[10] = 0;
  auStack_b4[0xb] = 0;
  auStack_b4[8] = 0;
  auStack_b4[9] = 0;
  auStack_b4[6] = 0;
  auStack_b4[7] = 0;
  auStack_b4[4] = 0;
  auStack_b4[5] = 0;
  auStack_b4[2] = 0;
  auStack_b4[3] = 0;
  auStack_b4[0] = 0;
  auStack_b4[1] = 0;
  local_c0._4_4_ = 0;
  uVar5 = iStack_b8._1_3_;
  iStack_b8 = (uint)iStack_b8._1_3_ << 8;
  local_c8[1] = 0;
  local_c0._0_4_ = 0;
  local_c8[0] = uVar21;
  uVar9 = extraout_x1;
  if (100 < (int)uVar21) {
    local_c8[1] = 1;
    local_c0._0_4_ = 0;
    local_c0._4_4_ = 0;
    iStack_b8 = CONCAT31(uVar5,1);
    auStack_b4[0] = 0;
    goto LAB_7103392fb0;
  }
  if ((int)uVar21 < 10) {
LAB_7103392dbc:
    uVar16 = 0;
    uVar14 = 0;
  }
  else {
    uVar14 = (uint)((float)(int)uVar21 / 10.0);
    uVar16 = (ulong)uVar14;
    uVar21 = uVar21 + uVar14 * -10;
    local_c8[1] = uVar14;
    if ((int)uVar14 < 1) goto LAB_7103392dbc;
    param_3 = (long ****)((ulong)uVar14 << 2);
    memset(&local_110,0,(size_t)param_3);
    uVar9 = extraout_x1_00;
  }
  if (4 < (int)uVar21) {
    uVar14 = (uint)uVar16;
    uVar15 = (uint)((float)(int)uVar21 / 5.0);
    uVar21 = uVar21 + uVar15 * -5;
    local_c0._0_4_ = uVar15;
    if (0 < (int)uVar15) {
      uVar14 = uVar14 + uVar15;
      uVar8 = ~uVar16;
      if ((uVar15 & 3) != 0) {
        lVar13 = -((ulong)uVar15 & 3);
        puVar17 = (undefined4 *)((long)local_108 + uVar16 * 4 + -8);
        do {
          lVar13 = lVar13 + 1;
          *puVar17 = 1;
          puVar17 = puVar17 + 1;
        } while (lVar13 != 0);
        uVar16 = ((ulong)uVar15 & 3) + uVar16;
      }
      if (2 < uVar8 + uVar14) {
        lVar13 = uVar14 - uVar16;
        puVar11 = (undefined8 *)((long)local_108 + uVar16 * 4);
        do {
          puVar11[-1] = &DAT_100000001;
          *puVar11 = &DAT_100000001;
          lVar13 = lVar13 + -4;
          puVar11 = puVar11 + 2;
        } while (lVar13 != 0);
      }
    }
  }
  local_c0._4_4_ = uVar21;
  uVar15 = uVar14;
  if (0 < (int)uVar21) {
    lVar13 = (long)(int)uVar14;
    uVar15 = uVar14 + uVar21;
    uVar2 = uVar21 & 3;
    if (uVar2 != 0) {
      lVar18 = lVar13 * 4;
      iVar19 = -uVar2;
      lVar13 = lVar13 + (ulong)(uVar2 - 1) + 1;
      puVar17 = (undefined4 *)((long)local_108 + lVar18 + -8);
      do {
        iVar19 = iVar19 + 1;
        *puVar17 = 2;
        puVar17 = puVar17 + 1;
      } while (iVar19 != 0);
      uVar14 = uVar14 + uVar2;
    }
    if (2 < uVar21 - 1) {
      iVar19 = uVar15 - uVar14;
      puVar11 = (undefined8 *)((long)local_108 + lVar13 * 4);
      do {
        puVar11[-1] = 0x200000002;
        *puVar11 = 0x200000002;
        iVar19 = iVar19 + -4;
        puVar11 = puVar11 + 2;
      } while (iVar19 != 0);
    }
  }
  if ((int)uVar15 < 0xf) {
    lVar13 = (long)(int)uVar15;
    do {
      *(undefined4 *)((long)local_108 + lVar13 * 4 + -8) = 3;
      bVar1 = lVar13 < 0xe;
      lVar13 = lVar13 + 1;
    } while (bVar1);
    if (0 < (int)uVar15) {
      if (uVar15 != 1) goto LAB_7103392f28;
      lVar13 = 0;
      goto LAB_7103392f68;
    }
  }
  else {
LAB_7103392f28:
    lVar13 = 0;
    uVar21 = uVar15;
    do {
      lVar18 = lVar13 * 4;
      lVar13 = lVar13 + 2;
      uVar3 = *(undefined4 *)((long)local_108 + lVar18 + -4);
      auStack_b4[(int)(uVar21 - 1)] = *(undefined4 *)((long)local_108 + lVar18 + -8);
      auStack_b4[(int)(uVar21 - 2)] = uVar3;
      uVar21 = uVar21 - 2;
    } while ((ulong)uVar15 - ((ulong)uVar15 & 1) != lVar13);
    if ((uVar15 & 1) != 0) {
LAB_7103392f68:
      auStack_b4[(int)(uVar15 + ~(uint)lVar13)] = *(undefined4 *)((long)local_108 + lVar13 * 4 + -8)
      ;
    }
  }
  if ((int)uVar15 < 0xf) {
    lVar13 = (long)(int)uVar15 + 5;
    do {
      lVar18 = lVar13 + -5;
      local_c8[lVar13] = 3;
      lVar13 = lVar13 + 1;
    } while (lVar18 < 0xe);
  }
LAB_7103392fb0:
  uVar21 = 0x811c9dc5;
  *(ulong *)(param_1 + 0x10) = CONCAT44(local_c8[1],local_c8[0]);
  *(ulong *)(param_1 + 0x18) = CONCAT44(local_c0._4_4_,(uint)local_c0);
  *(ulong *)(param_1 + 0x30) = CONCAT44(auStack_b4[4],auStack_b4[3]);
  *(ulong *)(param_1 + 0x38) = CONCAT44(auStack_b4[6],auStack_b4[5]);
  *(ulong *)(param_1 + 0x20) = CONCAT44(auStack_b4[0],iStack_b8);
  *(ulong *)(param_1 + 0x28) = CONCAT44(auStack_b4[2],auStack_b4[1]);
  *(undefined2 *)(param_1 + 0xb0) = 0x101;
  *(ulong *)(param_1 + 0x50) = CONCAT44(auStack_b4[0xc],auStack_b4[0xb]);
  *(ulong *)(param_1 + 0x58) = CONCAT44(auStack_b4[0xe],auStack_b4[0xd]);
  *(ulong *)(param_1 + 0x40) = CONCAT44(auStack_b4[8],auStack_b4[7]);
  *(ulong *)(param_1 + 0x48) = CONCAT44(auStack_b4[10],auStack_b4[9]);
  *(undefined4 *)(param_1 + 0xb4) = 0;
  if (param_1[0x20] == '\0') {
    local_c0._0_4_ = (uint)local_c0 & 0xffffff00;
    local_c8[0] = 0;
    local_c8[1] = 0;
    local_108[0] = (byte ***)((ulong)local_108[0] & 0xffffffffffffff00);
    local_110 = (undefined **)0x0;
    FUN_7103776290(&local_120,uVar9,param_3,param_4,param_5,param_6,param_7,param_8);
    FUN_7103776290(&local_130,extraout_x1_01,param_3,param_4,param_5,param_6,param_7,param_8);
    uVar16 = 0;
    uVar8 = local_118;
    do {
      uVar10 = uVar16 & 0xffffffff;
      FUN_710062dc20(local_c8,"set_part_coin_%02d");
      FUN_7103776640(&local_140,(long)param_1,(byte ****)&local_c0,uVar10,param_4,param_5,param_6,
                     param_7,param_8);
      uVar10 = local_138;
      local_138 = 0;
      local_118 = uVar10;
      if (uVar8 != 0) {
        uVar6 = *(ulong *)(uVar8 + 0x18);
        *(undefined ***)(uVar8 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar8 + 0x18) = 0;
        if (uVar6 != 0) {
          FUN_710392eb40(uVar6);
        }
        FUN_710392eb40(uVar8);
      }
      param_3 = (long ****)(uVar16 & 0xffffffff);
      local_140 = &PTR_FUN_710523d988;
      local_138 = 0;
      FUN_710062dc20((uint *)&local_110,"set_part_coin_1%02d");
      FUN_7103776640(&local_140,(long)param_1,local_108,param_3,param_4,param_5,param_6,param_7,
                     param_8);
      uVar8 = local_128;
      uVar6 = local_138;
      local_138 = 0;
      local_128 = uVar6;
      if (uVar8 != 0) {
        uVar7 = *(ulong *)(uVar8 + 0x18);
        *(undefined ***)(uVar8 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar8 + 0x18) = 0;
        if (uVar7 != 0) {
          FUN_710392eb40(uVar7);
        }
        FUN_710392eb40(uVar8);
      }
      local_140 = &PTR_FUN_710523d988;
      local_138 = 0;
      iVar19 = *(int *)(param_1 + uVar16 * 4 + 0x24);
      if (iVar19 == 0) {
        pcVar22 = "coin_color_0";
      }
      else if (iVar19 == 1) {
        pcVar22 = "coin_color_1";
      }
      else if (iVar19 == 2) {
        pcVar22 = "coin_color_2";
      }
      else {
        pcVar22 = "coin_color_off";
      }
      FUN_7103778300(0x3f800000,uVar10,(long)pcVar22);
      FUN_7103778300(0x3f800000,uVar6,(long)pcVar22);
      uVar16 = uVar16 + 1;
      uVar8 = uVar10;
    } while (uVar16 != 0xf);
    local_130 = &PTR_FUN_710523d988;
    local_128 = 0;
    if (uVar6 != 0) {
      uVar16 = *(ulong *)(uVar6 + 0x18);
      *(undefined ***)(uVar6 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar6 + 0x18) = 0;
      if (uVar16 != 0) {
        FUN_710392eb40(uVar16);
      }
      FUN_710392eb40(uVar6);
    }
    local_120 = &PTR_FUN_710523d988;
    local_118 = 0;
    if (uVar10 != 0) {
      uVar16 = *(ulong *)(uVar10 + 0x18);
      *(undefined ***)(uVar10 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar10 + 0x18) = 0;
      if (uVar16 != 0) {
        FUN_710392eb40(uVar16);
      }
      FUN_710392eb40(uVar10);
    }
  }
  else {
    local_c8[0] = 0;
    local_c8[1] = 0xb;
    local_c0._0_4_ = 0x6e696f63;
    local_c0._4_4_ = 0x696e615f;
    uVar14 = 99;
    lVar13 = 9;
    iStack_b8 = 0x305f6d;
    local_c8[0] = uVar21;
    do {
      local_c8[0] = local_c8[0] * 0x89 ^ uVar14;
      uVar14 = (uint)*(byte *)((long)local_c8 + lVar13);
      lVar13 = lVar13 + 1;
    } while (uVar14 != 0);
    if ((uint *)(param_1 + 0x60) != local_c8) {
      uVar16 = 0;
      cVar20 = 'c';
      do {
        param_1[uVar16 + 0x68] = cVar20;
        if (0x3e < (int)uVar16 + 1U) {
          uVar16 = (ulong)((int)uVar16 + 1);
          break;
        }
        cVar20 = *(char *)((long)&local_c0 + uVar16 + 1);
        uVar16 = uVar16 + 1;
      } while (cVar20 != '\0');
      param_1[(uVar16 & 0xffffffff) + 0x68] = 0;
      uVar15 = (uint)(byte)param_1[0x68];
      *(int *)(param_1 + 100) = (int)uVar16;
      uVar14 = uVar21;
      if (param_1[0x68] != 0) {
        pbVar12 = param_1 + 0x69;
        do {
          uVar14 = uVar14 * 0x89 ^ uVar15;
          uVar15 = (uint)*pbVar12;
          pbVar12 = pbVar12 + 1;
        } while (uVar15 != 0);
      }
      *(uint *)(param_1 + 0x60) = uVar14;
    }
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 8),(long)(param_1 + 0x68));
  }
  FUN_7103776640((undefined8 *)local_c8,(long)&local_150,(byte ****)"set_parts_coin",param_3,param_4
                 ,param_5,param_6,param_7,param_8);
  FUN_7103776910(&local_110,(long)local_c8,(long ****)"set_txt_num",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  puVar11 = *(undefined8 **)(param_1 + 0xa8);
  if (puVar11 != &local_110) {
    *(byte ***)puVar11[1] = *local_108[0];
    *(byte ***)(puVar11[1] + 8) = local_108[0][1];
    *(byte ***)(puVar11[1] + 0x10) = local_108[0][2];
    *(byte ***)(puVar11[1] + 0x18) = local_108[0][3];
  }
  uVar16 = 0;
  do {
    if ("mnu_shop_gold_n"[uVar16] == '\0') {
LAB_7103393350:
      *(byte *)((long)(puVar11 + 3) + (uVar16 & 0xffffffff)) = 0;
      uVar14 = (uint)*(byte *)(puVar11 + 3);
      *(int *)((long)puVar11 + 0x14) = (int)uVar16;
      if (*(byte *)(puVar11 + 3) != 0) {
        pbVar12 = (byte *)((long)puVar11 + 0x19);
        do {
          uVar21 = uVar21 * 0x89 ^ uVar14;
          uVar14 = (uint)*pbVar12;
          pbVar12 = pbVar12 + 1;
        } while (uVar14 != 0);
      }
      *(uint *)(puVar11 + 2) = uVar21;
      FUN_710377a280((long)puVar11,(byte *)(puVar11 + 3),1);
      FUN_7103399a70(*(long *)(param_1 + 0xa8),(long)local_c8,(long ****)"anim_count",
                     (byte ****)"anim_stop",param_5,param_6,param_7,param_8);
      lVar13 = *(long *)(param_1 + 0xa8);
      *(undefined8 *)(lVar13 + 0x58) = 0x19cbbc0370;
      *(undefined8 *)(lVar13 + 0x60) = 0x19d3b50828;
      lVar13 = *(long *)(param_1 + 0xa8);
      *(undefined8 *)(lVar13 + 0x68) = 0x1a410fa2b5;
      *(undefined8 *)(lVar13 + 0x70) = 0x1a5906a9ed;
      lVar13 = *(long *)(param_1 + 0xa8);
      if (*(int *)(lVar13 + 0x94) != 0) {
        *(undefined4 *)(lVar13 + 0x94) = 0;
        FUN_710377a280(lVar13,(byte *)(lVar13 + 0x18),1);
      }
      pppbVar4 = local_108[0];
      local_110 = &PTR_FUN_710523d9a8;
      local_108[0] = (byte ***)0x0;
      if (pppbVar4 != (byte ***)0x0) {
        FUN_710392eb40((ulong)pppbVar4);
      }
      uVar16 = CONCAT44(local_c0._4_4_,(uint)local_c0);
      local_c8[0] = 0x523d988;
      local_c8[1] = 0x71;
      local_c0._0_4_ = 0;
      local_c0._4_4_ = 0;
      if (uVar16 != 0) {
        uVar8 = *(ulong *)(uVar16 + 0x18);
        *(undefined ***)(uVar16 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar16 + 0x18) = 0;
        if (uVar8 != 0) {
          FUN_710392eb40(uVar8);
        }
        FUN_710392eb40(uVar16);
      }
      puVar11 = local_148;
      local_150 = &PTR_FUN_710523d988;
      local_148 = (undefined8 *)0x0;
      if (puVar11 != (undefined8 *)0x0) {
        uVar16 = puVar11[3];
        puVar11[2] = &PTR_FUN_710523d9a8;
        puVar11[3] = 0;
        if (uVar16 != 0) {
          FUN_710392eb40(uVar16);
        }
        FUN_710392eb40((ulong)puVar11);
      }
      return;
    }
    *(char *)((long)puVar11 + uVar16 + 0x18) = "mnu_shop_gold_n"[uVar16];
    if ("mnu_shop_gold_n"[uVar16 + 1] == '\0') {
      uVar16 = uVar16 + 1;
      goto LAB_7103393350;
    }
    *(char *)((long)puVar11 + uVar16 + 0x19) = "mnu_shop_gold_n"[uVar16 + 1];
    uVar16 = uVar16 + 2;
  } while( true );
}

