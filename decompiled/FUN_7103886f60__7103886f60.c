// addr:      7103886f60
// offset:    0x3886f60
// name:      FUN_7103886f60
// mangled:   
// signature: undefined __cdecl FUN_7103886f60(long param_1, undefined8 * param_2, ulong param_3, ulong param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7103886f60(long param_1,undefined8 *param_2,ulong param_3,ulong param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  size_t __n;
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  logic_error *plVar9;
  long ****pppplVar10;
  byte ****ppppbVar11;
  undefined8 uVar12;
  long lVar13;
  void *__s2;
  long lVar14;
  long *plVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined4 *puVar21;
  uint *puVar22;
  long lVar23;
  byte *pbVar24;
  long *plVar25;
  uint *puVar26;
  void *pvVar27;
  uint *puVar28;
  ulong *puVar29;
  undefined8 *puVar30;
  undefined8 *puVar31;
  undefined8 *puVar32;
  uint *puVar33;
  undefined8 *puVar34;
  long ****pppplVar35;
  uint *puVar36;
  ulong uVar37;
  uint *puVar38;
  uint *puVar39;
  uint *puVar40;
  long local_138;
  uint *local_128;
  undefined8 local_110;
  undefined8 *local_108;
  undefined8 uStack_100;
  long *local_f8;
  uint *local_e0;
  long local_d8;
  long ****local_c0;
  long *local_b8;
  undefined8 local_b0;
  long local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  ulong local_88;
  undefined8 local_80;
  void *local_78;
  undefined1 local_6b;
  
  pbVar24 = (byte *)(param_1 + 0x10);
  ppppbVar11 = (byte ****)param_4;
  if ((*pbVar24 & 1) == 0) {
    pbVar24[0] = 0;
    pbVar24[1] = 0;
  }
  else {
    **(undefined1 **)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
      pvVar27 = *(void **)(param_1 + 0x20);
      nu::VirtualFreeHook(pvVar27);
      FUN_710392eb40((ulong)pvVar27);
      pbVar24[0] = 0;
      pbVar24[1] = 0;
      pbVar24[2] = 0;
      pbVar24[3] = 0;
      pbVar24[4] = 0;
      pbVar24[5] = 0;
      pbVar24[6] = 0;
      pbVar24[7] = 0;
    }
  }
  uVar12 = *param_2;
  uVar19 = param_2[2];
  *(undefined8 *)(param_1 + 0x18) = param_2[1];
  *(undefined8 *)(param_1 + 0x20) = uVar19;
  *(undefined8 *)pbVar24 = uVar12;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined8 *)(param_1 + 0x58) = param_2[4];
  uVar12 = param_2[5];
  uVar19 = param_2[6];
  uVar20 = param_2[8];
  *(undefined8 *)(param_1 + 0x70) = param_2[7];
  *(undefined8 *)(param_1 + 0x78) = uVar20;
  *(undefined8 *)(param_1 + 0x60) = uVar12;
  *(undefined8 *)(param_1 + 0x68) = uVar19;
  uVar12 = param_2[9];
  uVar19 = param_2[10];
  uVar20 = param_2[0xc];
  *(undefined8 *)(param_1 + 0x90) = param_2[0xb];
  *(undefined8 *)(param_1 + 0x98) = uVar20;
  *(undefined8 *)(param_1 + 0x80) = uVar12;
  *(undefined8 *)(param_1 + 0x88) = uVar19;
  uVar20 = param_2[0xf];
  uVar12 = param_2[0xd];
  uVar19 = param_2[0xe];
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0xa8) = uVar19;
  *(undefined8 *)(param_1 + 0xb0) = uVar20;
  *(undefined8 *)(param_1 + 0xa0) = uVar12;
  puVar28 = (uint *)param_2[0x11];
  plVar25 = (long *)(param_1 + 0xc0);
  puVar33 = (uint *)*plVar25;
  puVar36 = (uint *)(param_1 + 0xd8);
  if ((puVar28 == (uint *)(param_2 + 0x14)) || (puVar33 == puVar36)) {
    if (puVar28 == (uint *)(param_2 + 0x14)) {
      lVar8 = param_2[0x12];
      pppplVar10 = (long ****)(lVar8 * 0x28);
      lVar18 = lVar8 * 0x28 >> 3;
      uVar37 = lVar18 * -0x3333333333333333;
      puVar22 = puVar28 + lVar8 * 10;
      if (uVar37 < *(ulong *)(param_1 + 0xd0) || uVar37 - *(ulong *)(param_1 + 0xd0) == 0) {
        puVar29 = (ulong *)(param_1 + 200);
        uVar17 = *puVar29;
        if ((uVar17 != 0) && (lVar8 != 0)) {
          lVar13 = 0;
          do {
            uVar2 = *(uint *)((long)puVar33 + lVar13);
            uVar3 = *(uint *)((long)puVar28 + lVar13);
            if (uVar2 == uVar3) {
              local_c0 = (long ****)((long)puVar28 + lVar13 + 8);
              FUN_71035e9ec0(uVar2 ^ (int)uVar2 >> 0x1f,(long *)&local_c0,(long)puVar33 + lVar13 + 8
                            );
            }
            else {
              local_c0 = (long ****)((long)puVar33 + lVar13);
              uVar3 = uVar3 ^ (int)uVar3 >> 0x1f;
              local_b8 = (long *)CONCAT44(local_b8._4_4_,uVar3);
              FUN_71035e9fa0(uVar3,(long *)&local_c0,(long)puVar28 + lVar13 + 8);
            }
            lVar14 = lVar13 + 0x28;
          } while ((uVar17 * 0x28 + -0x28 != lVar13) &&
                  (bVar5 = lVar8 * 0x28 + -0x28 != lVar13, lVar13 = lVar14, bVar5));
          puVar28 = (uint *)((long)puVar28 + lVar14);
        }
        if (puVar28 == puVar22) {
          uVar17 = *puVar29;
          lVar8 = uVar17 + lVar18 * 0x3333333333333333;
          if ((uVar17 < uVar37) || (lVar8 != 0)) {
            lVar13 = uVar37 - uVar17;
            puVar36 = (uint *)(*plVar25 + lVar18 * 8);
            do {
              FUN_7103599990(*puVar36 ^ (int)*puVar36 >> 0x1f,(undefined8 *)(puVar36 + 2));
              lVar13 = lVar13 + 1;
              puVar36 = puVar36 + 10;
            } while (lVar13 != 0);
            uVar37 = *puVar29 - lVar8;
          }
          *puVar29 = uVar37;
        }
        else {
          puVar33 = (uint *)(*plVar25 + *puVar29 * 0x28);
          puVar36 = puVar33;
          do {
            local_c0 = (long ****)(puVar36 + 2);
            FUN_710359d470(*puVar28 ^ (int)*puVar28 >> 0x1f,&local_c0,(long)(puVar28 + 2));
            puVar39 = puVar28 + 10;
            puVar26 = puVar36 + 10;
            *puVar36 = *puVar28 ^ (int)*puVar28 >> 0x1f;
            puVar28 = puVar39;
            puVar36 = puVar26;
          } while (puVar39 != puVar22);
          uVar37 = *puVar29 + ((long)puVar26 - (long)puVar33 >> 3) * -0x3333333333333333;
          *puVar29 = uVar37;
        }
      }
      else {
        iVar7 = FUN_710392e1f0(&local_e0,0x10,pppplVar10,ppppbVar11,param_5,param_6,param_7,param_8)
        ;
        if (((iVar7 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) &&
           (local_c0 = pppplVar10,
           uVar17 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_c0),
           (uVar17 & 1) != 0)) {
          FUN_710392e1f0(&local_e0,0x10,pppplVar10,ppppbVar11,param_5,param_6,param_7,param_8);
        }
        nu::VirtualAllocHook((ulong)pppplVar10,0x10,local_e0);
        puVar33 = local_e0;
        puVar39 = *(uint **)(param_1 + 0xc0);
        puVar29 = (ulong *)(param_1 + 200);
        if (puVar39 != (uint *)0x0) {
          puVar26 = puVar39;
          for (uVar17 = *puVar29; uVar17 != 0; uVar17 = uVar17 - 1) {
            FUN_7103599990(*puVar26 ^ (int)*puVar26 >> 0x1f,(undefined8 *)(puVar26 + 2));
            puVar26 = puVar26 + 10;
          }
          *puVar29 = 0;
          if (puVar39 != puVar36) {
            nu::VirtualFreeHook(puVar39);
            FUN_710392eb40((ulong)puVar39);
          }
        }
        *(undefined8 *)(param_1 + 200) = 0;
        *(ulong *)(param_1 + 0xd0) = uVar37;
        *(uint **)(param_1 + 0xc0) = puVar33;
        if (lVar8 == 0) {
          uVar37 = 0;
          puVar36 = puVar33;
        }
        else {
          pppplVar10 = (long ****)(puVar33 + 2);
          do {
            local_c0 = pppplVar10;
            FUN_710359d470(*puVar28 ^ (int)*puVar28 >> 0x1f,&local_c0,(long)(puVar28 + 2));
            puVar36 = puVar28 + 10;
            *(uint *)(pppplVar10 + -1) = *puVar28 ^ (int)*puVar28 >> 0x1f;
            pppplVar10 = pppplVar10 + 5;
            puVar28 = puVar36;
          } while (puVar36 != puVar22);
          uVar37 = *puVar29;
          puVar36 = puVar33 + (lVar8 * 8 - 8U >> 3) * 10 + 10;
        }
        uVar37 = uVar37 + ((long)puVar36 - (long)puVar33 >> 3) * -0x3333333333333333;
        *puVar29 = uVar37;
      }
    }
    else {
      puVar29 = (ulong *)(param_1 + 200);
      uVar37 = *puVar29;
      if (uVar37 != 0) {
        do {
          FUN_7103599990(*puVar33 ^ (int)*puVar33 >> 0x1f,(undefined8 *)(puVar33 + 2));
          uVar37 = uVar37 - 1;
          puVar33 = puVar33 + 10;
        } while (uVar37 != 0);
        puVar33 = (uint *)*plVar25;
      }
      *puVar29 = 0;
      if (puVar33 != puVar36) {
        nu::VirtualFreeHook(puVar33);
        FUN_710392eb40((ulong)puVar33);
      }
      *(undefined8 *)(param_1 + 0xc0) = param_2[0x11];
      *(undefined8 *)(param_1 + 200) = param_2[0x12];
      *(undefined8 *)(param_1 + 0xd0) = param_2[0x13];
      param_2[0x12] = 0;
      param_2[0x13] = 0;
      param_2[0x11] = 0;
      uVar37 = *puVar29;
    }
  }
  else {
    uVar37 = *(ulong *)(param_1 + 200);
    if (uVar37 != 0) {
      do {
        FUN_7103599990(*puVar33 ^ (int)*puVar33 >> 0x1f,(undefined8 *)(puVar33 + 2));
        uVar37 = uVar37 - 1;
        puVar33 = puVar33 + 10;
      } while (uVar37 != 0);
      puVar33 = (uint *)*plVar25;
    }
    *(undefined8 *)(param_1 + 200) = 0;
    *(undefined8 *)(param_1 + 0xc0) = param_2[0x11];
    param_2[0x11] = puVar33;
    uVar12 = *(undefined8 *)(param_1 + 200);
    *(undefined8 *)(param_1 + 200) = param_2[0x12];
    param_2[0x12] = uVar12;
    uVar12 = *(undefined8 *)(param_1 + 0xd0);
    *(undefined8 *)(param_1 + 0xd0) = param_2[0x13];
    param_2[0x13] = uVar12;
    uVar37 = *(ulong *)(param_1 + 200);
  }
  if (uVar37 != 0) {
    puVar36 = (uint *)*plVar25;
    puVar28 = puVar36 + uVar37 * 10;
    puVar30 = (undefined8 *)(param_1 + 0x358);
    do {
      puVar33 = puVar36 + 2;
      FUN_710359c770(&local_c0,*puVar36 ^ (int)*puVar36 >> 0x1f,(long)puVar33);
      if ((int)local_b8[2] == 1) {
        FUN_710359c770(&local_c0,*puVar36 ^ (int)*puVar36 >> 0x1f,(long)puVar33);
        if (((local_b0 == (long *)0x0) || (*local_b0 != local_a8)) || ((int)local_b8[2] != 1)) {
          plVar25 = (long *)0x0;
joined_r0x0071038879e8:
          plVar15 = (long *)0x0;
          lVar18 = 0;
        }
        else {
          plVar25 = local_b8;
          if (local_b8 == (long *)0x0) goto joined_r0x0071038879e8;
          plVar15 = (long *)local_b8[1];
          lVar18 = *plVar15;
        }
        if ((param_3 & 1) != 0) {
          (**(code **)(*plVar25 + 0x20))(&local_e0,plVar25);
          lVar8 = (**(code **)(*plVar25 + 0x88))(plVar25);
          if (lVar8 == 0) {
            local_80 = 0;
            local_78 = (void *)0x0;
            local_b0 = (long *)(*(ulong *)(local_d8 + 0x10) >> 2);
            local_90 = 0;
            local_88 = 0;
            local_a8 = 0;
            local_a0 = 0;
            uStack_98 = 0;
            local_c0 = (long ****)CONCAT44(local_c0._4_4_,0x131);
            local_b8 = (long *)0x0;
            (**(code **)(*plVar25 + 0x98))(plVar25,&local_c0);
            pvVar27 = local_78;
            if ((local_88 & 1) != 0) {
              nu::VirtualFreeHook(local_78);
              FUN_710392eb40((ulong)pvVar27);
            }
          }
        }
        uVar17 = *(ulong *)(param_1 + 0x360);
        uVar37 = *(ulong *)(param_1 + 0x368);
        lVar8 = *(long *)(param_1 + 0x358);
        if (uVar37 <= uVar17) {
          if (-uVar37 == -0x666666666666666) {
            plVar9 = (logic_error *)__cxa_allocate_exception(0x10);
            std::logic_error::logic_error(plVar9,"get_next_capacity, allocator\'s max_size reached")
            ;
            *(undefined **)plVar9 = &DAT_7107b4d010;
                    /* WARNING: Subroutine does not return */
            __cxa_throw(plVar9,&std::length_error::typeinfo,std::length_error::~length_error);
          }
          uVar1 = uVar37;
          if (uVar37 == 0) {
            uVar1 = 1;
          }
          local_138 = 0x666666666666666;
          if (uVar1 <= -uVar37 + 0x666666666666666) {
            local_138 = uVar1 + uVar37;
          }
          pppplVar10 = (long ****)(local_138 * 0x28);
          iVar7 = FUN_710392e1f0(&local_e0,0x10,pppplVar10,ppppbVar11,param_5,param_6,param_7,
                                 param_8);
          if (((iVar7 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) &&
             (local_c0 = pppplVar10,
             uVar37 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_c0),
             (uVar37 & 1) != 0)) {
            FUN_710392e1f0(&local_e0,0x10,pppplVar10,ppppbVar11,param_5,param_6,param_7,param_8);
          }
          nu::VirtualAllocHook((ulong)pppplVar10,0x10,local_e0);
          puVar22 = (uint *)(lVar8 + uVar17 * 0x28);
          puVar33 = (uint *)*puVar30;
          local_128 = local_e0;
          puVar39 = local_e0;
          if ((puVar33 != puVar22) &&
             (puVar26 = puVar33, puVar40 = local_e0, puVar33 != (uint *)0x0)) {
            do {
              local_c0 = (long ****)(puVar40 + 2);
              FUN_710359d470(*puVar26 ^ (int)*puVar26 >> 0x1f,&local_c0,(long)(puVar26 + 2));
              puVar38 = puVar26 + 10;
              puVar39 = puVar40 + 10;
              *puVar40 = *puVar26 ^ (int)*puVar26 >> 0x1f;
              puVar26 = puVar38;
              puVar40 = puVar39;
            } while (puVar38 != puVar22);
          }
          if ((plVar15 == (long *)0x0) || (*plVar15 != lVar18)) {
            plVar25 = (long *)0x0;
LAB_710388778c:
            puVar34 = (undefined8 *)0x0;
            uVar12 = 0;
          }
          else {
            if (plVar25 == (long *)0x0) goto LAB_710388778c;
            puVar34 = (undefined8 *)plVar25[1];
            uVar12 = *puVar34;
          }
          puVar26 = puVar39 + 10;
          *(undefined ***)(puVar39 + 2) = &PTR_FUN_7105231ad0;
          *(long **)(puVar39 + 4) = plVar25;
          *puVar39 = 0;
          *(undefined8 **)(puVar39 + 6) = puVar34;
          *(undefined8 *)(puVar39 + 8) = uVar12;
          if (puVar33 != (uint *)0x0) {
            lVar18 = *(long *)(param_1 + 0x360);
            if (puVar33 + lVar18 * 10 != puVar22) {
              do {
                local_c0 = (long ****)(puVar26 + 2);
                FUN_710359d470(*puVar22 ^ (int)*puVar22 >> 0x1f,&local_c0,(long)(puVar22 + 2));
                puVar40 = puVar22 + 10;
                puVar39 = puVar26 + 10;
                *puVar26 = *puVar22 ^ (int)*puVar22 >> 0x1f;
                puVar26 = puVar39;
                puVar22 = puVar40;
              } while (puVar40 != puVar33 + lVar18 * 10);
              lVar18 = *(long *)(param_1 + 0x360);
            }
            for (; lVar18 != 0; lVar18 = lVar18 + -1) {
              FUN_7103599990(*puVar33 ^ (int)*puVar33 >> 0x1f,(undefined8 *)(puVar33 + 2));
              puVar33 = puVar33 + 10;
            }
            pvVar27 = (void *)*puVar30;
            if (pvVar27 != (void *)(param_1 + 0x370)) {
              nu::VirtualFreeHook(pvVar27);
              goto LAB_7103887840;
            }
          }
          goto LAB_7103887850;
        }
        if ((plVar15 == (long *)0x0) || (*plVar15 != lVar18)) {
LAB_7103887b0c:
          plVar25 = (long *)0x0;
        }
        else if (plVar25 != (long *)0x0) goto LAB_7103887b00;
LAB_7103887b14:
        puVar34 = (undefined8 *)0x0;
        uVar12 = 0;
LAB_7103887b18:
        puVar21 = (undefined4 *)(lVar8 + uVar17 * 0x28);
        *(undefined ***)(puVar21 + 2) = &PTR_FUN_7105231ad0;
        *(long **)(puVar21 + 4) = plVar25;
        *(undefined8 **)(puVar21 + 6) = puVar34;
        *(undefined8 *)(puVar21 + 8) = uVar12;
        *puVar21 = 0;
        lVar18 = *(long *)(param_1 + 0x360) + 1;
LAB_7103887b40:
        *(long *)(param_1 + 0x360) = lVar18;
      }
      else if ((int)local_b8[2] == 0) {
        FUN_710359c770(&local_c0,*puVar36 ^ (int)*puVar36 >> 0x1f,(long)puVar33);
        if (((local_b0 == (long *)0x0) || (*local_b0 != local_a8)) || ((int)local_b8[2] != 0)) {
          plVar25 = (long *)0x0;
joined_r0x0071038878f8:
          plVar15 = (long *)0x0;
          lVar18 = 0;
        }
        else {
          plVar25 = local_b8;
          if (local_b8 == (long *)0x0) goto joined_r0x0071038878f8;
          plVar15 = (long *)local_b8[1];
          lVar18 = *plVar15;
        }
        if ((param_3 & 1) != 0) {
          (**(code **)(*plVar25 + 0x20))(&local_e0,plVar25);
          lVar8 = (**(code **)(*plVar25 + 0x88))(plVar25);
          if (lVar8 == 0) {
            local_80 = 0;
            local_78 = (void *)0x0;
            local_b0 = (long *)(*(ulong *)(local_d8 + 0x10) >> 2);
            local_90 = 0;
            local_88 = 0;
            local_a8 = 0;
            local_a0 = 0;
            uStack_98 = 0;
            local_c0 = (long ****)CONCAT44(local_c0._4_4_,0x131);
            local_b8 = (long *)0x0;
            (**(code **)(*plVar25 + 0x98))(plVar25,&local_c0);
            pvVar27 = local_78;
            if ((local_88 & 1) != 0) {
              nu::VirtualFreeHook(local_78);
              FUN_710392eb40((ulong)pvVar27);
            }
          }
        }
        uVar17 = *(ulong *)(param_1 + 0x360);
        uVar37 = *(ulong *)(param_1 + 0x368);
        lVar8 = *(long *)(param_1 + 0x358);
        if (uVar17 < uVar37) {
          if ((plVar15 == (long *)0x0) || (*plVar15 != lVar18)) goto LAB_7103887b0c;
          if (plVar25 == (long *)0x0) goto LAB_7103887b14;
LAB_7103887b00:
          puVar34 = (undefined8 *)plVar25[1];
          uVar12 = *puVar34;
          goto LAB_7103887b18;
        }
        if (-uVar37 == -0x666666666666666) {
          plVar9 = (logic_error *)__cxa_allocate_exception(0x10);
          std::logic_error::logic_error(plVar9,"get_next_capacity, allocator\'s max_size reached");
          *(undefined **)plVar9 = &DAT_7107b4d010;
                    /* WARNING: Subroutine does not return */
          __cxa_throw(plVar9,&std::length_error::typeinfo,std::length_error::~length_error);
        }
        uVar1 = uVar37;
        if (uVar37 == 0) {
          uVar1 = 1;
        }
        local_138 = 0x666666666666666;
        if (uVar1 <= -uVar37 + 0x666666666666666) {
          local_138 = uVar1 + uVar37;
        }
        pppplVar10 = (long ****)(local_138 * 0x28);
        iVar7 = FUN_710392e1f0(&local_e0,0x10,pppplVar10,ppppbVar11,param_5,param_6,param_7,param_8)
        ;
        if (((iVar7 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) &&
           (local_c0 = pppplVar10,
           uVar37 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_c0),
           (uVar37 & 1) != 0)) {
          FUN_710392e1f0(&local_e0,0x10,pppplVar10,ppppbVar11,param_5,param_6,param_7,param_8);
        }
        nu::VirtualAllocHook((ulong)pppplVar10,0x10,local_e0);
        puVar22 = (uint *)(lVar8 + uVar17 * 0x28);
        puVar33 = (uint *)*puVar30;
        local_128 = local_e0;
        puVar39 = local_e0;
        if ((puVar33 != puVar22) && (puVar26 = puVar33, puVar40 = local_e0, puVar33 != (uint *)0x0))
        {
          do {
            local_c0 = (long ****)(puVar40 + 2);
            FUN_710359d470(*puVar26 ^ (int)*puVar26 >> 0x1f,&local_c0,(long)(puVar26 + 2));
            puVar38 = puVar26 + 10;
            puVar39 = puVar40 + 10;
            *puVar40 = *puVar26 ^ (int)*puVar26 >> 0x1f;
            puVar26 = puVar38;
            puVar40 = puVar39;
          } while (puVar38 != puVar22);
        }
        if ((plVar15 == (long *)0x0) || (*plVar15 != lVar18)) {
          plVar25 = (long *)0x0;
LAB_71038876c8:
          puVar34 = (undefined8 *)0x0;
          uVar12 = 0;
        }
        else {
          if (plVar25 == (long *)0x0) goto LAB_71038876c8;
          puVar34 = (undefined8 *)plVar25[1];
          uVar12 = *puVar34;
        }
        puVar26 = puVar39 + 10;
        *(undefined ***)(puVar39 + 2) = &PTR_FUN_7105231ad0;
        *(long **)(puVar39 + 4) = plVar25;
        *puVar39 = 0;
        *(undefined8 **)(puVar39 + 6) = puVar34;
        *(undefined8 *)(puVar39 + 8) = uVar12;
        if (puVar33 != (uint *)0x0) {
          lVar18 = *(long *)(param_1 + 0x360);
          if (puVar33 + lVar18 * 10 != puVar22) {
            do {
              local_c0 = (long ****)(puVar26 + 2);
              FUN_710359d470(*puVar22 ^ (int)*puVar22 >> 0x1f,&local_c0,(long)(puVar22 + 2));
              puVar40 = puVar22 + 10;
              puVar39 = puVar26 + 10;
              *puVar26 = *puVar22 ^ (int)*puVar22 >> 0x1f;
              puVar26 = puVar39;
              puVar22 = puVar40;
            } while (puVar40 != puVar33 + lVar18 * 10);
            lVar18 = *(long *)(param_1 + 0x360);
          }
          for (; lVar18 != 0; lVar18 = lVar18 + -1) {
            FUN_7103599990(*puVar33 ^ (int)*puVar33 >> 0x1f,(undefined8 *)(puVar33 + 2));
            puVar33 = puVar33 + 10;
          }
          pvVar27 = (void *)*puVar30;
          if (pvVar27 == (void *)(param_1 + 0x370)) goto LAB_7103887850;
          nu::VirtualFreeHook(pvVar27);
LAB_7103887840:
          FUN_710392eb40((ulong)pvVar27);
        }
LAB_7103887850:
        *(uint **)(param_1 + 0x358) = local_128;
        *(long *)(param_1 + 0x368) = local_138;
        lVar18 = ((long)puVar26 - (long)local_128 >> 3) * -0x3333333333333333;
        goto LAB_7103887b40;
      }
      puVar36 = puVar36 + 10;
    } while (puVar36 != puVar28);
  }
  uVar2 = *(uint *)(param_1 + 0x5f0);
  uVar3 = *(uint *)(param_2 + 100);
  pppplVar10 = (long ****)(param_1 + 0x5f0);
  if (uVar2 == uVar3) {
    local_c0 = (long ****)(param_2 + 0x65);
    FUN_71035e7f20(uVar2 ^ (int)uVar2 >> 0x1f,(long *)&local_c0,param_1 + 0x5f8);
  }
  else {
    uVar3 = uVar3 ^ (int)uVar3 >> 0x1f;
    local_b8 = (long *)CONCAT44(local_b8._4_4_,uVar3);
    local_c0 = pppplVar10;
    FUN_71035e8000(uVar3,(long *)&local_c0,(long)(param_2 + 0x65));
  }
  puVar30 = (undefined8 *)(param_1 + 0x28);
  puVar34 = (undefined8 *)*puVar30;
  if (puVar34 != (undefined8 *)0x0) {
    puVar32 = *(undefined8 **)(param_1 + 0x30);
    puVar31 = puVar34;
    if (puVar32 != puVar34) {
      do {
        puVar32 = puVar32 + -4;
        (**(code **)*puVar32)(puVar32);
      } while (puVar34 != puVar32);
      puVar31 = (undefined8 *)*puVar30;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar34;
    nu::VirtualFreeHook(puVar31);
    FUN_710392eb40((ulong)puVar31);
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *puVar30 = 0;
  }
  *(undefined8 *)(param_1 + 0x28) = param_2[0x69];
  *(undefined8 *)(param_1 + 0x30) = param_2[0x6a];
  *(undefined8 *)(param_1 + 0x38) = param_2[0x6b];
  param_2[0x6a] = 0;
  param_2[0x6b] = 0;
  param_2[0x69] = 0;
  iVar7 = *(int *)(param_2 + 0x6c);
  lVar18 = *(long *)(param_1 + 0x28);
  lVar8 = *(long *)(param_1 + 0x30);
  if (lVar18 == lVar8) {
    bVar5 = false;
  }
  else {
    puVar30 = (undefined8 *)(param_1 + 0x48);
    bVar5 = false;
    do {
      if (*(long **)(lVar18 + 0x10) == (long *)0x0) {
        lVar13 = 0;
        local_110 = 0;
        local_108 = (undefined8 *)0x0;
      }
      else if (**(long **)(lVar18 + 0x10) == *(long *)(lVar18 + 0x18)) {
        lVar13 = *(long *)(lVar18 + 8);
        if (lVar13 == 0) {
          local_110 = 0;
          local_108 = (undefined8 *)0x0;
        }
        else {
          local_108 = *(undefined8 **)(lVar13 + 8);
          local_110 = *local_108;
        }
      }
      else {
        lVar13 = 0;
        local_110 = 0;
        local_108 = (undefined8 *)0x0;
      }
      if (*(long *)(param_1 + 8) == 0) {
        *(undefined8 *)(lVar13 + 0x1a8) = 0;
        *(undefined8 *)(lVar13 + 0x1b0) = 0;
        uVar12 = 0;
      }
      else {
        *(long *)(lVar13 + 0x1a8) = param_1;
        puVar34 = *(undefined8 **)(param_1 + 8);
        *(undefined8 **)(lVar13 + 0x1b0) = puVar34;
        uVar12 = *puVar34;
      }
      *(undefined8 *)(lVar13 + 0x1b8) = uVar12;
      puVar31 = (undefined8 *)*puVar30;
      puVar34 = puVar30;
      if (puVar31 == (undefined8 *)0x0) {
        puVar36 = (uint *)*puVar30;
        puVar32 = puVar30;
      }
      else {
        uVar37 = *(ulong *)(lVar13 + 0x18);
        pvVar27 = *(void **)(lVar13 + 0x20);
        if ((*(byte *)(lVar13 + 0x10) & 1) == 0) {
          pvVar27 = (void *)(lVar13 + 0x11);
          uVar37 = (ulong)(*(byte *)(lVar13 + 0x10) >> 1);
        }
        do {
          while( true ) {
            puVar32 = puVar31;
            bVar4 = *(byte *)(puVar32 + 4);
            uVar17 = (ulong)(bVar4 >> 1);
            if ((bVar4 & 1) != 0) {
              uVar17 = puVar32[5];
            }
            __n = uVar17;
            if (uVar37 <= uVar17) {
              __n = uVar37;
            }
            if (__n == 0) break;
            __s2 = (void *)puVar32[6];
            if ((bVar4 & 1) == 0) {
              __s2 = (void *)((long)puVar32 + 0x21);
            }
            iVar6 = memcmp(pvVar27,__s2,__n);
            if (iVar6 == 0) break;
            if (iVar6 < 0) goto LAB_7103887f80;
LAB_7103887fa0:
            iVar6 = memcmp(__s2,pvVar27,__n);
            if (iVar6 == 0) goto LAB_7103887fbc;
            if (-1 < iVar6) goto LAB_7103887fe8;
LAB_7103887fc4:
            puVar34 = puVar32 + 1;
            puVar31 = (undefined8 *)*puVar34;
            if ((undefined8 *)*puVar34 == (undefined8 *)0x0) goto LAB_7103887fe8;
          }
          if (uVar17 <= uVar37) {
            if (__n != 0) {
              __s2 = (void *)puVar32[6];
              if ((bVar4 & 1) == 0) {
                __s2 = (void *)((long)puVar32 + 0x21);
              }
              goto LAB_7103887fa0;
            }
LAB_7103887fbc:
            if (uVar17 < uVar37) goto LAB_7103887fc4;
            break;
          }
LAB_7103887f80:
          puVar31 = (undefined8 *)*puVar32;
          puVar34 = puVar32;
        } while ((undefined8 *)*puVar32 != (undefined8 *)0x0);
LAB_7103887fe8:
        puVar36 = (uint *)*puVar34;
      }
      if (puVar36 == (uint *)0x0) {
        iVar6 = FUN_710392e1f0(&local_e0,0x10,(long ****)&DAT_00000050,ppppbVar11,param_5,param_6,
                               param_7,param_8);
        if ((iVar6 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
          local_c0 = (long ****)&DAT_00000050;
          uVar37 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_c0);
          if ((uVar37 & 1) != 0) {
            FUN_710392e1f0(&local_e0,0x10,(long ****)&DAT_00000050,ppppbVar11,param_5,param_6,
                           param_7,param_8);
          }
        }
        nu::VirtualAllocHook(0x50,0x10,local_e0);
        puVar36 = local_e0;
        puVar28 = local_e0 + 8;
        puVar28[0] = 0;
        puVar28[1] = 0;
        puVar36[10] = 0;
        puVar36[0xb] = 0;
        puVar36[0xc] = 0;
        puVar36[0xd] = 0;
        if ((*(byte *)(lVar13 + 0x10) & 1) == 0) {
          uVar12 = *(undefined8 *)(lVar13 + 0x10);
          uVar19 = *(undefined8 *)(lVar13 + 0x20);
          *(undefined8 *)(local_e0 + 10) = *(undefined8 *)(lVar13 + 0x18);
          *(undefined8 *)(local_e0 + 0xc) = uVar19;
          *(undefined8 *)puVar28 = uVar12;
        }
        else {
          uVar37 = *(ulong *)(lVar13 + 0x18);
          if (0xffffffffffffffef < uVar37) {
                    /* WARNING: Subroutine does not return */
            std::__basic_string_common<true>::__throw_length_error();
          }
          pvVar27 = *(void **)(lVar13 + 0x20);
          if (uVar37 < 0x17) {
            puVar28 = (uint *)((long)local_e0 + 0x21);
            *(char *)(local_e0 + 8) = (char)((int)uVar37 << 1);
            if (uVar37 != 0) goto LAB_7103888138;
          }
          else {
            pppplVar35 = (long ****)(uVar37 + 0x10 & 0xfffffffffffffff0);
            iVar6 = FUN_710392e1f0(&local_e0,0x10,pppplVar35,ppppbVar11,param_5,param_6,param_7,
                                   param_8);
            if (((iVar6 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) &&
               (local_c0 = pppplVar35,
               uVar17 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_c0),
               (uVar17 & 1) != 0)) {
              FUN_710392e1f0(&local_e0,0x10,pppplVar35,ppppbVar11,param_5,param_6,param_7,param_8);
            }
            nu::VirtualAllocHook((ulong)pppplVar35,0x10,local_e0);
            *(ulong *)(puVar36 + 8) = (ulong)pppplVar35 | 1;
            *(ulong *)(puVar36 + 10) = uVar37;
            *(uint **)(puVar36 + 0xc) = local_e0;
            puVar28 = local_e0;
LAB_7103888138:
            memcpy(puVar28,pvVar27,uVar37);
          }
          *(undefined1 *)((long)puVar28 + uVar37) = 0;
        }
        puVar36[0x10] = 0;
        puVar36[0x11] = 0;
        puVar36[0x12] = 0;
        puVar36[0x13] = 0;
        puVar36[0xe] = 0;
        puVar36[0xf] = 0;
        *(undefined8 **)(puVar36 + 4) = puVar32;
        puVar36[0] = 0;
        puVar36[1] = 0;
        puVar36[2] = 0;
        puVar36[3] = 0;
        *puVar34 = puVar36;
        puVar28 = puVar36;
        if (**(long **)(param_1 + 0x40) != 0) {
          *(long *)(param_1 + 0x40) = **(long **)(param_1 + 0x40);
          puVar28 = (uint *)*puVar34;
        }
        std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
                  (*(long **)(param_1 + 0x48),(long *)puVar28);
        *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 1;
      }
      puVar34 = *(undefined8 **)(puVar36 + 0x10);
      if (puVar34 < *(undefined8 **)(puVar36 + 0x12)) {
        *puVar34 = &PTR_FUN_7105231950;
        puVar34[1] = lVar13;
        puVar34[2] = local_108;
        puVar34[3] = local_110;
        *(long *)(puVar36 + 0x10) = *(long *)(puVar36 + 0x10) + 0x20;
        lVar14 = *(long *)(lVar13 + 0x180);
        if (lVar14 == 0) goto LAB_7103888428;
LAB_71038881d8:
        if (*(long *)(lVar14 + 8) == 0) goto LAB_7103888428;
        puVar34 = *(undefined8 **)(param_1 + 0x620);
        if (puVar34 == *(undefined8 **)(param_1 + 0x628)) {
          lVar14 = (long)puVar34 - *(long *)(param_1 + 0x618) >> 5;
          uVar37 = lVar14 + 1;
          if (uVar37 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          lVar16 = (long)*(undefined8 **)(param_1 + 0x628) - *(long *)(param_1 + 0x618);
          if ((ulong)(lVar16 >> 5) < 0x3ffffffffffffff) {
            uVar17 = lVar16 >> 4;
            if (uVar37 <= uVar17) {
              uVar37 = uVar17;
            }
            if (uVar37 != 0) goto LAB_7103887cb0;
            puVar36 = (uint *)0x0;
          }
          else {
            uVar37 = 0x7ffffffffffffff;
LAB_7103887cb0:
            pppplVar35 = (long ****)(uVar37 << 5);
            iVar6 = FUN_710392e1f0(&local_e0,0x10,pppplVar35,ppppbVar11,param_5,param_6,param_7,
                                   param_8);
            if (((iVar6 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) &&
               (local_c0 = pppplVar35,
               uVar17 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_c0),
               (uVar17 & 1) != 0)) {
              FUN_710392e1f0(&local_e0,0x10,pppplVar35,ppppbVar11,param_5,param_6,param_7,param_8);
            }
            nu::VirtualAllocHook((ulong)pppplVar35,0x10,local_e0);
            puVar36 = local_e0;
          }
          puVar33 = puVar36 + lVar14 * 8;
          *(undefined ***)puVar33 = &PTR_FUN_7105231950;
          *(long *)(puVar33 + 2) = lVar13;
          *(undefined8 **)(puVar33 + 4) = local_108;
          *(undefined8 *)(puVar33 + 6) = local_110;
          puVar34 = *(undefined8 **)(param_1 + 0x618);
          puVar31 = *(undefined8 **)(param_1 + 0x620);
          puVar28 = puVar33 + 8;
          puVar32 = puVar34;
          if (puVar31 != puVar34) {
            uVar17 = (long)(puVar31 + -4) - (long)puVar34;
            puVar22 = puVar33;
            if (((uint)uVar17 >> 5 & 1) == 0) {
              puVar22 = puVar33 + -8;
              *(undefined ***)puVar22 = &PTR_FUN_7105233908;
              *(undefined8 *)(puVar33 + -6) = puVar31[-3];
              *(undefined8 *)(puVar33 + -4) = puVar31[-2];
              *(undefined8 *)(puVar33 + -2) = puVar31[-1];
              *(undefined ***)puVar22 = &PTR_FUN_7105231950;
              puVar31 = puVar31 + -4;
            }
            if (0x1f < uVar17) {
              lVar16 = 0;
              do {
                puVar32 = (undefined8 *)((long)puVar31 + lVar16 + -0x38);
                lVar23 = lVar16 + -0x40;
                *(undefined ***)((long)puVar22 + lVar16 + -0x20) = &PTR_FUN_7105233908;
                *(undefined8 *)((long)puVar22 + lVar16 + -0x18) = puVar32[4];
                *(undefined8 *)((long)puVar22 + lVar16 + -0x10) = puVar32[5];
                uVar12 = puVar32[6];
                *(undefined ***)((long)puVar22 + lVar16 + -0x20) = &PTR_FUN_7105231950;
                *(undefined ***)((long)puVar22 + lVar16 + -0x40) = &PTR_FUN_7105233908;
                *(undefined8 *)((long)puVar22 + lVar16 + -8) = uVar12;
                *(undefined8 *)((long)puVar22 + lVar16 + -0x38) = *puVar32;
                *(undefined8 *)((long)puVar22 + lVar16 + -0x30) = puVar32[1];
                uVar12 = puVar32[2];
                *(undefined ***)((long)puVar22 + lVar16 + -0x40) = &PTR_FUN_7105231950;
                *(undefined8 *)((long)puVar22 + lVar16 + -0x28) = uVar12;
                lVar16 = lVar23;
              } while ((long)puVar34 - (long)puVar31 != lVar23);
            }
            puVar34 = *(undefined8 **)(param_1 + 0x620);
            puVar33 = puVar36 + (lVar14 + (uVar17 >> 5 ^ 0xffffffffffffffff)) * 8;
            puVar32 = *(undefined8 **)(param_1 + 0x618);
          }
          *(uint **)(param_1 + 0x618) = puVar33;
          *(uint **)(param_1 + 0x620) = puVar28;
          *(uint **)(param_1 + 0x628) = puVar36 + uVar37 * 8;
          while (puVar34 != puVar32) {
            puVar34 = puVar34 + -4;
            (**(code **)*puVar34)(puVar34);
          }
          if (puVar32 != (undefined8 *)0x0) {
            nu::VirtualFreeHook(puVar32);
            FUN_710392eb40((ulong)puVar32);
          }
        }
        else {
          *puVar34 = &PTR_FUN_7105231950;
          puVar34[1] = lVar13;
          puVar34[2] = local_108;
          puVar34[3] = local_110;
          *(long *)(param_1 + 0x620) = *(long *)(param_1 + 0x620) + 0x20;
        }
        *(undefined1 *)(param_1 + 0x691) = 1;
        if (*(int *)(lVar13 + 0x68) != 0) goto LAB_7103888430;
        iVar6 = 0;
      }
      else {
        lVar14 = (long)puVar34 - *(long *)(puVar36 + 0xe) >> 5;
        uVar37 = lVar14 + 1;
        if (uVar37 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar16 = (long)*(undefined8 **)(puVar36 + 0x12) - *(long *)(puVar36 + 0xe);
        if ((ulong)(lVar16 >> 5) < 0x3ffffffffffffff) {
          uVar17 = lVar16 >> 4;
          if (uVar37 <= uVar17) {
            uVar37 = uVar17;
          }
          if (uVar37 != 0) goto LAB_710388827c;
          puVar28 = (uint *)0x0;
        }
        else {
          uVar37 = 0x7ffffffffffffff;
LAB_710388827c:
          pppplVar35 = (long ****)(uVar37 << 5);
          iVar6 = FUN_710392e1f0(&local_e0,0x10,pppplVar35,ppppbVar11,param_5,param_6,param_7,
                                 param_8);
          if (((iVar6 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) &&
             (local_c0 = pppplVar35,
             uVar17 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_c0),
             (uVar17 & 1) != 0)) {
            FUN_710392e1f0(&local_e0,0x10,pppplVar35,ppppbVar11,param_5,param_6,param_7,param_8);
          }
          nu::VirtualAllocHook((ulong)pppplVar35,0x10,local_e0);
          puVar28 = local_e0;
        }
        puVar22 = puVar28 + lVar14 * 8;
        *(undefined ***)puVar22 = &PTR_FUN_7105231950;
        *(long *)(puVar22 + 2) = lVar13;
        *(undefined8 **)(puVar22 + 4) = local_108;
        *(undefined8 *)(puVar22 + 6) = local_110;
        puVar34 = *(undefined8 **)(puVar36 + 0xe);
        puVar31 = *(undefined8 **)(puVar36 + 0x10);
        puVar33 = puVar22 + 8;
        puVar32 = puVar34;
        if (puVar31 != puVar34) {
          uVar17 = (long)(puVar31 + -4) - (long)puVar34;
          puVar39 = puVar22;
          if (((uint)uVar17 >> 5 & 1) == 0) {
            puVar39 = puVar22 + -8;
            *(undefined ***)puVar39 = &PTR_FUN_7105233908;
            *(undefined8 *)(puVar22 + -6) = puVar31[-3];
            *(undefined8 *)(puVar22 + -4) = puVar31[-2];
            *(undefined8 *)(puVar22 + -2) = puVar31[-1];
            *(undefined ***)puVar39 = &PTR_FUN_7105231950;
            puVar31 = puVar31 + -4;
          }
          if (0x1f < uVar17) {
            lVar16 = 0;
            do {
              puVar32 = (undefined8 *)((long)puVar31 + lVar16 + -0x38);
              lVar23 = lVar16 + -0x40;
              *(undefined ***)((long)puVar39 + lVar16 + -0x20) = &PTR_FUN_7105233908;
              *(undefined8 *)((long)puVar39 + lVar16 + -0x18) = puVar32[4];
              *(undefined8 *)((long)puVar39 + lVar16 + -0x10) = puVar32[5];
              uVar12 = puVar32[6];
              *(undefined ***)((long)puVar39 + lVar16 + -0x20) = &PTR_FUN_7105231950;
              *(undefined ***)((long)puVar39 + lVar16 + -0x40) = &PTR_FUN_7105233908;
              *(undefined8 *)((long)puVar39 + lVar16 + -8) = uVar12;
              *(undefined8 *)((long)puVar39 + lVar16 + -0x38) = *puVar32;
              *(undefined8 *)((long)puVar39 + lVar16 + -0x30) = puVar32[1];
              uVar12 = puVar32[2];
              *(undefined ***)((long)puVar39 + lVar16 + -0x40) = &PTR_FUN_7105231950;
              *(undefined8 *)((long)puVar39 + lVar16 + -0x28) = uVar12;
              lVar16 = lVar23;
            } while ((long)puVar34 - (long)puVar31 != lVar23);
          }
          puVar34 = *(undefined8 **)(puVar36 + 0x10);
          puVar22 = puVar28 + (lVar14 + (uVar17 >> 5 ^ 0xffffffffffffffff)) * 8;
          puVar32 = *(undefined8 **)(puVar36 + 0xe);
        }
        *(uint **)(puVar36 + 0xe) = puVar22;
        *(uint **)(puVar36 + 0x10) = puVar33;
        *(uint **)(puVar36 + 0x12) = puVar28 + uVar37 * 8;
        while (puVar34 != puVar32) {
          puVar34 = puVar34 + -4;
          (**(code **)*puVar34)(puVar34);
        }
        if (puVar32 != (undefined8 *)0x0) {
          nu::VirtualFreeHook(puVar32);
          FUN_710392eb40((ulong)puVar32);
        }
        lVar14 = *(long *)(lVar13 + 0x180);
        if (lVar14 != 0) goto LAB_71038881d8;
LAB_7103888428:
        iVar6 = 0;
        if (*(int *)(lVar13 + 0x68) != 0) {
LAB_7103888430:
          *(undefined1 *)(param_1 + 0x690) = 1;
          iVar6 = *(int *)(lVar13 + 0x68);
        }
      }
      bVar5 = (bool)(bVar5 | iVar6 == 2);
      lVar18 = lVar18 + 0x20;
    } while (lVar18 != lVar8);
  }
  plVar25 = *(long **)(param_1 + 0x638);
  plVar15 = *(long **)(param_1 + 0x640);
  *(undefined8 *)(param_1 + 0x638) = 0;
  lVar18 = *(long *)(param_1 + 0x648);
  *(undefined8 *)(param_1 + 0x640) = 0;
  *(undefined8 *)(param_1 + 0x648) = 0;
  if (((plVar15 != (long *)0x0) && (plVar25 != (long *)0x0)) && (*plVar15 == lVar18)) {
    (**(code **)(*plVar25 + 8))();
  }
  plVar25 = *(long **)(param_1 + 0x658);
  plVar15 = *(long **)(param_1 + 0x660);
  *(undefined8 *)(param_1 + 0x658) = 0;
  lVar18 = *(long *)(param_1 + 0x668);
  *(undefined8 *)(param_1 + 0x660) = 0;
  *(undefined8 *)(param_1 + 0x668) = 0;
  if (((plVar15 != (long *)0x0) && (plVar25 != (long *)0x0)) && (*plVar15 == lVar18)) {
    (**(code **)(*plVar25 + 8))();
  }
  if (*(char *)(param_1 + 0x690) != '\0') {
    iVar6 = FUN_710392e1f0(&local_e0,0x10,(long ****)0xf20,ppppbVar11,param_5,param_6,param_7,
                           param_8);
    if ((iVar6 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
      local_c0 = (long ****)0xf20;
      uVar37 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_c0);
      if ((uVar37 & 1) != 0) {
        FUN_710392e1f0(&local_e0,0x10,(long ****)0xf20,ppppbVar11,param_5,param_6,param_7,param_8);
      }
    }
    nu::VirtualAllocHook(0xf20,0x10,local_e0);
    puVar36 = local_e0;
    FUN_71037c3a70((undefined8 *)local_e0);
    puVar36[4] = 1;
    local_b8 = (long *)(ulong)(iVar7 << 7 | 0x10);
    *(undefined1 *)(puVar36 + 5) = 0;
    puVar36[0x3c6] = 0;
    puVar36[0x3c7] = 0;
    *(undefined ***)puVar36 = &PTR_thunk_FUN_71037d1400_7105243018;
    local_c0 = (long ****)0x0;
    local_6b = 0;
    local_b0 = (long *)CONCAT35(local_b0._5_3_,2);
    (**(code **)(*(long *)puVar36 + 0x10))(&local_e0,puVar36,&local_c0);
    if (puVar36 == (uint *)0x0) {
      puVar30 = (undefined8 *)0x0;
      uVar12 = 0;
    }
    else {
      puVar30 = *(undefined8 **)(puVar36 + 2);
      uVar12 = *puVar30;
    }
    plVar25 = *(long **)(param_1 + 0x638);
    plVar15 = *(long **)(param_1 + 0x640);
    *(undefined8 **)(param_1 + 0x640) = puVar30;
    lVar18 = *(long *)(param_1 + 0x648);
    *(uint **)(param_1 + 0x638) = puVar36;
    *(undefined8 *)(param_1 + 0x648) = uVar12;
    if (((plVar15 != (long *)0x0) && (plVar25 != (long *)0x0)) && (*plVar15 == lVar18)) {
      (**(code **)(*plVar25 + 8))();
    }
    if (bVar5) {
      iVar7 = FUN_710392e1f0(&local_e0,0x10,(long ****)0xf20,ppppbVar11,param_5,param_6,param_7,
                             param_8);
      if ((iVar7 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
        local_c0 = (long ****)0xf20;
        uVar37 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_c0);
        if ((uVar37 & 1) != 0) {
          FUN_710392e1f0(&local_e0,0x10,(long ****)0xf20,ppppbVar11,param_5,param_6,param_7,param_8)
          ;
        }
      }
      nu::VirtualAllocHook(0xf20,0x10,local_e0);
      FUN_71037c3a70((undefined8 *)local_e0);
      local_e0[4] = 1;
      *(undefined1 *)(local_e0 + 5) = 0;
      local_e0[0x3c6] = 0;
      local_e0[0x3c7] = 0;
      *(undefined ***)local_e0 = &PTR_thunk_FUN_71037d1400_7105243018;
      local_6b = 0;
      uVar37 = (ulong)local_b0 >> 0x20;
      local_c0 = (long ****)0x0;
      local_b8 = (long *)&DAT_0000ff80;
      local_b0 = (long *)CONCAT44((uint)uVar37 & 0xffffff00,2);
      (**(code **)(*(long *)local_e0 + 0x10))(&local_e0,local_e0,&local_c0);
      if (local_e0 == (uint *)0x0) {
        puVar30 = (undefined8 *)0x0;
        uVar12 = 0;
      }
      else {
        puVar30 = *(undefined8 **)(local_e0 + 2);
        uVar12 = *puVar30;
      }
      plVar25 = *(long **)(param_1 + 0x658);
      plVar15 = *(long **)(param_1 + 0x660);
      *(undefined8 **)(param_1 + 0x660) = puVar30;
      lVar18 = *(long *)(param_1 + 0x668);
      *(uint **)(param_1 + 0x658) = local_e0;
      *(undefined8 *)(param_1 + 0x668) = uVar12;
      if (((plVar15 != (long *)0x0) && (plVar25 != (long *)0x0)) && (*plVar15 == lVar18)) {
        (**(code **)(*plVar25 + 8))();
      }
    }
  }
  if ((param_4 & 1) != 0) {
    lVar18 = param_1 + 0x5f8;
    FUN_71035fd030(&local_c0,*(uint *)(param_1 + 0x5f0) ^ (int)*(uint *)(param_1 + 0x5f0) >> 0x1f,
                   lVar18);
    lVar8 = (**(code **)(*local_b8 + 0x88))();
    if (lVar8 == 0) {
      FUN_71035fd030(&uStack_100,*(uint *)pppplVar10 ^ (int)*(uint *)pppplVar10 >> 0x1f,lVar18);
      FUN_71035fd030(&local_c0,*(uint *)pppplVar10 ^ (int)*(uint *)pppplVar10 >> 0x1f,lVar18);
      (**(code **)(*local_b8 + 0x20))(&local_e0);
      local_80 = 0;
      local_78 = (void *)0x0;
      local_a0 = 0;
      uStack_98 = 0;
      local_b0 = (long *)(*(ulong *)(local_d8 + 0x10) >> 2);
      local_90 = 0;
      local_88 = 0;
      local_c0 = (long ****)CONCAT44(local_c0._4_4_,0x131);
      local_b8 = (long *)0x0;
      local_a8 = 0;
      (**(code **)(*local_f8 + 0x98))(local_f8,&local_c0);
      pvVar27 = local_78;
      if ((local_88 & 1) != 0) {
        nu::VirtualFreeHook(local_78);
        FUN_710392eb40((ulong)pvVar27);
      }
    }
  }
  return;
}

