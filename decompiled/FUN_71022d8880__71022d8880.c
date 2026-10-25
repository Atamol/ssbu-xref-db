// addr:      71022d8880
// offset:    0x22d8880
// name:      FUN_71022d8880
// mangled:   
// signature: undefined8 * __cdecl FUN_71022d8880(undefined8 param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Type propagation algorithm not settling */

undefined8 *
FUN_71022d8880(undefined8 param_1,undefined8 param_2,long ****param_3,byte ****param_4,
              long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  uint *puVar2;
  byte bVar3;
  long *plVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  void *pvVar10;
  undefined8 *puVar11;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 uVar12;
  byte bVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  long ***ppplVar17;
  int iVar18;
  long lVar19;
  byte *pbVar20;
  byte *pbVar21;
  uint uVar22;
  long *plVar23;
  void *pvVar24;
  long ****pppplVar25;
  long *plVar26;
  long *plVar27;
  uint uVar28;
  long *plVar29;
  undefined1 auVar30 [16];
  undefined8 local_290;
  undefined4 local_288;
  byte local_284 [68];
  undefined8 local_240;
  byte local_238 [22];
  ushort local_222;
  long ***local_1f8 [32];
  undefined2 local_f8;
  undefined4 local_e8;
  undefined8 local_c8;
  byte local_c0 [64];
  long *local_80;
  long ***local_78;
  undefined4 local_6c [3];
  
  puVar6 = (undefined8 *)FUN_710392e290(0x10,0xf0,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar12 = extraout_x1;
  if (puVar6 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_290 = (long ***)((ulong)local_290 & 0xffffffff00000000);
      local_1f8[0] = (long ***)&DAT_000000f0;
      param_3 = local_1f8;
      auVar30 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_290);
      uVar12 = auVar30._8_8_;
      if (((auVar30._0_8_ & 1) != 0) &&
         (puVar6 = (undefined8 *)
                   FUN_710392e290(0x10,0xf0,param_3,param_4,param_5,param_6,param_7,param_8),
         uVar12 = extraout_x1_00, puVar6 != (undefined8 *)0x0)) goto LAB_71022d88fc;
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_71022d88fc:
  *(undefined1 *)(puVar6 + 2) = 0;
  *puVar6 = &PTR_FUN_71050b62f0;
  puVar6[1] = 0;
  FUN_7103724550(puVar6 + 10,uVar12,param_3,param_4,param_5,param_6,param_7,param_8);
  puVar6[10] = &PTR_thunk_FUN_71037246c0_71050a1070;
  *(undefined2 *)(puVar6 + 0x1c) = 0;
  *(undefined4 *)((long)puVar6 + 0xe4) = 0;
  *puVar6 = &PTR_FUN_71050b7518;
  puVar6[0x1d] = 0;
  if (DAT_7105324ee8 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)FUN_710392e290(0x10,0x10,param_3,param_4,param_5,param_6,param_7,param_8)
    ;
    if (puVar7 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_290 = (long ***)((ulong)local_290 & 0xffffffff00000000);
        local_1f8[0] = (long ***)&DAT_00000010;
        param_3 = local_1f8;
        uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_290);
        if (((uVar8 & 1) != 0) &&
           (puVar7 = (undefined8 *)
                     FUN_710392e290(0x10,0x10,param_3,param_4,param_5,param_6,param_7,param_8),
           puVar7 != (undefined8 *)0x0)) goto LAB_71022d89a0;
      }
      puVar7 = (undefined8 *)0x0;
    }
LAB_71022d89a0:
    *puVar7 = &PTR_FUN_71050aa148;
    lVar9 = FUN_710392e290(0x10,0x3370,param_3,param_4,param_5,param_6,param_7,param_8);
    if (lVar9 == 0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_290 = (long ***)((ulong)local_290 & 0xffffffff00000000);
        local_1f8[0] = (long ***)0x3370;
        pppplVar25 = local_1f8;
        uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_290);
        if (((uVar8 & 1) != 0) &&
           (lVar9 = FUN_710392e290(0x10,0x3370,pppplVar25,param_4,param_5,param_6,param_7,param_8),
           lVar9 != 0)) goto LAB_71022d8a08;
      }
      lVar9 = 0;
    }
LAB_71022d8a08:
    *(undefined1 *)(lVar9 + 0xa4) = 0;
    *(undefined8 *)(lVar9 + 0x10) = 0;
    *(undefined8 *)(lVar9 + 0x18) = 0;
    *(long *)lVar9 = lVar9;
    *(undefined8 *)(lVar9 + 8) = 0;
    param_3 = (long ****)0x3200;
    *(undefined4 *)(lVar9 + 0xa0) = 0xffffffff;
    *(undefined8 *)(lVar9 + 0x90) = 0;
    *(undefined8 *)(lVar9 + 0x98) = 0xffffffff;
    *(undefined8 *)(lVar9 + 0x80) = 0;
    *(undefined8 *)(lVar9 + 0x88) = 0;
    *(undefined8 *)(lVar9 + 0x70) = 0;
    *(undefined8 *)(lVar9 + 0x78) = 0;
    *(undefined8 *)(lVar9 + 0x60) = 0;
    *(undefined8 *)(lVar9 + 0x68) = 0;
    *(undefined8 *)(lVar9 + 0x50) = 0;
    *(undefined8 *)(lVar9 + 0x58) = 0;
    *(undefined8 *)(lVar9 + 0x40) = 0;
    *(undefined8 *)(lVar9 + 0x48) = 0;
    *(undefined8 *)(lVar9 + 0x30) = 0;
    *(undefined8 *)(lVar9 + 0x38) = 0;
    *(undefined8 *)(lVar9 + 0x20) = 0;
    *(undefined8 *)(lVar9 + 0x28) = 0;
    plVar23 = (long *)(lVar9 + 0xd0);
    *plVar23 = 0;
    *(undefined4 *)(lVar9 + 0xc0) = 0;
    *(undefined8 *)(lVar9 + 0xa8) = 0;
    *(long **)(lVar9 + 200) = plVar23;
    *(undefined8 *)(lVar9 + 0xb0) = 0;
    *(undefined8 *)(lVar9 + 0xb8) = 0;
    *(undefined8 *)(lVar9 + 0xe8) = 0;
    *(undefined8 *)(lVar9 + 0x100) = 0;
    *(undefined8 *)(lVar9 + 0xf0) = 0;
    *(undefined8 *)(lVar9 + 0xf8) = 0;
    *(undefined8 *)(lVar9 + 0xd8) = 0;
    *(undefined8 **)(lVar9 + 0xe0) = (undefined8 *)(lVar9 + 0xe8);
    *(undefined8 *)(lVar9 + 0x118) = 0;
    *(undefined8 *)(lVar9 + 0x120) = 0;
    *(undefined8 *)(lVar9 + 0x108) = 0;
    *(undefined8 *)(lVar9 + 0x110) = 0;
    memset((void *)(lVar9 + 0x130),0,0x3200);
    lVar19 = 0;
    do {
      lVar1 = lVar9 + lVar19;
      lVar19 = lVar19 + 0x100;
      *(undefined8 *)(lVar1 + 400) = 0;
      *(undefined1 *)(lVar1 + 0x1a0) = 0;
      *(undefined8 *)(lVar1 + 0x130) = 0;
      *(undefined8 *)(lVar1 + 0x138) = 0;
      *(undefined8 *)(lVar1 + 0x140) = 0;
      *(undefined4 *)(lVar1 + 0x144) = 1;
      *(undefined8 *)(lVar1 + 0x210) = 0;
      *(undefined1 *)(lVar1 + 0x220) = 0;
      *(undefined8 *)(lVar1 + 0x1b0) = 0;
      *(undefined8 *)(lVar1 + 0x1b8) = 0;
      *(undefined8 *)(lVar1 + 0x1c0) = 0;
      *(undefined4 *)(lVar1 + 0x1c4) = 1;
    } while (lVar19 != 0x3200);
    *(undefined8 *)(lVar9 + 0x3358) = 0;
    *(undefined8 *)(lVar9 + 0x3360) = 0;
    *(undefined8 *)(lVar9 + 0x3348) = 0;
    *(undefined8 *)(lVar9 + 0x3350) = 0;
    *(undefined8 *)(lVar9 + 0x3330) = 0;
    *(undefined8 *)(lVar9 + 0x3338) = 0;
    *(undefined8 *)(lVar9 + 0x3340) = 0;
    *(undefined4 *)(lVar9 + 0x3368) = 1;
    *(code **)(lVar9 + 0x28) = FUN_7101aef090;
    *(undefined8 *)(lVar9 + 0x30) = 0;
    *(code **)(lVar9 + 0x38) = FUN_7101aef0a0;
    *(undefined8 *)(lVar9 + 0x40) = 0;
    if (0x12 < *(uint *)(lVar9 + 0x94)) {
LAB_71022d92e4:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined4 *)(lVar9 + (long)(int)*(uint *)(lVar9 + 0x94) * 4 + 0x48) = 0;
    *(undefined8 *)(lVar9 + 0xb0) = *(undefined8 *)(lVar9 + 0xa8);
    FUN_7101aef220(*(undefined8 **)(lVar9 + 0xd0));
    pvVar24 = *(void **)(lVar9 + 0xa8);
    *(long **)(lVar9 + 200) = plVar23;
    *(undefined8 *)(lVar9 + 0xd0) = 0;
    *(undefined8 *)(lVar9 + 0xd8) = 0;
    uVar12 = extraout_x1_01;
    if ((ulong)(*(long *)(lVar9 + 0xb8) - (long)pvVar24 >> 2) < 100) {
      pppplVar25 = (long ****)(*(long *)(lVar9 + 0xb0) - (long)pvVar24);
      lVar19 = (long)pppplVar25 >> 2;
      pvVar10 = (void *)FUN_710392e290(0x10,400,param_3,param_4,param_5,param_6,param_7,param_8);
      uVar12 = extraout_x1_02;
      if (pvVar10 == (void *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_290 = (long ***)((ulong)local_290 & 0xffffffff00000000);
          local_1f8[0] = (long ***)&DAT_00000190;
          param_3 = local_1f8;
          auVar30 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_290);
          uVar12 = auVar30._8_8_;
          if (((auVar30._0_8_ & 1) != 0) &&
             (pvVar10 = (void *)FUN_710392e290(0x10,400,param_3,param_4,param_5,param_6,param_7,
                                               param_8), uVar12 = extraout_x1_03,
             pvVar10 != (void *)0x0)) goto LAB_71022d8bbc;
        }
        pvVar10 = (void *)0x0;
      }
LAB_71022d8bbc:
      if (0 < (long)pppplVar25) {
        memcpy(pvVar10,pvVar24,(size_t)pppplVar25);
        uVar12 = extraout_x1_04;
        param_3 = pppplVar25;
      }
      *(void **)(lVar9 + 0xa8) = pvVar10;
      *(void **)(lVar9 + 0xb0) = (void *)((long)pvVar10 + lVar19 * 4);
      *(long *)(lVar9 + 0xb8) = (long)pvVar10 + 400;
      if (pvVar24 != (void *)0x0) {
        FUN_710392eb40((ulong)pvVar24);
        uVar12 = extraout_x1_05;
      }
    }
    FUN_710353ad40(&local_80,uVar12,param_3,param_4,param_5,param_6,param_7,param_8);
    for (uVar8 = 0; "save:/save_data/replay"[uVar8] != 0; uVar8 = uVar8 + 2) {
      bVar13 = "save:/save_data/replay"[uVar8 + 1];
      local_c0[uVar8] = "save:/save_data/replay"[uVar8];
      if (bVar13 == 0) {
        uVar8 = uVar8 + 1;
        break;
      }
      local_c0[uVar8 + 1] = bVar13;
    }
    uVar22 = 0x811c9dc5;
    local_c0[uVar8 & 0xffffffff] = 0;
    local_c8 = uVar8 << 0x20;
    uVar14 = (uint)local_c0[0];
    if (local_c0[0] != 0) {
      pbVar20 = local_c0;
      do {
        pbVar20 = pbVar20 + 1;
        uVar22 = uVar22 * 0x89 ^ uVar14;
        uVar14 = (uint)*pbVar20;
      } while (uVar14 != 0);
    }
    local_c8 = CONCAT44((int)uVar8,uVar22);
    local_f8 = 0;
    local_1f8[0] = (long ***)((ulong)local_1f8[0] & 0xffffffffffffff00);
    local_e8 = 0;
    bVar5 = FUN_710353ba40((char *)local_c0);
    plVar4 = local_80;
    if (bVar5) {
      (**(code **)(*local_80 + 0x10))(&local_290,local_80,local_c0);
      *(byte *)((long)plVar4 + 0x234) = (byte)-((int)local_290 >> 0x1f) ^ 1;
      if (-((int)local_290 >> 0x1f) == 0) {
        uVar8 = FUN_710353aea0((long *)&local_80,(long)local_1f8,param_3,param_4,param_5,param_6,
                               param_7,param_8);
        if ((uVar8 & 1) != 0) {
          pbVar20 = local_238 + 1;
          do {
            if (((byte)local_e8 >> 4 & 1) == 0) {
              uVar22 = *(int *)(lVar9 + 0xc0) + 1;
              *(uint *)(lVar9 + 0xc0) = uVar22;
              puVar2 = *(uint **)(lVar9 + 0xb0);
              if (puVar2 == *(uint **)(lVar9 + 0xb8)) {
                pvVar24 = *(void **)(lVar9 + 0xa8);
                pppplVar25 = (long ****)((long)puVar2 - (long)pvVar24);
                uVar8 = ((long)pppplVar25 >> 2) + 1;
                if (uVar8 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
                  std::__vector_base_common<true>::__throw_length_error();
                }
                lVar19 = (long)*(uint **)(lVar9 + 0xb8) - (long)pvVar24;
                if ((ulong)(lVar19 >> 2) < 0x1fffffffffffffff) {
                  uVar16 = lVar19 >> 1;
                  if (uVar8 <= uVar16) {
                    uVar8 = uVar16;
                  }
                  if (uVar8 != 0) {
                    if (uVar8 >> 0x3e == 0) goto LAB_71022d8d8c;
                    goto LAB_71022d92e4;
                  }
LAB_71022d8df0:
                  pvVar10 = (void *)0x0;
                }
                else {
                  uVar8 = 0x3fffffffffffffff;
LAB_71022d8d8c:
                  ppplVar17 = (long ***)(uVar8 * 4);
                  if (ppplVar17 == (long ***)0x0) {
                    ppplVar17 = (long ***)0x1;
                  }
                  pvVar10 = (void *)FUN_710392e290(0x10,ppplVar17,param_3,param_4,param_5,param_6,
                                                   param_7,param_8);
                  if (pvVar10 == (void *)0x0) {
                    if (DAT_7105332f00 != (long *)0x0) {
                      local_240 = local_240 & 0xffffffff00000000;
                      param_3 = (long ****)&local_290;
                      local_290 = ppplVar17;
                      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_240);
                      if (((uVar16 & 1) != 0) &&
                         (pvVar10 = (void *)FUN_710392e290(0x10,ppplVar17,param_3,param_4,param_5,
                                                           param_6,param_7,param_8),
                         pvVar10 != (void *)0x0)) goto LAB_71022d8df4;
                    }
                    goto LAB_71022d8df0;
                  }
                }
LAB_71022d8df4:
                puVar2 = (uint *)((long)pvVar10 + ((long)pppplVar25 >> 2) * 4);
                *puVar2 = uVar22;
                if (0 < (long)pppplVar25) {
                  memcpy(pvVar10,pvVar24,(size_t)pppplVar25);
                  param_3 = pppplVar25;
                }
                *(void **)(lVar9 + 0xa8) = pvVar10;
                *(uint **)(lVar9 + 0xb0) = puVar2 + 1;
                *(void **)(lVar9 + 0xb8) = (void *)((long)pvVar10 + uVar8 * 4);
                if (pvVar24 != (void *)0x0) {
                  FUN_710392eb40((ulong)pvVar24);
                }
              }
              else {
                *puVar2 = uVar22;
                *(long *)(lVar9 + 0xb0) = *(long *)(lVar9 + 0xb0) + 4;
              }
              uVar28 = 0x811c9dc5;
              local_238[0] = 0x73;
              local_238[1] = 0x61;
              local_238[2] = 0x76;
              local_238[3] = 0x65;
              local_238[4] = 0x3a;
              local_238[5] = 0x2f;
              local_238[6] = 0x73;
              local_238[7] = 0x61;
              local_238[8] = 0x76;
              local_238[9] = 0x65;
              local_238[10] = 0x5f;
              local_238[0xb] = 100;
              local_238[0xc] = 0x61;
              local_238[0xd] = 0x74;
              local_238[0xe] = 0x61;
              local_238[0xf] = 0x2f;
              local_238[0x10] = 0x72;
              local_238[0x11] = 0x65;
              local_238[0x12] = 0x70;
              local_238[0x13] = 0x6c;
              local_238[0x14] = 0x61;
              local_238[0x15] = 0x79;
              local_240 = 0x1600000000;
              uVar15 = 0x73;
              local_222 = local_222 & 0xff00;
              pbVar21 = pbVar20;
              uVar14 = uVar28;
              do {
                uVar14 = uVar14 * 0x89 ^ uVar15;
                uVar15 = (uint)*pbVar21;
                pbVar21 = pbVar21 + 1;
              } while (uVar15 != 0);
              local_240 = CONCAT44(0x17,uVar14);
              local_222 = 0x2f;
              uVar14 = 0x73;
              pbVar21 = pbVar20;
              local_240._0_4_ = uVar28;
              do {
                local_240._0_4_ = (uint)local_240 * 0x89 ^ uVar14;
                uVar14 = (uint)*pbVar21;
                pbVar21 = pbVar21 + 1;
              } while (uVar14 != 0);
              local_240._4_4_ = 0x17;
              pppplVar25 = local_1f8;
              iVar18 = 0x16;
              do {
                bVar13 = *(byte *)pppplVar25;
                if (bVar13 == 0) break;
                lVar19 = (long)local_240._4_4_;
                iVar18 = iVar18 + 1;
                pppplVar25 = (long ****)((long)pppplVar25 + 1);
                local_240._4_4_ = local_240._4_4_ + 1;
                local_238[lVar19] = bVar13;
              } while (iVar18 < 0x3e);
              local_238[local_240._4_4_] = 0;
              uVar15 = (uint)local_238[0];
              pbVar21 = pbVar20;
              uVar14 = uVar28;
              if (uVar15 == 0) {
                uVar8 = 0;
                local_240 = CONCAT44(local_240._4_4_,0x811c9dc5);
              }
              else {
                do {
                  uVar14 = uVar14 * 0x89 ^ uVar15;
                  uVar15 = (uint)*pbVar21;
                  pbVar21 = pbVar21 + 1;
                } while (uVar15 != 0);
                uVar8 = 0;
                local_240 = CONCAT44(local_240._4_4_,uVar14);
                bVar13 = local_238[0];
                do {
                  local_284[uVar8] = bVar13;
                  if (0x3e < (int)uVar8 + 1U) {
                    uVar8 = (ulong)((int)uVar8 + 1);
                    break;
                  }
                  bVar13 = pbVar20[uVar8];
                  uVar8 = uVar8 + 1;
                } while (bVar13 != 0);
              }
              local_284[uVar8 & 0xffffffff] = 0;
              bVar3 = local_284[0];
              local_288 = (undefined4)uVar8;
              pbVar21 = local_284 + 1;
              bVar13 = local_284[0];
              while (bVar13 != 0) {
                uVar28 = uVar28 * 0x89 ^ (uint)bVar13;
                bVar13 = *pbVar21;
                pbVar21 = pbVar21 + 1;
              }
              local_290 = (long ***)CONCAT44(uVar28,uVar22);
              plVar26 = (long *)*plVar23;
              plVar29 = plVar23;
              plVar27 = plVar23;
              while (plVar26 != (long *)0x0) {
                while (plVar27 = plVar26, uVar22 < *(uint *)((long)plVar27 + 0x1c)) {
                  plVar26 = (long *)*plVar27;
                  plVar29 = plVar27;
                  if ((long *)*plVar27 == (long *)0x0) {
                    lVar19 = *plVar27;
                    goto joined_r0x0071022d9104;
                  }
                }
                if (uVar22 <= *(uint *)((long)plVar27 + 0x1c)) break;
                plVar29 = plVar27 + 1;
                plVar26 = (long *)*plVar29;
              }
              lVar19 = *plVar29;
joined_r0x0071022d9104:
              if (lVar19 == 0) {
                plVar26 = (long *)FUN_710392e290(0x10,0x68,param_3,param_4,param_5,param_6,param_7,
                                                 param_8);
                if (plVar26 == (long *)0x0) {
                  if (DAT_7105332f00 != (long *)0x0) {
                    local_6c[0] = 0;
                    local_78 = (long ***)&DAT_00000068;
                    param_3 = &local_78;
                    uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_6c);
                    if (((uVar8 & 1) != 0) &&
                       (plVar26 = (long *)FUN_710392e290(0x10,0x68,param_3,param_4,param_5,param_6,
                                                         param_7,param_8), plVar26 != (long *)0x0))
                    goto LAB_71022d90a8;
                  }
                  plVar26 = (long *)0x0;
                }
LAB_71022d90a8:
                *(uint *)((long)plVar26 + 0x1c) = uVar22;
                *(undefined4 *)(plVar26 + 4) = 0;
                uVar8 = 0;
                while (bVar3 != 0) {
                  *(byte *)((long)plVar26 + uVar8 + 0x28) = bVar3;
                  if (0x3e < (int)uVar8 + 1U) {
                    uVar8 = (ulong)((int)uVar8 + 1);
                    break;
                  }
                  bVar13 = (local_284 + 1)[uVar8];
                  if (bVar13 == 0) {
                    uVar8 = uVar8 + 1;
                    break;
                  }
                  *(byte *)((long)plVar26 + uVar8 + 0x29) = bVar13;
                  lVar19 = uVar8 + 2;
                  uVar8 = uVar8 + 2;
                  bVar3 = local_284[lVar19];
                }
                *(undefined1 *)((long)plVar26 + (uVar8 & 0xffffffff) + 0x28) = 0;
                *(int *)((long)plVar26 + 0x24) = (int)uVar8;
                uVar14 = (uint)*(byte *)(plVar26 + 5);
                uVar22 = 0x811c9dc5;
                if (*(byte *)(plVar26 + 5) != 0) {
                  uVar22 = 0x811c9dc5;
                  pbVar21 = (byte *)((long)plVar26 + 0x29);
                  do {
                    uVar22 = uVar22 * 0x89 ^ uVar14;
                    uVar14 = (uint)*pbVar21;
                    pbVar21 = pbVar21 + 1;
                  } while (uVar14 != 0);
                }
                *(uint *)(plVar26 + 4) = uVar22;
                *plVar26 = 0;
                plVar26[1] = 0;
                plVar26[2] = (long)plVar27;
                *plVar29 = (long)plVar26;
                if (**(long **)(lVar9 + 200) != 0) {
                  *(long *)(lVar9 + 200) = **(long **)(lVar9 + 200);
                  plVar26 = (long *)*plVar29;
                }
                std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
                          (*(long **)(lVar9 + 0xd0),plVar26);
                *(long *)(lVar9 + 0xd8) = *(long *)(lVar9 + 0xd8) + 1;
              }
            }
            uVar8 = FUN_710353aea0((long *)&local_80,(long)local_1f8,param_3,param_4,param_5,param_6
                                   ,param_7,param_8);
          } while ((uVar8 & 1) != 0);
        }
        if (*(char *)((long)plVar4 + 0x234) != '\0') {
          (**(code **)(*plVar4 + 0x20))(&local_290,plVar4);
          *(undefined1 *)((long)plVar4 + 0x234) = 0;
        }
      }
    }
    if (local_80 != (long *)0x0) {
      (**(code **)(*local_80 + 8))();
    }
    puVar7[1] = lVar9;
    DAT_7105324ee8 = puVar7;
  }
  if (DAT_710532f860 != (undefined8 *)0x0) {
    return puVar6;
  }
  puVar7 = (undefined8 *)FUN_710392e290(0x10,8,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar7 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_290 = (long ***)((ulong)local_290 & 0xffffffff00000000);
      local_1f8[0] = (long ***)&DAT_00000008;
      param_3 = local_1f8;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_290);
      if (((uVar8 & 1) != 0) &&
         (puVar7 = (undefined8 *)
                   FUN_710392e290(0x10,8,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar7 != (undefined8 *)0x0)) goto LAB_71022d924c;
    }
    puVar7 = (undefined8 *)0x0;
  }
LAB_71022d924c:
  puVar11 = (undefined8 *)FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar11 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_290 = (long ***)((ulong)local_290 & 0xffffffff00000000);
      local_1f8[0] = (long ***)&SUB_00000020;
      pppplVar25 = local_1f8;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_290);
      if (((uVar8 & 1) != 0) &&
         (puVar11 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,pppplVar25,param_4,param_5,param_6,param_7,param_8),
         puVar11 != (undefined8 *)0x0)) goto LAB_71022d92a0;
    }
    puVar11 = (undefined8 *)0x0;
  }
LAB_71022d92a0:
  puVar11[2] = 0;
  puVar11[1] = 0;
  *puVar11 = puVar11 + 1;
  *(undefined4 *)(puVar11 + 3) = 1;
  *puVar7 = puVar11;
  DAT_710532f860 = puVar7;
  return puVar6;
}

