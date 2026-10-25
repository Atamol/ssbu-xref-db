// addr:      7101c8b340
// offset:    0x1c8b340
// name:      FUN_7101c8b340
// mangled:   
// signature: undefined __cdecl FUN_7101c8b340(long param_1, uint param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101c8b340(long param_1,uint param_2,undefined8 param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 *puVar1;
  long lVar2;
  byte bVar3;
  int iVar4;
  undefined8 *puVar5;
  bool bVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  byte ****ppppbVar10;
  undefined *puVar11;
  char *pcVar12;
  undefined8 uVar13;
  byte ****ppppbVar14;
  long ****pppplVar15;
  uint uVar16;
  byte *pbVar17;
  uint uVar18;
  ulong uVar19;
  char cVar20;
  uint uVar21;
  byte bVar22;
  long *plVar23;
  undefined8 *puVar24;
  byte *local_610;
  byte *local_608;
  byte *local_600;
  undefined8 *local_5f8;
  byte *local_5f0;
  byte *local_5e8;
  byte *local_5e0;
  undefined8 *local_5d8;
  undefined ***local_5d0;
  undefined **local_5c8;
  undefined8 local_5c0;
  uint local_580;
  undefined4 local_57c;
  byte local_578 [956];
  byte local_1bc [4];
  undefined8 local_1b8;
  byte local_1b0 [64];
  undefined8 local_170;
  byte local_168 [64];
  undefined **local_128;
  ulong local_120;
  undefined **local_118;
  ulong local_110;
  undefined **local_108;
  ulong local_100;
  undefined **local_f8;
  ulong local_f0;
  byte local_e8 [4];
  byte local_e4 [4];
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined2 local_c8;
  undefined2 uStack_c6;
  undefined2 uStack_c4;
  undefined2 uStack_c2;
  undefined1 uStack_c0;
  undefined1 uStack_bf;
  ushort local_be;
  undefined1 local_bc;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined2 local_80;
  undefined2 uStack_7e;
  undefined2 uStack_7c;
  undefined2 uStack_7a;
  undefined1 uStack_78;
  undefined1 uStack_77;
  ushort local_76;
  undefined1 local_74;
  
  bVar22 = (byte)param_2;
  uVar7 = (uint)param_3;
  bVar3 = (byte)param_3;
  local_e8[0] = bVar3;
  local_e4[0] = bVar22;
  if ((ulong)(*(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10) >> 3) < 2) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  lVar2 = *(long *)(*(long *)(param_1 + 0x418) + 0x180);
  uVar19 = *(long *)(*(long *)(param_1 + 0x418) + 0x188) - lVar2;
  iVar4 = (int)param_4;
  if (iVar4 < (int)(uVar19 >> 3)) {
    if ((ulong)((long)uVar19 >> 3) <= (ulong)(long)iVar4) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    ppppbVar10 = *(byte *****)(*(long *)(lVar2 + (long)iVar4 * 8) + 0x88);
  }
  else {
    ppppbVar10 = (byte ****)0x0;
  }
  ppppbVar14 = param_4;
  pppplVar15 = param_5;
  FUN_7103776640(&local_f8,*(long *)**(undefined8 **)(*(long *)(param_1 + 0x10) + 8) + 8,ppppbVar10,
                 param_3,param_4,param_5,param_6,param_7,param_8);
  FUN_7103776910(&local_108,(long)&local_f8,(long ****)"set_txt_filter_00",param_3,ppppbVar14,
                 pppplVar15,param_6,param_7,param_8);
  FUN_7103776910(&local_118,(long)&local_f8,(long ****)"set_txt_filter_00_old",param_3,ppppbVar14,
                 pppplVar15,param_6,param_7,param_8);
  FUN_7103776910(&local_128,(long)&local_f8,(long ****)"set_txt_filter_01",param_3,ppppbVar14,
                 pppplVar15,param_6,param_7,param_8);
  local_1b0[0] = 0;
  local_1b8 = 0;
  local_168[0] = 0;
  local_170 = 0;
  local_1bc[0] = 0;
  switch((ulong)param_4 & 0xffffffff) {
  case 0:
    local_5f0 = local_e4;
    local_5e8 = local_e8;
    local_5e0 = local_1bc;
    local_5d8 = &local_1b8;
    local_5d0 = &local_f8;
    bVar6 = FUN_7101704ba0(*(long *)(DAT_71052c4c58 + 8) + 0xa0);
    if (bVar6) {
      puVar11 = &DAT_7104545282;
    }
    else {
      uVar19 = FUN_7101797350(0);
      if ((uVar19 & 1) == 0) {
        local_1bc[0] = 5;
        uVar7 = (uint)local_e4[0];
        if (4 < local_e4[0]) {
          uVar7 = 5;
        }
        uVar7 = uVar7 & ((int)uVar7 >> 7 ^ 0xffffffffU);
        uVar16 = (uint)local_e8[0];
        if (4 < local_e8[0]) {
          uVar16 = 5;
        }
        uVar16 = uVar16 & ((int)uVar16 >> 7 ^ 0xffffffffU);
        local_e4[0] = (byte)uVar7;
        local_e8[0] = (byte)uVar16;
        if ((5 < uVar7) || (FUN_7101c6ee80((uint *)&local_98,(&DAT_7104545290)[uVar7]), 5 < uVar16))
        goto LAB_7101c8cd68;
        FUN_7101c6ee80((uint *)&local_e0,(&DAT_7104545290)[uVar16]);
        for (uVar19 = 0; *(char *)((long)&local_90 + uVar19) != '\0'; uVar19 = uVar19 + 2) {
          *(char *)((long)&local_5c0 + uVar19) = *(char *)((long)&local_90 + uVar19);
          if (0x3e < (int)uVar19 + 1U) {
            uVar19 = (ulong)((int)uVar19 + 1);
            break;
          }
          cVar20 = *(char *)((long)&local_90 + uVar19 + 1);
          if (cVar20 == '\0') {
            uVar19 = uVar19 + 1;
            break;
          }
          *(char *)((long)&local_5c0 + uVar19 + 1) = cVar20;
        }
        uVar16 = 0x811c9dc5;
        *(undefined1 *)((long)&local_5c0 + (uVar19 & 0xffffffff)) = 0;
        uVar21 = (uint)(byte)local_5c0;
        uVar7 = uVar16;
        if (uVar21 != 0) {
          pbVar17 = (byte *)((long)&local_5c0 + 1);
          do {
            uVar7 = uVar7 * 0x89 ^ uVar21;
            uVar21 = (uint)*pbVar17;
            pbVar17 = pbVar17 + 1;
          } while (uVar21 != 0);
        }
        local_5c8 = (undefined **)CONCAT44((int)uVar19,uVar7);
        local_580 = 0;
        uVar19 = 0;
        while( true ) {
          if (*(byte *)((long)&local_d8 + uVar19) == 0) break;
          local_578[uVar19] = *(byte *)((long)&local_d8 + uVar19);
          if (0x3e < (int)uVar19 + 1U) {
            uVar19 = (ulong)((int)uVar19 + 1);
            break;
          }
          bVar22 = *(byte *)((long)&local_d8 + uVar19 + 1);
          if (bVar22 == 0) {
            uVar19 = uVar19 + 1;
            break;
          }
          local_578[uVar19 + 1] = bVar22;
          uVar19 = uVar19 + 2;
        }
        local_578[uVar19 & 0xffffffff] = 0;
        local_57c = (int)uVar19;
        uVar7 = (uint)local_578[0];
        local_580 = uVar16;
        if (uVar7 != 0) {
          pbVar17 = local_578;
          do {
            pbVar17 = pbVar17 + 1;
            local_580 = local_580 * 0x89 ^ uVar7;
            uVar7 = (uint)*pbVar17;
          } while (uVar7 != 0);
        }
        if ((byte)local_5c0 == 0) {
          uVar19 = 0;
        }
        else {
          uVar19 = 0;
          bVar22 = (byte)local_5c0;
          do {
            local_1b0[uVar19] = bVar22;
            if (0x3e < (int)uVar19 + 1U) {
              uVar19 = (ulong)((int)uVar19 + 1);
              break;
            }
            bVar22 = *(byte *)((long)&local_5c0 + uVar19 + 1);
            uVar19 = uVar19 + 1;
          } while (bVar22 != 0);
        }
        local_1b0[uVar19 & 0xffffffff] = 0;
        uVar21 = (uint)local_1b0[0];
        local_1b8 = CONCAT44((int)uVar19,(undefined4)local_1b8);
        uVar7 = uVar16;
        if (local_1b0[0] != 0) {
          pbVar17 = local_1b0;
          do {
            pbVar17 = pbVar17 + 1;
            uVar7 = uVar7 * 0x89 ^ uVar21;
            uVar21 = (uint)*pbVar17;
          } while (uVar21 != 0);
        }
        uVar8 = 0;
        local_1b8 = CONCAT44((int)uVar19,uVar7);
        while (local_578[0] != 0) {
          local_168[uVar8] = local_578[0];
          if (0x3e < (int)uVar8 + 1U) {
            uVar8 = (ulong)((int)uVar8 + 1);
            break;
          }
          if (local_578[uVar8 + 1] == 0) {
            uVar8 = uVar8 + 1;
            break;
          }
          local_168[uVar8 + 1] = local_578[uVar8 + 1];
          lVar2 = uVar8 + 2;
          uVar8 = uVar8 + 2;
          local_578[0] = local_578[lVar2];
        }
        local_168[uVar8 & 0xffffffff] = 0;
        uVar7 = (uint)local_168[0];
        local_170 = CONCAT44((int)uVar8,(undefined4)local_170);
        if (local_168[0] != 0) {
          pbVar17 = local_168;
          do {
            pbVar17 = pbVar17 + 1;
            uVar16 = uVar16 * 0x89 ^ uVar7;
            uVar7 = (uint)*pbVar17;
          } while (uVar7 != 0);
        }
        local_170 = CONCAT44((int)uVar8,uVar16);
        if (5 < (ulong)(long)(char)local_e4[0]) goto LAB_7101c8cd68;
        FUN_7101c6ec50((uint *)&local_5c8,(&DAT_7104545290)[(char)local_e4[0]]);
        pcVar12 = (char *)&local_5c0;
        goto LAB_7101c8c7b8;
      }
      puVar11 = &DAT_7104545289;
    }
    FUN_7101c8d890(&local_5f0,(long)puVar11);
    goto LAB_7101c8c7c0;
  case 1:
    local_1bc[0] = 1;
    if ('\0' < (char)bVar22) {
      param_2 = 1;
    }
    uVar16 = param_2 & ((int)(char)param_2 >> 7 ^ 0xffffffffU);
    if ('\0' < (char)bVar3) {
      uVar7 = 1;
    }
    uVar7 = uVar7 & ((int)(char)uVar7 >> 7 ^ 0xffffffffU);
    local_e4[0] = (byte)uVar16;
    local_e8[0] = (byte)uVar7;
    if (1 < (uVar16 & 0xff)) goto LAB_7101c8cd68;
    uVar18 = 0x811c9dc5;
    local_90 = (undefined8 *)&DAT_696c6e6f5f756e6d;
    local_88 = 0x5f6d6f6f725f656e;
    local_80 = 0x696c;
    uStack_7e = 0x696d;
    uStack_7c = 0x5f74;
    uVar21 = uVar18;
    if ((&DAT_710455c368)[(ulong)uVar16 & 0xff] == '\0') {
      uStack_7a = 0x6e61;
      uStack_78 = 0x79;
      uStack_77 = 0x6f;
      local_76 = 0x656e;
      uVar9 = 0x6d;
      local_74 = 0;
      local_98._0_4_ = 0;
      local_98._4_4_ = 0x1c;
      pbVar17 = (byte *)((long)&local_90 + 1);
      do {
        uVar21 = uVar21 * 0x89 ^ uVar9;
        uVar9 = (uint)*pbVar17;
        pbVar17 = pbVar17 + 1;
      } while (uVar9 != 0);
    }
    else {
      uStack_7a = 0x7266;
      uStack_78 = 0x69;
      uStack_77 = 0x65;
      local_76 = 0x646e;
      uVar9 = 0x6d;
      local_74 = 0;
      local_98._0_4_ = 0;
      local_98._4_4_ = 0x1c;
      pbVar17 = (byte *)((long)&local_90 + 1);
      do {
        uVar21 = uVar21 * 0x89 ^ uVar9;
        uVar9 = (uint)*pbVar17;
        pbVar17 = pbVar17 + 1;
      } while (uVar9 != 0);
    }
    local_74 = 0;
    param_3 = 0x1c;
    local_98 = (undefined **)CONCAT44(0x1c,uVar21);
    if (1 < (uVar7 & 0xff)) goto LAB_7101c8cd68;
    local_d8 = &DAT_696c6e6f5f756e6d;
    local_d0 = 0x5f6d6f6f725f656e;
    local_c8 = 0x696c;
    uStack_c6 = 0x696d;
    uStack_c4 = 0x5f74;
    uVar21 = uVar18;
    if ((&DAT_710455c368)[(ulong)uVar7 & 0xff] == '\0') {
      uStack_c2 = 0x6e61;
      uStack_c0 = 0x79;
      uStack_bf = 0x6f;
      local_be = 0x656e;
      uVar7 = 0x6d;
      local_bc = 0;
      local_e0._0_4_ = 0;
      local_e0._4_4_ = 0x1c;
      pbVar17 = (byte *)((long)&local_d8 + 1);
      do {
        uVar21 = uVar21 * 0x89 ^ uVar7;
        uVar7 = (uint)*pbVar17;
        pbVar17 = pbVar17 + 1;
      } while (uVar7 != 0);
    }
    else {
      uStack_c2 = 0x7266;
      uStack_c0 = 0x69;
      uStack_bf = 0x65;
      local_be = 0x646e;
      uVar7 = 0x6d;
      local_bc = 0;
      local_e0._0_4_ = 0;
      local_e0._4_4_ = 0x1c;
      pbVar17 = (byte *)((long)&local_d8 + 1);
      do {
        uVar21 = uVar21 * 0x89 ^ uVar7;
        uVar7 = (uint)*pbVar17;
        pbVar17 = pbVar17 + 1;
      } while (uVar7 != 0);
    }
    local_bc = 0;
    local_e0 = (undefined **)CONCAT44(0x1c,uVar21);
    uVar19 = 0;
    cVar20 = 'm';
    do {
      *(char *)((long)&local_5c0 + uVar19) = cVar20;
      if (0x3e < (int)uVar19 + 1U) {
        uVar19 = (ulong)((int)uVar19 + 1);
        break;
      }
      cVar20 = *(char *)((long)&local_90 + uVar19 + 1);
      if (cVar20 == '\0') {
        uVar19 = uVar19 + 1;
        break;
      }
      *(char *)((long)&local_5c0 + uVar19 + 1) = cVar20;
      cVar20 = *(char *)((long)&local_90 + uVar19 + 2);
      uVar19 = uVar19 + 2;
    } while (cVar20 != '\0');
    *(undefined1 *)((long)&local_5c0 + (uVar19 & 0xffffffff)) = 0;
    uVar21 = (uint)(byte)local_5c0;
    uVar7 = uVar18;
    if (uVar21 != 0) {
      pbVar17 = (byte *)((long)&local_5c0 + 1);
      do {
        uVar7 = uVar7 * 0x89 ^ uVar21;
        uVar21 = (uint)*pbVar17;
        pbVar17 = pbVar17 + 1;
      } while (uVar21 != 0);
    }
    local_5c8 = (undefined **)CONCAT44((int)uVar19,uVar7);
    uVar19 = 0;
    bVar22 = 0x6d;
    local_580 = 0;
    do {
      local_578[uVar19] = bVar22;
      if (0x3e < (int)uVar19 + 1U) {
        uVar19 = (ulong)((int)uVar19 + 1);
        break;
      }
      bVar22 = *(byte *)((long)&local_d8 + uVar19 + 1);
      if (bVar22 == 0) {
        uVar19 = uVar19 + 1;
        break;
      }
      local_578[uVar19 + 1] = bVar22;
      bVar22 = *(byte *)((long)&local_d8 + uVar19 + 2);
      uVar19 = uVar19 + 2;
    } while (bVar22 != 0);
    local_578[uVar19 & 0xffffffff] = 0;
    local_57c = (int)uVar19;
    uVar7 = (uint)local_578[0];
    local_580 = uVar18;
    if (uVar7 != 0) {
      pbVar17 = local_578;
      do {
        pbVar17 = pbVar17 + 1;
        local_580 = local_580 * 0x89 ^ uVar7;
        uVar7 = (uint)*pbVar17;
      } while (uVar7 != 0);
    }
    if ((byte)local_5c0 == 0) {
      uVar19 = 0;
    }
    else {
      uVar19 = 0;
      bVar22 = (byte)local_5c0;
      do {
        local_1b0[uVar19] = bVar22;
        if (0x3e < (int)uVar19 + 1U) {
          uVar19 = (ulong)((int)uVar19 + 1);
          break;
        }
        bVar22 = *(byte *)((long)&local_5c0 + uVar19 + 1);
        uVar19 = uVar19 + 1;
      } while (bVar22 != 0);
    }
    local_1b0[uVar19 & 0xffffffff] = 0;
    uVar21 = (uint)local_1b0[0];
    local_1b8 = CONCAT44((int)uVar19,(undefined4)local_1b8);
    uVar7 = uVar18;
    if (local_1b0[0] != 0) {
      pbVar17 = local_1b0;
      do {
        pbVar17 = pbVar17 + 1;
        uVar7 = uVar7 * 0x89 ^ uVar21;
        uVar21 = (uint)*pbVar17;
      } while (uVar21 != 0);
    }
    local_1b8 = CONCAT44((int)uVar19,uVar7);
    if (local_578[0] == 0) {
      uVar19 = 0;
    }
    else {
      uVar19 = 0;
      do {
        local_168[uVar19] = local_578[0];
        if (0x3e < (int)uVar19 + 1U) {
          uVar19 = (ulong)((int)uVar19 + 1);
          break;
        }
        local_578[0] = local_578[uVar19 + 1];
        uVar19 = uVar19 + 1;
      } while (local_578[0] != 0);
    }
    local_168[uVar19 & 0xffffffff] = 0;
    uVar7 = (uint)local_168[0];
    local_170 = CONCAT44((int)uVar19,(undefined4)local_170);
    if (local_168[0] != 0) {
      pbVar17 = local_168;
      do {
        pbVar17 = pbVar17 + 1;
        uVar18 = uVar18 * 0x89 ^ uVar7;
        uVar7 = (uint)*pbVar17;
      } while (uVar7 != 0);
    }
    local_170 = CONCAT44((int)uVar19,uVar18);
    pcVar12 = "color_09";
    if ((&DAT_710455c368)[(ulong)uVar16 & 0xff] != '\x02') {
      pcVar12 = "color_10";
    }
    goto LAB_7101c8c7b8;
  case 2:
    if ('\x02' < (char)bVar22) {
      param_2 = 3;
    }
    uVar21 = param_2 & ((int)(char)param_2 >> 7 ^ 0xffffffffU);
    local_1bc[0] = 3;
    if ('\x02' < (char)bVar3) {
      uVar7 = 3;
    }
    local_e4[0] = (byte)uVar21;
    uVar7 = uVar7 & ((int)(char)uVar7 >> 7 ^ 0xffffffffU);
    local_e8[0] = (byte)uVar7;
    if (3 < (uVar21 & 0xff)) goto LAB_7101c8cd68;
    uVar16 = 0x811c9dc5;
    uVar18 = uVar16;
    if ((&switchD_7101c8b57c::switchdataD_7104545296)[(ulong)uVar21 & 0xff] < 5) {
                    /* WARNING: Switch is manually overridden */
      switch((&switchD_7101c8b57c::switchdataD_7104545296)[(ulong)uVar21 & 0xff]) {
      case 0:
        uVar21 = 0x6d;
        local_98 = (undefined **)0x1800000000;
        local_90 = (undefined8 *)&DAT_696c6e6f5f756e6d;
        local_88 = 0x5f6d6f6f725f656e;
        local_80 = 0x6f66;
        uStack_7e = 0x6d72;
        uStack_7c = 0x615f;
        uStack_7a = 0x6c6c;
        uStack_78 = 0;
        pbVar17 = (byte *)((long)&local_90 + 1);
        do {
          uVar18 = uVar18 * 0x89 ^ uVar21;
          uVar21 = (uint)*pbVar17;
          pbVar17 = pbVar17 + 1;
        } while (uVar21 != 0);
        break;
      case 1:
        goto switchD_7101c8b57c_caseD_0;
      case 2:
        local_98 = (undefined **)0x1a00000000;
        local_90 = (undefined8 *)&DAT_696c6e6f5f756e6d;
        local_88 = 0x5f6d6f6f725f656e;
        local_80 = 0x6f66;
        uStack_7e = 0x6d72;
        uStack_7c = 0x745f;
        uStack_7a = 0x7268;
        uStack_78 = 0x65;
        uStack_77 = 0x65;
        uVar21 = 0x6d;
        local_76 = local_76 & 0xff00;
        pbVar17 = (byte *)((long)&local_90 + 1);
        do {
          uVar18 = uVar18 * 0x89 ^ uVar21;
          uVar21 = (uint)*pbVar17;
          pbVar17 = pbVar17 + 1;
        } while (uVar21 != 0);
        break;
      case 3:
        uVar21 = 0x6d;
        local_98 = (undefined **)0x1c00000000;
        local_90 = (undefined8 *)&DAT_696c6e6f5f756e6d;
        local_88 = 0x5f6d6f6f725f656e;
        local_80 = 0x6f66;
        uStack_7e = 0x6d72;
        uStack_7c = 0x6f5f;
        uStack_7a = 0x656e;
        uStack_78 = 0x5f;
        uStack_77 = 0x6f;
        local_76 = 0x656e;
        local_74 = 0;
        pbVar17 = (byte *)((long)&local_90 + 1);
        do {
          uVar18 = uVar18 * 0x89 ^ uVar21;
          uVar21 = (uint)*pbVar17;
          pbVar17 = pbVar17 + 1;
        } while (uVar21 != 0);
        break;
      case 4:
        local_98 = (undefined **)0x1900000000;
        local_90 = (undefined8 *)&DAT_696c6e6f5f756e6d;
        local_88 = 0x5f6d6f6f725f656e;
        local_80 = 0x6f66;
        uStack_7e = 0x6d72;
        uStack_7c = 0x745f;
        uStack_7a = 0x6165;
        uStack_78 = 0x6d;
        uStack_77 = 0;
        uVar21 = 0x6d;
        pbVar17 = (byte *)((long)&local_90 + 1);
        do {
          uVar18 = uVar18 * 0x89 ^ uVar21;
          uVar21 = (uint)*pbVar17;
          pbVar17 = pbVar17 + 1;
        } while (uVar21 != 0);
      }
    }
    else {
switchD_7101c8b57c_caseD_0:
      local_98 = (undefined **)0x1900000000;
      local_90 = (undefined8 *)&DAT_696c6e6f5f756e6d;
      local_88 = 0x5f6d6f6f725f656e;
      local_80 = 0x6f66;
      uStack_7e = 0x6d72;
      uStack_7c = 0x665f;
      uStack_7a = 0x756f;
      uStack_78 = 0x72;
      uStack_77 = 0;
      uVar21 = 0x6d;
      pbVar17 = (byte *)((long)&local_90 + 1);
      do {
        uVar18 = uVar18 * 0x89 ^ uVar21;
        uVar21 = (uint)*pbVar17;
        pbVar17 = pbVar17 + 1;
      } while (uVar21 != 0);
    }
    uStack_7e = 0x6d72;
    local_80 = 0x6f66;
    local_88 = 0x5f6d6f6f725f656e;
    local_90 = (undefined8 *)&DAT_696c6e6f5f756e6d;
    local_98 = (undefined **)CONCAT44(local_98._4_4_,uVar18);
    if (3 < (uVar7 & 0xff)) {
LAB_7101c8cd68:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar21 = uVar16;
    if ((&switchD_7101c8b57c::switchdataD_7104545296)[(ulong)uVar7 & 0xff] < 5) {
                    /* WARNING: Switch is manually overridden */
      switch((&switchD_7101c8b57c::switchdataD_7104545296)[(ulong)uVar7 & 0xff]) {
      case 0:
        local_e0 = (undefined **)0x1800000000;
        local_d8 = &DAT_696c6e6f5f756e6d;
        local_d0 = 0x5f6d6f6f725f656e;
        local_c8 = 0x6f66;
        uStack_c6 = 0x6d72;
        uStack_c4 = 0x615f;
        uStack_c2 = 0x6c6c;
        uVar7 = 0x6d;
        uStack_c0 = 0;
        pbVar17 = (byte *)((long)&local_d8 + 1);
        do {
          uVar21 = uVar21 * 0x89 ^ uVar7;
          uVar7 = (uint)*pbVar17;
          pbVar17 = pbVar17 + 1;
        } while (uVar7 != 0);
        break;
      case 1:
        goto switchD_7101c8c0f4_caseD_0;
      case 2:
        local_e0 = (undefined **)0x1a00000000;
        local_d8 = &DAT_696c6e6f5f756e6d;
        local_d0 = 0x5f6d6f6f725f656e;
        local_c8 = 0x6f66;
        uStack_c6 = 0x6d72;
        uStack_c4 = 0x745f;
        uStack_c2 = 0x7268;
        uStack_c0 = 0x65;
        uStack_bf = 0x65;
        uVar7 = 0x6d;
        local_be = local_be & 0xff00;
        pbVar17 = (byte *)((long)&local_d8 + 1);
        do {
          uVar21 = uVar21 * 0x89 ^ uVar7;
          uVar7 = (uint)*pbVar17;
          pbVar17 = pbVar17 + 1;
        } while (uVar7 != 0);
        break;
      case 3:
        local_e0 = (undefined **)0x1c00000000;
        local_d8 = &DAT_696c6e6f5f756e6d;
        local_d0 = 0x5f6d6f6f725f656e;
        local_c8 = 0x6f66;
        uStack_c6 = 0x6d72;
        uStack_c4 = 0x6f5f;
        uStack_c2 = 0x656e;
        uStack_c0 = 0x5f;
        uStack_bf = 0x6f;
        local_be = 0x656e;
        uVar7 = 0x6d;
        local_bc = 0;
        pbVar17 = (byte *)((long)&local_d8 + 1);
        do {
          uVar21 = uVar21 * 0x89 ^ uVar7;
          uVar7 = (uint)*pbVar17;
          pbVar17 = pbVar17 + 1;
        } while (uVar7 != 0);
        break;
      case 4:
        local_e0 = (undefined **)0x1900000000;
        local_d8 = &DAT_696c6e6f5f756e6d;
        local_d0 = 0x5f6d6f6f725f656e;
        local_c8 = 0x6f66;
        uStack_c6 = 0x6d72;
        uStack_c4 = 0x745f;
        uStack_c2 = 0x6165;
        uStack_c0 = 0x6d;
        uStack_bf = 0;
        uVar7 = 0x6d;
        pbVar17 = (byte *)((long)&local_d8 + 1);
        do {
          uVar21 = uVar21 * 0x89 ^ uVar7;
          uVar7 = (uint)*pbVar17;
          pbVar17 = pbVar17 + 1;
        } while (uVar7 != 0);
        goto LAB_7101c8c350;
      }
      local_e0 = (undefined **)CONCAT44(local_e0._4_4_,uVar21);
    }
    else {
switchD_7101c8c0f4_caseD_0:
      local_e0 = (undefined **)0x1900000000;
      local_d8 = &DAT_696c6e6f5f756e6d;
      local_d0 = 0x5f6d6f6f725f656e;
      local_c8 = 0x6f66;
      uStack_c6 = 0x6d72;
      uStack_c4 = 0x665f;
      uStack_c2 = 0x756f;
      uStack_c0 = 0x72;
      uStack_bf = 0;
      uVar7 = 0x6d;
      pbVar17 = (byte *)((long)&local_d8 + 1);
      do {
        uVar21 = uVar21 * 0x89 ^ uVar7;
        uVar7 = (uint)*pbVar17;
        pbVar17 = pbVar17 + 1;
      } while (uVar7 != 0);
LAB_7101c8c350:
      uStack_bf = 0;
      local_e0 = (undefined **)CONCAT44(0x19,uVar21);
    }
    uStack_c6 = 0x6d72;
    local_c8 = 0x6f66;
    local_d0 = 0x5f6d6f6f725f656e;
    local_d8 = &DAT_696c6e6f5f756e6d;
    uVar19 = 0;
    cVar20 = 'm';
    do {
      *(char *)((long)&local_5c0 + uVar19) = cVar20;
      if (0x3e < (int)uVar19 + 1U) {
        uVar19 = (ulong)((int)uVar19 + 1);
        break;
      }
      cVar20 = *(char *)((long)&local_90 + uVar19 + 1);
      if (cVar20 == '\0') {
        uVar19 = uVar19 + 1;
        break;
      }
      *(char *)((long)&local_5c0 + uVar19 + 1) = cVar20;
      cVar20 = *(char *)((long)&local_90 + uVar19 + 2);
      uVar19 = uVar19 + 2;
    } while (cVar20 != '\0');
    *(undefined1 *)((long)&local_5c0 + (uVar19 & 0xffffffff)) = 0;
    uVar21 = (uint)(byte)local_5c0;
    uVar7 = uVar16;
    if (uVar21 != 0) {
      pbVar17 = (byte *)((long)&local_5c0 + 1);
      do {
        uVar7 = uVar7 * 0x89 ^ uVar21;
        uVar21 = (uint)*pbVar17;
        pbVar17 = pbVar17 + 1;
      } while (uVar21 != 0);
    }
    local_5c8 = (undefined **)CONCAT44((int)uVar19,uVar7);
    uVar19 = 0;
    bVar22 = 0x6d;
    local_580 = 0;
    do {
      local_578[uVar19] = bVar22;
      if (0x3e < (int)uVar19 + 1U) {
        uVar19 = (ulong)((int)uVar19 + 1);
        break;
      }
      bVar22 = *(byte *)((long)&local_d8 + uVar19 + 1);
      if (bVar22 == 0) {
        uVar19 = uVar19 + 1;
        break;
      }
      local_578[uVar19 + 1] = bVar22;
      bVar22 = *(byte *)((long)&local_d8 + uVar19 + 2);
      uVar19 = uVar19 + 2;
    } while (bVar22 != 0);
    local_578[uVar19 & 0xffffffff] = 0;
    local_57c = (int)uVar19;
    uVar7 = (uint)local_578[0];
    local_580 = uVar16;
    if (uVar7 != 0) {
      pbVar17 = local_578;
      do {
        pbVar17 = pbVar17 + 1;
        local_580 = local_580 * 0x89 ^ uVar7;
        uVar7 = (uint)*pbVar17;
      } while (uVar7 != 0);
    }
    if ((byte)local_5c0 == 0) {
      uVar19 = 0;
    }
    else {
      uVar19 = 0;
      bVar22 = (byte)local_5c0;
      do {
        local_1b0[uVar19] = bVar22;
        if (0x3e < (int)uVar19 + 1U) {
          uVar19 = (ulong)((int)uVar19 + 1);
          break;
        }
        bVar22 = *(byte *)((long)&local_5c0 + uVar19 + 1);
        uVar19 = uVar19 + 1;
      } while (bVar22 != 0);
    }
    local_1b0[uVar19 & 0xffffffff] = 0;
    uVar21 = (uint)local_1b0[0];
    local_1b8 = CONCAT44((int)uVar19,(undefined4)local_1b8);
    uVar7 = uVar16;
    if (local_1b0[0] != 0) {
      pbVar17 = local_1b0;
      do {
        pbVar17 = pbVar17 + 1;
        uVar7 = uVar7 * 0x89 ^ uVar21;
        uVar21 = (uint)*pbVar17;
      } while (uVar21 != 0);
    }
    local_1b8 = CONCAT44((int)uVar19,uVar7);
    if (local_578[0] == 0) {
      uVar19 = 0;
    }
    else {
      uVar19 = 0;
      do {
        local_168[uVar19] = local_578[0];
        if (0x3e < (int)uVar19 + 1U) {
          uVar19 = (ulong)((int)uVar19 + 1);
          break;
        }
        local_578[0] = local_578[uVar19 + 1];
        uVar19 = uVar19 + 1;
      } while (local_578[0] != 0);
    }
    local_168[uVar19 & 0xffffffff] = 0;
    uVar7 = (uint)local_168[0];
    local_170._4_4_ = (int)uVar19;
    if (local_168[0] != 0) {
      pbVar17 = local_168;
      do {
        pbVar17 = pbVar17 + 1;
        uVar16 = uVar16 * 0x89 ^ uVar7;
        uVar7 = (uint)*pbVar17;
      } while (uVar7 != 0);
    }
LAB_7101c8c7a8:
    local_170 = CONCAT44(local_170._4_4_,uVar16);
    break;
  case 3:
    FUN_7101c83c40((long *)(param_1 + 0x420),0,param_3,ppppbVar14,pppplVar15,param_6,param_7,param_8
                  );
    local_5c8 = (undefined **)0x0;
    local_5c0 = (undefined8 *)((ulong)local_5c0 & 0xffffffffffff0000);
    FUN_71017ab0c0(param_1 + 0x500,&local_5c8);
    if (*(char *)(param_1 + 0x9a1) == '\x01') {
      FUN_7103778300(0x3f800000,local_f0,0x71043e0969);
      FUN_7103776640(&local_e0,(long)&local_f8,(byte ****)"set_Parts_rule_on_01",param_3,ppppbVar14,
                     pppplVar15,param_6,param_7,param_8);
      FUN_7103776910(&local_98,(long)&local_e0,(long ****)"set_txt_help",param_3,ppppbVar14,
                     pppplVar15,param_6,param_7,param_8);
      puVar5 = local_90;
      if ((long *)local_90[2] != (long *)0x0) {
        param_3 = 0xffffffff;
        ppppbVar14 = (byte ****)0x1;
        FUN_71037a2270((long *)local_90[2],(ushort *)&local_5c0,0xffffffff,1);
      }
      local_98 = &PTR_FUN_710523d9a8;
      local_90 = (undefined8 *)0x0;
      if (puVar5 != (undefined8 *)0x0) {
        FUN_710392eb40((ulong)puVar5);
      }
      puVar1 = local_d8;
      local_e0 = &PTR_FUN_710523d988;
      local_d8 = (undefined1 *)0x0;
      if (puVar1 != (undefined1 *)0x0) {
        uVar19 = *(ulong *)(puVar1 + 0x18);
        *(undefined ***)(puVar1 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(puVar1 + 0x18) = 0;
        if (uVar19 != 0) {
          FUN_710392eb40(uVar19);
        }
        FUN_710392eb40((ulong)puVar1);
      }
      pcVar12 = "set_Parts_rule_off_01";
    }
    else if (*(char *)(param_1 + 0x9a1) == '\x02') {
      FUN_7103778300(0x3f800000,local_f0,0x710438cb68);
      FUN_7103776640(&local_e0,(long)&local_f8,(byte ****)"set_Parts_rule_on_00",param_3,ppppbVar14,
                     pppplVar15,param_6,param_7,param_8);
      FUN_7103776910(&local_98,(long)&local_e0,(long ****)"set_txt_help",param_3,ppppbVar14,
                     pppplVar15,param_6,param_7,param_8);
      puVar5 = local_90;
      if ((long *)local_90[2] != (long *)0x0) {
        param_3 = 0xffffffff;
        ppppbVar14 = (byte ****)0x1;
        FUN_71037a2270((long *)local_90[2],(ushort *)&local_5c0,0xffffffff,1);
      }
      local_98 = &PTR_FUN_710523d9a8;
      local_90 = (undefined8 *)0x0;
      if (puVar5 != (undefined8 *)0x0) {
        FUN_710392eb40((ulong)puVar5);
      }
      puVar1 = local_d8;
      local_e0 = &PTR_FUN_710523d988;
      local_d8 = (undefined1 *)0x0;
      if (puVar1 != (undefined1 *)0x0) {
        uVar19 = *(ulong *)(puVar1 + 0x18);
        *(undefined ***)(puVar1 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(puVar1 + 0x18) = 0;
        if (uVar19 != 0) {
          FUN_710392eb40(uVar19);
        }
        FUN_710392eb40((ulong)puVar1);
      }
      pcVar12 = "set_Parts_rule_off_00";
    }
    else {
      FUN_7103778300(0x3f800000,local_f0,0x71042c55fd);
      FUN_7103776640(&local_e0,(long)&local_f8,(byte ****)"set_Parts_rule_on_02",param_3,ppppbVar14,
                     pppplVar15,param_6,param_7,param_8);
      FUN_7103776910(&local_98,(long)&local_e0,(long ****)"set_txt_help",param_3,ppppbVar14,
                     pppplVar15,param_6,param_7,param_8);
      puVar5 = local_90;
      if ((long *)local_90[2] != (long *)0x0) {
        param_3 = 0xffffffff;
        ppppbVar14 = (byte ****)0x1;
        FUN_71037a2270((long *)local_90[2],(ushort *)&local_5c0,0xffffffff,1);
      }
      local_98 = &PTR_FUN_710523d9a8;
      local_90 = (undefined8 *)0x0;
      if (puVar5 != (undefined8 *)0x0) {
        FUN_710392eb40((ulong)puVar5);
      }
      puVar1 = local_d8;
      local_e0 = &PTR_FUN_710523d988;
      local_d8 = (undefined1 *)0x0;
      if (puVar1 != (undefined1 *)0x0) {
        uVar19 = *(ulong *)(puVar1 + 0x18);
        *(undefined ***)(puVar1 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(puVar1 + 0x18) = 0;
        if (uVar19 != 0) {
          FUN_710392eb40(uVar19);
        }
        FUN_710392eb40((ulong)puVar1);
      }
      pcVar12 = "set_Parts_rule_off_02";
    }
    FUN_7103776640(&local_e0,(long)&local_f8,(byte ****)pcVar12,param_3,ppppbVar14,pppplVar15,
                   param_6,param_7,param_8);
    FUN_7103776910(&local_98,(long)&local_e0,(long ****)"set_txt_help",param_3,ppppbVar14,pppplVar15
                   ,param_6,param_7,param_8);
    uVar19 = (ulong)local_90;
    if (*(long **)((long)local_90 + 0x10) != (long *)0x0) {
      FUN_71037a2270(*(long **)((long)local_90 + 0x10),(ushort *)&local_5c0,0xffffffff,1);
    }
    local_98 = &PTR_FUN_710523d9a8;
    local_90 = (undefined8 *)0x0;
    if (uVar19 != 0) {
      FUN_710392eb40(uVar19);
    }
    uVar19 = (ulong)local_d8;
    local_e0 = &PTR_FUN_710523d988;
    local_d8 = (undefined1 *)0x0;
    if (uVar19 != 0) {
      uVar8 = *(ulong *)(uVar19 + 0x18);
      *(undefined ***)(uVar19 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar19 + 0x18) = 0;
      if (uVar8 != 0) {
        FUN_710392eb40(uVar8);
      }
      FUN_710392eb40(uVar19);
    }
    FUN_7103778300(0x3f800000,local_f0,0x710425f506);
    goto LAB_7101c8cab8;
  case 4:
    local_610 = local_e4;
    local_608 = local_e8;
    local_600 = local_1bc;
    local_5f8 = &local_1b8;
    if ((ulong)(*(long *)(param_1 + 0x440) - *(long *)(param_1 + 0x438)) < 3) goto LAB_7101c8cd70;
    uVar19 = (ulong)*(char *)(*(long *)(param_1 + 0x438) + 2);
    if (3 < uVar19) goto LAB_7101c8cd68;
    if ((&switchD_7101c8b57c::switchdataD_7104545296)[uVar19] != 4) {
      if ((&switchD_7101c8b57c::switchdataD_7104545296)[uVar19] == 3) {
        puVar11 = &DAT_710454529a;
        goto LAB_7101c8b964;
      }
      local_1bc[0] = 3;
      uVar7 = (uint)local_e4[0];
      if (2 < local_e4[0]) {
        uVar7 = 3;
      }
      uVar7 = uVar7 & ((int)uVar7 >> 7 ^ 0xffffffffU);
      uVar16 = (uint)local_e8[0];
      if (2 < local_e8[0]) {
        uVar16 = 3;
      }
      uVar16 = uVar16 & ((int)uVar16 >> 7 ^ 0xffffffffU);
      local_e4[0] = (byte)uVar7;
      local_e8[0] = (byte)uVar16;
      if ((3 < uVar7) || (FUN_7101c6f7f0((uint *)&local_98,(&DAT_710454529e)[uVar7]), 3 < uVar16))
      goto LAB_7101c8cd68;
      FUN_7101c6f7f0((uint *)&local_e0,(&DAT_710454529e)[uVar16]);
      for (uVar19 = 0; *(char *)((long)&local_90 + uVar19) != '\0'; uVar19 = uVar19 + 2) {
        *(char *)((long)&local_5c0 + uVar19) = *(char *)((long)&local_90 + uVar19);
        if (0x3e < (int)uVar19 + 1U) {
          uVar19 = (ulong)((int)uVar19 + 1);
          break;
        }
        cVar20 = *(char *)((long)&local_90 + uVar19 + 1);
        if (cVar20 == '\0') {
          uVar19 = uVar19 + 1;
          break;
        }
        *(char *)((long)&local_5c0 + uVar19 + 1) = cVar20;
      }
      uVar16 = 0x811c9dc5;
      *(undefined1 *)((long)&local_5c0 + (uVar19 & 0xffffffff)) = 0;
      uVar21 = (uint)(byte)local_5c0;
      uVar7 = uVar16;
      if (uVar21 != 0) {
        pbVar17 = (byte *)((long)&local_5c0 + 1);
        do {
          uVar7 = uVar7 * 0x89 ^ uVar21;
          uVar21 = (uint)*pbVar17;
          pbVar17 = pbVar17 + 1;
        } while (uVar21 != 0);
      }
      local_5c8 = (undefined **)CONCAT44((int)uVar19,uVar7);
      local_580 = 0;
      uVar19 = 0;
      while( true ) {
        if (*(byte *)((long)&local_d8 + uVar19) == 0) break;
        local_578[uVar19] = *(byte *)((long)&local_d8 + uVar19);
        if (0x3e < (int)uVar19 + 1U) {
          uVar19 = (ulong)((int)uVar19 + 1);
          break;
        }
        bVar22 = *(byte *)((long)&local_d8 + uVar19 + 1);
        if (bVar22 == 0) {
          uVar19 = uVar19 + 1;
          break;
        }
        local_578[uVar19 + 1] = bVar22;
        uVar19 = uVar19 + 2;
      }
      local_578[uVar19 & 0xffffffff] = 0;
      local_57c = (int)uVar19;
      uVar7 = (uint)local_578[0];
      local_580 = uVar16;
      if (uVar7 != 0) {
        pbVar17 = local_578;
        do {
          pbVar17 = pbVar17 + 1;
          local_580 = local_580 * 0x89 ^ uVar7;
          uVar7 = (uint)*pbVar17;
        } while (uVar7 != 0);
      }
      if ((byte)local_5c0 == 0) {
        uVar19 = 0;
      }
      else {
        uVar19 = 0;
        bVar22 = (byte)local_5c0;
        do {
          local_1b0[uVar19] = bVar22;
          if (0x3e < (int)uVar19 + 1U) {
            uVar19 = (ulong)((int)uVar19 + 1);
            break;
          }
          bVar22 = *(byte *)((long)&local_5c0 + uVar19 + 1);
          uVar19 = uVar19 + 1;
        } while (bVar22 != 0);
      }
      local_1b0[uVar19 & 0xffffffff] = 0;
      uVar21 = (uint)local_1b0[0];
      local_1b8 = CONCAT44((int)uVar19,(undefined4)local_1b8);
      uVar7 = uVar16;
      if (local_1b0[0] != 0) {
        pbVar17 = local_1b0;
        do {
          pbVar17 = pbVar17 + 1;
          uVar7 = uVar7 * 0x89 ^ uVar21;
          uVar21 = (uint)*pbVar17;
        } while (uVar21 != 0);
      }
      uVar8 = 0;
      local_1b8 = CONCAT44((int)uVar19,uVar7);
      while (local_578[0] != 0) {
        local_168[uVar8] = local_578[0];
        if (0x3e < (int)uVar8 + 1U) {
          uVar8 = (ulong)((int)uVar8 + 1);
          break;
        }
        if (local_578[uVar8 + 1] == 0) {
          uVar8 = uVar8 + 1;
          break;
        }
        local_168[uVar8 + 1] = local_578[uVar8 + 1];
        lVar2 = uVar8 + 2;
        uVar8 = uVar8 + 2;
        local_578[0] = local_578[lVar2];
      }
      local_168[uVar8 & 0xffffffff] = 0;
      uVar7 = (uint)local_168[0];
      local_170._4_4_ = (int)uVar8;
      if (local_168[0] != 0) {
        pbVar17 = local_168;
        do {
          pbVar17 = pbVar17 + 1;
          uVar16 = uVar16 * 0x89 ^ uVar7;
          uVar7 = (uint)*pbVar17;
        } while (uVar7 != 0);
      }
      goto LAB_7101c8c7a8;
    }
    puVar11 = &DAT_710454529c;
LAB_7101c8b964:
    FUN_7101c8da70(&local_610,(long)puVar11);
    break;
  default:
    FUN_7101c83c40((long *)(param_1 + 0x420),0,param_3,ppppbVar14,pppplVar15,param_6,param_7,param_8
                  );
    goto LAB_7101c8cab8;
  }
  pcVar12 = "color_08";
LAB_7101c8c7b8:
  FUN_7103778300(0x3f800000,local_f0,(long)pcVar12);
LAB_7101c8c7c0:
  FUN_710377a120((long)&local_108,(char *)local_1b0,param_3,ppppbVar14,pppplVar15,param_6,param_7,
                 param_8);
  FUN_710377a120((long)&local_128,(char *)local_1b0,param_3,ppppbVar14,pppplVar15,param_6,param_7,
                 param_8);
  if (local_e4[0] != local_e8[0]) {
    FUN_710377a120((long)&local_118,(char *)local_168,param_3,ppppbVar14,pppplVar15,param_6,param_7,
                   param_8);
    puVar1 = &DAT_7104401d83;
    if (local_e4[0] <= local_e8[0]) {
      puVar1 = &DAT_710438b71d;
    }
    FUN_7103778430((long)&local_f8,"txt_move_%s",puVar1,ppppbVar14,pppplVar15,param_6,param_7,
                   param_8);
  }
  if (((ulong)param_5 & 1) != 0) {
    FUN_7103771d60(&local_5c8,*(long *)(param_1 + 0x420),(long ****)0x0,ppppbVar14,pppplVar15,
                   param_6,param_7,param_8);
    uVar13 = 1;
    FUN_7103771d60(&local_98,*(long *)(param_1 + 0x420),(long ****)0x1,ppppbVar14,pppplVar15,param_6
                   ,param_7,param_8);
    puVar5 = local_90;
    if (local_e4[0] == 0) {
      plVar23 = (long *)*local_90;
      if (plVar23 != (long *)0x0) {
        uVar7 = 1;
        (**(code **)(*plVar23 + 0x208))(plVar23,1);
        uVar19 = (**(code **)(*plVar23 + 0x200))(plVar23);
        if ((uVar19 & 1) != 0) {
          uVar7 = (**(code **)(*plVar23 + 0x210))(plVar23);
          uVar7 = uVar7 ^ 1;
        }
        uVar13 = 0;
        (**(code **)(*plVar23 + 0x388))(plVar23,uVar7 & 1);
      }
      plVar23 = (long *)*local_5c0;
      puVar24 = local_5c0;
      if (plVar23 != (long *)0x0) {
        (**(code **)(*plVar23 + 0x208))(plVar23,0);
        uVar19 = (**(code **)(*plVar23 + 0x200))(plVar23);
        if ((uVar19 & 1) == 0) {
          uVar7 = 1;
        }
        else {
          uVar7 = (**(code **)(*plVar23 + 0x210))(plVar23);
          uVar7 = uVar7 ^ 1;
        }
        uVar13 = 0;
        (**(code **)(*plVar23 + 0x388))(plVar23,uVar7 & 1);
      }
    }
    else {
      plVar23 = (long *)*local_90;
      if (local_e4[0] == local_1bc[0]) {
        if (plVar23 != (long *)0x0) {
          (**(code **)(*plVar23 + 0x208))(plVar23,0);
          uVar19 = (**(code **)(*plVar23 + 0x200))(plVar23);
          if ((uVar19 & 1) == 0) {
            uVar7 = 1;
          }
          else {
            uVar7 = (**(code **)(*plVar23 + 0x210))(plVar23);
            uVar7 = uVar7 ^ 1;
          }
          uVar13 = 0;
          (**(code **)(*plVar23 + 0x388))(plVar23,uVar7 & 1);
        }
      }
      else if (plVar23 != (long *)0x0) {
        uVar7 = 1;
        (**(code **)(*plVar23 + 0x208))(plVar23,1);
        uVar19 = (**(code **)(*plVar23 + 0x200))(plVar23);
        if ((uVar19 & 1) != 0) {
          uVar7 = (**(code **)(*plVar23 + 0x210))(plVar23);
          uVar7 = uVar7 ^ 1;
        }
        uVar13 = 0;
        (**(code **)(*plVar23 + 0x388))(plVar23,uVar7 & 1);
      }
      plVar23 = (long *)*local_5c0;
      puVar24 = local_5c0;
      if (plVar23 != (long *)0x0) {
        uVar7 = 1;
        (**(code **)(*plVar23 + 0x208))(plVar23,1);
        uVar19 = (**(code **)(*plVar23 + 0x200))(plVar23);
        if ((uVar19 & 1) != 0) {
          uVar7 = (**(code **)(*plVar23 + 0x210))(plVar23);
          uVar7 = uVar7 ^ 1;
        }
        uVar13 = 0;
        (**(code **)(*plVar23 + 0x388))(plVar23,uVar7 & 1);
      }
    }
    FUN_7101c83c40((long *)(param_1 + 0x420),1,uVar13,ppppbVar14,pppplVar15,param_6,param_7,param_8)
    ;
    local_98 = &PTR_FUN_710523d9c8;
    local_90 = (undefined8 *)0x0;
    if (puVar5 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)puVar5);
    }
    local_5c8 = &PTR_FUN_710523d9c8;
    local_5c0 = (undefined8 *)0x0;
    if (puVar24 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)puVar24);
    }
  }
  if ((ulong)(*(long *)(param_1 + 0x440) - *(long *)(param_1 + 0x438)) <= (ulong)(long)iVar4) {
LAB_7101c8cd70:
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  *(byte *)(*(long *)(param_1 + 0x438) + (long)iVar4) = local_e4[0];
LAB_7101c8cab8:
  uVar19 = local_120;
  local_128 = &PTR_FUN_710523d9a8;
  local_120 = 0;
  if (uVar19 != 0) {
    FUN_710392eb40(uVar19);
  }
  uVar19 = local_110;
  local_118 = &PTR_FUN_710523d9a8;
  local_110 = 0;
  if (uVar19 != 0) {
    FUN_710392eb40(uVar19);
  }
  uVar19 = local_100;
  local_108 = &PTR_FUN_710523d9a8;
  local_100 = 0;
  if (uVar19 != 0) {
    FUN_710392eb40(uVar19);
  }
  uVar19 = local_f0;
  local_f8 = &PTR_FUN_710523d988;
  local_f0 = 0;
  if (uVar19 != 0) {
    uVar8 = *(ulong *)(uVar19 + 0x18);
    *(undefined ***)(uVar19 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar19 + 0x18) = 0;
    if (uVar8 != 0) {
      FUN_710392eb40(uVar8);
    }
    FUN_710392eb40(uVar19);
  }
  return;
}

