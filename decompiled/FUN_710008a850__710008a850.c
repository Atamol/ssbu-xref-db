// addr:      710008a850
// offset:    0x8a850
// name:      FUN_710008a850
// mangled:   
// signature: undefined8 __cdecl FUN_710008a850(long param_1, undefined8 param_2)


undefined8 FUN_710008a850(long param_1,undefined8 param_2)

{
  bool bVar1;
  short sVar2;
  undefined4 uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  ushort uVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  undefined1 *puVar12;
  undefined8 *puVar13;
  uint uVar14;
  int iVar15;
  ulong uVar16;
  uint uVar17;
  ushort local_418 [4];
  undefined1 *local_410;
  undefined8 *local_408;
  undefined8 uStack_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8 [32];
  undefined1 auStack_2e8 [4];
  short local_2e4 [2];
  undefined8 local_2e0;
  char *local_2d8 [3];
  undefined1 auStack_2c0 [608];
  
  if (*(long *)(param_1 + 0x340) == 0) {
    return 0;
  }
  lVar9 = *(long *)(*(long *)(param_1 + 0x340) + 8);
  memset(auStack_2e8,0,0x280);
  if (*(long *)(param_1 + 0x78) == 0) {
    uVar14 = 0;
    uVar4 = 0;
  }
  else {
    uVar5 = FUN_7100038e90(lVar9,0,0,"sysPosAttr");
    bVar1 = (int)uVar5 != -1;
    if (bVar1) {
      FUN_71000312b0(auStack_2e8);
      local_2d8[0] = "sysPosAttr";
      local_2e4[0] = (**(code **)(**(long **)(param_1 + 0x78) + 0x38))(*(long **)(param_1 + 0x78),0)
      ;
      local_2e0._4_4_ =
           (**(code **)(**(long **)(param_1 + 0x78) + 0x40))(*(long **)(param_1 + 0x78),0);
      local_2e0._0_4_ =
           (**(code **)(**(long **)(param_1 + 0x78) + 0x50))(*(long **)(param_1 + 0x78),0);
    }
    uVar14 = (uint)bVar1;
    uVar5 = FUN_7100038e90(lVar9,0,0,"sysNormalAttr");
    if ((int)uVar5 != -1) {
      uVar5 = (ulong)uVar14;
      FUN_71000312b0(auStack_2e8 + uVar5 * 0x28);
      local_2d8[uVar5 * 5] = "sysNormalAttr";
      sVar2 = (**(code **)(**(long **)(param_1 + 0x78) + 0x38))(*(long **)(param_1 + 0x78),1);
      local_2e4[uVar5 * 0x14] = sVar2;
      uVar3 = (**(code **)(**(long **)(param_1 + 0x78) + 0x40))(*(long **)(param_1 + 0x78),1);
      *(undefined4 *)((long)local_2d8 + uVar5 * 0x28 + -4) = uVar3;
      uVar3 = (**(code **)(**(long **)(param_1 + 0x78) + 0x50))(*(long **)(param_1 + 0x78),1);
      uVar14 = uVar14 + 1;
      *(undefined4 *)(local_2d8 + uVar5 * 5 + -1) = uVar3;
    }
    uVar5 = FUN_7100038e90(lVar9,0,0,"sysTangentAttr");
    if ((int)uVar5 != -1) {
      uVar5 = (ulong)uVar14;
      FUN_71000312b0(auStack_2e8 + uVar5 * 0x28);
      local_2d8[uVar5 * 5] = "sysTangentAttr";
      sVar2 = (**(code **)(**(long **)(param_1 + 0x78) + 0x38))(*(long **)(param_1 + 0x78),2);
      local_2e4[uVar5 * 0x14] = sVar2;
      uVar3 = (**(code **)(**(long **)(param_1 + 0x78) + 0x40))(*(long **)(param_1 + 0x78),2);
      *(undefined4 *)((long)local_2d8 + uVar5 * 0x28 + -4) = uVar3;
      uVar3 = (**(code **)(**(long **)(param_1 + 0x78) + 0x50))(*(long **)(param_1 + 0x78),2);
      uVar14 = uVar14 + 1;
      *(undefined4 *)(local_2d8 + uVar5 * 5 + -1) = uVar3;
    }
    uVar5 = FUN_7100038e90(lVar9,0,0,"sysVertexColor0Attr");
    if ((int)uVar5 != -1) {
      uVar5 = (ulong)uVar14;
      FUN_71000312b0(auStack_2e8 + uVar5 * 0x28);
      local_2d8[uVar5 * 5] = "sysVertexColor0Attr";
      sVar2 = (**(code **)(**(long **)(param_1 + 0x78) + 0x38))(*(long **)(param_1 + 0x78),3);
      local_2e4[uVar5 * 0x14] = sVar2;
      uVar3 = (**(code **)(**(long **)(param_1 + 0x78) + 0x40))(*(long **)(param_1 + 0x78),3);
      *(undefined4 *)((long)local_2d8 + uVar5 * 0x28 + -4) = uVar3;
      uVar3 = (**(code **)(**(long **)(param_1 + 0x78) + 0x50))(*(long **)(param_1 + 0x78),3);
      uVar14 = uVar14 + 1;
      *(undefined4 *)(local_2d8 + uVar5 * 5 + -1) = uVar3;
    }
    uVar5 = FUN_7100038e90(lVar9,0,0,"sysTexCoordAttr");
    if ((int)uVar5 != -1) {
      uVar5 = (ulong)uVar14;
      FUN_71000312b0(auStack_2e8 + uVar5 * 0x28);
      local_2d8[uVar5 * 5] = "sysTexCoordAttr";
      sVar2 = (**(code **)(**(long **)(param_1 + 0x78) + 0x38))(*(long **)(param_1 + 0x78),4);
      local_2e4[uVar5 * 0x14] = sVar2;
      uVar3 = (**(code **)(**(long **)(param_1 + 0x78) + 0x40))(*(long **)(param_1 + 0x78),4);
      *(undefined4 *)((long)local_2d8 + uVar5 * 0x28 + -4) = uVar3;
      uVar3 = (**(code **)(**(long **)(param_1 + 0x78) + 0x50))(*(long **)(param_1 + 0x78),4);
      uVar14 = uVar14 + 1;
      *(undefined4 *)(local_2d8 + uVar5 * 5 + -1) = uVar3;
    }
    uVar4 = (**(code **)(**(long **)(param_1 + 0x78) + 0x30))();
  }
  uVar5 = FUN_7100038e90(lVar9,0,0,"sysLocalPosAttr");
  bVar1 = (int)uVar5 == -1;
  if (bVar1) {
    uVar10 = 0xffffffff;
    uVar17 = uVar4;
  }
  else {
    uVar5 = (ulong)uVar14;
    FUN_71000312b0(auStack_2e8 + uVar5 * 0x28);
    local_2d8[uVar5 * 5 + -1] = (char *)0x190500000000;
    local_2d8[uVar5 * 5] = "sysLocalPosAttr";
    local_2e4[uVar5 * 0x14] = (short)uVar4;
    uVar17 = uVar4 + 1;
    uVar10 = uVar4;
  }
  bVar1 = !bVar1;
  uVar16 = (ulong)bVar1;
  *(uint *)(param_1 + 0x3a4) = uVar10;
  uVar5 = FUN_7100038e90(lVar9,0,0,"sysLocalVecAttr");
  if ((int)uVar5 == -1) {
    uVar7 = 0xffffffff;
    uVar10 = uVar17;
  }
  else {
    uVar10 = (uint)bVar1;
    uVar5 = (ulong)(uVar10 + uVar14);
    FUN_71000312b0(auStack_2e8 + uVar5 * 0x28);
    local_2e4[uVar5 * 0x14] = (short)uVar17;
    uVar16 = (ulong)(uVar10 + 1);
    local_2d8[uVar5 * 5 + -1] = (char *)0x190500000000;
    local_2d8[uVar5 * 5] = "sysLocalVecAttr";
    uVar10 = uVar17 + 1;
    uVar7 = uVar17;
  }
  *(uint *)(param_1 + 0x3a8) = uVar7;
  uVar5 = FUN_7100038e90(lVar9,0,0,"sysLocalDiffAttr");
  if ((int)uVar5 == -1) {
    uVar7 = 0xffffffff;
    uVar17 = uVar10;
  }
  else {
    uVar5 = (ulong)((int)uVar16 + uVar14);
    FUN_71000312b0(auStack_2e8 + uVar5 * 0x28);
    local_2e4[uVar5 * 0x14] = (short)uVar10;
    uVar16 = (ulong)((int)uVar16 + 1);
    local_2d8[uVar5 * 5 + -1] = (char *)0x190500000000;
    local_2d8[uVar5 * 5] = "sysLocalDiffAttr";
    uVar17 = uVar10 + 1;
    uVar7 = uVar10;
  }
  *(uint *)(param_1 + 0x3ac) = uVar7;
  uVar5 = FUN_7100038e90(lVar9,0,0,"sysScaleAttr");
  if ((int)uVar5 == -1) {
    uVar7 = 0xffffffff;
    uVar10 = uVar17;
  }
  else {
    uVar5 = (ulong)((int)uVar16 + uVar14);
    FUN_71000312b0(auStack_2e8 + uVar5 * 0x28);
    local_2e4[uVar5 * 0x14] = (short)uVar17;
    uVar16 = (ulong)((int)uVar16 + 1);
    local_2d8[uVar5 * 5 + -1] = (char *)0x190500000000;
    local_2d8[uVar5 * 5] = "sysScaleAttr";
    uVar10 = uVar17 + 1;
    uVar7 = uVar17;
  }
  *(uint *)(param_1 + 0x3b0) = uVar7;
  uVar5 = FUN_7100038e90(lVar9,0,0,"sysRandomAttr");
  if ((int)uVar5 == -1) {
    uVar7 = 0xffffffff;
    uVar17 = uVar10;
  }
  else {
    uVar5 = (ulong)((int)uVar16 + uVar14);
    FUN_71000312b0(auStack_2e8 + uVar5 * 0x28);
    local_2e4[uVar5 * 0x14] = (short)uVar10;
    uVar16 = (ulong)((int)uVar16 + 1);
    local_2d8[uVar5 * 5 + -1] = (char *)0x190500000000;
    local_2d8[uVar5 * 5] = "sysRandomAttr";
    uVar17 = uVar10 + 1;
    uVar7 = uVar10;
  }
  *(uint *)(param_1 + 0x3b4) = uVar7;
  uVar5 = FUN_7100038e90(lVar9,0,0,"sysInitRotateAttr");
  if ((int)uVar5 == -1) {
    uVar7 = 0xffffffff;
    uVar10 = uVar17;
  }
  else {
    uVar5 = (ulong)((int)uVar16 + uVar14);
    FUN_71000312b0(auStack_2e8 + uVar5 * 0x28);
    local_2e4[uVar5 * 0x14] = (short)uVar17;
    uVar16 = (ulong)((int)uVar16 + 1);
    local_2d8[uVar5 * 5 + -1] = (char *)0x190500000000;
    local_2d8[uVar5 * 5] = "sysInitRotateAttr";
    uVar10 = uVar17 + 1;
    uVar7 = uVar17;
  }
  *(uint *)(param_1 + 0x3b8) = uVar7;
  uVar5 = FUN_7100038e90(lVar9,0,0,"sysColor0Attr");
  if ((int)uVar5 == -1) {
    uVar7 = 0xffffffff;
    uVar17 = uVar10;
  }
  else {
    uVar5 = (ulong)((int)uVar16 + uVar14);
    FUN_71000312b0(auStack_2e8 + uVar5 * 0x28);
    local_2e4[uVar5 * 0x14] = (short)uVar10;
    uVar16 = (ulong)((int)uVar16 + 1);
    local_2d8[uVar5 * 5 + -1] = (char *)0x190500000000;
    local_2d8[uVar5 * 5] = "sysColor0Attr";
    uVar17 = uVar10 + 1;
    uVar7 = uVar10;
  }
  *(uint *)(param_1 + 0x3bc) = uVar7;
  uVar5 = FUN_7100038e90(lVar9,0,0,"sysColor1Attr");
  if ((int)uVar5 == -1) {
    uVar7 = 0xffffffff;
    uVar10 = uVar17;
  }
  else {
    uVar5 = (ulong)((int)uVar16 + uVar14);
    FUN_71000312b0(auStack_2e8 + uVar5 * 0x28);
    local_2e4[uVar5 * 0x14] = (short)uVar17;
    uVar16 = (ulong)((int)uVar16 + 1);
    local_2d8[uVar5 * 5 + -1] = (char *)0x190500000000;
    local_2d8[uVar5 * 5] = "sysColor1Attr";
    uVar10 = uVar17 + 1;
    uVar7 = uVar17;
  }
  *(uint *)(param_1 + 0x3c0) = uVar7;
  uVar5 = FUN_7100038e90(lVar9,0,0,"sysEmtMat0Attr");
  if ((int)uVar5 == -1) {
    uVar7 = 0xffffffff;
    uVar17 = uVar10;
  }
  else {
    uVar5 = (ulong)((int)uVar16 + uVar14);
    FUN_71000312b0(auStack_2e8 + uVar5 * 0x28);
    local_2e4[uVar5 * 0x14] = (short)uVar10;
    uVar16 = (ulong)((int)uVar16 + 1);
    local_2d8[uVar5 * 5 + -1] = (char *)0x190500000000;
    local_2d8[uVar5 * 5] = "sysEmtMat0Attr";
    uVar17 = uVar10 + 1;
    uVar7 = uVar10;
  }
  *(uint *)(param_1 + 0x3c4) = uVar7;
  uVar5 = FUN_7100038e90(lVar9,0,0,"sysEmtMat1Attr");
  if ((int)uVar5 == -1) {
    uVar7 = 0xffffffff;
    uVar10 = uVar17;
  }
  else {
    uVar5 = (ulong)((int)uVar16 + uVar14);
    FUN_71000312b0(auStack_2e8 + uVar5 * 0x28);
    local_2e4[uVar5 * 0x14] = (short)uVar17;
    uVar16 = (ulong)((int)uVar16 + 1);
    local_2d8[uVar5 * 5 + -1] = (char *)0x190500000000;
    local_2d8[uVar5 * 5] = "sysEmtMat1Attr";
    uVar10 = uVar17 + 1;
    uVar7 = uVar17;
  }
  *(uint *)(param_1 + 0x3c8) = uVar7;
  uVar5 = FUN_7100038e90(lVar9,0,0,"sysEmtMat2Attr");
  iVar15 = (int)uVar16;
  if ((int)uVar5 == -1) {
    *(undefined4 *)(param_1 + 0x3cc) = 0xffffffff;
    if (iVar15 == 0 && uVar14 == 0) goto LAB_710008afd4;
  }
  else {
    uVar5 = (ulong)(iVar15 + uVar14);
    FUN_71000312b0(auStack_2e8 + uVar5 * 0x28);
    local_2e4[uVar5 * 0x14] = (short)uVar10;
    uVar16 = (ulong)(iVar15 + 1U);
    local_2d8[uVar5 * 5 + -1] = (char *)0x190500000000;
    local_2d8[uVar5 * 5] = "sysEmtMat2Attr";
    *(uint *)(param_1 + 0x3cc) = uVar10;
    uVar10 = uVar10 + 1;
    if (iVar15 + 1U == 0 && uVar14 == 0) {
LAB_710008afd4:
      uVar5 = FUN_7100038e90(lVar9,0,0,"sysEmitterPluginAttr0");
      puVar12 = auStack_2e8 + (long)(int)uVar10 * 0x28;
      lVar6 = (long)(int)uVar10;
      FUN_71000312b0(puVar12);
      bVar1 = (int)uVar5 != -1;
      if (bVar1) {
        uVar10 = (uint)(lVar6 + 1);
        puVar12 = auStack_2c0 + lVar6 * 0x28;
        local_2d8[lVar6 * 5 + -1] = (char *)0x190500000000;
        local_2d8[lVar6 * 5] = "sysEmitterPluginAttr0";
        local_2e4[lVar6 * 0x14] = 0;
        lVar6 = lVar6 + 1;
      }
      uVar8 = (ushort)bVar1;
      uVar5 = FUN_7100038e90(lVar9,0,0,"sysEmitterPluginAttr1");
      FUN_71000312b0(puVar12);
      lVar11 = lVar6;
      if ((int)uVar5 != -1) {
        lVar11 = (long)(int)uVar10 + 1;
        puVar12 = auStack_2e8 + lVar11 * 0x28;
        uVar8 = uVar8 + 1;
        uVar10 = (uint)lVar11;
        local_2d8[lVar6 * 5 + -1] = (char *)0x190500000010;
        local_2d8[lVar6 * 5] = "sysEmitterPluginAttr1";
        local_2e4[lVar6 * 0x14] = 0;
      }
      uVar5 = FUN_7100038e90(lVar9,0,0,"sysEmitterPluginAttr2");
      FUN_71000312b0(puVar12);
      lVar6 = lVar11;
      if ((int)uVar5 != -1) {
        lVar6 = (long)(int)uVar10 + 1;
        puVar12 = auStack_2e8 + lVar6 * 0x28;
        uVar8 = uVar8 + 1;
        uVar10 = (uint)lVar6;
        local_2d8[lVar11 * 5 + -1] = (char *)0x190500000020;
        local_2d8[lVar11 * 5] = "sysEmitterPluginAttr2";
        local_2e4[lVar11 * 0x14] = 0;
      }
      uVar5 = FUN_7100038e90(lVar9,0,0,"sysEmitterPluginAttr3");
      FUN_71000312b0(puVar12);
      lVar11 = lVar6;
      if ((int)uVar5 != -1) {
        lVar11 = (long)(int)uVar10 + 1;
        puVar12 = auStack_2e8 + lVar11 * 0x28;
        uVar8 = uVar8 + 1;
        local_2d8[lVar6 * 5 + -1] = (char *)0x190500000030;
        local_2d8[lVar6 * 5] = "sysEmitterPluginAttr3";
        local_2e4[lVar6 * 0x14] = 0;
      }
      uVar5 = FUN_7100038e90(lVar9,0,0,"sysEmitterPluginAttr4");
      FUN_71000312b0(puVar12);
      if ((int)uVar5 != -1) {
        uVar8 = uVar8 + 1;
        local_2d8[lVar11 * 5 + -1] = (char *)0x190500000040;
        local_2d8[lVar11 * 5] = "sysEmitterPluginAttr4";
        local_2e4[lVar11 * 0x14] = 0;
      }
      *(undefined4 *)(param_1 + 0x3d0) = 0;
      goto LAB_710008b1bc;
    }
  }
  uVar8 = 0;
LAB_710008b1bc:
  local_3e8[0x1e] = 0;
  local_3e8[0x1f] = 0;
  local_3e8[0x1c] = 0;
  local_3e8[0x1d] = 0;
  local_3e8[0x1a] = 0;
  local_3e8[0x1b] = 0;
  local_3e8[0x18] = 0;
  local_3e8[0x19] = 0;
  local_3e8[0x16] = 0;
  local_3e8[0x17] = 0;
  local_3e8[0x14] = 0;
  local_3e8[0x15] = 0;
  local_3e8[0x12] = 0;
  local_3e8[0x13] = 0;
  local_3e8[0x10] = 0;
  local_3e8[0x11] = 0;
  local_3e8[0xe] = 0;
  local_3e8[0xf] = 0;
  local_3e8[0xc] = 0;
  local_3e8[0xd] = 0;
  local_3e8[10] = 0;
  local_3e8[0xb] = 0;
  local_3e8[8] = 0;
  local_3e8[9] = 0;
  local_3e8[6] = 0;
  local_3e8[7] = 0;
  local_3e8[4] = 0;
  local_3e8[5] = 0;
  local_3e8[2] = 0;
  local_3e8[3] = 0;
  local_3e8[0] = 0;
  local_3e8[1] = 0;
  FUN_71000312d0(local_3e8);
  if ((uVar14 != 0) && (0 < (int)uVar4)) {
    uVar5 = 0;
    puVar13 = local_3e8;
    do {
      uVar3 = (**(code **)(**(long **)(param_1 + 0x78) + 0x10))
                        (*(long **)(param_1 + 0x78),uVar5 & 0xffffffff);
      uVar5 = uVar5 + 1;
      *(undefined4 *)puVar13 = uVar3;
      puVar13 = puVar13 + 2;
    } while (uVar4 != uVar5);
  }
  if ((int)uVar16 != 0) {
    puVar13 = local_3e8 + (long)(int)uVar4 * 2;
    uVar5 = uVar16;
    do {
      FUN_71000312d0(puVar13);
      uVar5 = uVar5 - 1;
      *puVar13 = 0x100000010;
      puVar13 = puVar13 + 2;
    } while (uVar5 != 0);
  }
  if (uVar8 != 0) {
    local_3e8[0] = CONCAT44(local_3e8[0]._4_4_,0x50);
  }
  local_3f8 = 0;
  uStack_3f0 = 0;
  local_408 = (undefined8 *)0x0;
  uStack_400 = 0;
  local_418[0] = 0;
  local_418[1] = 0;
  local_418[2] = 0;
  local_418[3] = 0;
  local_410 = (undefined1 *)0x0;
  FUN_71000312e0((undefined4 *)local_418);
  local_410 = auStack_2e8;
  local_408 = local_3e8;
  local_418[1] = (short)uVar16 + (short)uVar4 + (ushort)(uVar8 != 0);
  local_418[0] = (short)uVar16 + (short)uVar14 + uVar8;
  lVar6 = FUN_71000399e0(local_418);
  FUN_7100039a70(param_1 + 0x370,*(undefined8 *)(param_1 + 0x360),(int)lVar6);
  FUN_7100039a90((undefined1 *)(param_1 + 0x370),param_2,local_418,lVar9);
  return 1;
}

