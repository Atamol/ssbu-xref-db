// addr:      7101efe2e0
// offset:    0x1efe2e0
// name:      FUN_7101efe2e0
// mangled:   
// signature: undefined __cdecl FUN_7101efe2e0(uint * param_1)


void FUN_7101efe2e0(uint *param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ushort *puVar8;
  ulong uVar9;
  byte *pbVar10;
  undefined *puVar11;
  ulong uVar12;
  ulong uVar13;
  long ****pppplVar14;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar15;
  undefined8 *puVar16;
  ulong uVar17;
  undefined4 uVar18;
  ulong uVar19;
  long lVar20;
  undefined8 uVar21;
  long *plVar22;
  undefined4 *local_1320;
  undefined4 local_130c;
  undefined **local_12f0;
  ulong local_12e8;
  undefined **local_12e0;
  ulong local_12d8;
  undefined **local_12d0;
  ulong local_12c8;
  undefined **local_12c0;
  ulong local_12b8;
  undefined **local_12b0;
  ulong local_12a8;
  undefined8 local_12a0;
  undefined2 local_1298;
  undefined8 local_1294;
  undefined2 local_128c;
  uint local_1288 [2];
  ushort local_1280 [24];
  undefined4 local_1250;
  uint uStack_124c;
  undefined4 uStack_1248;
  undefined1 uStack_1244;
  undefined1 *local_1240;
  undefined1 *puStack_1238;
  undefined2 local_1230;
  undefined8 auStack_1228 [52];
  ulong local_1088;
  undefined8 local_1080;
  undefined1 local_1078;
  ushort auStack_1070 [2048];
  int local_70 [4];
  
  lVar15 = *(long *)(param_1 + 0xaa);
  if (param_1[0x7f] == 0) {
    uVar6 = *(uint *)(lVar15 + 0xf0);
    if (9 < uVar6) {
LAB_7101eff1e8:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar20 = *(long *)(*(long *)(lVar15 + 8) + 8);
    puVar2 = (undefined4 *)(lVar20 + (long)(int)uVar6 * 4);
    *puVar2 = 0;
    puVar2[10] = 0;
    *(undefined1 *)(lVar20 + (int)uVar6 + 0x50) = 0;
    *(undefined4 *)(lVar15 + 0xf0) = 0xffffffff;
    if (0x12 < *(uint *)(lVar15 + 0xdc)) goto LAB_7101eff1e8;
    *(undefined4 *)(lVar15 + (long)(int)*(uint *)(lVar15 + 0xdc) * 4 + 0x90) = 1;
    if (((DAT_71053144d8 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_71053144d8), iVar7 != 0)) {
      FUN_7101764000();
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
    }
    puVar3 = &DAT_710530a9c8;
    if (*param_1 != 0) {
      puVar3 = &DAT_710530bdf0;
    }
    if (((DAT_71053144d8 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_71053144d8), iVar7 != 0)) {
      FUN_7101764000();
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
    }
    lVar15 = *(long *)(param_1 + 0xa8);
    if ((DAT_710530a975 != '\x02') && (*(short *)(puVar3 + 0x4a) == 0)) {
      if (*(int *)(lVar15 + 0x134) != 0) {
        return;
      }
      *(undefined4 *)(lVar15 + 0x134) = 1;
      iVar7 = *(int *)(lVar15 + 0x130);
      if (iVar7 == 0) {
        return;
      }
      *(undefined4 *)(lVar15 + 0x100) = 0;
      *(undefined8 *)(lVar15 + 0x18) = 0;
      *(undefined8 *)(lVar15 + 0x20) = 0;
      *(undefined8 *)(lVar15 + 0xf0) = 0;
      *(undefined8 *)(lVar15 + 0xf8) = 0;
      *(undefined8 *)(lVar15 + 0xe0) = 0;
      *(undefined8 *)(lVar15 + 0xe8) = 0;
      *(undefined8 *)(lVar15 + 0xd0) = 0;
      *(undefined8 *)(lVar15 + 0xd8) = 0;
      *(undefined8 *)(lVar15 + 0xc0) = 0;
      *(undefined8 *)(lVar15 + 200) = 0;
      *(undefined8 *)(lVar15 + 0x10c) = 0xffffffff00000000;
      *(undefined8 *)(lVar15 + 0xb8) = 0x100000000;
      *(undefined1 *)(lVar15 + 0x114) = 0;
      *(undefined8 *)(lVar15 + 0x104) = 0xffffffff00000001;
      if (iVar7 == 3) {
        *(undefined8 *)(lVar15 + 0xc0) = 0x700000005;
        *(undefined4 *)(lVar15 + 0x104) = 3;
      }
      else {
        if (iVar7 == 2) {
          *(undefined4 *)(lVar15 + 0x104) = 2;
          uVar18 = 5;
        }
        else {
          if (iVar7 != 1) goto LAB_7101efed34;
          *(undefined4 *)(lVar15 + 0x104) = 2;
          uVar18 = 3;
        }
        *(undefined4 *)(lVar15 + 0xc0) = uVar18;
      }
LAB_7101efed34:
      *(undefined8 *)(lVar15 + 300) = 0;
      return;
    }
    if (*(int *)(lVar15 + 0x134) != 0) {
      return;
    }
    *(undefined4 *)(lVar15 + 0x134) = 1;
    iVar7 = *(int *)(lVar15 + 0x130);
    if (iVar7 == 1) {
      return;
    }
    *(undefined8 *)(lVar15 + 0x18) = 0;
    *(undefined8 *)(lVar15 + 0x20) = 0;
    *(undefined4 *)(lVar15 + 0x104) = 0;
    *(undefined8 *)(lVar15 + 0xfc) = 0;
    *(undefined8 *)(lVar15 + 0xf4) = 0;
    *(undefined8 *)(lVar15 + 0xec) = 0;
    *(undefined8 *)(lVar15 + 0xe4) = 0;
    *(undefined8 *)(lVar15 + 0xdc) = 0;
    *(undefined8 *)(lVar15 + 0xd4) = 0;
    *(undefined8 *)(lVar15 + 0xcc) = 0;
    *(undefined8 *)(lVar15 + 0xc4) = 0;
    *(undefined8 *)(lVar15 + 0xbc) = 0;
    *(undefined8 *)(lVar15 + 0x108) = 0xffffffff;
    *(undefined4 *)(lVar15 + 0x110) = 0xffffffff;
    *(undefined1 *)(lVar15 + 0x114) = 0;
    *(undefined4 *)(lVar15 + 0xb8) = 0;
    if (iVar7 == 3) {
      *(undefined4 *)(lVar15 + 0x104) = 1;
      uVar18 = 7;
    }
    else {
      if (iVar7 == 2) {
        *(undefined8 *)(lVar15 + 0xbc) = 0x500000002;
        *(undefined4 *)(lVar15 + 0x104) = 2;
        goto LAB_7101efed68;
      }
      if (iVar7 != 0) goto LAB_7101efed68;
      *(undefined4 *)(lVar15 + 0x104) = 1;
      uVar18 = 2;
    }
    *(undefined4 *)(lVar15 + 0xbc) = uVar18;
LAB_7101efed68:
    *(undefined1 **)(lVar15 + 300) = &DAT_100000001;
    return;
  }
  if (*(int *)(lVar15 + 0xe0) != 0) {
    return;
  }
  if (1 < *param_1) goto LAB_7101eff1e8;
  uVar6 = *(uint *)(lVar15 + 0xf0);
  *(uint *)(*DAT_7105328e18 + (ulong)*param_1 * 0x1b8 + 0x1d8) = uVar6;
  if ((uVar6 == 0xffffffff) ||
     ((((puVar16 = &DAT_7105339830, uVar6 < 10 && (*(char *)(DAT_71053398b0 + 8) != '\0')) &&
       (puVar16 = (undefined8 *)(&DAT_7105339860)[(int)uVar6], puVar16 == (undefined8 *)0x0)) ||
      (uVar5 = *(int *)(puVar16[2] + 0x9c) - 1, 6 < uVar5)))) {
    local_130c = 0;
  }
  else {
    local_130c = *(undefined4 *)(&DAT_7104753de0 + (long)(int)uVar5 * 4);
  }
  if (((DAT_71053144d8 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_71053144d8), iVar7 != 0)) {
    FUN_7101764000();
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  uVar5 = 3;
  if (DAT_710530d560 != 0) {
    uVar5 = 5;
  }
  uVar17 = (ulong)uVar5;
  lVar15 = **(long **)**(undefined8 **)(param_1 + 2);
  if (param_1[1] == 0) {
    lVar15 = lVar15 + 0x5f8;
  }
  else {
    uVar19 = (long)(int)param_1[1] - 1;
    if ((ulong)(*(long *)(lVar15 + 0x610) - *(long *)(lVar15 + 0x608) >> 4) <= uVar19) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    lVar15 = *(long *)(lVar15 + 0x608) + uVar19 * 0x10;
  }
  lVar15 = *(long *)(lVar15 + 8);
  *(undefined4 *)(lVar15 + 0x484) = 0;
  *(uint *)(lVar15 + 0x488) = uVar6;
  if (*(uint *)(lVar15 + 0x48c) != uVar6) {
    *(uint *)(lVar15 + 0x48c) = uVar6;
  }
  puVar1 = param_1 + 0x82;
  lVar15 = 0;
  uVar19 = 0;
  local_1320 = &DAT_710530c6d8;
  do {
    local_12b0 = (undefined **)0xffffffff;
    local_12a8 = 0;
    local_12a0 = 0xffffffffffffffff;
    local_1298 = 0;
    local_1294 = 0xffffffffffffffff;
    local_128c = 0xffff;
    local_1250 = 0xffffffff;
    local_1288[0] = 0;
    local_1288[1] = 0;
    local_1280[0] = 0;
    uStack_124c = uStack_124c & 0xffffff00;
    uStack_1248 = 0;
    uStack_1244 = 0;
    local_1230 = 0;
    local_1240 = &DAT_3f8000003f800000;
    puStack_1238 = &DAT_3f8000003f800000;
    FUN_71017abd00(auStack_1228);
    local_1080 = 0xb95d0753f;
    local_1088 = local_1088 & 0xffffffffffffff00;
    local_1078 = 0xff;
    puVar2 = &DAT_710530b2b0;
    if (*param_1 != 0) {
      puVar2 = local_1320;
    }
    if (4 < uVar19) goto LAB_7101eff1e8;
    puVar16 = (undefined8 *)((long)puVar2 + lVar15);
    local_12b0 = (undefined **)*puVar16;
    local_12a8 = puVar16[1];
    local_12a0 = puVar16[2];
    local_1298 = *(undefined2 *)(puVar16 + 3);
    local_1294 = *(undefined8 *)((long)puVar16 + 0x1c);
    local_128c = *(undefined2 *)((long)puVar16 + 0x24);
    if ((long)&local_12b0 - (long)puVar2 != lVar15) {
      FUN_7101696040(local_1288,(ushort *)(puVar16 + 6));
    }
    uStack_1248 = (undefined4)((ulong)*(undefined8 *)((long)puVar16 + 0x65) >> 0x18);
    uStack_1244 = (undefined1)((ulong)*(undefined8 *)((long)puVar16 + 0x65) >> 0x38);
    local_1240 = (undefined1 *)puVar16[0xe];
    puStack_1238 = (undefined1 *)puVar16[0xf];
    local_1250 = (undefined4)puVar16[0xc];
    uStack_124c = (uint)((ulong)puVar16[0xc] >> 0x20);
    local_1230 = *(undefined2 *)(puVar16 + 0x10);
    FUN_71016b6a10(auStack_1228,puVar16 + 0x11);
    local_1078 = *(undefined1 *)(puVar16 + 0x47);
    local_1088 = puVar16[0x45];
    local_1080 = puVar16[0x46];
    local_12b0 = (undefined **)CONCAT44(local_12b0._4_4_,uVar6);
    if (4 < (uint)uVar19) goto LAB_7101eff1e8;
    puVar2 = &DAT_710530b2b0;
    if (*param_1 != 0) {
      puVar2 = &DAT_710530c6d8;
    }
    puVar16 = (undefined8 *)((long)puVar2 + lVar15);
    *puVar16 = local_12b0;
    *(undefined2 *)(puVar16 + 3) = local_1298;
    *(undefined8 *)((long)puVar16 + 0x1c) = local_1294;
    puVar16[1] = local_12a8;
    puVar16[2] = local_12a0;
    *(undefined2 *)((long)puVar16 + 0x24) = local_128c;
    if ((long)&local_12b0 - (long)puVar2 != lVar15) {
      FUN_7101696040((uint *)(puVar16 + 5),local_1280);
    }
    *(ulong *)((long)puVar16 + 0x65) = CONCAT17(uStack_1244,CONCAT43(uStack_1248,uStack_124c._1_3_))
    ;
    puVar16[0xc] = CONCAT44(uStack_124c,local_1250);
    *(undefined2 *)(puVar16 + 0x10) = local_1230;
    puVar16[0xe] = local_1240;
    puVar16[0xf] = puStack_1238;
    FUN_71016b6a10(puVar16 + 0x11,auStack_1228);
    *(undefined1 *)(puVar16 + 0x47) = local_1078;
    puVar16[0x46] = local_1080;
    puVar16[0x45] = local_1088;
    if (1 < *param_1) goto LAB_7101eff1e8;
    puVar11 = (&PTR_DAT_71050b3e88)[*param_1];
    pppplVar14 = (long ****)(uVar19 & 0xffffffff);
    uVar12 = uVar17;
    FUN_7103776640(&local_12c0,(long)puVar1,(byte ****)"set_part_entry_%s%d_%02d",puVar11,uVar17,
                   pppplVar14,in_x5,in_x6,in_x7);
    FUN_7103776910(&local_12d0,(long)&local_12c0,(long ****)"txt_btn_0",puVar11,uVar12,pppplVar14,
                   in_x5,in_x6,in_x7);
    uVar13 = local_12c8;
    plVar22 = *(long **)(local_12c8 + 0x10);
    if (plVar22 != (long *)0x0) {
      pbVar10 = (byte *)plVar22[0x1c];
      *(undefined4 *)((long)plVar22 + 0x25c) = local_130c;
      if (((pbVar10 != (byte *)0x0) && (*pbVar10 != 0x23)) && (*pbVar10 != 0x40)) {
        puVar8 = (ushort *)FUN_71037a4450((long *)*DAT_710593bc60,pbVar10);
        local_12e0 = (undefined **)CONCAT44(local_12e0._4_4_,*(undefined4 *)((long)plVar22 + 0x25c))
        ;
        memset(auStack_1070,0,0x1000);
        uVar5 = FUN_71037ae170((long)auStack_1070,puVar8,(int *)&local_12e0);
        puVar11 = (undefined *)(ulong)uVar5;
        uVar12 = 0;
        FUN_71037a2270(plVar22,auStack_1070,uVar5,0);
      }
    }
    local_12d0 = &PTR_FUN_710523d9a8;
    local_12c8 = 0;
    if (uVar13 != 0) {
      FUN_710392eb40(uVar13);
    }
    FUN_7103776910(&local_12d0,(long)&local_12c0,(long ****)"txt_btn_1",puVar11,uVar12,pppplVar14,
                   in_x5,in_x6,in_x7);
    uVar13 = local_12c8;
    plVar22 = *(long **)(local_12c8 + 0x10);
    if (plVar22 != (long *)0x0) {
      pbVar10 = (byte *)plVar22[0x1c];
      *(undefined4 *)((long)plVar22 + 0x25c) = local_130c;
      if (((pbVar10 != (byte *)0x0) && (*pbVar10 != 0x23)) && (*pbVar10 != 0x40)) {
        puVar8 = (ushort *)FUN_71037a4450((long *)*DAT_710593bc60,pbVar10);
        local_12e0 = (undefined **)CONCAT44(local_12e0._4_4_,*(undefined4 *)((long)plVar22 + 0x25c))
        ;
        memset(auStack_1070,0,0x1000);
        uVar5 = FUN_71037ae170((long)auStack_1070,puVar8,(int *)&local_12e0);
        FUN_71037a2270(plVar22,auStack_1070,uVar5,0);
      }
    }
    local_12d0 = &PTR_FUN_710523d9a8;
    local_12c8 = 0;
    if (uVar13 != 0) {
      FUN_710392eb40(uVar13);
    }
    if (1 < *param_1) goto LAB_7101eff1e8;
    puVar11 = (&PTR_DAT_71050b3e88)[*param_1];
    pppplVar14 = (long ****)(uVar19 & 0xffffffff);
    uVar13 = uVar17;
    FUN_7103776640(&local_12d0,(long)puVar1,(byte ****)"set_part_%s%d_%02d",puVar11,uVar17,
                   pppplVar14,in_x5,in_x6,in_x7);
    FUN_7103776910(&local_12e0,(long)&local_12d0,(long ****)"txt_press_btn",puVar11,uVar13,
                   pppplVar14,in_x5,in_x6,in_x7);
    uVar13 = local_12d8;
    plVar22 = *(long **)(local_12d8 + 0x10);
    if (plVar22 != (long *)0x0) {
      pbVar10 = (byte *)plVar22[0x1c];
      *(undefined4 *)((long)plVar22 + 0x25c) = local_130c;
      if (((pbVar10 != (byte *)0x0) && (*pbVar10 != 0x23)) && (*pbVar10 != 0x40)) {
        puVar8 = (ushort *)FUN_71037a4450((long *)*DAT_710593bc60,pbVar10);
        local_12f0 = (undefined **)CONCAT44(local_12f0._4_4_,*(undefined4 *)((long)plVar22 + 0x25c))
        ;
        memset(auStack_1070,0,0x1000);
        uVar5 = FUN_71037ae170((long)auStack_1070,puVar8,(int *)&local_12f0);
        FUN_71037a2270(plVar22,auStack_1070,uVar5,0);
      }
    }
    local_12e0 = &PTR_FUN_710523d9a8;
    local_12d8 = 0;
    if (uVar13 != 0) {
      FUN_710392eb40(uVar13);
    }
    if (1 < *param_1) goto LAB_7101eff1e8;
    puVar11 = (&PTR_DAT_71050b3e88)[*param_1];
    pppplVar14 = (long ****)(uVar19 & 0xffffffff);
    uVar12 = uVar17;
    FUN_7103776640(&local_12e0,(long)puVar1,(byte ****)"set_part_%s%d_entry_%02d",puVar11,uVar17,
                   pppplVar14,in_x5,in_x6,in_x7);
    FUN_7103776910(&local_12f0,(long)&local_12e0,(long ****)"txt_press_btn",puVar11,uVar12,
                   pppplVar14,in_x5,in_x6,in_x7);
    uVar13 = local_12e8;
    plVar22 = *(long **)(local_12e8 + 0x10);
    if (plVar22 != (long *)0x0) {
      pbVar10 = (byte *)plVar22[0x1c];
      *(undefined4 *)((long)plVar22 + 0x25c) = local_130c;
      if (((pbVar10 != (byte *)0x0) && (*pbVar10 != 0x23)) && (*pbVar10 != 0x40)) {
        puVar8 = (ushort *)FUN_71037a4450((long *)*DAT_710593bc60,pbVar10);
        local_70[0] = *(int *)((long)plVar22 + 0x25c);
        memset(auStack_1070,0,0x1000);
        uVar5 = FUN_71037ae170((long)auStack_1070,puVar8,local_70);
        puVar11 = (undefined *)(ulong)uVar5;
        uVar12 = 0;
        FUN_71037a2270(plVar22,auStack_1070,uVar5,0);
      }
    }
    local_12f0 = &PTR_FUN_710523d9a8;
    local_12e8 = 0;
    if (uVar13 != 0) {
      FUN_710392eb40(uVar13);
    }
    uVar13 = local_12d8;
    local_12e0 = &PTR_FUN_710523d988;
    local_12d8 = 0;
    if (uVar13 != 0) {
      uVar9 = *(ulong *)(uVar13 + 0x18);
      *(undefined ***)(uVar13 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar13 + 0x18) = 0;
      if (uVar9 != 0) {
        FUN_710392eb40(uVar9);
      }
      FUN_710392eb40(uVar13);
    }
    uVar13 = local_12c8;
    local_12d0 = &PTR_FUN_710523d988;
    local_12c8 = 0;
    if (uVar13 != 0) {
      uVar9 = *(ulong *)(uVar13 + 0x18);
      *(undefined ***)(uVar13 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar13 + 0x18) = 0;
      if (uVar9 != 0) {
        FUN_710392eb40(uVar9);
      }
      FUN_710392eb40(uVar13);
    }
    uVar13 = local_12b8;
    local_12c0 = &PTR_FUN_710523d988;
    local_12b8 = 0;
    if (uVar13 != 0) {
      uVar9 = *(ulong *)(uVar13 + 0x18);
      *(undefined ***)(uVar13 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar13 + 0x18) = 0;
      if (uVar9 != 0) {
        FUN_710392eb40(uVar9);
      }
      FUN_710392eb40(uVar13);
    }
    uVar19 = uVar19 + 1;
    lVar15 = lVar15 + 0x240;
  } while (uVar19 < uVar17);
  FUN_7101ef8550(*(long *)(param_1 + 0xa8),uVar6,puVar11,uVar12,pppplVar14,in_x5,in_x6,in_x7);
  lVar15 = *(long *)(param_1 + 0xa8);
  uVar6 = *(int *)(lVar15 + 0x134) - 1;
  if (*(int *)(lVar15 + 0x134) < 1) goto LAB_7101efee24;
  *(uint *)(lVar15 + 0x134) = uVar6;
  if (1 < uVar6) goto LAB_7101eff1e8;
  lVar20 = lVar15 + (long)(int)uVar6 * 4;
  iVar7 = *(int *)(lVar20 + 0x128);
  iVar4 = *(int *)(lVar15 + 0x130);
  if (iVar4 == iVar7) goto LAB_7101efee24;
  *(undefined8 *)(lVar15 + 0x18) = 0;
  *(undefined8 *)(lVar15 + 0x20) = 0;
  *(undefined4 *)(lVar15 + 0x104) = 0;
  *(undefined8 *)(lVar15 + 0xfc) = 0;
  *(undefined8 *)(lVar15 + 0xf4) = 0;
  *(undefined8 *)(lVar15 + 0xec) = 0;
  *(undefined8 *)(lVar15 + 0xe4) = 0;
  *(undefined8 *)(lVar15 + 0xdc) = 0;
  *(undefined8 *)(lVar15 + 0xd4) = 0;
  *(undefined8 *)(lVar15 + 0xcc) = 0;
  *(undefined8 *)(lVar15 + 0xc4) = 0;
  *(undefined8 *)(lVar15 + 0xbc) = 0;
  *(undefined8 *)(lVar15 + 0x108) = 0xffffffff;
  *(undefined4 *)(lVar15 + 0x110) = 0xffffffff;
  *(undefined1 *)(lVar15 + 0x114) = 0;
  *(undefined4 *)(lVar15 + 0xb8) = 0;
  switch(iVar7) {
  case 0:
    *(undefined4 *)(lVar15 + 0x104) = 1;
    *(undefined4 *)(lVar15 + 0xbc) = 1;
    if (iVar4 == 3) {
      *(undefined8 *)(lVar15 + 0xc0) = 0x700000005;
      *(undefined4 *)(lVar15 + 0x104) = 3;
    }
    else if (iVar4 == 2) {
      *(undefined4 *)(lVar15 + 0x104) = 2;
      *(undefined4 *)(lVar15 + 0xc0) = 5;
    }
    else if (iVar4 == 1) {
      *(undefined4 *)(lVar15 + 0x104) = 2;
      *(undefined4 *)(lVar15 + 0xc0) = 3;
    }
    break;
  case 1:
    if (iVar4 == 3) {
      *(undefined4 *)(lVar15 + 0x104) = 1;
      uVar18 = 7;
LAB_7101efee18:
      *(undefined4 *)(lVar15 + 0xbc) = uVar18;
    }
    else if (iVar4 == 2) {
      uVar21 = 0x500000002;
LAB_7101efede0:
      *(undefined8 *)(lVar15 + 0xbc) = uVar21;
      *(undefined4 *)(lVar15 + 0x104) = 2;
    }
    else if (iVar4 == 0) {
      *(undefined4 *)(lVar15 + 0x104) = 1;
      uVar18 = 2;
      goto LAB_7101efee18;
    }
    break;
  case 2:
    if (iVar4 == 3) {
      *(undefined4 *)(lVar15 + 0x104) = 3;
      *(undefined8 *)(lVar15 + 0xbc) = 0x300000004;
      uVar18 = 7;
LAB_7101efee08:
      *(undefined4 *)(lVar15 + 0xc4) = uVar18;
    }
    else {
      if (iVar4 == 1) {
        uVar21 = 0x300000004;
        goto LAB_7101efede0;
      }
      if (iVar4 == 0) {
        *(undefined4 *)(lVar15 + 0x104) = 1;
        uVar18 = 4;
        goto LAB_7101efee18;
      }
    }
    break;
  case 3:
    if (iVar4 == 2) {
      *(undefined8 *)(lVar15 + 0xbc) = 0x200000006;
      *(undefined4 *)(lVar15 + 0x104) = 3;
      uVar18 = 5;
      goto LAB_7101efee08;
    }
    if (iVar4 == 1) {
      *(undefined4 *)(lVar15 + 0x104) = 1;
      uVar18 = 6;
      goto LAB_7101efee18;
    }
    if (iVar4 == 0) {
      uVar21 = 0x200000006;
      goto LAB_7101efede0;
    }
  }
  *(int *)(lVar20 + 0x128) = iVar7;
  *(int *)(lVar15 + 0x130) = iVar7;
LAB_7101efee24:
  if (*param_1 == 0) {
    FUN_7103776640(&local_12c0,(long)puVar1,(byte ****)"set_part_result_help_l",puVar11,uVar12,
                   pppplVar14,in_x5,in_x6,in_x7);
    FUN_7103776910(&local_12b0,(long)&local_12c0,(long ****)"set_txt_icon",puVar11,uVar12,pppplVar14
                   ,in_x5,in_x6,in_x7);
    uVar17 = local_12a8;
    plVar22 = *(long **)(local_12a8 + 0x10);
    if (plVar22 != (long *)0x0) {
      pbVar10 = (byte *)plVar22[0x1c];
      *(undefined4 *)((long)plVar22 + 0x25c) = local_130c;
      if (((pbVar10 != (byte *)0x0) && (*pbVar10 != 0x23)) && (*pbVar10 != 0x40)) {
        puVar8 = (ushort *)FUN_71037a4450((long *)*DAT_710593bc60,pbVar10);
        local_12d0 = (undefined **)CONCAT44(local_12d0._4_4_,*(undefined4 *)((long)plVar22 + 0x25c))
        ;
        memset(auStack_1070,0,0x1000);
        uVar6 = FUN_71037ae170((long)auStack_1070,puVar8,(int *)&local_12d0);
        puVar11 = (undefined *)(ulong)uVar6;
        uVar12 = 0;
        FUN_71037a2270(plVar22,auStack_1070,uVar6,0);
      }
    }
    local_12b0 = &PTR_FUN_710523d9a8;
    local_12a8 = 0;
    if (uVar17 != 0) {
      FUN_710392eb40(uVar17);
    }
    uVar17 = local_12b8;
    local_12c0 = &PTR_FUN_710523d988;
    local_12b8 = 0;
    if (uVar17 != 0) {
      uVar19 = *(ulong *)(uVar17 + 0x18);
      *(undefined ***)(uVar17 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar17 + 0x18) = 0;
      if (uVar19 != 0) {
        FUN_710392eb40(uVar19);
      }
      FUN_710392eb40(uVar17);
    }
    FUN_7103776640(&local_12c0,(long)puVar1,(byte ****)"set_part_result_help_c",puVar11,uVar12,
                   pppplVar14,in_x5,in_x6,in_x7);
    FUN_7103776910(&local_12b0,(long)&local_12c0,(long ****)"set_txt_icon",puVar11,uVar12,pppplVar14
                   ,in_x5,in_x6,in_x7);
    uVar17 = local_12a8;
    plVar22 = *(long **)(local_12a8 + 0x10);
    if (plVar22 != (long *)0x0) {
      pbVar10 = (byte *)plVar22[0x1c];
      *(undefined4 *)((long)plVar22 + 0x25c) = local_130c;
      if (((pbVar10 != (byte *)0x0) && (*pbVar10 != 0x23)) && (*pbVar10 != 0x40)) {
        puVar8 = (ushort *)FUN_71037a4450((long *)*DAT_710593bc60,pbVar10);
        local_12d0 = (undefined **)CONCAT44(local_12d0._4_4_,*(undefined4 *)((long)plVar22 + 0x25c))
        ;
        memset(auStack_1070,0,0x1000);
        uVar6 = FUN_71037ae170((long)auStack_1070,puVar8,(int *)&local_12d0);
        puVar11 = (undefined *)(ulong)uVar6;
        uVar12 = 0;
        FUN_71037a2270(plVar22,auStack_1070,uVar6,0);
      }
    }
    local_12b0 = &PTR_FUN_710523d9a8;
    local_12a8 = 0;
    if (uVar17 != 0) {
      FUN_710392eb40(uVar17);
    }
    uVar17 = local_12b8;
    local_12c0 = &PTR_FUN_710523d988;
    local_12b8 = 0;
    if (uVar17 != 0) {
      uVar19 = *(ulong *)(uVar17 + 0x18);
      *(undefined ***)(uVar17 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar17 + 0x18) = 0;
      if (uVar19 != 0) {
        FUN_710392eb40(uVar19);
      }
      FUN_710392eb40(uVar17);
    }
    FUN_7103776640(&local_12c0,(long)puVar1,(byte ****)"set_part_result_help_r",puVar11,uVar12,
                   pppplVar14,in_x5,in_x6,in_x7);
    FUN_7103776910(&local_12b0,(long)&local_12c0,(long ****)"set_txt_icon",puVar11,uVar12,pppplVar14
                   ,in_x5,in_x6,in_x7);
    uVar17 = local_12a8;
    plVar22 = *(long **)(local_12a8 + 0x10);
    if (plVar22 != (long *)0x0) {
      pbVar10 = (byte *)plVar22[0x1c];
      *(undefined4 *)((long)plVar22 + 0x25c) = local_130c;
      if (((pbVar10 != (byte *)0x0) && (*pbVar10 != 0x23)) && (*pbVar10 != 0x40)) {
        puVar8 = (ushort *)FUN_71037a4450((long *)*DAT_710593bc60,pbVar10);
        local_12d0 = (undefined **)CONCAT44(local_12d0._4_4_,*(undefined4 *)((long)plVar22 + 0x25c))
        ;
        memset(auStack_1070,0,0x1000);
        uVar6 = FUN_71037ae170((long)auStack_1070,puVar8,(int *)&local_12d0);
        FUN_71037a2270(plVar22,auStack_1070,uVar6,0);
      }
    }
    local_12b0 = &PTR_FUN_710523d9a8;
    local_12a8 = 0;
    if (uVar17 != 0) {
      FUN_710392eb40(uVar17);
    }
    uVar17 = local_12b8;
    local_12c0 = &PTR_FUN_710523d988;
    local_12b8 = 0;
    if (uVar17 != 0) {
      uVar19 = *(ulong *)(uVar17 + 0x18);
      *(undefined ***)(uVar17 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar17 + 0x18) = 0;
      if (uVar19 != 0) {
        FUN_710392eb40(uVar19);
      }
      FUN_710392eb40(uVar17);
    }
  }
  if (0 < (int)param_1[0x7d]) {
    param_1[0x7d] = param_1[0x7d] - 1;
  }
  *(undefined1 *)(param_1 + 0xae) = 0;
  return;
}

