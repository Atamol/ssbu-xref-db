// addr:      7101c9f4e0
// offset:    0x1c9f4e0
// name:      FUN_7101c9f4e0
// mangled:   
// signature: undefined __cdecl FUN_7101c9f4e0(long param_1, long * param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101c9f4e0(long param_1,long *param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined ***pppuVar1;
  char cVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  byte ****ppppbVar7;
  char *pcVar8;
  undefined8 uVar9;
  long ****pppplVar10;
  byte ****ppppbVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  code *pcVar15;
  long *plVar16;
  byte *pbVar17;
  byte *pbVar18;
  long lVar19;
  byte bVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  undefined8 local_380;
  byte local_378 [64];
  undefined **local_338;
  ulong local_330;
  undefined **local_328;
  long *local_320 [8];
  uint local_2e0 [2];
  char local_2d8 [64];
  undefined8 local_298;
  undefined8 local_290;
  undefined4 local_288;
  undefined2 local_284;
  undefined1 local_282;
  undefined **local_250;
  long *local_248;
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
  undefined **local_110;
  undefined8 local_108;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined2 local_b0;
  undefined8 local_ae;
  ulong local_a6;
  undefined1 local_9e;
  
  local_238 = 0x101;
  pppuVar1 = (undefined ***)(param_1 + 0x118);
  local_240 = (byte ***)0x0;
  local_236 = 0;
  uVar13 = 0x811c9dc5;
  uVar23 = 0x811c9dc5;
  local_232 = 0;
  local_230 = 1;
  local_22c = 1;
  local_22a = 1;
  local_228 = &DAT_41f0000000000000;
  local_220 = 0;
  local_1f0 = (long *)0x0;
  local_1c0 = (long *)0x0;
  local_190 = (long *)0x0;
  local_160 = (long *)0x0;
  local_130 = (long *)0x0;
  local_120 = 0;
  FUN_7103776390(&local_250,pppuVar1,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar21 = (uint)param_3;
  local_290 = (long ***)((ulong)local_290 & 0xffffffffffffff00);
  local_298 = 0x811c9dc5;
  if ((uVar21 & 0xff) < 8) {
    uVar14 = uVar23;
    if ((1 << (ulong)(uVar21 & 0x1f) & 0xafU) == 0) {
      if ((uVar21 & 0xff) == 4) goto LAB_7101c9f5ac;
      if (*param_2 != 0) goto LAB_7101ca0c6c;
      local_236 = CONCAT13(1,(undefined3)local_236);
      local_228 = (undefined1 *)((ulong)local_228 & 0xffffffff);
      if (&local_250 != pppuVar1) {
        *local_248 = **(long **)(param_1 + 0x120);
        local_248[1] = *(long *)(*(long *)(param_1 + 0x120) + 8);
        plVar16 = *(long **)(param_1 + 0x120);
        if (local_248 != plVar16) {
          *(undefined8 *)local_248[3] = *(undefined8 *)plVar16[3];
          *(undefined8 *)(local_248[3] + 8) = *(undefined8 *)(plVar16[3] + 8);
          *(undefined8 *)(local_248[3] + 0x10) = *(undefined8 *)(plVar16[3] + 0x10);
          *(undefined8 *)(local_248[3] + 0x18) = *(undefined8 *)(plVar16[3] + 0x18);
        }
      }
      local_282 = 0;
      local_290 = (long ***)0x726f7463656c6573;
      local_288 = 0x6574695f;
      local_284 = 0x736d;
      uVar21 = 0x73;
      local_298._0_4_ = 0x811c9dc5;
      local_298._4_4_ = 0xe;
      pbVar17 = (byte *)((long)&local_290 + 1);
      do {
        uVar14 = uVar14 * 0x89 ^ uVar21;
        uVar21 = (uint)*pbVar17;
        pbVar17 = pbVar17 + 1;
      } while (uVar21 != 0);
    }
    else {
      if (*param_2 != 0) goto LAB_7101ca0c6c;
LAB_7101c9f5ac:
      local_236._0_2_ = CONCAT11(1,(undefined1)local_236);
      FUN_7103776640(&local_c8,(long)pppuVar1,(byte ****)"set_parts_sub_btns_%02d",
                     (ulong)(uVar21 & 0xff),param_4,param_5,param_6,param_7,param_8);
      plVar3 = local_c0;
      plVar16 = local_248;
      local_c0 = (long *)0x0;
      local_248 = plVar3;
      if (plVar16 != (long *)0x0) {
        uVar4 = plVar16[3];
        plVar16[2] = (long)&PTR_FUN_710523d9a8;
        plVar16[3] = 0;
        if (uVar4 != 0) {
          FUN_710392eb40(uVar4);
        }
        FUN_710392eb40((ulong)plVar16);
      }
      local_290 = (long ***)0x726f7463656c6573;
      local_288 = (uint)local_288._3_1_ << 0x18;
      local_c8 = &PTR_FUN_710523d988;
      local_c0 = (long *)0x0;
      local_288 = CONCAT22(local_288._2_2_,0x305f);
      uVar21 = 0x73;
      local_298._4_4_ = 10;
      pbVar17 = (byte *)((long)&local_290 + 1);
      do {
        uVar14 = uVar14 * 0x89 ^ uVar21;
        uVar21 = (uint)*pbVar17;
        pbVar17 = pbVar17 + 1;
      } while (uVar21 != 0);
    }
    local_290 = (long ***)0x726f7463656c6573;
    ppppbVar11 = &local_240;
    local_298 = CONCAT44(local_298._4_4_,uVar14);
    FUN_7103770b30(param_2,&local_250,(long ****)&local_290,ppppbVar11,param_5,param_6,param_7,
                   param_8);
    local_2d8[0] = '\0';
    local_2e0[0] = 0;
    local_2e0[1] = 0;
    switch((ulong)param_3 & 0xff) {
    case 0:
      local_320[0] = (long *)((ulong)local_320[0] & 0xffffffffffffff00);
      local_328 = (undefined **)0x0;
      iVar22 = (int)*(undefined8 *)(param_1 + 0x1a0) - (int)*(undefined8 *)(param_1 + 0x198);
      FUN_710062dc20((uint *)&local_328,"view_%d");
      FUN_7103778300(0x3f800000,(long)local_248,(long)local_320);
      if (0 < iVar22) {
        uVar4 = 0;
        pbVar17 = (byte *)((long)&local_c0 + 1);
        do {
          FUN_710062dc20(local_2e0,"set_parts_btn_sub_%02d");
          FUN_71037717d0(param_2,(int)uVar4,local_2d8,ppppbVar11,param_5,param_6,param_7,param_8);
          pppplVar10 = (long ****)(uVar4 & 0xffffffff);
          FUN_7103771d60(&local_c8,*param_2,pppplVar10,ppppbVar11,param_5,param_6,param_7,param_8);
          plVar16 = local_c0;
          if (*local_c0 == 0) {
            ppppbVar7 = (byte ****)&DAT_7104867c2e;
          }
          else {
            ppppbVar7 = *(byte *****)(*local_c0 + 0x88);
          }
          FUN_7103776640(&local_338,(long)&local_250,ppppbVar7,pppplVar10,ppppbVar11,param_5,param_6
                         ,param_7,param_8);
          local_c8 = &PTR_FUN_710523d9c8;
          local_c0 = (long *)0x0;
          if (plVar16 != (long *)0x0) {
            FUN_710392eb40((ulong)plVar16);
          }
          if ((ulong)(*(long *)(param_1 + 0x1a0) - *(long *)(param_1 + 0x198)) <= uVar4) {
LAB_7101ca0dbc:
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_out_of_range();
          }
          cVar2 = *(char *)(*(long *)(param_1 + 0x198) + uVar4);
          local_c0 = (long *)((ulong)local_c0 & 0xffffffffffffff00);
          local_c8 = (undefined **)0x0;
          uVar21 = uVar23;
          if (cVar2 == '\x03') {
            local_c0 = (long *)0x6f796e615f756e6d;
            local_b8 = 0x5f656c75725f656e;
            local_b0 = 0x6465;
            local_ae = 0x316e6f315f7469;
            uVar14 = 0x6d;
            local_c8._0_4_ = 0;
            local_c8._4_4_ = 0x19;
            pbVar18 = pbVar17;
            do {
              uVar21 = uVar21 * 0x89 ^ uVar14;
              uVar14 = (uint)*pbVar18;
              pbVar18 = pbVar18 + 1;
            } while (uVar14 != 0);
LAB_7101c9f928:
            local_b0 = 0x6465;
            local_b8 = 0x5f656c75725f656e;
            local_c0 = (long *)0x6f796e615f756e6d;
            uVar6 = 0;
            bVar20 = 0x6d;
            local_c8 = (undefined **)CONCAT44(local_c8._4_4_,uVar21);
            local_110 = (undefined **)((ulong)local_110 & 0xffffffff00000000);
            do {
              *(byte *)((long)&local_108 + uVar6) = bVar20;
              if (0x3e < (int)uVar6 + 1U) {
                uVar6 = (ulong)((int)uVar6 + 1);
                break;
              }
              bVar20 = pbVar17[uVar6];
              uVar6 = uVar6 + 1;
            } while (bVar20 != 0);
            *(undefined1 *)((long)&local_108 + (uVar6 & 0xffffffff)) = 0;
            uVar12 = (uint)(byte)local_108;
            pbVar18 = (byte *)((long)&local_108 + 1);
            uVar21 = uVar13;
            uVar14 = uVar23;
            if ((byte)local_108 != 0) {
              do {
                uVar21 = uVar14 * 0x89 ^ uVar12;
                uVar12 = (uint)*pbVar18;
                pbVar18 = pbVar18 + 1;
                uVar14 = uVar21;
              } while (uVar12 != 0);
            }
            local_110 = (undefined **)CONCAT44((int)uVar6,uVar21);
            FUN_7101ca0f60((long)&local_338,(long)&local_110,pppplVar10,ppppbVar11,param_5,param_6,
                           param_7,param_8);
          }
          else {
            if (cVar2 == '\x02') {
              local_c0 = (long *)0x6f796e615f756e6d;
              local_b8 = 0x5f656c75725f656e;
              local_b0 = 0x6465;
              local_ae = 0x745f6c656d5f7469;
              local_a6 = CONCAT44(local_a6._4_4_,0x6d6165);
              uVar14 = 0x6d;
              local_c8._0_4_ = 0;
              local_c8._4_4_ = 0x1d;
              pbVar18 = pbVar17;
              do {
                uVar21 = uVar21 * 0x89 ^ uVar14;
                uVar14 = (uint)*pbVar18;
                pbVar18 = pbVar18 + 1;
              } while (uVar14 != 0);
              goto LAB_7101c9f928;
            }
            if (cVar2 == '\x01') {
              local_c0 = (long *)0x6f796e615f756e6d;
              local_b8 = 0x5f656c75725f656e;
              local_b0 = 0x6465;
              uVar14 = 0x6d;
              local_ae = CONCAT17(local_ae._7_1_,0x6c656d5f7469);
              local_c8._0_4_ = 0;
              local_c8._4_4_ = 0x18;
              pbVar18 = pbVar17;
              do {
                uVar21 = uVar21 * 0x89 ^ uVar14;
                uVar14 = (uint)*pbVar18;
                pbVar18 = pbVar18 + 1;
              } while (uVar14 != 0);
              goto LAB_7101c9f928;
            }
          }
          uVar6 = local_330;
          local_338 = &PTR_FUN_710523d988;
          local_330 = 0;
          if (uVar6 != 0) {
            uVar5 = *(ulong *)(uVar6 + 0x18);
            *(undefined ***)(uVar6 + 0x10) = &PTR_FUN_710523d9a8;
            *(undefined8 *)(uVar6 + 0x18) = 0;
            if (uVar5 != 0) {
              FUN_710392eb40(uVar5);
            }
            FUN_710392eb40(uVar6);
          }
          uVar4 = uVar4 + 1;
        } while ((long)uVar4 < (long)iVar22);
      }
      break;
    case 1:
      local_320[0] = (long *)((ulong)local_320[0]._1_7_ << 8);
      local_328 = (undefined **)0x0;
      iVar22 = (int)*(undefined8 *)(param_1 + 0x1b8) - (int)*(undefined8 *)(param_1 + 0x1b0);
      FUN_710062dc20((uint *)&local_328,"view_%d");
      FUN_7103778300(0x3f800000,(long)local_248,(long)local_320);
      if (0 < iVar22) {
        uVar4 = 0;
        pbVar17 = (byte *)((long)&local_c0 + 1);
        do {
          FUN_710062dc20(local_2e0,"set_parts_btn_sub_%02d");
          FUN_71037717d0(param_2,(int)uVar4,local_2d8,ppppbVar11,param_5,param_6,param_7,param_8);
          pppplVar10 = (long ****)(uVar4 & 0xffffffff);
          FUN_7103771d60(&local_c8,*param_2,pppplVar10,ppppbVar11,param_5,param_6,param_7,param_8);
          plVar16 = local_c0;
          if (*local_c0 == 0) {
            ppppbVar7 = (byte ****)&DAT_7104867c2e;
          }
          else {
            ppppbVar7 = *(byte *****)(*local_c0 + 0x88);
          }
          FUN_7103776640(&local_338,(long)&local_250,ppppbVar7,pppplVar10,ppppbVar11,param_5,param_6
                         ,param_7,param_8);
          local_c8 = &PTR_FUN_710523d9c8;
          local_c0 = (long *)0x0;
          if (plVar16 != (long *)0x0) {
            FUN_710392eb40((ulong)plVar16);
          }
          if ((ulong)(*(long *)(param_1 + 0x1b8) - *(long *)(param_1 + 0x1b0)) <= uVar4)
          goto LAB_7101ca0dbc;
          cVar2 = *(char *)(*(long *)(param_1 + 0x1b0) + uVar4);
          local_c0 = (long *)((ulong)local_c0 & 0xffffffffffffff00);
          local_c8 = (undefined **)0x0;
          uVar21 = uVar23;
          if (cVar2 == '\x03') {
            local_c0 = (long *)0x6f796e615f756e6d;
            local_b8 = 0x5f656c75725f656e;
            local_b0 = 0x6465;
            local_ae = 0x696d6174735f7469;
            uVar14 = 0x6d;
            local_a6 = CONCAT53(local_a6._3_5_,0x616e);
            local_c8._0_4_ = 0;
            local_c8._4_4_ = 0x1c;
            pbVar18 = pbVar17;
            do {
              uVar21 = uVar21 * 0x89 ^ uVar14;
              uVar14 = (uint)*pbVar18;
              pbVar18 = pbVar18 + 1;
            } while (uVar14 != 0);
LAB_7101c9fd60:
            local_b0 = 0x6465;
            local_b8 = 0x5f656c75725f656e;
            local_c0 = (long *)0x6f796e615f756e6d;
            uVar6 = 0;
            bVar20 = 0x6d;
            local_c8 = (undefined **)CONCAT44(local_c8._4_4_,uVar21);
            local_110 = (undefined **)((ulong)local_110 & 0xffffffff00000000);
            do {
              *(byte *)((long)&local_108 + uVar6) = bVar20;
              if (0x3e < (int)uVar6 + 1U) {
                uVar6 = (ulong)((int)uVar6 + 1);
                break;
              }
              bVar20 = pbVar17[uVar6];
              uVar6 = uVar6 + 1;
            } while (bVar20 != 0);
            *(undefined1 *)((long)&local_108 + (uVar6 & 0xffffffff)) = 0;
            uVar12 = (uint)(byte)local_108;
            pbVar18 = (byte *)((long)&local_108 + 1);
            uVar21 = uVar13;
            uVar14 = uVar23;
            if ((byte)local_108 != 0) {
              do {
                uVar21 = uVar14 * 0x89 ^ uVar12;
                uVar12 = (uint)*pbVar18;
                pbVar18 = pbVar18 + 1;
                uVar14 = uVar21;
              } while (uVar12 != 0);
            }
            local_110 = (undefined **)CONCAT44((int)uVar6,uVar21);
            FUN_7101ca0f60((long)&local_338,(long)&local_110,pppplVar10,ppppbVar11,param_5,param_6,
                           param_7,param_8);
          }
          else {
            if (cVar2 == '\x02') {
              local_c0 = (long *)0x6f796e615f756e6d;
              local_b8 = 0x5f656c75725f656e;
              local_b0 = 0x6465;
              local_ae = 0x6b636f74735f7469;
              local_a6 = local_a6 & 0xffffffffffffff00;
              uVar14 = 0x6d;
              local_c8._0_4_ = 0;
              local_c8._4_4_ = 0x1a;
              pbVar18 = pbVar17;
              do {
                uVar21 = uVar21 * 0x89 ^ uVar14;
                uVar14 = (uint)*pbVar18;
                pbVar18 = pbVar18 + 1;
              } while (uVar14 != 0);
              goto LAB_7101c9fd60;
            }
            if (cVar2 == '\x01') {
              local_c0 = (long *)0x6f796e615f756e6d;
              local_b8 = 0x5f656c75725f656e;
              local_b0 = 0x6465;
              local_ae = 0x656d69745f7469;
              uVar14 = 0x6d;
              local_c8._0_4_ = 0;
              local_c8._4_4_ = 0x19;
              pbVar18 = pbVar17;
              do {
                uVar21 = uVar21 * 0x89 ^ uVar14;
                uVar14 = (uint)*pbVar18;
                pbVar18 = pbVar18 + 1;
              } while (uVar14 != 0);
              goto LAB_7101c9fd60;
            }
          }
          uVar6 = local_330;
          local_338 = &PTR_FUN_710523d988;
          local_330 = 0;
          if (uVar6 != 0) {
            uVar5 = *(ulong *)(uVar6 + 0x18);
            *(undefined ***)(uVar6 + 0x10) = &PTR_FUN_710523d9a8;
            *(undefined8 *)(uVar6 + 0x18) = 0;
            if (uVar5 != 0) {
              FUN_710392eb40(uVar5);
            }
            FUN_710392eb40(uVar6);
          }
          uVar4 = uVar4 + 1;
        } while ((long)uVar4 < (long)iVar22);
      }
      break;
    case 2:
      local_108 = (long *)((ulong)local_108 & 0xffffffffffffff00);
      local_110 = (undefined **)0x0;
      iVar22 = (int)*(undefined8 *)(param_1 + 0x200) - (int)*(undefined8 *)(param_1 + 0x1f8);
      FUN_710062dc20((uint *)&local_110,"view_%d");
      FUN_7103778300(0x3f800000,(long)local_248,(long)&local_108);
      if (0 < iVar22) {
        uVar4 = 0;
        do {
          FUN_710062dc20(local_2e0,"set_parts_btn_sub_%02d");
          FUN_71037717d0(param_2,(int)uVar4,local_2d8,ppppbVar11,param_5,param_6,param_7,param_8);
          pppplVar10 = (long ****)(uVar4 & 0xffffffff);
          FUN_7103771d60(&local_c8,*param_2,pppplVar10,ppppbVar11,param_5,param_6,param_7,param_8);
          plVar16 = local_c0;
          if (*local_c0 == 0) {
            ppppbVar7 = (byte ****)&DAT_7104867c2e;
          }
          else {
            ppppbVar7 = *(byte *****)(*local_c0 + 0x88);
          }
          FUN_7103776640(&local_328,(long)&local_250,ppppbVar7,pppplVar10,ppppbVar11,param_5,param_6
                         ,param_7,param_8);
          local_c8 = &PTR_FUN_710523d9c8;
          local_c0 = (long *)0x0;
          if (plVar16 != (long *)0x0) {
            FUN_710392eb40((ulong)plVar16);
          }
          if ((ulong)(*(long *)(param_1 + 0x200) - *(long *)(param_1 + 0x1f8)) <= uVar4) {
LAB_7101ca0db4:
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_out_of_range();
          }
          uVar13 = *(byte *)(*(long *)(param_1 + 0x1f8) + uVar4) - 1;
          if (uVar13 < 5) {
            local_c8 = (undefined **)0x1e00000000;
            local_c0 = (long *)0x6f796e615f756e6d;
            local_b8 = 0x5f656c75725f656e;
            local_b0 = 0x6465;
            local_ae = 0x696d6174735f7469;
            lVar19 = 9;
            uVar14 = 0x6d;
            local_a6 = CONCAT35(local_a6._5_3_,0x6e5f616e);
            uVar21 = uVar23;
            do {
              uVar21 = uVar21 * 0x89 ^ uVar14;
              uVar14 = (uint)*(byte *)((long)&local_c8 + lVar19);
              lVar19 = lVar19 + 1;
            } while (uVar14 != 0);
            local_c8 = (undefined **)CONCAT44(0x1e,uVar21);
            FUN_7101ca0dd0((long)&local_328,(long)&local_c8,((ulong)uVar13 & 0xff) * 0x32 + 100,
                           ppppbVar11,param_5,param_6,param_7,param_8);
          }
          plVar16 = local_320[0];
          local_328 = &PTR_FUN_710523d988;
          local_320[0] = (long *)0x0;
          if (plVar16 != (long *)0x0) {
            uVar6 = plVar16[3];
            plVar16[2] = (long)&PTR_FUN_710523d9a8;
            plVar16[3] = 0;
            if (uVar6 != 0) {
              FUN_710392eb40(uVar6);
            }
            FUN_710392eb40((ulong)plVar16);
          }
          uVar4 = uVar4 + 1;
        } while ((long)uVar4 < (long)iVar22);
      }
      break;
    case 3:
      local_108 = (long *)((ulong)local_108._1_7_ << 8);
      local_110 = (undefined **)0x0;
      iVar22 = (int)*(undefined8 *)(param_1 + 0x1e8) - (int)*(undefined8 *)(param_1 + 0x1e0);
      FUN_710062dc20((uint *)&local_110,"view_%d");
      FUN_7103778300(0x3f800000,(long)local_248,(long)&local_108);
      if (0 < iVar22) {
        uVar4 = 0;
        do {
          FUN_710062dc20(local_2e0,"set_parts_btn_sub_%02d");
          FUN_71037717d0(param_2,(int)uVar4,local_2d8,ppppbVar11,param_5,param_6,param_7,param_8);
          pppplVar10 = (long ****)(uVar4 & 0xffffffff);
          FUN_7103771d60(&local_c8,*param_2,pppplVar10,ppppbVar11,param_5,param_6,param_7,param_8);
          plVar16 = local_c0;
          if (*local_c0 == 0) {
            ppppbVar7 = (byte ****)&DAT_7104867c2e;
          }
          else {
            ppppbVar7 = *(byte *****)(*local_c0 + 0x88);
          }
          FUN_7103776640(&local_328,(long)&local_250,ppppbVar7,pppplVar10,ppppbVar11,param_5,param_6
                         ,param_7,param_8);
          local_c8 = &PTR_FUN_710523d9c8;
          local_c0 = (long *)0x0;
          if (plVar16 != (long *)0x0) {
            FUN_710392eb40((ulong)plVar16);
          }
          if ((ulong)(*(long *)(param_1 + 0x1e8) - *(long *)(param_1 + 0x1e0)) <= uVar4)
          goto LAB_7101ca0db4;
          uVar13 = *(byte *)(*(long *)(param_1 + 0x1e0) + uVar4) - 1;
          if (uVar13 < 3) {
            local_c8 = (undefined **)0x1c00000000;
            local_c0 = (long *)0x6f796e615f756e6d;
            local_b8 = 0x5f656c75725f656e;
            local_b0 = 0x6465;
            local_ae = 0x6b636f74735f7469;
            local_a6._2_6_ = (uint6)(local_a6 >> 0x10) & 0xffffffffff00;
            local_a6 = CONCAT62(local_a6._2_6_,0x6e5f);
            lVar19 = 9;
            uVar14 = 0x6d;
            uVar21 = uVar23;
            do {
              uVar21 = uVar21 * 0x89 ^ uVar14;
              uVar14 = (uint)*(byte *)((long)&local_c8 + lVar19);
              lVar19 = lVar19 + 1;
            } while (uVar14 != 0);
            local_c8 = (undefined **)CONCAT44(0x1c,uVar21);
            FUN_7101ca0dd0((long)&local_328,(long)&local_c8,((ulong)uVar13 & 0xff) + 1,ppppbVar11,
                           param_5,param_6,param_7,param_8);
          }
          plVar16 = local_320[0];
          local_328 = &PTR_FUN_710523d988;
          local_320[0] = (long *)0x0;
          if (plVar16 != (long *)0x0) {
            uVar6 = plVar16[3];
            plVar16[2] = (long)&PTR_FUN_710523d9a8;
            plVar16[3] = 0;
            if (uVar6 != 0) {
              FUN_710392eb40(uVar6);
            }
            FUN_710392eb40((ulong)plVar16);
          }
          uVar4 = uVar4 + 1;
        } while ((long)uVar4 < (long)iVar22);
      }
      break;
    case 4:
      local_108 = (long *)((ulong)local_108._1_7_ << 8);
      local_110 = (undefined **)0x0;
      iVar22 = (int)*(undefined8 *)(param_1 + 0x1d0) - (int)*(undefined8 *)(param_1 + 0x1c8);
      FUN_710062dc20((uint *)&local_110,"view_%d");
      FUN_7103778300(0x3f800000,(long)local_248,(long)&local_108);
      if (0 < iVar22) {
        uVar4 = 0;
        do {
          FUN_710062dc20(local_2e0,"set_parts_btn_sub_%02d");
          FUN_71037717d0(param_2,(int)uVar4,local_2d8,ppppbVar11,param_5,param_6,param_7,param_8);
          pppplVar10 = (long ****)(uVar4 & 0xffffffff);
          FUN_7103771d60(&local_c8,*param_2,pppplVar10,ppppbVar11,param_5,param_6,param_7,param_8);
          plVar16 = local_c0;
          if (*local_c0 == 0) {
            ppppbVar7 = (byte ****)&DAT_7104867c2e;
          }
          else {
            ppppbVar7 = *(byte *****)(*local_c0 + 0x88);
          }
          FUN_7103776640(&local_328,(long)&local_250,ppppbVar7,pppplVar10,ppppbVar11,param_5,param_6
                         ,param_7,param_8);
          local_c8 = &PTR_FUN_710523d9c8;
          local_c0 = (long *)0x0;
          if (plVar16 != (long *)0x0) {
            FUN_710392eb40((ulong)plVar16);
          }
          if ((ulong)(*(long *)(param_1 + 0x1d0) - *(long *)(param_1 + 0x1c8)) <= uVar4)
          goto LAB_7101ca0db4;
          uVar13 = 0x78;
          switch(*(undefined1 *)(*(long *)(param_1 + 0x1c8) + uVar4)) {
          case 1:
            break;
          case 2:
            uVar13 = 0x96;
            break;
          case 3:
            uVar13 = 0xb4;
            break;
          case 4:
            uVar13 = 0xf0;
            break;
          case 5:
            uVar13 = 300;
            break;
          case 6:
            uVar13 = 0x168;
            break;
          case 7:
            uVar13 = 0x1a4;
            break;
          default:
            goto switchD_7101ca02e4_default;
          }
          uVar6 = (ulong)(uVar13 % 0x3c);
          local_c8 = (undefined **)0x1b00000000;
          local_c0 = (long *)0x6f796e615f756e6d;
          local_b8 = 0x5f656c75725f656e;
          local_b0 = 0x6465;
          local_ae = 0x5f656d69745f7469;
          local_a6 = CONCAT62(local_a6._2_6_,0x6e);
          lVar19 = 9;
          if (0x3e6 < uVar13 % 0x3c) {
            uVar6 = 999;
          }
          uVar14 = 0x6d;
          uVar21 = uVar23;
          do {
            uVar21 = uVar21 * 0x89 ^ uVar14;
            uVar14 = (uint)*(byte *)((long)&local_c8 + lVar19);
            lVar19 = lVar19 + 1;
          } while (uVar14 != 0);
          local_c8 = (undefined **)CONCAT44(0x1b,uVar21);
          FUN_7101ca0dd0((long)&local_328,(long)&local_c8,uVar6 + (uVar13 / 0x3c) * 1000,ppppbVar11,
                         param_5,param_6,param_7,param_8);
switchD_7101ca02e4_default:
          plVar16 = local_320[0];
          local_328 = &PTR_FUN_710523d988;
          local_320[0] = (long *)0x0;
          if (plVar16 != (long *)0x0) {
            uVar6 = plVar16[3];
            plVar16[2] = (long)&PTR_FUN_710523d9a8;
            plVar16[3] = 0;
            if (uVar6 != 0) {
              FUN_710392eb40(uVar6);
            }
            FUN_710392eb40((ulong)plVar16);
          }
          uVar4 = uVar4 + 1;
        } while ((long)uVar4 < (long)iVar22);
      }
      break;
    case 5:
      local_320[0] = (long *)((ulong)local_320[0]._1_7_ << 8);
      local_328 = (undefined **)0x0;
      iVar22 = (int)*(undefined8 *)(param_1 + 0x218) - (int)*(undefined8 *)(param_1 + 0x210);
      FUN_710062dc20((uint *)&local_328,"view_%d");
      FUN_7103778300(0x3f800000,(long)local_248,(long)local_320);
      if (0 < iVar22) {
        uVar4 = 0;
        pbVar17 = (byte *)((long)&local_c0 + 1);
        do {
          FUN_710062dc20(local_2e0,"set_parts_btn_sub_%02d");
          FUN_71037717d0(param_2,(int)uVar4,local_2d8,ppppbVar11,param_5,param_6,param_7,param_8);
          pppplVar10 = (long ****)(uVar4 & 0xffffffff);
          FUN_7103771d60(&local_c8,*param_2,pppplVar10,ppppbVar11,param_5,param_6,param_7,param_8);
          plVar16 = local_c0;
          if (*local_c0 == 0) {
            ppppbVar7 = (byte ****)&DAT_7104867c2e;
          }
          else {
            ppppbVar7 = *(byte *****)(*local_c0 + 0x88);
          }
          FUN_7103776640(&local_338,(long)&local_250,ppppbVar7,pppplVar10,ppppbVar11,param_5,param_6
                         ,param_7,param_8);
          local_c8 = &PTR_FUN_710523d9c8;
          local_c0 = (long *)0x0;
          if (plVar16 != (long *)0x0) {
            FUN_710392eb40((ulong)plVar16);
          }
          if ((ulong)(*(long *)(param_1 + 0x218) - *(long *)(param_1 + 0x210)) <= uVar4)
          goto LAB_7101ca0dbc;
          local_c0 = (long *)((ulong)local_c0 & 0xffffffffffffff00);
          local_c8 = (undefined **)0x0;
          uVar21 = uVar23;
          switch(*(undefined1 *)(*(long *)(param_1 + 0x210) + uVar4)) {
          case 1:
            local_c0 = (long *)0x6f796e615f756e6d;
            local_b8 = 0x5f656c75725f656e;
            local_b0 = 0x6465;
            local_ae = 0x615f6774735f7469;
            uVar14 = 0x6d;
            local_a6 = CONCAT53(local_a6._3_5_,0x6c6c);
            local_c8._0_4_ = 0;
            local_c8._4_4_ = 0x1c;
            pbVar18 = pbVar17;
            do {
              uVar21 = uVar21 * 0x89 ^ uVar14;
              uVar14 = (uint)*pbVar18;
              pbVar18 = pbVar18 + 1;
            } while (uVar14 != 0);
            break;
          case 2:
            local_c0 = (long *)0x6f796e615f756e6d;
            local_b8 = 0x5f656c75725f656e;
            local_b0 = 0x6465;
            local_ae = 0x69675f6f6e5f7469;
            local_a6 = CONCAT26(local_a6._6_2_,0x6b63696d6d);
            uVar14 = 0x6d;
            local_c8._0_4_ = 0;
            local_c8._4_4_ = 0x1f;
            pbVar18 = pbVar17;
            do {
              uVar21 = uVar21 * 0x89 ^ uVar14;
              uVar14 = (uint)*pbVar18;
              pbVar18 = pbVar18 + 1;
            } while (uVar14 != 0);
            break;
          case 3:
            local_c0 = (long *)0x6f796e615f756e6d;
            local_b8 = 0x5f656c75725f656e;
            local_b0 = 0x6465;
            local_ae = 0x6c747461625f7469;
            uVar14 = 0x6d;
            local_a6 = CONCAT17(local_a6._7_1_,0x646c65696665);
            local_c8._0_4_ = 0;
            local_c8._4_4_ = 0x20;
            pbVar18 = pbVar17;
            do {
              uVar21 = uVar21 * 0x89 ^ uVar14;
              uVar14 = (uint)*pbVar18;
              pbVar18 = pbVar18 + 1;
            } while (uVar14 != 0);
            break;
          case 4:
            local_c0 = (long *)0x6f796e615f756e6d;
            local_b8 = 0x5f656c75725f656e;
            local_b0 = 0x6465;
            uVar14 = 0x6d;
            local_ae = CONCAT17(local_ae._7_1_,0x646e655f7469);
            local_c8._0_4_ = 0;
            local_c8._4_4_ = 0x18;
            pbVar18 = pbVar17;
            do {
              uVar21 = uVar21 * 0x89 ^ uVar14;
              uVar14 = (uint)*pbVar18;
              pbVar18 = pbVar18 + 1;
            } while (uVar14 != 0);
            break;
          case 5:
            local_c0 = (long *)0x6f796e615f756e6d;
            local_b8 = 0x5f656c75725f656e;
            local_b0 = 0x6465;
            local_ae = 0x6c747461625f7469;
            local_a6 = 0x735f646c65696665;
            local_9e = 0;
            uVar14 = 0x6d;
            local_c8._0_4_ = 0;
            local_c8._4_4_ = 0x22;
            pbVar18 = pbVar17;
            do {
              uVar21 = uVar21 * 0x89 ^ uVar14;
              uVar14 = (uint)*pbVar18;
              pbVar18 = pbVar18 + 1;
            } while (uVar14 != 0);
            break;
          default:
            goto switchD_7101ca05c8_default;
          }
          local_b0 = 0x6465;
          local_b8 = 0x5f656c75725f656e;
          local_c0 = (long *)0x6f796e615f756e6d;
          uVar6 = 0;
          bVar20 = 0x6d;
          local_c8 = (undefined **)CONCAT44(local_c8._4_4_,uVar21);
          local_110 = (undefined **)((ulong)local_110 & 0xffffffff00000000);
          do {
            *(byte *)((long)&local_108 + uVar6) = bVar20;
            if (0x3e < (int)uVar6 + 1U) {
              uVar6 = (ulong)((int)uVar6 + 1);
              break;
            }
            bVar20 = pbVar17[uVar6];
            uVar6 = uVar6 + 1;
          } while (bVar20 != 0);
          *(undefined1 *)((long)&local_108 + (uVar6 & 0xffffffff)) = 0;
          uVar12 = (uint)(byte)local_108;
          pbVar18 = (byte *)((long)&local_108 + 1);
          uVar21 = uVar13;
          uVar14 = uVar23;
          if ((byte)local_108 != 0) {
            do {
              uVar21 = uVar14 * 0x89 ^ uVar12;
              uVar12 = (uint)*pbVar18;
              pbVar18 = pbVar18 + 1;
              uVar14 = uVar21;
            } while (uVar12 != 0);
          }
          local_110 = (undefined **)CONCAT44((int)uVar6,uVar21);
          FUN_7101ca0f60((long)&local_338,(long)&local_110,pppplVar10,ppppbVar11,param_5,param_6,
                         param_7,param_8);
switchD_7101ca05c8_default:
          uVar6 = local_330;
          local_338 = &PTR_FUN_710523d988;
          local_330 = 0;
          if (uVar6 != 0) {
            uVar5 = *(ulong *)(uVar6 + 0x18);
            *(undefined ***)(uVar6 + 0x10) = &PTR_FUN_710523d9a8;
            *(undefined8 *)(uVar6 + 0x18) = 0;
            if (uVar5 != 0) {
              FUN_710392eb40(uVar5);
            }
            FUN_710392eb40(uVar6);
          }
          uVar4 = uVar4 + 1;
        } while ((long)uVar4 < (long)iVar22);
      }
      break;
    case 6:
      if (*(long *)(param_1 + 0x230) != *(long *)(param_1 + 0x228)) {
        uVar4 = 0;
        do {
          ppppbVar11 = (byte ****)(uVar4 & 0xffffffff);
          FUN_71037717d0(param_2,(int)uVar4,"set_parts_items_%02d",ppppbVar11,param_5,param_6,
                         param_7,param_8);
          pppplVar10 = (long ****)(uVar4 & 0xffffffff);
          FUN_7103771d60(&local_110,*param_2,pppplVar10,ppppbVar11,param_5,param_6,param_7,param_8);
          plVar16 = local_108;
          if (*local_108 == 0) {
            ppppbVar7 = (byte ****)&DAT_7104867c2e;
          }
          else {
            ppppbVar7 = *(byte *****)(*local_108 + 0x88);
          }
          FUN_7103776640(&local_c8,(long)&local_250,ppppbVar7,pppplVar10,ppppbVar11,param_5,param_6,
                         param_7,param_8);
          local_110 = &PTR_FUN_710523d9c8;
          local_108 = (long *)0x0;
          if (plVar16 != (long *)0x0) {
            FUN_710392eb40((ulong)plVar16);
          }
          plVar16 = local_c0;
          if ((ulong)(*(long *)(param_1 + 0x230) - *(long *)(param_1 + 0x228) >> 2) <= uVar4)
          goto LAB_7101ca0db4;
          pcVar8 = "view_one_switch_base";
          if (*(int *)(*(long *)(param_1 + 0x228) + uVar4 * 4) == 0x21e) {
            pcVar8 = "view_all_switch_base";
          }
          FUN_7103778300(0x3f800000,(long)local_c0,(long)pcVar8);
          local_c8 = &PTR_FUN_710523d988;
          local_c0 = (long *)0x0;
          if (plVar16 != (long *)0x0) {
            uVar6 = plVar16[3];
            plVar16[2] = (long)&PTR_FUN_710523d9a8;
            plVar16[3] = 0;
            if (uVar6 != 0) {
              FUN_710392eb40(uVar6);
            }
            FUN_710392eb40((ulong)plVar16);
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < (ulong)(*(long *)(param_1 + 0x230) - *(long *)(param_1 + 0x228) >> 2));
      }
      break;
    case 7:
      local_c0 = (long *)((ulong)local_c0 & 0xffffffffffffff00);
      local_c8 = (undefined **)0x0;
      FUN_710062dc20((uint *)&local_c8,"view_%d");
      FUN_7103778300(0x3f800000,(long)local_248,(long)&local_c0);
      FUN_710062dc20(local_2e0,"set_parts_btn_sub_%02d");
      FUN_71037717d0(param_2,0,local_2d8,ppppbVar11,param_5,param_6,param_7,param_8);
      uVar9 = 0;
      FUN_7103771d60(&local_328,*param_2,(long ****)0x0,ppppbVar11,param_5,param_6,param_7,param_8);
      plVar16 = local_320[0];
      if (*local_320[0] == 0) {
        ppppbVar7 = (byte ****)&DAT_7104867c2e;
      }
      else {
        ppppbVar7 = *(byte *****)(*local_320[0] + 0x88);
      }
      FUN_7103776640(&local_110,(long)&local_250,ppppbVar7,uVar9,ppppbVar11,param_5,param_6,param_7,
                     param_8);
      local_328 = &PTR_FUN_710523d9c8;
      local_320[0] = (long *)0x0;
      if (plVar16 != (long *)0x0) {
        FUN_710392eb40((ulong)plVar16);
      }
      for (uVar4 = 0; "mnu_anyone_rule_edit_charge_off"[uVar4] != 0; uVar4 = uVar4 + 2) {
        bVar20 = "mnu_anyone_rule_edit_charge_off"[uVar4 + 1];
        local_378[uVar4] = "mnu_anyone_rule_edit_charge_off"[uVar4];
        if (bVar20 == 0) {
          uVar4 = uVar4 + 1;
          break;
        }
        local_378[uVar4 + 1] = bVar20;
      }
      local_378[uVar4 & 0xffffffff] = 0;
      uVar14 = (uint)local_378[0];
      uVar21 = uVar13;
      if (local_378[0] != 0) {
        pbVar17 = local_378;
        uVar21 = uVar23;
        do {
          pbVar17 = pbVar17 + 1;
          uVar21 = uVar21 * 0x89 ^ uVar14;
          uVar14 = (uint)*pbVar17;
        } while (uVar14 != 0);
      }
      local_380 = CONCAT44((int)uVar4,uVar21);
      FUN_7101ca0f60((long)&local_110,(long)&local_380,uVar9,ppppbVar11,param_5,param_6,param_7,
                     param_8);
      plVar16 = local_108;
      local_110 = &PTR_FUN_710523d988;
      local_108 = (long *)0x0;
      if (plVar16 != (long *)0x0) {
        uVar4 = plVar16[3];
        plVar16[2] = (long)&PTR_FUN_710523d9a8;
        plVar16[3] = 0;
        if (uVar4 != 0) {
          FUN_710392eb40(uVar4);
        }
        FUN_710392eb40((ulong)plVar16);
      }
      FUN_710062dc20(local_2e0,"set_parts_btn_sub_%02d");
      FUN_71037717d0(param_2,1,local_2d8,ppppbVar11,param_5,param_6,param_7,param_8);
      uVar9 = 1;
      FUN_7103771d60(&local_328,*param_2,(long ****)0x1,ppppbVar11,param_5,param_6,param_7,param_8);
      plVar16 = local_320[0];
      if (*local_320[0] == 0) {
        ppppbVar7 = (byte ****)&DAT_7104867c2e;
      }
      else {
        ppppbVar7 = *(byte *****)(*local_320[0] + 0x88);
      }
      FUN_7103776640(&local_110,(long)&local_250,ppppbVar7,uVar9,ppppbVar11,param_5,param_6,param_7,
                     param_8);
      local_328 = &PTR_FUN_710523d9c8;
      local_320[0] = (long *)0x0;
      if (plVar16 != (long *)0x0) {
        FUN_710392eb40((ulong)plVar16);
      }
      for (uVar4 = 0; "mnu_anyone_rule_edit_charge_on"[uVar4] != 0; uVar4 = uVar4 + 2) {
        bVar20 = "mnu_anyone_rule_edit_charge_on"[uVar4 + 1];
        local_378[uVar4] = "mnu_anyone_rule_edit_charge_on"[uVar4];
        if (bVar20 == 0) {
          uVar4 = uVar4 + 1;
          break;
        }
        local_378[uVar4 + 1] = bVar20;
      }
      local_378[uVar4 & 0xffffffff] = 0;
      uVar21 = (uint)local_378[0];
      if (local_378[0] != 0) {
        pbVar17 = local_378;
        uVar13 = uVar23;
        do {
          pbVar17 = pbVar17 + 1;
          uVar13 = uVar13 * 0x89 ^ uVar21;
          uVar21 = (uint)*pbVar17;
        } while (uVar21 != 0);
      }
      local_380 = CONCAT44((int)uVar4,uVar13);
      FUN_7101ca0f60((long)&local_110,(long)&local_380,uVar9,ppppbVar11,param_5,param_6,param_7,
                     param_8);
      uVar4 = (ulong)local_108;
      local_110 = &PTR_FUN_710523d988;
      local_108 = (long *)0x0;
      if (uVar4 != 0) {
        uVar6 = *(ulong *)(uVar4 + 0x18);
        *(undefined ***)(uVar4 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar4 + 0x18) = 0;
        if (uVar6 != 0) {
          FUN_710392eb40(uVar6);
        }
        FUN_710392eb40(uVar4);
      }
    }
    (**(code **)(*(long *)*param_2 + 0x70))((long *)*param_2,1);
  }
LAB_7101ca0c6c:
  plVar16 = local_248;
  local_250 = &PTR_FUN_710523d988;
  local_248 = (long *)0x0;
  if (plVar16 != (long *)0x0) {
    uVar4 = plVar16[3];
    plVar16[2] = (long)&PTR_FUN_710523d9a8;
    plVar16[3] = 0;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
    FUN_710392eb40((ulong)plVar16);
  }
  if (alStack_150 == local_130) {
    pcVar15 = *(code **)(*local_130 + 0x20);
LAB_7101ca0ccc:
    (*pcVar15)();
  }
  else if (local_130 != (long *)0x0) {
    pcVar15 = *(code **)(*local_130 + 0x28);
    goto LAB_7101ca0ccc;
  }
  if (alStack_180 == local_160) {
    pcVar15 = *(code **)(*local_160 + 0x20);
LAB_7101ca0cfc:
    (*pcVar15)();
  }
  else if (local_160 != (long *)0x0) {
    pcVar15 = *(code **)(*local_160 + 0x28);
    goto LAB_7101ca0cfc;
  }
  if (alStack_1b0 == local_190) {
    pcVar15 = *(code **)(*local_190 + 0x20);
LAB_7101ca0d2c:
    (*pcVar15)();
  }
  else if (local_190 != (long *)0x0) {
    pcVar15 = *(code **)(*local_190 + 0x28);
    goto LAB_7101ca0d2c;
  }
  if (alStack_1e0 == local_1c0) {
    pcVar15 = *(code **)(*local_1c0 + 0x20);
  }
  else {
    if (local_1c0 == (long *)0x0) goto LAB_7101ca0d60;
    pcVar15 = *(code **)(*local_1c0 + 0x28);
  }
  (*pcVar15)();
LAB_7101ca0d60:
  if (alStack_210 == local_1f0) {
    pcVar15 = *(code **)(*local_1f0 + 0x20);
  }
  else {
    if (local_1f0 == (long *)0x0) {
      return;
    }
    pcVar15 = *(code **)(*local_1f0 + 0x28);
  }
  (*pcVar15)();
  return;
}

