// addr:      7102eaaea0
// offset:    0x2eaaea0
// name:      FUN_7102eaaea0
// mangled:   
// signature: undefined __cdecl FUN_7102eaaea0(undefined8 * param_1, long param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, long * * * param_7, long * * * param_8)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7102eaaea0(undefined8 *param_1,long param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,long ***param_7,long ***param_8)

{
  long ***ppplVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  long ****pppplVar5;
  char *pcVar6;
  long ****pppplVar7;
  byte ****ppppbVar8;
  long ****pppplVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  float fVar15;
  undefined4 uVar16;
  uint uVar17;
  long ***local_50;
  undefined4 local_44;
  
  pppplVar9 = &local_50;
  pppplVar5 = &local_50;
  pppplVar7 = &local_50;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x23] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[0x21] = param_2;
  param_1[0x22] = param_3;
  uVar3 = _DAT_7107521008;
  uVar11 = _ConstantZero;
  param_1[0x29] = _DAT_7107521008;
  param_1[0x28] = uVar11;
  param_1[0x25] = uVar3;
  param_1[0x24] = uVar11;
  param_1[0x27] = uVar3;
  param_1[0x26] = uVar11;
  *(undefined8 *)((long)param_1 + 0x155) = 0;
  param_1[0x2a] = 0;
  param_1[0x2e] = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x3e) = 0;
  param_1[0x48] = param_5;
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x2d] = uVar3;
  param_1[0x2c] = uVar11;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x37] = uVar3;
  param_1[0x36] = uVar11;
  param_1[0x39] = uVar3;
  param_1[0x38] = uVar11;
  param_1[0x3b] = uVar3;
  param_1[0x3a] = uVar11;
  param_1[0x3d] = uVar3;
  param_1[0x3c] = uVar11;
  param_1[0x41] = uVar3;
  param_1[0x40] = uVar11;
  param_1[0x43] = uVar3;
  param_1[0x42] = uVar11;
  param_1[0x45] = uVar3;
  param_1[0x44] = uVar11;
  param_1[0x47] = uVar3;
  param_1[0x46] = uVar11;
  ppppbVar8 = param_4;
  puVar2 = (undefined8 *)FUN_710392e290(0x10,0xf0,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar2 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_44 = 0;
      local_50 = (long ***)&DAT_000000f0;
      uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_44);
      if (((uVar3 & 1) != 0) &&
         (puVar2 = (undefined8 *)
                   FUN_710392e290(0x10,0xf0,pppplVar9,ppppbVar8,param_5,param_6,param_7,param_8),
         puVar2 != (undefined8 *)0x0)) goto LAB_7102eaafc0;
    }
    puVar2 = (undefined8 *)0x0;
  }
LAB_7102eaafc0:
  ppppbVar8 = (byte ****)0x0;
  pppplVar9 = (long ****)0x0;
  uVar10 = 0;
  FUN_71031460f0(puVar2,param_2,(byte *)param_4,(byte ****)0x0,(long ****)0x0,(byte *)0x0,param_7,
                 param_8);
  param_1[0x23] = puVar2;
  param_1[5] = "00_Floor01L";
  param_1[0x15] = "00_Floor01R";
  uVar11 = *(undefined8 *)((long)param_3 + 0x5c);
  param_1[0xd] = (ulong)*(uint *)((long)param_3 + 100);
  param_1[0xc] = uVar11;
  fVar15 = *(float *)((long)param_3 + 0x5c);
  uVar16 = *(undefined4 *)(param_3 + 0xc);
  param_1[0x1d] = (ulong)*(uint *)((long)param_3 + 100);
  param_1[0x1c] = CONCAT44(uVar16,-fVar15);
  ppplVar1 = param_3[0xd];
  param_1[0xf] = (ulong)*(uint *)(param_3 + 0xe);
  param_1[0xe] = ppplVar1;
  fVar15 = *(float *)(param_3 + 0xd);
  lVar14 = param_1[0x21];
  uVar17 = *(uint *)(param_3 + 0xe);
  uVar16 = *(undefined4 *)((long)param_3 + 0x6c);
  *(undefined1 *)(param_1 + 0x49) = 0;
  param_1[7] = 0xc0f00000;
  param_1[6] = 0x428e3e77c3aef873;
  param_1[9] = 0xc1800000;
  param_1[8] = 0;
  param_1[0x1f] = (ulong)uVar17;
  param_1[0x1e] = CONCAT44(uVar16,-fVar15);
  uVar11 = _ConstantZero;
  uVar3 = _DAT_7107521008 & 0xffffffff;
  param_1[0xb] = 0xc0f00000;
  param_1[10] = 0xbf045a1dc29fae98;
  param_1[0x17] = 0x40cdb22d;
  param_1[0x16] = 0x4297ddb243aef893;
  param_1[0x19] = 0x41800000;
  param_1[0x18] = 0;
  param_1[0x1b] = 0x40cdb22d;
  param_1[0x1a] = 0xbf045a1d429fae98;
  param_1[0x31] = uVar3;
  param_1[0x30] = uVar11;
  param_1[0x33] = uVar3;
  param_1[0x32] = uVar11;
  plVar4 = (long *)FUN_710392e290(0x10,0xf0,(long ****)param_4,ppppbVar8,pppplVar9,uVar10,param_7,
                                  param_8);
  if (plVar4 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_44 = 0;
      local_50 = (long ***)&DAT_000000f0;
      uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_44);
      if (((uVar3 & 1) != 0) &&
         (plVar4 = (long *)FUN_710392e290(0x10,0xf0,pppplVar5,ppppbVar8,pppplVar9,uVar10,param_7,
                                          param_8), plVar4 != (long *)0x0)) goto LAB_7102eab128;
    }
    plVar4 = (long *)0x0;
  }
LAB_7102eab128:
  pcVar6 = "S13_e";
  ppppbVar8 = (byte ****)0x0;
  pppplVar9 = (long ****)0x0;
  uVar11 = 0;
  FUN_71031460f0(plVar4,lVar14,(byte *)"S13_e",(byte ****)0x0,(long ****)0x0,(byte *)0x0,param_7,
                 param_8);
  *param_1 = plVar4;
  (**(code **)(*plVar4 + 0x90))(plVar4);
  FUN_7102eab650(&local_50,(long)param_1,(long ****)"S13_e",ppppbVar8,pppplVar9,uVar11,param_7,
                 param_8);
  param_1[3] = local_50;
  for (plVar4 = *(long **)(*(long *)(param_1[0x21] + 0x310) + 0xd0); uVar10 = extraout_x1,
      plVar4 != *(long **)(*(long *)(param_1[0x21] + 0x310) + 0xd8); plVar4 = plVar4 + 2) {
    if ((*(uint *)(plVar4 + 1) < 2) && (lVar14 = *plVar4, *(long *)(lVar14 + 0x68) == 0x122814e7b5))
    {
      param_1[1] = lVar14;
      lVar12 = 0;
      if (lVar14 != 0) {
        *(undefined1 *)(lVar14 + 0x110) = 0;
        FUN_71025e9d50((long *)(lVar14 + 0x108),extraout_x1,(long ****)pcVar6,ppppbVar8,pppplVar9,
                       uVar11,param_7,param_8);
        lVar14 = param_1[1];
        uVar10 = extraout_x1_01;
        if (lVar14 == 0) goto LAB_7102eab1c4;
        if ((*(char *)(lVar14 + 0xe0) != '\0') && (*(long *)(lVar14 + 200) != 0)) {
          *(undefined2 *)(*(long *)(lVar14 + 200) + 0x30) = 0x101;
        }
        if (*(long *)(lVar14 + 0xd8) != 0) {
          *(undefined1 *)(*(long *)(lVar14 + 0xd8) + 0x21) = 1;
        }
        if (*(char *)(lVar14 + 0xe0) != '\0') {
          *(undefined1 *)(*(long *)(lVar14 + 0xb0) + 0x10) = 0;
        }
        lVar12 = param_1[1];
      }
      if (lVar12 != 0) {
        if ((*(char *)(lVar12 + 0xe0) != '\0') && (*(long *)(lVar12 + 200) != 0)) {
          *(undefined2 *)(*(long *)(lVar12 + 200) + 0x32) = 0;
        }
        if (*(long *)(lVar12 + 0xd8) != 0) {
          *(undefined1 *)(*(long *)(lVar12 + 0xd8) + 0x22) = 0;
        }
      }
      goto LAB_7102eab1c4;
    }
  }
  param_1[1] = 0;
LAB_7102eab1c4:
  for (plVar4 = *(long **)(*(long *)(param_1[0x21] + 0x310) + 0xd0);
      plVar4 != *(long **)(*(long *)(param_1[0x21] + 0x310) + 0xd8); plVar4 = plVar4 + 2) {
    if ((*(uint *)(plVar4 + 1) < 2) && (lVar14 = *plVar4, *(long *)(lVar14 + 0x68) == 0x13c84db4c1))
    {
      param_1[2] = lVar14;
      lVar12 = 0;
      if (lVar14 != 0) {
        *(undefined1 *)(lVar14 + 0x110) = 0;
        FUN_71025e9d50((long *)(lVar14 + 0x108),uVar10,(long ****)pcVar6,ppppbVar8,pppplVar9,uVar11,
                       param_7,param_8);
        lVar14 = param_1[2];
        if (lVar14 == 0) goto LAB_7102eab210;
        if ((*(char *)(lVar14 + 0xe0) != '\0') && (*(long *)(lVar14 + 200) != 0)) {
          *(undefined2 *)(*(long *)(lVar14 + 200) + 0x30) = 0x101;
        }
        if (*(long *)(lVar14 + 0xd8) != 0) {
          *(undefined1 *)(*(long *)(lVar14 + 0xd8) + 0x21) = 1;
        }
        if (*(char *)(lVar14 + 0xe0) != '\0') {
          *(undefined1 *)(*(long *)(lVar14 + 0xb0) + 0x10) = 0;
        }
        lVar12 = param_1[2];
      }
      if (lVar12 != 0) {
        if ((*(char *)(lVar12 + 0xe0) != '\0') && (*(long *)(lVar12 + 200) != 0)) {
          *(undefined2 *)(*(long *)(lVar12 + 200) + 0x32) = 0;
        }
        if (*(long *)(lVar12 + 0xd8) != 0) {
          *(undefined1 *)(*(long *)(lVar12 + 0xd8) + 0x22) = 0;
        }
      }
      goto LAB_7102eab210;
    }
  }
  param_1[2] = 0;
LAB_7102eab210:
  lVar14 = param_1[0x21];
  plVar4 = (long *)FUN_710392e290(0x10,0xf0,(long ****)pcVar6,ppppbVar8,pppplVar9,uVar11,param_7,
                                  param_8);
  if (plVar4 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_44 = 0;
      local_50 = (long ***)&DAT_000000f0;
      uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_44);
      if (((uVar3 & 1) != 0) &&
         (plVar4 = (long *)FUN_710392e290(0x10,0xf0,pppplVar7,ppppbVar8,pppplVar9,uVar11,param_7,
                                          param_8), plVar4 != (long *)0x0)) goto LAB_7102eab270;
    }
    plVar4 = (long *)0x0;
  }
LAB_7102eab270:
  pcVar6 = "S13_e_02";
  ppppbVar8 = (byte ****)0x0;
  pppplVar9 = (long ****)0x0;
  uVar11 = 0;
  FUN_71031460f0(plVar4,lVar14,(byte *)"S13_e_02",(byte ****)0x0,(long ****)0x0,(byte *)0x0,param_7,
                 param_8);
  param_1[0x10] = plVar4;
  (**(code **)(*plVar4 + 0x90))(plVar4);
  FUN_7102eab650(&local_50,(long)param_1,(long ****)"S13_e_02",ppppbVar8,pppplVar9,uVar11,param_7,
                 param_8);
  param_1[0x13] = local_50;
  for (plVar4 = *(long **)(*(long *)(param_1[0x21] + 0x310) + 0xd0); uVar10 = extraout_x1_00,
      plVar4 != *(long **)(*(long *)(param_1[0x21] + 0x310) + 0xd8); plVar4 = plVar4 + 2) {
    if ((*(uint *)(plVar4 + 1) < 2) && (lVar14 = *plVar4, *(long *)(lVar14 + 0x68) == 0x12d21bdad6))
    {
      param_1[0x11] = lVar14;
      lVar12 = 0;
      if (lVar14 != 0) {
        *(undefined1 *)(lVar14 + 0x110) = 0;
        FUN_71025e9d50((long *)(lVar14 + 0x108),extraout_x1_00,(long ****)pcVar6,ppppbVar8,pppplVar9
                       ,uVar11,param_7,param_8);
        lVar14 = param_1[0x11];
        uVar10 = extraout_x1_02;
        if (lVar14 == 0) goto LAB_7102eab30c;
        if ((*(char *)(lVar14 + 0xe0) != '\0') && (*(long *)(lVar14 + 200) != 0)) {
          *(undefined2 *)(*(long *)(lVar14 + 200) + 0x30) = 0x101;
        }
        if (*(long *)(lVar14 + 0xd8) != 0) {
          *(undefined1 *)(*(long *)(lVar14 + 0xd8) + 0x21) = 1;
        }
        if (*(char *)(lVar14 + 0xe0) != '\0') {
          *(undefined1 *)(*(long *)(lVar14 + 0xb0) + 0x10) = 0;
        }
        lVar12 = param_1[0x11];
      }
      if (lVar12 != 0) {
        if ((*(char *)(lVar12 + 0xe0) != '\0') && (*(long *)(lVar12 + 200) != 0)) {
          *(undefined2 *)(*(long *)(lVar12 + 200) + 0x32) = 0;
        }
        if (*(long *)(lVar12 + 0xd8) != 0) {
          *(undefined1 *)(*(long *)(lVar12 + 0xd8) + 0x22) = 0;
        }
      }
      goto LAB_7102eab30c;
    }
  }
  param_1[0x11] = 0;
LAB_7102eab30c:
  for (plVar4 = *(long **)(*(long *)(param_1[0x21] + 0x310) + 0xd0);
      plVar4 != *(long **)(*(long *)(param_1[0x21] + 0x310) + 0xd8); plVar4 = plVar4 + 2) {
    if ((*(uint *)(plVar4 + 1) < 2) && (lVar14 = *plVar4, *(long *)(lVar14 + 0x68) == 0x13324289a2))
    {
      param_1[0x12] = lVar14;
      if (lVar14 != 0) {
        *(undefined1 *)(lVar14 + 0x110) = 0;
        FUN_71025e9d50((long *)(lVar14 + 0x108),uVar10,(long ****)pcVar6,ppppbVar8,pppplVar9,uVar11,
                       param_7,param_8);
        lVar14 = param_1[0x12];
        if (lVar14 != 0) {
          if ((*(char *)(lVar14 + 0xe0) != '\0') && (*(long *)(lVar14 + 200) != 0)) {
            *(undefined2 *)(*(long *)(lVar14 + 200) + 0x30) = 0x101;
          }
          if (*(long *)(lVar14 + 0xd8) != 0) {
            *(undefined1 *)(*(long *)(lVar14 + 0xd8) + 0x21) = 1;
          }
          if (*(char *)(lVar14 + 0xe0) != '\0') {
            *(undefined1 *)(*(long *)(lVar14 + 0xb0) + 0x10) = 0;
          }
          lVar14 = param_1[0x12];
          if (lVar14 != 0) {
            if ((*(char *)(lVar14 + 0xe0) != '\0') && (*(long *)(lVar14 + 200) != 0)) {
              *(undefined2 *)(*(long *)(lVar14 + 200) + 0x32) = 0;
            }
            if (*(long *)(lVar14 + 0xd8) != 0) {
              *(undefined1 *)(*(long *)(lVar14 + 0xd8) + 0x22) = 0;
            }
          }
        }
      }
      goto LAB_7102eab358;
    }
  }
  param_1[0x12] = 0;
LAB_7102eab358:
  plVar13 = *(long **)(*(long *)(param_1[0x21] + 0x300) + 0x18);
  plVar4 = (long *)*plVar13;
  do {
    if (plVar4 == (long *)plVar13[1]) goto LAB_7102eab3f4;
    lVar14 = *plVar4;
    plVar4 = plVar4 + 1;
  } while ((*(ulong *)(lVar14 + 0xa0) & 0xffffffffff) != 0x7b569df99);
  puVar2 = *(undefined8 **)(lVar14 + 0x130);
  param_1[0x48] = puVar2;
  if (puVar2 != (undefined8 *)0x0) {
    FUN_71025f55b0((undefined8 *)*puVar2,(undefined8 *)puVar2[1],"IPP0002");
    FUN_71025f55b0(*(undefined8 **)param_1[0x48],(undefined8 *)((undefined8 *)param_1[0x48])[1],
                   "IPP0003");
    FUN_71025f55b0(*(undefined8 **)param_1[0x48],(undefined8 *)((undefined8 *)param_1[0x48])[1],
                   "IPP0004");
    FUN_71025f55b0(*(undefined8 **)param_1[0x48],(undefined8 *)((undefined8 *)param_1[0x48])[1],
                   "IPP0005");
  }
LAB_7102eab3f4:
  DAT_710532e740 = 0xbf800000;
  DAT_71051468f0 = (float)(uint)((int)*(float *)(param_1[0x22] + 0x1c8) << 2);
  DAT_710532e744 = 0;
  DAT_710532e748 = 1;
  return;
}

