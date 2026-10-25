// addr:      71038a8650
// offset:    0x38a8650
// name:      FUN_71038a8650
// mangled:   
// signature: undefined __cdecl FUN_71038a8650(undefined4 * param_1, ulong * param_2, long * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71038a8650(undefined4 *param_1,ulong *param_2,long *param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 *puVar1;
  ulong *puVar2;
  undefined1 *puVar3;
  float *pfVar4;
  uint *puVar5;
  ulong *puVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  int iVar14;
  size_t sVar15;
  long *plVar16;
  undefined8 *puVar17;
  logic_error *plVar18;
  undefined4 uVar19;
  ulong uVar20;
  byte *pbVar21;
  undefined8 uVar22;
  long lVar23;
  long ****pppplVar24;
  void *pvVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  ulong local_218;
  size_t local_210;
  void *local_208;
  ulong local_200;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined1 *local_1ec;
  undefined8 local_1e4;
  uint local_1dc;
  undefined8 local_1d8;
  undefined1 local_1d0;
  undefined4 local_1cc;
  undefined1 local_1c8;
  undefined8 local_1c4;
  undefined1 *local_1bc;
  undefined4 local_1b4;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined1 local_1a0;
  undefined4 local_19c;
  undefined1 local_198;
  undefined8 local_194;
  undefined1 *local_18c;
  undefined8 local_184;
  undefined4 local_17c;
  undefined8 local_178;
  undefined1 local_170;
  undefined4 local_16c;
  undefined1 local_168;
  undefined8 local_164;
  undefined1 *local_15c;
  undefined8 local_154;
  undefined4 local_14c;
  undefined8 local_148;
  undefined1 local_140;
  undefined4 local_13c;
  undefined1 local_138;
  undefined8 local_134;
  undefined1 *local_12c;
  undefined8 local_124;
  undefined4 local_11c;
  undefined8 local_118;
  undefined1 local_110;
  undefined4 local_10c;
  undefined1 local_108;
  undefined8 local_104;
  undefined1 *local_fc;
  undefined8 local_f4;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined1 local_e0;
  undefined4 local_dc;
  undefined1 local_d8;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 local_b0;
  undefined4 local_ac;
  undefined1 local_a8;
  undefined8 local_a4;
  undefined4 local_9c;
  uint local_98;
  uint uStack_94;
  uint uStack_90;
  uint local_8c;
  uint uStack_88;
  undefined1 local_84;
  undefined1 uStack_83;
  undefined1 uStack_82;
  undefined1 uStack_81;
  undefined1 local_80;
  undefined7 uStack_7f;
  void *local_78;
  
  switch(param_2[1]) {
  case 0:
  case 0x13:
    uVar20 = *param_2;
    puVar1 = (undefined4 *)((long)param_2 + uVar20);
    if ((uVar20 & 1) != 0) {
      puVar1 = (undefined4 *)(uVar20 & 0xfffffffffffffffe);
    }
    param_1[2] = *puVar1;
    *param_1 = 0;
    return;
  case 1:
    uVar20 = *param_2;
    puVar1 = (undefined4 *)((long)param_2 + uVar20);
    if ((uVar20 & 1) != 0) {
      puVar1 = (undefined4 *)(uVar20 & 0xfffffffffffffffe);
    }
    param_1[2] = *puVar1;
    uVar19 = 1;
    break;
  case 2:
    uVar20 = *param_2;
    puVar3 = (undefined1 *)((long)param_2 + uVar20);
    if ((uVar20 & 1) != 0) {
      puVar3 = (undefined1 *)(uVar20 & 0xfffffffffffffffe);
    }
    *(undefined1 *)(param_1 + 2) = *puVar3;
    uVar19 = 2;
    break;
  case 3:
    uVar20 = *param_2;
    puVar17 = (undefined8 *)((long)param_2 + uVar20);
    if ((uVar20 & 1) != 0) {
      puVar17 = (undefined8 *)(uVar20 & 0xfffffffffffffffe);
    }
    *(undefined8 *)(param_1 + 2) = *puVar17;
    uVar19 = 3;
    break;
  case 4:
    uVar20 = *param_2;
    puVar17 = (undefined8 *)((long)param_2 + uVar20);
    if ((uVar20 & 1) != 0) {
      puVar17 = (undefined8 *)(uVar20 & 0xfffffffffffffffe);
    }
    uVar22 = *puVar17;
    param_1[4] = *(undefined4 *)(puVar17 + 1);
    *(undefined8 *)(param_1 + 2) = uVar22;
    uVar19 = 4;
    break;
  case 5:
    uVar20 = *param_2;
    puVar17 = (undefined8 *)((long)param_2 + uVar20);
    if ((uVar20 & 1) != 0) {
      puVar17 = (undefined8 *)(uVar20 & 0xfffffffffffffffe);
    }
    uVar22 = puVar17[1];
    *(undefined8 *)(param_1 + 2) = *puVar17;
    *(undefined8 *)(param_1 + 4) = uVar22;
    uVar19 = 5;
    break;
  case 6:
    uVar20 = *param_2;
    puVar17 = (undefined8 *)((long)param_2 + uVar20);
    if ((uVar20 & 1) != 0) {
      puVar17 = (undefined8 *)(uVar20 & 0xfffffffffffffffe);
    }
    uVar22 = puVar17[1];
    *(undefined8 *)(param_1 + 2) = *puVar17;
    *(undefined8 *)(param_1 + 4) = uVar22;
    uVar19 = 6;
    break;
  case 7:
    uVar20 = *param_2;
    puVar17 = (undefined8 *)((long)param_2 + uVar20);
    if ((uVar20 & 1) != 0) {
      puVar17 = (undefined8 *)(uVar20 & 0xfffffffffffffffe);
    }
    uVar22 = puVar17[1];
    *(undefined8 *)(param_1 + 2) = *puVar17;
    *(undefined8 *)(param_1 + 4) = uVar22;
    uVar19 = 7;
    break;
  case 8:
    uVar20 = *param_2;
    puVar17 = (undefined8 *)((long)param_2 + uVar20);
    if ((uVar20 & 1) != 0) {
      puVar17 = (undefined8 *)(uVar20 & 0xfffffffffffffffe);
    }
    uVar10 = puVar17[3];
    uVar22 = *puVar17;
    uVar11 = puVar17[1];
    *(undefined8 *)(param_1 + 6) = puVar17[2];
    *(undefined8 *)(param_1 + 8) = uVar10;
    uVar10 = puVar17[4];
    uVar12 = puVar17[5];
    uVar9 = puVar17[6];
    uVar13 = puVar17[7];
    *(undefined8 *)(param_1 + 2) = uVar22;
    *(undefined8 *)(param_1 + 4) = uVar11;
    *(undefined8 *)(param_1 + 0xe) = uVar9;
    *(undefined8 *)(param_1 + 0x10) = uVar13;
    uVar19 = 8;
    *(undefined8 *)(param_1 + 10) = uVar10;
    *(undefined8 *)(param_1 + 0xc) = uVar12;
    break;
  case 9:
  case 10:
  case 0xd:
  case 0xf:
    goto switchD_71038a8698_caseD_9;
  case 0xb:
    uVar20 = *param_2;
    puVar6 = (ulong *)((long)param_2 + uVar20);
    if ((uVar20 & 1) != 0) {
      puVar6 = (ulong *)(uVar20 & 0xfffffffffffffffe);
    }
    uVar20 = *puVar6;
    if ((uVar20 & 1) == 0) {
      pbVar21 = (byte *)((long)puVar6 + uVar20);
    }
    else {
      pbVar21 = (byte *)(uVar20 & 0xfffffffffffffffe);
      if ((*pbVar21 & 1) == 0) {
        pbVar21 = pbVar21 + 1;
      }
      else {
        pbVar21 = *(byte **)(pbVar21 + 0x10);
      }
    }
    local_210 = 0;
    local_208 = (void *)0x0;
    local_218 = 0;
    sVar15 = strlen((char *)pbVar21);
    if (0xffffffffffffffef < sVar15) goto LAB_71038a91c4;
    if (sVar15 < 0x17) {
      local_218 = CONCAT71(local_218._1_7_,(char)((int)sVar15 << 1));
      pvVar25 = (void *)((ulong)&local_218 | 1);
      if (sVar15 != 0) goto LAB_71038a8d6c;
    }
    else {
      pppplVar24 = (long ****)(sVar15 + 0x10 & 0xfffffffffffffff0);
      iVar14 = FUN_710392e1f0(&local_78,0x10,pppplVar24,param_4,param_5,param_6,param_7,param_8);
      if ((iVar14 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
        local_98 = (uint)pppplVar24;
        uStack_94 = (uint)((ulong)pppplVar24 >> 0x20);
        uVar20 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_98);
        if ((uVar20 & 1) != 0) {
          FUN_710392e1f0(&local_78,0x10,pppplVar24,param_4,param_5,param_6,param_7,param_8);
        }
      }
      nu::VirtualAllocHook((ulong)pppplVar24,0x10,local_78);
      local_218 = (ulong)pppplVar24 | 1;
      local_208 = local_78;
      pvVar25 = local_78;
      local_210 = sVar15;
LAB_71038a8d6c:
      memcpy(pvVar25,pbVar21,sVar15);
    }
    *(undefined1 *)((long)pvVar25 + sVar15) = 0;
    plVar16 = FUN_71038a8460(*param_3,param_3[1],(byte *)&local_218);
    pvVar25 = local_208;
    if ((local_218 & 1) != 0) {
      nu::VirtualFreeHook(local_208);
      FUN_710392eb40((ulong)pvVar25);
    }
    if (plVar16 == (long *)0x0) {
switchD_71038a8698_caseD_9:
      param_1[2] = 0;
      *param_1 = 0;
      return;
    }
    uVar20 = *puVar6;
    if ((uVar20 & 1) == 0) {
      pbVar21 = (byte *)((long)puVar6 + uVar20);
    }
    else {
      pbVar21 = (byte *)(uVar20 & 0xfffffffffffffffe);
      if ((*pbVar21 & 1) == 0) {
        pbVar21 = pbVar21 + 1;
      }
      else {
        pbVar21 = *(byte **)(pbVar21 + 0x10);
      }
    }
    local_210 = 0;
    local_208 = (void *)0x0;
    local_218 = 0;
    sVar15 = strlen((char *)pbVar21);
    if (0xffffffffffffffef < sVar15) {
LAB_71038a91c4:
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    if (sVar15 < 0x17) {
      local_218 = CONCAT71(local_218._1_7_,(char)((int)sVar15 << 1));
      local_78 = (void *)((ulong)&local_218 | 1);
      if (sVar15 != 0) goto LAB_71038a8fe8;
    }
    else {
      pppplVar24 = (long ****)(sVar15 + 0x10 & 0xfffffffffffffff0);
      iVar14 = FUN_710392e1f0(&local_78,0x10,pppplVar24,param_4,param_5,param_6,param_7,param_8);
      if ((iVar14 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
        local_98 = (uint)pppplVar24;
        uStack_94 = (uint)((ulong)pppplVar24 >> 0x20);
        uVar20 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_98);
        if ((uVar20 & 1) != 0) {
          FUN_710392e1f0(&local_78,0x10,pppplVar24,param_4,param_5,param_6,param_7,param_8);
        }
      }
      nu::VirtualAllocHook((ulong)pppplVar24,0x10,local_78);
      local_218 = (ulong)pppplVar24 | 1;
      local_208 = local_78;
      local_210 = sVar15;
LAB_71038a8fe8:
      memcpy(local_78,pbVar21,sVar15);
    }
    *(undefined1 *)((long)local_78 + sVar15) = 0;
    plVar16 = FUN_71038a8460(*param_3,param_3[1],(byte *)&local_218);
    pvVar25 = local_208;
    if (plVar16 == (long *)0x0) {
      plVar18 = (logic_error *)__cxa_allocate_exception(0x10);
      std::logic_error::logic_error(plVar18,"unordered_map::at: key not found");
      *(undefined **)plVar18 = &DAT_7107960010;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(plVar18,&std::out_of_range::typeinfo,std::out_of_range::~out_of_range);
    }
    *(long *)(param_1 + 4) = plVar16[6];
    *(long *)(param_1 + 6) = plVar16[7];
    lVar23 = plVar16[8];
    *(undefined ***)(param_1 + 2) = &PTR_FUN_71052302c0;
    *param_1 = 0xb;
    *(long *)(param_1 + 8) = lVar23;
    if ((local_218 & 1) == 0) {
      return;
    }
    nu::VirtualFreeHook(local_208);
LAB_71038a918c:
    FUN_710392eb40((ulong)pvVar25);
    return;
  case 0xc:
    uVar20 = *param_2;
    puVar6 = (ulong *)((long)param_2 + uVar20);
    if ((uVar20 & 1) != 0) {
      puVar6 = (ulong *)(uVar20 & 0xfffffffffffffffe);
    }
    uVar20 = *puVar6;
    puVar2 = (ulong *)((long)puVar6 + uVar20);
    if ((uVar20 & 1) != 0) {
      puVar2 = (ulong *)(uVar20 & 0xfffffffffffffffe);
    }
    uVar20 = *puVar2;
    if ((uVar20 & 1) == 0) {
      pbVar21 = (byte *)((long)puVar2 + uVar20);
    }
    else {
      pbVar21 = (byte *)(uVar20 & 0xfffffffffffffffe);
      if ((*pbVar21 & 1) == 0) {
        pbVar21 = pbVar21 + 1;
      }
      else {
        pbVar21 = *(byte **)(pbVar21 + 0x10);
      }
    }
    local_210 = 0;
    local_208 = (void *)0x0;
    local_218 = 0;
    sVar15 = strlen((char *)pbVar21);
    if (0xffffffffffffffef < sVar15) goto LAB_71038a91c4;
    if (sVar15 < 0x17) {
      local_218 = CONCAT71(local_218._1_7_,(char)((int)sVar15 << 1));
      pvVar25 = (void *)((ulong)&local_218 | 1);
      if (sVar15 != 0) goto LAB_71038a8ea0;
    }
    else {
      pppplVar24 = (long ****)(sVar15 + 0x10 & 0xfffffffffffffff0);
      iVar14 = FUN_710392e1f0(&local_78,0x10,pppplVar24,param_4,param_5,param_6,param_7,param_8);
      if ((iVar14 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
        local_98 = (uint)pppplVar24;
        uStack_94 = (uint)((ulong)pppplVar24 >> 0x20);
        uVar20 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_98);
        if ((uVar20 & 1) != 0) {
          FUN_710392e1f0(&local_78,0x10,pppplVar24,param_4,param_5,param_6,param_7,param_8);
        }
      }
      nu::VirtualAllocHook((ulong)pppplVar24,0x10,local_78);
      local_218 = (ulong)pppplVar24 | 1;
      local_208 = local_78;
      pvVar25 = local_78;
      local_210 = sVar15;
LAB_71038a8ea0:
      memcpy(pvVar25,pbVar21,sVar15);
    }
    *(undefined1 *)((long)pvVar25 + sVar15) = 0;
    plVar16 = FUN_71038a8460(*param_3,param_3[1],(byte *)&local_218);
    pvVar25 = local_208;
    if ((local_218 & 1) != 0) {
      nu::VirtualFreeHook(local_208);
      FUN_710392eb40((ulong)pvVar25);
    }
    if (plVar16 == (long *)0x0) goto switchD_71038a8698_caseD_9;
    uVar20 = *puVar6;
    puVar6 = (ulong *)((long)puVar6 + uVar20);
    if ((uVar20 & 1) != 0) {
      puVar6 = (ulong *)(uVar20 & 0xfffffffffffffffe);
    }
    uVar20 = *puVar6;
    if ((uVar20 & 1) == 0) {
      pbVar21 = (byte *)((long)puVar6 + uVar20);
    }
    else {
      pbVar21 = (byte *)(uVar20 & 0xfffffffffffffffe);
      if ((*pbVar21 & 1) == 0) {
        pbVar21 = pbVar21 + 1;
      }
      else {
        pbVar21 = *(byte **)(pbVar21 + 0x10);
      }
    }
    local_210 = 0;
    local_208 = (void *)0x0;
    local_218 = 0;
    sVar15 = strlen((char *)pbVar21);
    if (0xffffffffffffffef < sVar15) goto LAB_71038a91c4;
    if (sVar15 < 0x17) {
      local_218 = CONCAT71(local_218._1_7_,(char)((int)sVar15 << 1));
      local_78 = (void *)((ulong)&local_218 | 1);
      if (sVar15 != 0) goto LAB_71038a911c;
    }
    else {
      pppplVar24 = (long ****)(sVar15 + 0x10 & 0xfffffffffffffff0);
      iVar14 = FUN_710392e1f0(&local_78,0x10,pppplVar24,param_4,param_5,param_6,param_7,param_8);
      if ((iVar14 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
        local_98 = (uint)pppplVar24;
        uStack_94 = (uint)((ulong)pppplVar24 >> 0x20);
        uVar20 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_98);
        if ((uVar20 & 1) != 0) {
          FUN_710392e1f0(&local_78,0x10,pppplVar24,param_4,param_5,param_6,param_7,param_8);
        }
      }
      nu::VirtualAllocHook((ulong)pppplVar24,0x10,local_78);
      local_218 = (ulong)pppplVar24 | 1;
      local_208 = local_78;
      local_210 = sVar15;
LAB_71038a911c:
      memcpy(local_78,pbVar21,sVar15);
    }
    *(undefined1 *)((long)local_78 + sVar15) = 0;
    plVar16 = FUN_71038a8460(*param_3,param_3[1],(byte *)&local_218);
    pvVar25 = local_208;
    if (plVar16 == (long *)0x0) {
      plVar18 = (logic_error *)__cxa_allocate_exception(0x10);
      std::logic_error::logic_error(plVar18,"unordered_map::at: key not found");
      *(undefined **)plVar18 = &DAT_7107960010;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(plVar18,&std::out_of_range::typeinfo,std::out_of_range::~out_of_range);
    }
    *(long *)(param_1 + 4) = plVar16[6];
    *(long *)(param_1 + 6) = plVar16[7];
    lVar23 = plVar16[8];
    *(undefined ***)(param_1 + 2) = &PTR_FUN_71052302c0;
    *param_1 = 0xb;
    *(long *)(param_1 + 8) = lVar23;
    if ((local_218 & 1) == 0) {
      return;
    }
    nu::VirtualFreeHook(local_208);
    goto LAB_71038a918c;
  case 0xe:
    uVar20 = *param_2;
    local_1dc = local_1dc & 0xffffff00;
    puVar6 = (ulong *)((long)param_2 + uVar20);
    if ((uVar20 & 1) != 0) {
      puVar6 = (ulong *)(uVar20 & 0xfffffffffffffffe);
    }
    local_218 = *puVar6;
    local_210 = puVar6[1];
    local_208 = (void *)puVar6[2];
    local_200 = puVar6[3];
    local_1f8 = (undefined4)puVar6[4];
    uStack_1f4 = *(undefined4 *)((long)puVar6 + 0x24);
    uStack_1f0 = (undefined4)puVar6[5];
    local_1ec = *(undefined1 **)((long)puVar6 + 0x2c);
    local_1e4 = CONCAT44(7,*(undefined4 *)((long)puVar6 + 0x34));
    FUN_7103591e00((undefined8 *)&local_98,(uint *)&local_218,param_3,param_4,param_5,param_6,
                   param_7,param_8);
    *(undefined ***)(param_1 + 2) = &PTR_FUN_7105231650;
    *(ulong *)(param_1 + 4) = CONCAT44(local_8c,uStack_90);
    *(ulong *)(param_1 + 6) =
         CONCAT17(uStack_81,CONCAT16(uStack_82,CONCAT15(uStack_83,CONCAT14(local_84,uStack_88))));
    *(ulong *)(param_1 + 8) = CONCAT71(uStack_7f,local_80);
    uVar19 = 0xe;
    break;
  case 0x10:
    uVar20 = *param_2;
    pfVar4 = (float *)((long)param_2 + uVar20);
    if ((uVar20 & 1) != 0) {
      pfVar4 = (float *)(uVar20 & 0xfffffffffffffffe);
    }
    fVar28 = pfVar4[2];
    fVar29 = *pfVar4;
    fVar30 = pfVar4[1];
    fVar7 = pfVar4[3];
    fVar8 = pfVar4[4];
    fVar26 = cosf(fVar28);
    fVar27 = sinf(fVar28);
    param_1[2] = fVar29;
    param_1[3] = fVar30;
    param_1[4] = fVar28;
    param_1[5] = fVar7;
    param_1[6] = fVar8;
    uVar19 = 0xf;
    fVar28 = 999.99994;
    if (fVar29 != 0.0) {
      fVar28 = 1.0 / fVar29;
    }
    fVar29 = 999.99994;
    if (fVar30 != 0.0) {
      fVar29 = 1.0 / fVar30;
    }
    param_1[7] = fVar28 * fVar26;
    param_1[8] = fVar28 * fVar27;
    param_1[0xc] = fVar26 * fVar29;
    param_1[10] = fVar28 * (((1.0 - fVar26) - fVar27) * 0.5 + fVar7);
    param_1[0xb] = -(fVar29 * fVar27);
    param_1[9] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = (fVar29 * (((1.0 - fVar26) + fVar27) * 0.5 + fVar8) + 1.0) - fVar29;
    break;
  case 0x11:
    uVar20 = *param_2;
    puVar6 = (ulong *)((long)param_2 + uVar20);
    if ((uVar20 & 1) != 0) {
      puVar6 = (ulong *)(uVar20 & 0xfffffffffffffffe);
    }
    local_1b0 = 0x100000000;
    uStack_1a8 = 0;
    local_1ec = &DAT_10000000f;
    local_1e4 = 0;
    local_1dc = 1;
    local_1d8 = 0;
    local_1c4 = 1;
    local_1bc = &DAT_10000000f;
    local_1d0 = 0;
    local_1cc = 0;
    local_1c8 = 0;
    local_1b4 = 0;
    local_194 = 1;
    local_18c = &DAT_10000000f;
    local_1a0 = 0;
    local_19c = 0;
    local_198 = 0;
    local_184 = 0;
    local_17c = 1;
    local_178 = 0;
    local_164 = 1;
    local_15c = &DAT_10000000f;
    local_170 = 0;
    local_16c = 0;
    local_168 = 0;
    local_154 = 0;
    local_14c = 1;
    local_148 = 0;
    local_134 = 1;
    local_12c = &DAT_10000000f;
    local_140 = 0;
    local_13c = 0;
    local_138 = 0;
    local_124 = 0;
    local_11c = 1;
    local_118 = 0;
    local_104 = 1;
    local_fc = &DAT_10000000f;
    local_110 = 0;
    local_10c = 0;
    local_108 = 0;
    local_f4 = 0;
    local_ec = 1;
    local_e8 = 0;
    local_d4 = 1;
    local_e0 = 0;
    local_dc = 0;
    local_d8 = 0;
    local_c0 = 0x100000000;
    uStack_b8 = 0;
    local_d0 = 0xf00000000;
    uStack_c8 = 1;
    local_a4 = 1;
    local_9c = 0xf;
    local_b0 = 0;
    local_ac = 0;
    local_a8 = 0;
    local_218 = *puVar6;
    local_210 = puVar6[1];
    local_208 = (void *)puVar6[2];
    local_200 = CONCAT44(*(undefined4 *)((long)puVar6 + 0x1c),
                         (int)CONCAT71((int7)(local_200 >> 8),(char)puVar6[3]));
    local_1f8 = CONCAT31((int3)((uint)local_1f8 >> 8),(char)puVar6[4]);
    uStack_1f4 = *(undefined4 *)((long)puVar6 + 0x24);
    uStack_1f0 = (undefined4)puVar6[5];
    FUN_710359b630((undefined8 *)&local_98,(uint *)&local_218,param_3,param_4,param_5,param_6,
                   param_7,param_8);
    *(undefined8 **)(param_1 + 2) = &DAT_7105231730;
    *(ulong *)(param_1 + 4) = CONCAT44(local_8c,uStack_90);
    *(ulong *)(param_1 + 6) =
         CONCAT17(uStack_81,CONCAT16(uStack_82,CONCAT15(uStack_83,CONCAT14(local_84,uStack_88))));
    *(ulong *)(param_1 + 8) = CONCAT71(uStack_7f,local_80);
    uVar19 = 0x10;
    break;
  case 0x12:
    uVar20 = *param_2;
    puVar5 = (uint *)((long)param_2 + uVar20);
    if ((uVar20 & 1) != 0) {
      puVar5 = (uint *)(uVar20 & 0xfffffffffffffffe);
    }
    local_98 = *puVar5;
    uStack_94 = puVar5[1];
    uStack_90 = puVar5[2];
    local_8c = puVar5[3];
    uStack_88 = puVar5[4];
    local_84 = (undefined1)puVar5[5];
    uStack_83 = *(undefined1 *)((long)puVar5 + 0x15);
    uStack_82 = *(undefined1 *)((long)puVar5 + 0x16);
    uStack_81 = *(undefined1 *)((long)puVar5 + 0x17);
    local_80 = (undefined1)puVar5[6];
    FUN_7103590cf0(&local_218,&local_98,param_3,param_4,param_5,param_6,param_7,param_8);
    *(undefined ***)(param_1 + 2) = &PTR_FUN_7104f62038;
    *(size_t *)(param_1 + 4) = local_210;
    *(void **)(param_1 + 6) = local_208;
    *(ulong *)(param_1 + 8) = local_200;
    uVar19 = 0x11;
    break;
  default:
    puVar17 = (undefined8 *)__cxa_allocate_exception(8);
    *puVar17 = &DAT_7107b69010;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar17,&std::exception::typeinfo,std::exception::~exception);
  }
  *param_1 = uVar19;
  return;
}

