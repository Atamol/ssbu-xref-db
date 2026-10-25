// addr:      7101e9fb20
// offset:    0x1e9fb20
// name:      FUN_7101e9fb20
// mangled:   
// signature: undefined __cdecl FUN_7101e9fb20(long param_1, long * param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101e9fb20(long param_1,long *param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 *puVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined4 uVar5;
  long *plVar6;
  long *plVar7;
  long ***ppplVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  uint *puVar13;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 uVar14;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 extraout_x1_08;
  undefined8 extraout_x1_09;
  undefined *puVar15;
  long ****pppplVar16;
  byte ****ppppbVar17;
  uint uVar18;
  long ***ppplVar19;
  int *piVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  long ***ppplVar25;
  long ***ppplVar26;
  void *__src;
  long ****__n;
  undefined1 auVar27 [16];
  undefined **local_a8;
  long *local_a0;
  undefined **local_98;
  long *local_90;
  long ***local_88;
  long ***local_80;
  undefined8 local_70;
  undefined4 local_64;
  
  puVar9 = (undefined8 *)FUN_710392e290(0x10,0x88,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar9 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_98 = (undefined **)((ulong)local_98 & 0xffffffff00000000);
      local_88 = (long ***)&DAT_00000088;
      param_3 = &local_88;
      uVar10 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_98);
      if (((uVar10 & 1) != 0) &&
         (puVar9 = (undefined8 *)
                   FUN_710392e290(0x10,0x88,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar9 != (undefined8 *)0x0)) goto LAB_7101e9fba4;
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_7101e9fba4:
  *puVar9 = &PTR_FUN_71050b2370;
  puVar9[1] = 0;
  puVar9[0xc] = 0;
  puVar9[0xd] = 0x1ffffffff;
  puVar9[2] = 0;
  puVar9[3] = 0;
  *(undefined1 *)(puVar9 + 0xb) = 0;
  puVar9[0xf] = param_2;
  *(undefined1 *)(puVar9 + 0xe) = 1;
  puVar9[9] = 0;
  puVar9[10] = 0;
  puVar11 = (undefined8 *)FUN_710392e290(0x10,0x50,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar11 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_98 = (undefined **)((ulong)local_98 & 0xffffffff00000000);
      local_88 = (long ***)&DAT_00000050;
      param_3 = &local_88;
      uVar10 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_98);
      if (((uVar10 & 1) != 0) &&
         (puVar11 = (undefined8 *)
                    FUN_710392e290(0x10,0x50,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar11 != (undefined8 *)0x0)) goto LAB_7101e9fc2c;
    }
    puVar11 = (undefined8 *)0x0;
  }
LAB_7101e9fc2c:
  puVar12 = (undefined8 *)FUN_710392e290(0x10,8,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar14 = extraout_x1;
  if (puVar12 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_98 = (undefined **)((ulong)local_98 & 0xffffffff00000000);
      local_88 = (long ***)&DAT_00000008;
      param_3 = &local_88;
      auVar27 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_98);
      uVar14 = auVar27._8_8_;
      if (((auVar27._0_8_ & 1) != 0) &&
         (puVar12 = (undefined8 *)
                    FUN_710392e290(0x10,8,param_3,param_4,param_5,param_6,param_7,param_8),
         uVar14 = extraout_x1_00, puVar12 != (undefined8 *)0x0)) goto LAB_7101e9fc88;
    }
    puVar12 = (undefined8 *)0x0;
  }
LAB_7101e9fc88:
  FUN_7103773200(puVar12,uVar14,param_3,param_4,param_5,param_6,param_7,param_8);
  *(undefined4 *)(puVar11 + 9) = 0;
  puVar11[7] = 0;
  puVar11[8] = 0;
  puVar15 = &DAT_7104545c78;
  ppppbVar17 = (byte ****)0x1;
  puVar11[5] = 0;
  puVar11[6] = 0;
  *puVar11 = puVar12;
  puVar11[3] = 0;
  puVar11[4] = 0;
  puVar11[1] = 0;
  puVar11[2] = 0;
  puVar9[0x10] = puVar11;
  FUN_71032cbf30(puVar11,*param_2,(ulong *)&DAT_7104545c78,(byte ****)0x1,param_5,param_6,param_7,
                 param_8);
  FUN_7103776910(&local_a8,*(long *)*puVar11 + 8,(long ****)"textbox_param",puVar15,ppppbVar17,
                 param_5,param_6,param_7,param_8);
  plVar6 = local_a0;
  if (((*local_a0 == 0) ||
      (puVar13 = FUN_71000598d0(*local_a0,"string_length_small"), puVar13 == (uint *)0x0)) ||
     (*(char *)((long)puVar13 + 10) != '\x01')) {
    uVar18 = 0;
  }
  else {
    uVar18 = (uint)(ushort)puVar13[2];
    if ((ushort)puVar13[2] != 0) {
      uVar18 = *(uint *)((long)puVar13 + (ulong)puVar13[1]);
    }
  }
  *(uint *)(puVar11 + 4) = uVar18;
  if (((*local_a0 == 0) ||
      (puVar13 = FUN_71000598d0(*local_a0,"string_length_mid"), puVar13 == (uint *)0x0)) ||
     (*(char *)((long)puVar13 + 10) != '\x01')) {
    uVar18 = 0;
  }
  else {
    uVar18 = (uint)(ushort)puVar13[2];
    if ((ushort)puVar13[2] != 0) {
      uVar18 = *(uint *)((long)puVar13 + (ulong)puVar13[1]);
    }
  }
  *(uint *)((long)puVar11 + 0x24) = uVar18;
  if (((*local_a0 == 0) ||
      (puVar13 = FUN_71000598d0(*local_a0,"string_length_big"), puVar13 == (uint *)0x0)) ||
     (*(char *)((long)puVar13 + 10) != '\x01')) {
    uVar18 = 0;
  }
  else {
    uVar18 = (uint)(ushort)puVar13[2];
    if ((ushort)puVar13[2] != 0) {
      uVar18 = *(uint *)((long)puVar13 + (ulong)puVar13[1]);
    }
  }
  *(uint *)(puVar11 + 5) = uVar18;
  FUN_7101e9cad0(puVar11,(long ****)"grp_small",(long ****)0x0,ppppbVar17,param_5,param_6,param_7,
                 param_8);
  FUN_7101e9cad0(puVar11,(long ****)"grp_mid",(long ****)0x1,ppppbVar17,param_5,param_6,param_7,
                 param_8);
  pppplVar16 = (long ****)0x2;
  FUN_7101e9cad0(puVar11,(long ****)"grp_big",(long ****)0x2,ppppbVar17,param_5,param_6,param_7,
                 param_8);
  FUN_7103777850(&local_88,*(long *)*puVar11 + 8,(long ****)"grp_pic",pppplVar16,ppppbVar17,param_5,
                 param_6,param_7,param_8);
  ppplVar25 = local_80;
  ppplVar8 = local_88;
  uVar14 = extraout_x1_01;
  if (local_88 != local_80) {
    ppplVar26 = local_88;
    do {
      uVar10 = 0xaaaaaaaaaaaaaaa;
      FUN_7103778ab0(&local_98,ppplVar26,pppplVar16,ppppbVar17,param_5,param_6,param_7,param_8);
      iVar2 = *(int *)(puVar11 + 9);
      *(int *)(puVar11 + 9) = iVar2 + 1;
      puVar1 = &DAT_7104867c2e;
      if (*local_90 != 0) {
        puVar1 = (undefined1 *)(*local_90 + 0xb0);
      }
      piVar20 = (int *)puVar11[7];
      uVar14 = extraout_x1_02;
      if (piVar20 == (int *)puVar11[8]) {
        __src = (void *)puVar11[6];
        __n = (long ****)((long)piVar20 - (long)__src);
        uVar22 = ((long)__n >> 3) * -0x5555555555555555 + 1;
        if (0xaaaaaaaaaaaaaaa < uVar22) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar21 = (long)puVar11[8] - (long)__src >> 3;
        if ((ulong)(lVar21 * -0x5555555555555555) < 0x555555555555555) {
          uVar23 = lVar21 * 0x5555555555555556;
          uVar10 = uVar22;
          if (uVar22 <= uVar23) {
            uVar10 = uVar23;
          }
          if (uVar10 != 0) goto LAB_7101e9fefc;
LAB_7101e9ff58:
          lVar21 = 0;
        }
        else {
LAB_7101e9fefc:
          ppplVar19 = (long ***)(uVar10 * 0x18);
          if (ppplVar19 == (long ***)0x0) {
            ppplVar19 = (long ***)0x1;
          }
          lVar21 = FUN_710392e290(0x10,ppplVar19,pppplVar16,ppppbVar17,param_5,param_6,param_7,
                                  param_8);
          uVar14 = extraout_x1_03;
          if (lVar21 == 0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_64 = 0;
              pppplVar16 = (long ****)&local_70;
              local_70 = ppplVar19;
              auVar27 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
              uVar14 = auVar27._8_8_;
              if (((auVar27._0_8_ & 1) != 0) &&
                 (lVar21 = FUN_710392e290(0x10,ppplVar19,pppplVar16,ppppbVar17,param_5,param_6,
                                          param_7,param_8), uVar14 = extraout_x1_04, lVar21 != 0))
              goto LAB_7101e9ff5c;
            }
            goto LAB_7101e9ff58;
          }
        }
LAB_7101e9ff5c:
        piVar20 = (int *)(lVar21 + ((long)__n >> 3) * 8);
        *piVar20 = iVar2;
        *(undefined1 **)(piVar20 + 2) = puVar1;
        *(undefined1 *)(piVar20 + 4) = 0;
        *(undefined4 *)((long)piVar20 + 0x11) = (undefined4)local_70;
        lVar24 = SUB168(SEXT816((long)__n) * SEXT816(-0x2aaaaaaaaaaaaaab),8);
        *(undefined2 *)((long)piVar20 + 0x15) = local_70._4_2_;
        *(undefined1 *)((long)piVar20 + 0x17) = local_70._6_1_;
        if (0 < (long)__n) {
          memcpy(piVar20 + ((lVar24 >> 2) - (lVar24 >> 0x3f)) * 6,__src,(size_t)__n);
          uVar14 = extraout_x1_05;
          pppplVar16 = __n;
        }
        puVar11[6] = piVar20 + ((lVar24 >> 2) - (lVar24 >> 0x3f)) * 6;
        puVar11[7] = piVar20 + 6;
        puVar11[8] = lVar21 + uVar10 * 0x18;
        if (__src != (void *)0x0) {
          FUN_710392eb40((ulong)__src);
          uVar14 = extraout_x1_06;
        }
      }
      else {
        *piVar20 = iVar2;
        *(undefined1 **)(piVar20 + 2) = puVar1;
        *(undefined1 *)(piVar20 + 4) = 0;
        *(undefined1 *)((long)piVar20 + 0x17) = local_70._6_1_;
        *(undefined2 *)((long)piVar20 + 0x15) = local_70._4_2_;
        *(undefined4 *)((long)piVar20 + 0x11) = (undefined4)local_70;
        puVar11[7] = puVar11[7] + 0x18;
      }
      plVar7 = local_90;
      lVar21 = *local_90;
      if (lVar21 != 0) {
        *(byte *)(lVar21 + 0x58) = *(byte *)(lVar21 + 0x58) & 0xfe;
      }
      local_98 = &PTR_FUN_710523d9a8;
      local_90 = (long *)0x0;
      if (plVar7 != (long *)0x0) {
        FUN_710392eb40((ulong)plVar7);
        uVar14 = extraout_x1_07;
      }
      ppplVar26 = ppplVar26 + 2;
    } while (ppplVar25 != ppplVar26);
  }
  if (ppplVar8 != (long ***)0x0) {
    while (ppplVar8 != ppplVar25) {
      ppplVar25 = ppplVar25 + -2;
      (*(code *)**ppplVar25)(ppplVar25);
    }
    local_80 = ppplVar8;
    FUN_710392eb40((ulong)ppplVar8);
    uVar14 = extraout_x1_08;
  }
  local_a8 = &PTR_FUN_710523d9a8;
  local_a0 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar6);
    uVar14 = extraout_x1_09;
  }
  puVar9[2] = &DAT_7105333600;
  uVar5 = DAT_7105333664;
  *(undefined4 *)(puVar9 + 0xd) = DAT_7105333660;
  *(undefined4 *)((long)puVar9 + 0x6c) = uVar5;
  do {
    uVar18 = DAT_7105333650;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(0x7105333650,0x10);
    if (bVar4) {
      DAT_7105333650 = 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0' || (uVar18 & 1) != 0);
  puVar9[9] = DAT_7105333648;
  DAT_7105333650 = 0;
  DAT_7105333648 = puVar9;
  FUN_71032caea0((long)puVar9,uVar14,pppplVar16,ppppbVar17,param_5,param_6,param_7,param_8);
  lVar21 = *(long *)(param_1 + 0xe0);
  *(undefined8 **)(param_1 + 0xe0) = puVar9;
  if (lVar21 != 0) {
    FUN_71032cad20(lVar21);
    puVar9 = *(undefined8 **)(param_1 + 0xe0);
  }
  *(undefined1 *)(puVar9 + 0xe) = 0;
  if (*(uint *)(param_1 + 0xb4) < 0x13) {
    *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0xb4) * 4 + 0x68) = 0;
    *(undefined1 *)(param_1 + 200) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    *(undefined8 *)(param_1 + 0xe8) = 0;
    *(undefined8 *)(param_1 + 0xf0) = 0;
    puVar9 = *(undefined8 **)(*(long *)(param_1 + 0xe0) + 0x80);
    if (puVar9[2] != puVar9[1]) {
      uVar10 = 0;
      do {
        FUN_7101e9cdb0(puVar9,(int)uVar10,pppplVar16,ppppbVar17,param_5,param_6,param_7,param_8);
        uVar22 = ((long)(puVar9[2] - puVar9[1]) >> 3) * -0x5555555555555555;
        uVar10 = uVar10 + 1;
      } while (uVar10 <= uVar22 && uVar22 - uVar10 != 0);
    }
    *(undefined4 *)((long)puVar9 + 0x2c) = 0;
    if (puVar9[7] != puVar9[6]) {
      uVar10 = 0;
      do {
        FUN_7101e9ced0(puVar9,(int)uVar10,pppplVar16,ppppbVar17,param_5,param_6,param_7,param_8);
        uVar22 = ((long)(puVar9[7] - puVar9[6]) >> 3) * -0x5555555555555555;
        uVar10 = uVar10 + 1;
      } while (uVar10 <= uVar22 && uVar22 - uVar10 != 0);
    }
    *(undefined4 *)(puVar9 + 9) = 0;
    FUN_7101ea3e60(*(long **)(DAT_71053263b0 + 8));
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

