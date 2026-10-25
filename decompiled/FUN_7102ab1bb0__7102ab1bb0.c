// addr:      7102ab1bb0
// offset:    0x2ab1bb0
// name:      FUN_7102ab1bb0
// mangled:   
// signature: undefined FUN_7102ab1bb0(void)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7102ab1bb0(long *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined4 uVar7;
  long *plVar8;
  undefined8 *puVar9;
  ulong *puVar10;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  long *********ppppppppplVar11;
  long *****ppppplVar12;
  long ****pppplVar13;
  long ****pppplVar14;
  undefined1 (*pauVar15) [16];
  byte ****ppppbVar16;
  undefined1 (*in_x4) [16];
  undefined1 (*in_x5) [16];
  long ******in_x6;
  long ***in_x7;
  long ****pppplVar17;
  uint *puVar18;
  ulong uVar19;
  undefined8 uVar20;
  int *piVar21;
  int iVar22;
  long lVar23;
  long lVar24;
  long *plVar25;
  uint uVar26;
  long *plVar27;
  byte *pbVar28;
  ulong uVar29;
  uint uVar30;
  undefined8 *puVar31;
  long ***ppplVar32;
  long ****pppplVar33;
  long ****pppplStack_e0;
  byte *pbStack_d8;
  byte *pbStack_d0;
  char *pcStack_c8;
  char *pcStack_c0;
  undefined1 (*pauStack_b8) [16];
  char *pcStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  long ***ppplStack_90;
  undefined8 uStack_88;
  long ***ppplStack_80;
  undefined8 uStack_78;
  ulong auStack_70 [2];
  
  ppppppppplVar11 = *(long **********)(param_1[0x61] + 8);
  pauVar15 = (undefined1 (*) [16])0x1;
  FUN_710315a0a0(&pppplStack_e0,*(long *)(*lib::Singleton<app::StageManager>::instance_ + 0x1c0),
                 (long ****)ppppppppplVar11,(byte ****)0x1,(long ****)in_x4,in_x5,in_x6,in_x7);
  pppplVar17 = pppplStack_e0;
  pppplStack_e0 = (long ****)0x0;
  puVar31 = (undefined8 *)param_1[0x14e];
  param_1[0x14e] = (long)pppplVar17;
  if (puVar31 == (undefined8 *)0x0) {
    cVar4 = *(char *)(pppplVar17 + 2);
    uVar20 = extraout_x1;
  }
  else {
    FUN_71025e8370(puVar31);
    FUN_710392eb40((ulong)puVar31);
    pppplVar17 = (long ****)param_1[0x14e];
    cVar4 = *(char *)(pppplVar17 + 2);
    uVar20 = extraout_x1_00;
  }
  pppplStack_e0 = (long ****)0x0;
  if (cVar4 == '\0') {
    pppplStack_e0 = (long ****)0x0;
    ppplVar32 = pppplVar17[1];
    *(undefined1 *)(pppplVar17 + 2) = 1;
    if (*(char *)((long)pppplVar17 + 0x11) == '\0') {
      if (*(char *)((long)ppplVar32 + 0x1c) != '\0') {
        (**(code **)(*(long *)(*DAT_71052b8f00 + 0xa30) + 0x18))(*DAT_71052b8f00 + 0xa30,ppplVar32);
        *(undefined1 *)((long)ppplVar32 + 0x1c) = 0;
        uVar20 = extraout_x1_02;
      }
    }
    else if (*(char *)((long)ppplVar32 + 0x1c) == '\0') {
      (**(code **)(*(long *)(*DAT_71052b8f00 + 0xa30) + 0x10))(*DAT_71052b8f00 + 0xa30,ppplVar32);
      *(undefined1 *)((long)ppplVar32 + 0x1c) = 1;
      uVar20 = extraout_x1_01;
    }
  }
  *(undefined4 *)(*(long *)(param_1[0x14e] + 8) + 0x10) = 1;
  FUN_71025d9250(param_1,uVar20,ppppppppplVar11,pauVar15,in_x4,in_x5,in_x6,in_x7);
  if (2 < *(uint *)(param_1 + 0x17)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  ppppbVar16 = (byte ****)(param_1 + 0xe7);
  lVar23 = *(long *)(DAT_710532a9d0 + (ulong)*(uint *)(param_1 + 0x17) * 8);
  for (puVar18 = *(uint **)(lVar23 + 0x228); puVar18 != *(uint **)(lVar23 + 0x230);
      puVar18 = puVar18 + 1) {
    uVar26 = *puVar18;
    if (((uVar26 != 0xffffff) &&
        (uVar26 < *(uint *)(*(long *)(**(long **)(DAT_7105332f20 + 0x78) + 0x40) + 4))) &&
       (*(long *)(*(long *)(**(long **)(DAT_7105332f20 + 0x78) + 0x60) + (ulong)uVar26 * 0x20 + 0x18
                 ) == 0x13e719da81)) {
      FUN_7103540a00(DAT_7105332f20,uVar26);
      FUN_7103720ec0((long *)ppppbVar16,uVar26,ppppppppplVar11,(byte ****)pauVar15,(long ****)in_x4,
                     in_x5,in_x6,in_x7);
      FUN_7103540b10(DAT_7105332f20,uVar26,ppppppppplVar11,(byte ****)pauVar15,(long ****)in_x4,
                     in_x5,in_x6,in_x7);
      goto LAB_7102ab1d58;
    }
  }
  FUN_7103720ec0((long *)ppppbVar16,0xffffff,ppppppppplVar11,(byte ****)pauVar15,(long ****)in_x4,
                 in_x5,in_x6,in_x7);
LAB_7102ab1d58:
  plVar8 = (long *)FUN_710392e290(0x10,0x28,(long ****)ppppppppplVar11,(byte ****)pauVar15,
                                  (long ****)in_x4,in_x5,in_x6,in_x7);
  if (plVar8 == (long *)0x0) {
    ppplStack_90 = (long ***)((ulong)ppplStack_90 & 0xffffffff00000000);
    pppplStack_e0 = (long ****)&DAT_00000028;
    ppppplVar12 = &pppplStack_e0;
    (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&ppplStack_90);
    plVar8 = (long *)FUN_710392e290(0x10,0x28,(long ****)ppppplVar12,(byte ****)pauVar15,
                                    (long ****)in_x4,in_x5,in_x6,in_x7);
  }
  lVar23 = param_1[0x68];
  *(undefined1 *)((long)plVar8 + 0x14) = 0;
  *(undefined4 *)(plVar8 + 2) = 0xffffffff;
  *(undefined1 *)((long)plVar8 + 0x22) = 0;
  *plVar8 = lVar23;
  plVar8[1] = -1;
  *(undefined2 *)(plVar8 + 4) = 0;
  uVar19 = param_1[0x14c];
  param_1[0x14c] = (long)plVar8;
  if (uVar19 != 0) {
    FUN_710392eb40(uVar19);
    plVar8 = (long *)param_1[0x14c];
  }
  *(undefined1 *)(plVar8 + 4) = 6;
  *(undefined1 *)(param_1[0x14c] + 0x21) = 5;
  *(undefined1 *)(param_1[0x14c] + 0x22) = 7;
  lVar23 = *(long *)(param_1[99] + 0x10);
  *(undefined1 *)(lVar23 + 0x25) = 1;
  FUN_71025f7350(lVar23,(byte *)"light");
  FUN_7102633a10(param_1[99],(long *********)"chara",1,pauVar15,(long ****)in_x4,in_x5,in_x6,in_x7);
  pppplVar17 = (long ****)0x1;
  FUN_7102633b90(param_1[99],(long *********)"stage",1,pauVar15,(long ****)in_x4,in_x5,in_x6,in_x7);
  plVar8 = (long *)param_1[0x35];
  plVar27 = (long *)param_1[0x36];
  if (plVar27 != plVar8) {
    puVar31 = *(undefined8 **)(*plVar8 + 0x20);
    if (((int)((ulong)(*(long *)(*plVar8 + 0x28) - (long)puVar31) >> 3) != 0) &&
       (plVar25 = (long *)*puVar31, (char)plVar25[4] == '\0')) {
      *(undefined1 *)(plVar25 + 4) = 1;
      lVar24 = *plVar25;
      plVar8 = (long *)plVar25[1];
      lVar23 = plVar25[2];
      *plVar8 = lVar24;
      *(long **)(lVar24 + 8) = plVar8;
      *(long *)(lVar23 + 0x30) = *(long *)(lVar23 + 0x30) + -1;
      *plVar25 = 0;
      plVar25[1] = 0;
      puVar31 = *(undefined8 **)(lVar23 + 0x28);
      *plVar25 = lVar23 + 0x20;
      plVar25[1] = (long)puVar31;
      *(long **)(lVar23 + 0x28) = plVar25;
      *puVar31 = plVar25;
      *(long *)(lVar23 + 0x18) = *(long *)(lVar23 + 0x18) + 1;
      iVar22 = 0;
      if (plVar25[3] != 0) {
        iVar22 = *(int *)(plVar25[3] + 0x110);
      }
      *(int *)(lVar23 + 0x48) = *(int *)(lVar23 + 0x48) + iVar22;
      plVar8 = (long *)param_1[0x35];
      plVar27 = (long *)param_1[0x36];
    }
    if (plVar27 != plVar8) {
      lVar23 = *(long *)(*plVar8 + 0x20);
      if (((int)((ulong)(*(long *)(*plVar8 + 0x28) - lVar23) >> 3) != 0) &&
         (plVar25 = *(long **)(lVar23 + 8), (char)plVar25[4] == '\0')) {
        *(undefined1 *)(plVar25 + 4) = 1;
        lVar24 = *plVar25;
        plVar8 = (long *)plVar25[1];
        lVar23 = plVar25[2];
        *plVar8 = lVar24;
        *(long **)(lVar24 + 8) = plVar8;
        *(long *)(lVar23 + 0x30) = *(long *)(lVar23 + 0x30) + -1;
        *plVar25 = 0;
        plVar25[1] = 0;
        puVar31 = *(undefined8 **)(lVar23 + 0x28);
        *plVar25 = lVar23 + 0x20;
        plVar25[1] = (long)puVar31;
        *(long **)(lVar23 + 0x28) = plVar25;
        *puVar31 = plVar25;
        *(long *)(lVar23 + 0x18) = *(long *)(lVar23 + 0x18) + 1;
        iVar22 = 0;
        if (plVar25[3] != 0) {
          iVar22 = *(int *)(plVar25[3] + 0x110);
        }
        *(int *)(lVar23 + 0x48) = *(int *)(lVar23 + 0x48) + iVar22;
        plVar8 = (long *)param_1[0x35];
        plVar27 = (long *)param_1[0x36];
      }
      if (plVar27 != plVar8) {
        lVar23 = *(long *)(*plVar8 + 0x20);
        if (((int)((ulong)(*(long *)(*plVar8 + 0x28) - lVar23) >> 3) != 0) &&
           (plVar8 = *(long **)(lVar23 + 0x10), (char)plVar8[4] != '\0')) {
          plVar27 = (long *)plVar8[1];
          lVar23 = plVar8[2];
          lVar24 = *plVar8;
          *(undefined1 *)(plVar8 + 4) = 0;
          *plVar27 = lVar24;
          *(long **)(lVar24 + 8) = plVar27;
          *(long *)(lVar23 + 0x18) = *(long *)(lVar23 + 0x18) + -1;
          *plVar8 = 0;
          plVar8[1] = 0;
          puVar31 = *(undefined8 **)(lVar23 + 0x40);
          *plVar8 = lVar23 + 0x38;
          plVar8[1] = (long)puVar31;
          *(long **)(lVar23 + 0x40) = plVar8;
          *puVar31 = plVar8;
          *(long *)(lVar23 + 0x30) = *(long *)(lVar23 + 0x30) + 1;
          iVar22 = 0;
          if (plVar8[3] != 0) {
            iVar22 = *(int *)(plVar8[3] + 0x110);
          }
          *(int *)(lVar23 + 0x48) = *(int *)(lVar23 + 0x48) - iVar22;
        }
        pppplStack_e0 = (long ****)0x71043ff46f;
        pbStack_d8 = (byte *)0x71043de1dd;
        pbStack_d0 = (byte *)0x710433835a;
        pauStack_b8 = (undefined1 (*) [16])PTR_s_DomeWarningPosition_O_OBJ_O_HIR_710510d750;
        pcStack_c8 = PTR_s_HalberdDome_O_OBJ_O_HIR_710510d740;
        pcStack_c0 = PTR_s_D_dodai_gate01_O_OBJ_O_HIR_710510d748;
        pcStack_b0 = "dyr_Warning_set";
        puStack_98 = PTR_s_dyr_Warning_Out_710510d768;
        puStack_a8 = PTR_s_dyr_Warning_In_710510d758;
        puStack_a0 = PTR_s_dyr_Warning_Loop_710510d760;
        pppplVar33 = (long ****)param_1[0x67];
        puVar31 = (undefined8 *)
                  FUN_710392e290(0x10,0x290,pppplVar17,(byte ****)pauVar15,(long ****)in_x4,in_x5,
                                 in_x6,in_x7);
        if (puVar31 == (undefined8 *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            auStack_70[0] = auStack_70[0] & 0xffffffff00000000;
            ppplStack_90 = (long ***)0x290;
            pppplVar17 = &ppplStack_90;
            uVar19 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,auStack_70);
            if (((uVar19 & 1) != 0) &&
               (puVar31 = (undefined8 *)
                          FUN_710392e290(0x10,0x290,pppplVar17,(byte ****)pauVar15,(long ****)in_x4,
                                         in_x5,in_x6,in_x7), puVar31 != (undefined8 *)0x0))
            goto LAB_7102ab209c;
          }
          puVar31 = (undefined8 *)0x0;
        }
LAB_7102ab209c:
        *puVar31 = &PTR_FUN_710510d7a0;
        puVar31[1] = ppppbVar16;
        puVar1 = (undefined8 *)((long)puVar31 + 0x214);
        pppplVar17 = (long ****)(puVar31 + 0x46);
        plVar8 = puVar31 + 2;
        *plVar8 = 0;
        puVar31[6] = &PTR_FUN_710517b340;
        puVar31[0xb] = 0;
        puVar31[10] = 0x3f800000;
        puVar31[0xd] = 0;
        puVar31[0xc] = 0x3f80000000000000;
        puVar31[7] = 0;
        puVar31[3] = 0;
        puVar31[4] = 0;
        *(undefined4 *)(puVar31 + 8) = 0xffffffff;
        puVar31[0xf] = 0x3f800000;
        puVar31[0xe] = 0;
        puVar31[0x11] = 0x3f80000000000000;
        puVar31[0x10] = 0;
        *(undefined1 *)(puVar31 + 0x12) = 0;
        puVar31[0x14] = &PTR_FUN_710517b340;
        puVar31[0x15] = 0;
        *(undefined4 *)(puVar31 + 0x16) = 0xffffffff;
        *(undefined1 *)(puVar31 + 0x20) = 0;
        *(undefined4 *)(puVar31 + 0x24) = 0xffffffff;
        *(undefined1 *)(puVar31 + 0x2e) = 0;
        *(undefined1 *)(puVar31 + 0x38) = 0;
        *(undefined4 *)((long)puVar31 + 0x1c4) = 0;
        *(undefined1 *)(puVar31 + 0x39) = 0;
        puVar31[0x3c] = 0;
        *(undefined1 *)(puVar31 + 0x3d) = 0;
        puVar31[0x22] = &PTR_FUN_710517b340;
        puVar31[0x23] = 0;
        puVar31[0x3a] = 0;
        puVar31[0x3b] = pppplVar33;
        puVar31[0x19] = 0;
        puVar31[0x18] = 0x3f800000;
        puVar31[0x1b] = 0;
        puVar31[0x1a] = 0x3f80000000000000;
        puVar31[0x1d] = 0x3f800000;
        puVar31[0x1c] = 0;
        puVar31[0x1f] = 0x3f80000000000000;
        puVar31[0x1e] = 0;
        puVar31[0x27] = 0;
        puVar31[0x26] = 0x3f800000;
        puVar31[0x29] = 0;
        puVar31[0x28] = 0x3f80000000000000;
        puVar31[0x2b] = 0x3f800000;
        puVar31[0x2a] = 0;
        puVar31[0x2d] = 0x3f80000000000000;
        puVar31[0x2c] = 0;
        puVar31[0x31] = 0;
        puVar31[0x30] = 0x3f800000;
        puVar31[0x33] = 0;
        puVar31[0x32] = 0x3f80000000000000;
        puVar31[0x35] = 0x3f800000;
        puVar31[0x34] = 0;
        puVar31[0x37] = 0x3f80000000000000;
        puVar31[0x36] = 0;
        *(undefined8 *)((long)puVar31 + 0x209) = 0;
        *(undefined8 *)((long)puVar31 + 0x204) = 0;
        *(undefined8 *)((long)puVar31 + 0x1fc) = 0;
        *(undefined8 *)((long)puVar31 + 0x1ec) = 0;
        *(undefined8 *)((long)puVar31 + 500) = 0;
        *(undefined2 *)((long)puVar31 + 0x224) = 0;
        *(undefined8 *)((long)puVar31 + 0x21c) = 0;
        *puVar1 = 0;
        uVar5 = uRam0000007107459008;
        uVar20 = _ConstantZero;
        puVar31[0x46] = param_1;
        *(undefined2 *)(puVar31 + 0x47) = 1;
        *(undefined1 *)((long)puVar31 + 0x23a) = 0;
        *(undefined4 *)((long)puVar31 + 0x23c) = 0xffffffff;
        *(undefined4 *)(puVar31 + 0x4e) = 0;
        puVar31[0x4d] = 0;
        puVar31[0x4c] = 0;
        puVar31[0x49] = uVar5;
        puVar31[0x48] = uVar20;
        puVar31[0x4b] = uVar5;
        puVar31[0x4a] = uVar20;
        pppplVar13 = pppplVar17;
        bVar6 = FUN_71031675b0(*(long *)(*lib::Singleton<app::StageManager>::instance_ + 0x1c8),
                               (ulong)param_1,pppplVar17,(byte ****)pauVar15,(long ****)in_x4,in_x5,
                               in_x6,in_x7);
        pppplVar14 = pppplStack_e0;
        *(bool *)(puVar31 + 0x47) = bVar6;
        puVar31[0x50] = param_1;
        *(undefined1 *)(puVar31 + 0x51) = 0;
        if ((pppplStack_e0 != (long ****)0x0) &&
           (uVar26 = (uint)*(byte *)pppplStack_e0, *(byte *)pppplStack_e0 != 0)) {
          plVar27 = *(long **)(param_1[0x62] + 0xd0);
          plVar25 = *(long **)(param_1[0x62] + 0xd8);
          if (plVar27 != plVar25) {
            uVar19 = 0;
            uVar30 = 0xffffffff;
            lVar23 = 1;
            do {
              uVar2 = uVar26 + 0x20;
              if (0x19 < uVar26 - 0x41) {
                uVar2 = uVar26;
              }
              uVar26 = (uint)*(byte *)((long)pppplStack_e0 + lVar23);
              lVar23 = lVar23 + 1;
              uVar30 = (&DAT_7104754084)[(uVar2 ^ uVar30) & 0xff] ^ uVar30 >> 8;
              uVar19 = uVar19 + 0x100000000;
            } while (uVar26 != 0);
            do {
              if ((*(uint *)(plVar27 + 1) < 2) &&
                 (lVar23 = *plVar27,
                 (uVar19 & 0xff00000000 | (ulong)~uVar30) == *(ulong *)(lVar23 + 0x68))) {
                *plVar8 = lVar23;
                if (lVar23 == 0) {
LAB_7102ab2868:
                  if (lVar23 == 0) goto LAB_7102ab228c;
                }
                else if (*(long *)(lVar23 + 0xd8) != 0) {
                  if ((*(char *)(lVar23 + 0xe0) != '\0') && (*(long *)(lVar23 + 200) != 0)) {
                    *(undefined2 *)(*(long *)(lVar23 + 200) + 0x32) = 0;
                  }
                  if (*(long *)(lVar23 + 0xd8) != 0) {
                    *(undefined1 *)(*(long *)(lVar23 + 0xd8) + 0x22) = 0;
                  }
                  lVar23 = *plVar8;
                  if (lVar23 != 0) {
                    if ((*(char *)(lVar23 + 0xe0) != '\0') && (*(long *)(lVar23 + 200) != 0)) {
                      *(undefined2 *)(*(long *)(lVar23 + 200) + 0x30) = 0x101;
                    }
                    if (*(long *)(lVar23 + 0xd8) != 0) {
                      *(undefined1 *)(*(long *)(lVar23 + 0xd8) + 0x21) = 1;
                    }
                    if (*(char *)(lVar23 + 0xe0) != '\0') {
                      *(undefined1 *)(*(long *)(lVar23 + 0xb0) + 0x10) = 0;
                    }
                  }
                  FUN_710314fd10((long)(puVar31 + 6),(long)param_1,(byte *)pppplStack_e0,pcStack_c8)
                  ;
                  FUN_710314fd10((long)(puVar31 + 0x14),(long)param_1,(byte *)pppplVar14,pcStack_c0)
                  ;
                  pppplVar13 = pppplStack_e0;
                  pauVar15 = pauStack_b8;
                  FUN_710314fd10((long)(puVar31 + 0x22),(long)param_1,(byte *)pppplStack_e0,
                                 (char *)pauStack_b8);
                  lVar23 = *plVar8;
                  goto LAB_7102ab2868;
                }
                *(byte *)(lVar23 + 0x118) = *(byte *)(lVar23 + 0x118) | 1;
                goto LAB_7102ab228c;
              }
              plVar27 = plVar27 + 2;
            } while (plVar25 != plVar27);
          }
        }
        *plVar8 = 0;
LAB_7102ab228c:
        lVar23 = param_1[0x60];
        plVar27 = (long *)**(long **)(lVar23 + 0x18);
        bVar3 = *pbStack_d8;
        lVar24 = *plVar27;
        if (bVar3 != 0) goto LAB_7102ab22c8;
        do {
          uVar29 = 0;
          uVar19 = 0;
          while( true ) {
            if ((*(ulong *)(lVar24 + 0xa0) & 0xffffffffff) == (uVar19 | uVar29)) {
              puVar31[3] = *(undefined8 *)(lVar24 + 0x110);
              plVar27 = (long *)**(long **)(lVar23 + 0x18);
              bVar3 = *pbStack_d0;
              lVar23 = *plVar27;
              if (bVar3 != 0) goto LAB_7102ab2368;
              goto LAB_7102ab23b4;
            }
            plVar27 = plVar27 + 1;
            lVar24 = *plVar27;
            if (bVar3 == 0) break;
LAB_7102ab22c8:
            uVar19 = 0;
            uVar26 = 0xffffffff;
            uVar30 = (uint)bVar3;
            pbVar28 = pbStack_d8;
            do {
              pbVar28 = pbVar28 + 1;
              pppplVar13 = (long ****)(ulong)(uVar30 + 0x20);
              uVar2 = uVar30 + 0x20;
              if (0x19 < uVar30 - 0x41) {
                uVar2 = uVar30;
              }
              uVar26 = (&DAT_7104754084)[(uVar2 ^ uVar26) & 0xff] ^ uVar26 >> 8;
              uVar30 = (uint)*pbVar28;
              uVar19 = uVar19 + 0x100000000;
            } while (uVar30 != 0);
            uVar29 = (ulong)~uVar26;
            uVar19 = uVar19 & 0xff00000000;
          }
        } while( true );
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__vector_base_common<true>::__throw_out_of_range();
LAB_7102ab23b4:
  uVar29 = 0;
  uVar19 = 0;
  do {
    if ((*(ulong *)(lVar23 + 0xa0) & 0xffffffffff) == (uVar19 | uVar29)) {
      uVar20 = *(undefined8 *)(lVar23 + 0x110);
      *(undefined1 *)((long)puVar31 + 0x225) = 1;
      puVar31[4] = uVar20;
      puVar9 = (undefined8 *)
               FUN_710392e290(0x10,400,pppplVar13,(byte ****)pauVar15,(long ****)in_x4,in_x5,in_x6,
                              in_x7);
      if (puVar9 == (undefined8 *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          auStack_70[0] = auStack_70[0] & 0xffffffff00000000;
          ppplStack_90 = (long ***)&DAT_00000190;
          pppplVar14 = &ppplStack_90;
          uVar19 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,auStack_70);
          if (((uVar19 & 1) != 0) &&
             (puVar9 = (undefined8 *)
                       FUN_710392e290(0x10,400,pppplVar14,(byte ****)pauVar15,(long ****)in_x4,in_x5
                                      ,in_x6,in_x7), puVar9 != (undefined8 *)0x0))
          goto LAB_7102ab2444;
        }
        puVar9 = (undefined8 *)0x0;
      }
LAB_7102ab2444:
      pppplVar14 = pppplVar33;
      FUN_7102ac06b0(puVar9,puVar31[0x50],&pcStack_b0,ppppbVar16,pppplVar33,in_x5,in_x6,in_x7);
      plVar27 = (long *)puVar31[0x3a];
      puVar31[0x3a] = puVar9;
      if (plVar27 != (long *)0x0) {
        (**(code **)(*plVar27 + 8))();
      }
      puVar31[0x3c] = pppplVar33;
      ppplStack_90 = (long ***)0x0;
      uVar7 = 0xffffffff;
      if ((*pppplVar33)[1] != (long **)0x0) {
        uVar7 = FUN_7102405040((long)(*pppplVar33)[1],&ppplStack_90,0,ppppbVar16,pppplVar14,in_x5,
                               in_x6,in_x7);
      }
      *(undefined4 *)((long)puVar31 + 0x1ec) = uVar7;
      *(undefined4 *)(puVar31 + 0x41) = 0;
      puVar31[0x40] = 0x200000001;
      uVar20 = *(undefined8 *)(param_1[0x61] + 0x100);
      *puVar1 = *(undefined8 *)(param_1[0x61] + 0xf8);
      *(undefined8 *)((long)puVar31 + 0x21c) = uVar20;
      lVar23 = puVar31[1];
      ppplStack_90 = *(long ****)(lVar23 + 0x2f0);
      uStack_88 = 0;
      pppplVar33 = &ppplStack_80;
      ppplStack_80 = *(long ****)(lVar23 + 0x2f8);
      uStack_78 = 0;
      auStack_70[0] = *(ulong *)(lVar23 + 0x300);
      auStack_70[1] = 0;
      FUN_710317e220((long)pppplVar17,auStack_70);
      FUN_710317e570((long)pppplVar17,&ppplStack_90,pppplVar33);
      cVar4 = *(char *)((long)param_1 + 0x54);
      *(char *)(puVar31 + 0x51) = cVar4;
      if (cVar4 == '\x01') {
        lVar23 = *plVar8;
        if (lVar23 != 0) {
          if ((*(char *)(lVar23 + 0xe0) != '\0') && (*(long *)(lVar23 + 200) != 0)) {
            *(undefined2 *)(*(long *)(lVar23 + 200) + 0x30) = 0x101;
          }
          if (*(long *)(lVar23 + 0xd8) != 0) {
            *(undefined1 *)(*(long *)(lVar23 + 0xd8) + 0x21) = 1;
          }
          if (*(char *)(lVar23 + 0xe0) != '\0') {
            *(undefined1 *)(*(long *)(lVar23 + 0xb0) + 0x10) = 0;
          }
          lVar23 = *plVar8;
          if (lVar23 != 0) {
            *(undefined1 *)(lVar23 + 0x110) = 0;
            FUN_71025e9d50((long *)(lVar23 + 0x108),extraout_x1_03,pppplVar33,ppppbVar16,pppplVar14,
                           in_x5,in_x6,in_x7);
          }
        }
        FUN_71025f4d80(*(long **)puVar31[3],(long *)((undefined8 *)puVar31[3])[1],1);
        pppplVar17 = (long ****)0x1;
        FUN_71025f4d80(*(long **)puVar31[4],(long *)((undefined8 *)puVar31[4])[1],1);
        lVar23 = puVar31[0x3a];
        lVar24 = *(long *)(lVar23 + 0x10);
        if (lVar24 != 0) {
          if ((*(char *)(lVar24 + 0xe0) != '\0') && (*(long *)(lVar24 + 200) != 0)) {
            *(undefined2 *)(*(long *)(lVar24 + 200) + 0x30) = 0x101;
          }
          if (*(long *)(lVar24 + 0xd8) != 0) {
            *(undefined1 *)(*(long *)(lVar24 + 0xd8) + 0x21) = 1;
          }
          if (*(char *)(lVar24 + 0xe0) != '\0') {
            *(undefined1 *)(*(long *)(lVar24 + 0xb0) + 0x10) = 0;
          }
          lVar23 = *(long *)(lVar23 + 0x10);
          if (lVar23 != 0) {
            *(undefined1 *)(lVar23 + 0x110) = 0;
            FUN_71025e9d50((long *)(lVar23 + 0x108),extraout_x1_04,pppplVar17,ppppbVar16,pppplVar14,
                           in_x5,in_x6,in_x7);
          }
        }
        if (*(char *)((long)puVar31 + 0x239) != '\0') {
          uVar26 = *(uint *)((long)puVar31 + 0x23c);
          if ((uVar26 < 0x38) &&
             (piVar21 = *(int **)(*DAT_71052b6fd8 + 0xc0),
             *(char *)((long)piVar21 + (long)(int)uVar26 + 0x464) != '\0')) {
            *(undefined1 *)((long)piVar21 + (long)(int)uVar26 + 0x464) = 0;
            *piVar21 = *piVar21 + -1;
          }
          *(undefined4 *)((long)puVar31 + 0x23c) = 0xffffffff;
          *(undefined1 *)((long)puVar31 + 0x239) = 0;
        }
        *(undefined1 *)((long)puVar31 + 0x23a) = 0;
        FUN_71026249a0(*(long *)(puVar31[0x50] + 0x308),puVar1);
        *(undefined1 *)((long)puVar31 + 0x224) = 1;
        *(undefined1 *)(puVar31 + 0x38) = 3;
      }
      plVar8 = (long *)param_1[0x151];
      param_1[0x151] = (long)puVar31;
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 8))();
      }
      *(char *)((long)param_1 + 0xab1) = *(char *)((long)param_1 + 0x54);
      if (*(char *)((long)param_1 + 0x54) == '\x01') {
        *(undefined8 *)((long)param_1 + 0xa4c) = 0;
        lVar23 = param_1[0xe8];
        iVar22 = *(int *)((long)param_1 + 0x744);
        puVar18 = (uint *)param_1[0x68];
        *(undefined1 *)((long)param_1 + 0xa54) = 3;
        uVar26 = *puVar18;
        *puVar18 = puVar18[1];
        uVar30 = puVar18[3];
        uVar26 = uVar26 ^ uVar26 << 0xb;
        uVar26 = uVar26 ^ uVar26 >> 8 ^ uVar30 ^ uVar30 >> 0x13;
        puVar18[1] = puVar18[2];
        puVar18[2] = uVar30;
        puVar18[3] = uVar26;
        *(float *)(param_1 + 0x14b) =
             (float)uVar26 * 2.3283064e-10 * (float)(iVar22 - (int)lVar23) + (float)(int)lVar23;
        *(undefined1 *)(param_1 + 0x14d) = 0;
        FUN_71025f7350(*(long *)(param_1[99] + 0x10),(byte *)"light_wait");
        FUN_7102633a10(param_1[99],(long *********)"chara_wait",1,ppppbVar16,pppplVar14,in_x5,in_x6,
                       in_x7);
        FUN_7102633b90(param_1[99],(long *********)"stage_wait",1,ppppbVar16,pppplVar14,in_x5,in_x6,
                       in_x7);
        *(undefined1 *)(param_1 + 0x149) = 3;
        lVar23 = *(long *)(*(long *)(param_1[0x60] + 0x48) + 8);
        puVar10 = *(ulong **)(param_1[0x60] + 0x60);
        if (puVar10 != (ulong *)(lVar23 + 8)) {
          FUN_7102616cf0(puVar10,*(undefined1 (**) [16])(lVar23 + 8),
                         *(undefined1 (**) [16])(lVar23 + 0x10),ppppbVar16,pppplVar14,in_x5,in_x6,
                         in_x7);
        }
      }
      return;
    }
    plVar27 = plVar27 + 1;
    lVar23 = *plVar27;
    if (bVar3 == 0) goto LAB_7102ab23b4;
LAB_7102ab2368:
    uVar19 = 0;
    uVar26 = 0xffffffff;
    uVar30 = (uint)bVar3;
    pbVar28 = pbStack_d0;
    do {
      pbVar28 = pbVar28 + 1;
      uVar2 = uVar30 + 0x20;
      if (0x19 < uVar30 - 0x41) {
        uVar2 = uVar30;
      }
      uVar26 = (&DAT_7104754084)[(uVar2 ^ uVar26) & 0xff] ^ uVar26 >> 8;
      uVar30 = (uint)*pbVar28;
      uVar19 = uVar19 + 0x100000000;
    } while (uVar30 != 0);
    uVar29 = (ulong)~uVar26;
    uVar19 = uVar19 & 0xff00000000;
  } while( true );
}

