// addr:      71038a7800
// offset:    0x38a7800
// name:      FUN_71038a7800
// mangled:   
// signature: undefined __cdecl FUN_71038a7800(undefined4 * param_1, ulong * param_2, long * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71038a7800(undefined4 *param_1,ulong *param_2,long *param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong *puVar1;
  undefined1 *puVar2;
  float *pfVar3;
  undefined4 *puVar4;
  ulong *puVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  int iVar13;
  size_t sVar14;
  long *plVar15;
  undefined8 *puVar16;
  logic_error *plVar17;
  undefined4 uVar18;
  ulong uVar19;
  byte *pbVar20;
  undefined8 uVar21;
  long lVar22;
  long ****pppplVar23;
  void *pvVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
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
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined4 local_84;
  undefined1 local_80;
  undefined7 uStack_7f;
  void *local_78;
  
  switch(param_2[1]) {
  case 0:
  case 0x13:
    uVar19 = *param_2;
    puVar4 = (undefined4 *)((long)param_2 + uVar19);
    if ((uVar19 & 1) != 0) {
      puVar4 = (undefined4 *)(uVar19 & 0xfffffffffffffffe);
    }
    param_1[2] = *puVar4;
    *param_1 = 0;
    return;
  case 1:
    uVar19 = *param_2;
    puVar4 = (undefined4 *)((long)param_2 + uVar19);
    if ((uVar19 & 1) != 0) {
      puVar4 = (undefined4 *)(uVar19 & 0xfffffffffffffffe);
    }
    param_1[2] = *puVar4;
    uVar18 = 1;
    break;
  case 2:
    uVar19 = *param_2;
    puVar2 = (undefined1 *)((long)param_2 + uVar19);
    if ((uVar19 & 1) != 0) {
      puVar2 = (undefined1 *)(uVar19 & 0xfffffffffffffffe);
    }
    *(undefined1 *)(param_1 + 2) = *puVar2;
    uVar18 = 2;
    break;
  case 3:
    uVar19 = *param_2;
    puVar16 = (undefined8 *)((long)param_2 + uVar19);
    if ((uVar19 & 1) != 0) {
      puVar16 = (undefined8 *)(uVar19 & 0xfffffffffffffffe);
    }
    *(undefined8 *)(param_1 + 2) = *puVar16;
    uVar18 = 3;
    break;
  case 4:
    uVar19 = *param_2;
    puVar16 = (undefined8 *)((long)param_2 + uVar19);
    if ((uVar19 & 1) != 0) {
      puVar16 = (undefined8 *)(uVar19 & 0xfffffffffffffffe);
    }
    uVar21 = *puVar16;
    param_1[4] = *(undefined4 *)(puVar16 + 1);
    *(undefined8 *)(param_1 + 2) = uVar21;
    uVar18 = 4;
    break;
  case 5:
    uVar19 = *param_2;
    puVar16 = (undefined8 *)((long)param_2 + uVar19);
    if ((uVar19 & 1) != 0) {
      puVar16 = (undefined8 *)(uVar19 & 0xfffffffffffffffe);
    }
    uVar21 = puVar16[1];
    *(undefined8 *)(param_1 + 2) = *puVar16;
    *(undefined8 *)(param_1 + 4) = uVar21;
    uVar18 = 5;
    break;
  case 6:
    uVar19 = *param_2;
    puVar16 = (undefined8 *)((long)param_2 + uVar19);
    if ((uVar19 & 1) != 0) {
      puVar16 = (undefined8 *)(uVar19 & 0xfffffffffffffffe);
    }
    uVar21 = puVar16[1];
    *(undefined8 *)(param_1 + 2) = *puVar16;
    *(undefined8 *)(param_1 + 4) = uVar21;
    uVar18 = 6;
    break;
  case 7:
    uVar19 = *param_2;
    puVar16 = (undefined8 *)((long)param_2 + uVar19);
    if ((uVar19 & 1) != 0) {
      puVar16 = (undefined8 *)(uVar19 & 0xfffffffffffffffe);
    }
    uVar21 = puVar16[1];
    *(undefined8 *)(param_1 + 2) = *puVar16;
    *(undefined8 *)(param_1 + 4) = uVar21;
    uVar18 = 7;
    break;
  case 8:
    uVar19 = *param_2;
    puVar16 = (undefined8 *)((long)param_2 + uVar19);
    if ((uVar19 & 1) != 0) {
      puVar16 = (undefined8 *)(uVar19 & 0xfffffffffffffffe);
    }
    uVar9 = puVar16[3];
    uVar21 = *puVar16;
    uVar10 = puVar16[1];
    *(undefined8 *)(param_1 + 6) = puVar16[2];
    *(undefined8 *)(param_1 + 8) = uVar9;
    uVar9 = puVar16[4];
    uVar11 = puVar16[5];
    uVar8 = puVar16[6];
    uVar12 = puVar16[7];
    *(undefined8 *)(param_1 + 2) = uVar21;
    *(undefined8 *)(param_1 + 4) = uVar10;
    *(undefined8 *)(param_1 + 0xe) = uVar8;
    *(undefined8 *)(param_1 + 0x10) = uVar12;
    uVar18 = 8;
    *(undefined8 *)(param_1 + 10) = uVar9;
    *(undefined8 *)(param_1 + 0xc) = uVar11;
    break;
  case 9:
  case 10:
  case 0xd:
  case 0xf:
    goto switchD_71038a7848_caseD_9;
  case 0xb:
    uVar19 = *param_2;
    puVar5 = (ulong *)((long)param_2 + uVar19);
    if ((uVar19 & 1) != 0) {
      puVar5 = (ulong *)(uVar19 & 0xfffffffffffffffe);
    }
    uVar19 = *puVar5;
    if ((uVar19 & 1) == 0) {
      pbVar20 = (byte *)((long)puVar5 + uVar19);
    }
    else {
      pbVar20 = (byte *)(uVar19 & 0xfffffffffffffffe);
      if ((*pbVar20 & 1) == 0) {
        pbVar20 = pbVar20 + 1;
      }
      else {
        pbVar20 = *(byte **)(pbVar20 + 0x10);
      }
    }
    local_210 = 0;
    local_208 = (void *)0x0;
    local_218 = 0;
    sVar14 = strlen((char *)pbVar20);
    if (0xffffffffffffffef < sVar14) goto LAB_71038a832c;
    if (sVar14 < 0x17) {
      local_218 = CONCAT71(local_218._1_7_,(char)((int)sVar14 << 1));
      pvVar24 = (void *)((ulong)&local_218 | 1);
      if (sVar14 != 0) goto LAB_71038a7ed4;
    }
    else {
      pppplVar23 = (long ****)(sVar14 + 0x10 & 0xfffffffffffffff0);
      iVar13 = FUN_710392e1f0(&local_78,0x10,pppplVar23,param_4,param_5,param_6,param_7,param_8);
      if ((iVar13 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
        local_98 = (uint)pppplVar23;
        uStack_94 = (undefined4)((ulong)pppplVar23 >> 0x20);
        uVar19 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_98);
        if ((uVar19 & 1) != 0) {
          FUN_710392e1f0(&local_78,0x10,pppplVar23,param_4,param_5,param_6,param_7,param_8);
        }
      }
      nu::VirtualAllocHook((ulong)pppplVar23,0x10,local_78);
      local_218 = (ulong)pppplVar23 | 1;
      local_208 = local_78;
      pvVar24 = local_78;
      local_210 = sVar14;
LAB_71038a7ed4:
      memcpy(pvVar24,pbVar20,sVar14);
    }
    *(undefined1 *)((long)pvVar24 + sVar14) = 0;
    plVar15 = FUN_71038a8460(*param_3,param_3[1],(byte *)&local_218);
    pvVar24 = local_208;
    if ((local_218 & 1) != 0) {
      nu::VirtualFreeHook(local_208);
      FUN_710392eb40((ulong)pvVar24);
    }
    if (plVar15 == (long *)0x0) {
switchD_71038a7848_caseD_9:
      param_1[2] = 0;
      *param_1 = 0;
      return;
    }
    uVar19 = *puVar5;
    if ((uVar19 & 1) == 0) {
      pbVar20 = (byte *)((long)puVar5 + uVar19);
    }
    else {
      pbVar20 = (byte *)(uVar19 & 0xfffffffffffffffe);
      if ((*pbVar20 & 1) == 0) {
        pbVar20 = pbVar20 + 1;
      }
      else {
        pbVar20 = *(byte **)(pbVar20 + 0x10);
      }
    }
    local_210 = 0;
    local_208 = (void *)0x0;
    local_218 = 0;
    sVar14 = strlen((char *)pbVar20);
    if (0xffffffffffffffef < sVar14) {
LAB_71038a832c:
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    if (sVar14 < 0x17) {
      local_218 = CONCAT71(local_218._1_7_,(char)((int)sVar14 << 1));
      local_78 = (void *)((ulong)&local_218 | 1);
      if (sVar14 != 0) goto LAB_71038a8150;
    }
    else {
      pppplVar23 = (long ****)(sVar14 + 0x10 & 0xfffffffffffffff0);
      iVar13 = FUN_710392e1f0(&local_78,0x10,pppplVar23,param_4,param_5,param_6,param_7,param_8);
      if ((iVar13 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
        local_98 = (uint)pppplVar23;
        uStack_94 = (undefined4)((ulong)pppplVar23 >> 0x20);
        uVar19 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_98);
        if ((uVar19 & 1) != 0) {
          FUN_710392e1f0(&local_78,0x10,pppplVar23,param_4,param_5,param_6,param_7,param_8);
        }
      }
      nu::VirtualAllocHook((ulong)pppplVar23,0x10,local_78);
      local_218 = (ulong)pppplVar23 | 1;
      local_208 = local_78;
      local_210 = sVar14;
LAB_71038a8150:
      memcpy(local_78,pbVar20,sVar14);
    }
    *(undefined1 *)((long)local_78 + sVar14) = 0;
    plVar15 = FUN_71038a8460(*param_3,param_3[1],(byte *)&local_218);
    pvVar24 = local_208;
    if (plVar15 == (long *)0x0) {
      plVar17 = (logic_error *)__cxa_allocate_exception(0x10);
      std::logic_error::logic_error(plVar17,"unordered_map::at: key not found");
      *(undefined **)plVar17 = &DAT_7107960010;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(plVar17,&std::out_of_range::typeinfo,std::out_of_range::~out_of_range);
    }
    *(long *)(param_1 + 4) = plVar15[6];
    *(long *)(param_1 + 6) = plVar15[7];
    lVar22 = plVar15[8];
    *(undefined ***)(param_1 + 2) = &PTR_FUN_71052302c0;
    *param_1 = 0xb;
    *(long *)(param_1 + 8) = lVar22;
    if ((local_218 & 1) == 0) {
      return;
    }
    nu::VirtualFreeHook(local_208);
LAB_71038a82f4:
    FUN_710392eb40((ulong)pvVar24);
    return;
  case 0xc:
    uVar19 = *param_2;
    puVar5 = (ulong *)((long)param_2 + uVar19);
    if ((uVar19 & 1) != 0) {
      puVar5 = (ulong *)(uVar19 & 0xfffffffffffffffe);
    }
    uVar19 = *puVar5;
    puVar1 = (ulong *)((long)puVar5 + uVar19);
    if ((uVar19 & 1) != 0) {
      puVar1 = (ulong *)(uVar19 & 0xfffffffffffffffe);
    }
    uVar19 = *puVar1;
    if ((uVar19 & 1) == 0) {
      pbVar20 = (byte *)((long)puVar1 + uVar19);
    }
    else {
      pbVar20 = (byte *)(uVar19 & 0xfffffffffffffffe);
      if ((*pbVar20 & 1) == 0) {
        pbVar20 = pbVar20 + 1;
      }
      else {
        pbVar20 = *(byte **)(pbVar20 + 0x10);
      }
    }
    local_210 = 0;
    local_208 = (void *)0x0;
    local_218 = 0;
    sVar14 = strlen((char *)pbVar20);
    if (0xffffffffffffffef < sVar14) goto LAB_71038a832c;
    if (sVar14 < 0x17) {
      local_218 = CONCAT71(local_218._1_7_,(char)((int)sVar14 << 1));
      pvVar24 = (void *)((ulong)&local_218 | 1);
      if (sVar14 != 0) goto LAB_71038a8008;
    }
    else {
      pppplVar23 = (long ****)(sVar14 + 0x10 & 0xfffffffffffffff0);
      iVar13 = FUN_710392e1f0(&local_78,0x10,pppplVar23,param_4,param_5,param_6,param_7,param_8);
      if ((iVar13 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
        local_98 = (uint)pppplVar23;
        uStack_94 = (undefined4)((ulong)pppplVar23 >> 0x20);
        uVar19 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_98);
        if ((uVar19 & 1) != 0) {
          FUN_710392e1f0(&local_78,0x10,pppplVar23,param_4,param_5,param_6,param_7,param_8);
        }
      }
      nu::VirtualAllocHook((ulong)pppplVar23,0x10,local_78);
      local_218 = (ulong)pppplVar23 | 1;
      local_208 = local_78;
      pvVar24 = local_78;
      local_210 = sVar14;
LAB_71038a8008:
      memcpy(pvVar24,pbVar20,sVar14);
    }
    *(undefined1 *)((long)pvVar24 + sVar14) = 0;
    plVar15 = FUN_71038a8460(*param_3,param_3[1],(byte *)&local_218);
    pvVar24 = local_208;
    if ((local_218 & 1) != 0) {
      nu::VirtualFreeHook(local_208);
      FUN_710392eb40((ulong)pvVar24);
    }
    if (plVar15 == (long *)0x0) goto switchD_71038a7848_caseD_9;
    uVar19 = *puVar5;
    puVar5 = (ulong *)((long)puVar5 + uVar19);
    if ((uVar19 & 1) != 0) {
      puVar5 = (ulong *)(uVar19 & 0xfffffffffffffffe);
    }
    uVar19 = *puVar5;
    if ((uVar19 & 1) == 0) {
      pbVar20 = (byte *)((long)puVar5 + uVar19);
    }
    else {
      pbVar20 = (byte *)(uVar19 & 0xfffffffffffffffe);
      if ((*pbVar20 & 1) == 0) {
        pbVar20 = pbVar20 + 1;
      }
      else {
        pbVar20 = *(byte **)(pbVar20 + 0x10);
      }
    }
    local_210 = 0;
    local_208 = (void *)0x0;
    local_218 = 0;
    sVar14 = strlen((char *)pbVar20);
    if (0xffffffffffffffef < sVar14) goto LAB_71038a832c;
    if (sVar14 < 0x17) {
      local_218 = CONCAT71(local_218._1_7_,(char)((int)sVar14 << 1));
      local_78 = (void *)((ulong)&local_218 | 1);
      if (sVar14 != 0) goto LAB_71038a8284;
    }
    else {
      pppplVar23 = (long ****)(sVar14 + 0x10 & 0xfffffffffffffff0);
      iVar13 = FUN_710392e1f0(&local_78,0x10,pppplVar23,param_4,param_5,param_6,param_7,param_8);
      if ((iVar13 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
        local_98 = (uint)pppplVar23;
        uStack_94 = (undefined4)((ulong)pppplVar23 >> 0x20);
        uVar19 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_98);
        if ((uVar19 & 1) != 0) {
          FUN_710392e1f0(&local_78,0x10,pppplVar23,param_4,param_5,param_6,param_7,param_8);
        }
      }
      nu::VirtualAllocHook((ulong)pppplVar23,0x10,local_78);
      local_218 = (ulong)pppplVar23 | 1;
      local_208 = local_78;
      local_210 = sVar14;
LAB_71038a8284:
      memcpy(local_78,pbVar20,sVar14);
    }
    *(undefined1 *)((long)local_78 + sVar14) = 0;
    plVar15 = FUN_71038a8460(*param_3,param_3[1],(byte *)&local_218);
    pvVar24 = local_208;
    if (plVar15 == (long *)0x0) {
      plVar17 = (logic_error *)__cxa_allocate_exception(0x10);
      std::logic_error::logic_error(plVar17,"unordered_map::at: key not found");
      *(undefined **)plVar17 = &DAT_7107960010;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(plVar17,&std::out_of_range::typeinfo,std::out_of_range::~out_of_range);
    }
    *(long *)(param_1 + 4) = plVar15[6];
    *(long *)(param_1 + 6) = plVar15[7];
    lVar22 = plVar15[8];
    *(undefined ***)(param_1 + 2) = &PTR_FUN_71052302c0;
    *param_1 = 0xb;
    *(long *)(param_1 + 8) = lVar22;
    if ((local_218 & 1) == 0) {
      return;
    }
    nu::VirtualFreeHook(local_208);
    goto LAB_71038a82f4;
  case 0xe:
    uVar19 = *param_2;
    local_1dc = local_1dc & 0xffffff00;
    puVar5 = (ulong *)((long)param_2 + uVar19);
    if ((uVar19 & 1) != 0) {
      puVar5 = (ulong *)(uVar19 & 0xfffffffffffffffe);
    }
    local_218 = *puVar5;
    local_210 = puVar5[1];
    local_208 = (void *)puVar5[2];
    local_200 = puVar5[3];
    local_1f8 = (undefined4)puVar5[4];
    uStack_1f4 = *(undefined4 *)((long)puVar5 + 0x24);
    uStack_1f0 = (undefined4)puVar5[5];
    local_1ec = *(undefined1 **)((long)puVar5 + 0x2c);
    local_1e4 = CONCAT44(7,*(undefined4 *)((long)puVar5 + 0x34));
    FUN_7103591e00((undefined8 *)&local_98,(uint *)&local_218,param_3,param_4,param_5,param_6,
                   param_7,param_8);
    *(undefined ***)(param_1 + 2) = &PTR_FUN_7105231650;
    *(ulong *)(param_1 + 4) = CONCAT44(local_8c,uStack_90);
    *(ulong *)(param_1 + 6) = CONCAT44(local_84,uStack_88);
    *(ulong *)(param_1 + 8) = CONCAT71(uStack_7f,local_80);
    uVar18 = 0xe;
    break;
  case 0x10:
    uVar19 = *param_2;
    pfVar3 = (float *)((long)param_2 + uVar19);
    if ((uVar19 & 1) != 0) {
      pfVar3 = (float *)(uVar19 & 0xfffffffffffffffe);
    }
    fVar27 = pfVar3[2];
    fVar28 = *pfVar3;
    fVar29 = pfVar3[1];
    fVar6 = pfVar3[3];
    fVar7 = pfVar3[4];
    fVar25 = cosf(fVar27);
    fVar26 = sinf(fVar27);
    param_1[2] = fVar28;
    param_1[3] = fVar29;
    param_1[4] = fVar27;
    param_1[5] = fVar6;
    param_1[6] = fVar7;
    uVar18 = 0xf;
    fVar27 = 999.99994;
    if (fVar28 != 0.0) {
      fVar27 = 1.0 / fVar28;
    }
    fVar28 = 999.99994;
    if (fVar29 != 0.0) {
      fVar28 = 1.0 / fVar29;
    }
    param_1[7] = fVar27 * fVar25;
    param_1[8] = fVar27 * fVar26;
    param_1[0xc] = fVar25 * fVar28;
    param_1[10] = fVar27 * (((1.0 - fVar25) - fVar26) * 0.5 + fVar6);
    param_1[0xb] = -(fVar28 * fVar26);
    param_1[9] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = (fVar28 * (((1.0 - fVar25) + fVar26) * 0.5 + fVar7) + 1.0) - fVar28;
    break;
  case 0x11:
    uVar19 = *param_2;
    puVar5 = (ulong *)((long)param_2 + uVar19);
    if ((uVar19 & 1) != 0) {
      puVar5 = (ulong *)(uVar19 & 0xfffffffffffffffe);
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
    local_218 = *puVar5;
    local_210 = puVar5[1];
    local_208 = (void *)puVar5[2];
    local_200 = CONCAT44(*(undefined4 *)((long)puVar5 + 0x1c),
                         (int)CONCAT71((int7)(local_200 >> 8),(char)puVar5[3]));
    local_1f8 = CONCAT31((int3)((uint)local_1f8 >> 8),(char)puVar5[4]);
    uStack_1f4 = *(undefined4 *)((long)puVar5 + 0x24);
    uStack_1f0 = (undefined4)puVar5[5];
    FUN_710359b630((undefined8 *)&local_98,(uint *)&local_218,param_3,param_4,param_5,param_6,
                   param_7,param_8);
    *(undefined8 **)(param_1 + 2) = &DAT_7105231730;
    *(ulong *)(param_1 + 4) = CONCAT44(local_8c,uStack_90);
    *(ulong *)(param_1 + 6) = CONCAT44(local_84,uStack_88);
    *(ulong *)(param_1 + 8) = CONCAT71(uStack_7f,local_80);
    uVar18 = 0x10;
    break;
  case 0x12:
    uVar19 = *param_2;
    puVar4 = (undefined4 *)((long)param_2 + uVar19);
    if ((uVar19 & 1) != 0) {
      puVar4 = (undefined4 *)(uVar19 & 0xfffffffffffffffe);
    }
    local_98 = 1;
    local_8c = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    local_84 = 0x1000001;
    local_80 = 0;
    uStack_94 = *puVar4;
    FUN_7103590cf0(&local_218,&local_98,param_3,param_4,param_5,param_6,param_7,param_8);
    *(undefined ***)(param_1 + 2) = &PTR_FUN_7104f62038;
    *(size_t *)(param_1 + 4) = local_210;
    *(void **)(param_1 + 6) = local_208;
    *(ulong *)(param_1 + 8) = local_200;
    uVar18 = 0x11;
    break;
  default:
    puVar16 = (undefined8 *)__cxa_allocate_exception(8);
    *puVar16 = &DAT_7107b69010;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar16,&std::exception::typeinfo,std::exception::~exception);
  }
  *param_1 = uVar18;
  return;
}

