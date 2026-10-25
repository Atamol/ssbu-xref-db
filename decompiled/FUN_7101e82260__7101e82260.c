// addr:      7101e82260
// offset:    0x1e82260
// name:      FUN_7101e82260
// mangled:   
// signature: undefined __cdecl FUN_7101e82260(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7101e82260(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  undefined2 uVar7;
  char cVar8;
  bool bVar9;
  int iVar10;
  undefined8 *puVar11;
  ushort uVar12;
  undefined4 uVar13;
  long lVar14;
  ulong uVar15;
  long ****pppplVar16;
  long lVar17;
  int *piVar18;
  code *pcVar19;
  ushort uVar20;
  byte *pbVar21;
  long *plVar22;
  char *pcVar23;
  long lVar24;
  ulong uVar25;
  long *plVar26;
  char *pcVar27;
  ulong uVar28;
  int iVar29;
  undefined8 *puVar30;
  long lVar31;
  long lVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  int iVar36;
  undefined8 uVar37;
  float fVar38;
  undefined8 uVar39;
  float local_90;
  float fStack_8c;
  undefined **local_70;
  undefined8 *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  lVar31 = *(long *)(param_1 + 0x80);
  uVar4 = *(uint *)(**(long **)(lVar31 + 0x428) + 0xa0);
  uVar5 = *(uint *)(**(long **)(lVar31 + 0x428) + 0xa4);
  FUN_7103399c10(*(long *)(lVar31 + 0x358));
  if (*(char *)(*(long *)(lVar31 + 0x358) + 0x90) == '\0') {
    uVar3 = uVar5;
    if (uVar5 <= uVar4) {
      uVar3 = uVar4;
    }
    FUN_7103399f50(*(long *)(lVar31 + 0x358),uVar3 - uVar5,param_3,param_4,param_5,param_6,param_7,
                   param_8);
  }
  iVar36 = *(int *)(*(long *)**(undefined8 **)(*DAT_7105314510 + 0xd8) + 0x24);
  FUN_7103399c10(*(long *)(lVar31 + 0x2c0));
  if (*(char *)(*(long *)(lVar31 + 0x2c0) + 0x90) == '\0') {
    FUN_7103399f50(*(long *)(lVar31 + 0x2c0),iVar36,param_3,param_4,param_5,param_6,param_7,param_8)
    ;
  }
  FUN_7101e839b0(lVar31 + 0x1a8);
  if ((((*(char *)(lVar31 + 0x1c8) == '\0') || (*(long *)(*(long *)(lVar31 + 0x1b0) + 0x80) == 0))
      || (*(long *)(*(long *)(lVar31 + 0x1b0) + 0x88) == 0)) && (*(char *)(lVar31 + 0x1ca) != '\0'))
  {
    lVar32 = *(long *)**(undefined8 **)(lVar31 + 0x150);
    uVar39 = *(undefined8 *)(**(long **)(lVar31 + 0x1b0) + 0x60);
    lVar14 = *(long *)(*(long **)(lVar31 + 0x1b0))[6];
    uVar37 = _ConstantZero;
    if (lVar14 != 0) {
      uVar37 = *(undefined8 *)(lVar14 + 0x30);
    }
    if ((*(long *)(lVar31 + 400) != *(long *)(lVar31 + 0x188)) &&
       (iVar36 = *(int *)(lVar31 + 0x1a0), iVar29 = iVar36 + -1, *(int *)(lVar31 + 0x1a0) = iVar29,
       iVar29 == 0 || iVar36 < 1)) {
      pbVar21 = (byte *)(*(long *)(lVar31 + 400) + -1);
      bVar6 = *pbVar21;
      uVar15 = (ulong)bVar6;
      *(byte **)(lVar31 + 400) = pbVar21;
      lVar14 = *(long *)(*(long *)(lVar31 + 0x168) + 0x58);
      if ((lVar14 + uVar15 * 0x10 != 0) &&
         (uVar15 < (ulong)(*(long *)(*(long *)(lVar31 + 0x168) + 0x60) - lVar14 >> 4))) {
        plVar22 = (long *)**(long **)(lVar31 + 0x170);
        uVar25 = plVar22[1];
        if ((uVar25 - 1 & uVar25) == 0) {
          plVar26 = *(long **)(*plVar22 + (uVar25 - 1 & uVar15) * 8);
          do {
            do {
              plVar26 = (long *)*plVar26;
            } while (plVar26[1] != uVar15);
            pbVar21 = (byte *)(plVar26 + 2);
          } while (*pbVar21 != bVar6);
        }
        else {
          uVar28 = uVar15;
          if (uVar25 <= uVar15) {
            uVar28 = 0;
            if (uVar25 != 0) {
              uVar28 = uVar15 / uVar25;
            }
            uVar28 = uVar15 - uVar28 * uVar25;
          }
          plVar26 = *(long **)(*plVar22 + uVar28 * 8);
          do {
            do {
              plVar26 = (long *)*plVar26;
            } while (plVar26[1] != uVar15);
            pbVar21 = (byte *)(plVar26 + 2);
          } while (*pbVar21 != bVar6);
        }
        uVar25 = (ulong)(char)pbVar21[4];
        if ((-1 < (long)uVar25) &&
           ((*(ulong *)((long)plVar22 + (uVar25 >> 3 & 0x1ffffffffffffff8) + 0x90) &
            1L << (uVar25 & 0x3f)) != 0)) {
          FUN_7103778300(0x3f800000,*(long *)(lVar14 + uVar15 * 0x10 + 8),0x71042f89b7);
        }
      }
      uVar4 = DAT_71052391c0;
      DAT_71052391c0 = DAT_71052391c4;
      uVar4 = uVar4 ^ uVar4 << 0xb;
      uVar4 = uVar4 ^ uVar4 >> 8 ^ DAT_71052391cc ^ DAT_71052391cc >> 0x13;
      DAT_71052391c4 = DAT_71052391c8;
      DAT_71052391c8 = DAT_71052391cc;
      DAT_71052391cc = uVar4;
      *(uint *)(lVar31 + 0x1a0) = uVar4 % 0xf + 1;
    }
    uStack_50 = 0;
    local_48 = 0xffffffffffffffff;
    uVar13 = 1;
    if ((*(char *)(*(long *)(lVar32 + 0x600) + 0x4aa) != '\0') &&
       (uVar13 = 1, (*(byte *)(*(long *)(lVar32 + 0x600) + 0x1a8) & 2) != 0)) {
      uVar13 = 2;
    }
    local_70 = (undefined **)CONCAT44((int)((ulong)local_70 >> 0x20),uVar13);
    fVar34 = (float)uVar39;
    fVar35 = (float)((ulong)uVar39 >> 0x20);
    local_60 = CONCAT44(540.0 - fVar35,fVar34 + 960.0);
    uStack_58 = 0;
    plVar22 = (long *)(lVar31 + 0x168);
    FUN_710376e330((long *)**(undefined8 **)(lVar31 + 0x168),(int *)&local_70);
    if (*(char *)(lVar31 + 0x178) == '\0') {
      if ((*(char *)(*(long *)(lVar32 + 0x600) + 0x4aa) == '\0') ||
         ((*(byte *)(*(long *)(lVar32 + 0x600) + 0x1ac) >> 1 & 1) == 0)) {
        if (*(char *)(lVar31 + 0x17a) != '\0') {
          plVar26 = (long *)*plVar22;
          uVar4 = *(uint *)(*plVar26 + 0x254);
          if ((uVar4 == 0xffffffff) || (uVar4 == 200)) {
            bVar6 = *(byte *)(lVar31 + 0x17b);
            pppplVar16 = (long ****)(ulong)bVar6;
            lVar14 = plVar26[0xb];
            uVar39 = _ConstantZero;
            if ((lVar14 + (long)pppplVar16 * 0x10 != 0) &&
               ((pppplVar16 < (long ****)(plVar26[0xc] - lVar14 >> 4) &&
                (lVar14 = **(long **)(*(long *)(lVar14 + (long)pppplVar16 * 0x10 + 8) + 0x18),
                lVar14 != 0)))) {
              uVar39 = *(undefined8 *)(lVar14 + 0x30);
            }
            local_90 = (float)uVar37;
            fStack_8c = (float)((ulong)uVar37 >> 0x20);
            fVar34 = fVar34 - ((float)uVar39 + local_90);
            fVar35 = fVar35 - ((float)((ulong)uVar39 >> 0x20) + fStack_8c);
            fVar34 = fVar34 * fVar34;
            fVar35 = fVar35 * fVar35;
            fVar33 = fVar34 + fVar35;
            fVar34 = fVar34 + fVar35;
            uVar37 = NEON_frsqrte(CONCAT44(fVar34,fVar33),4);
            fVar38 = (float)((ulong)uVar37 >> 0x20);
            uVar39 = NEON_frsqrts(CONCAT44(fVar34 * fVar38,fVar33 * (float)uVar37),uVar37,4);
            fVar35 = (float)uVar37 * (float)uVar39;
            fVar38 = fVar38 * (float)((ulong)uVar39 >> 0x20);
            lVar14 = *(long *)(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x228) + 8);
            iVar36 = -(uint)(fVar33 == 0.0);
            pcVar23 = *(char **)(lVar14 + 0x20);
            uVar37 = NEON_frsqrts(CONCAT44(fVar34 * fVar38,fVar33 * fVar35),CONCAT44(fVar38,fVar35),
                                  4);
            fVar34 = (float)((uint)(fVar33 * fVar35 * (float)uVar37) &
                            CONCAT13(~(byte)((uint)iVar36 >> 0x18),
                                     CONCAT12(~(byte)((uint)iVar36 >> 0x10),
                                              CONCAT11(~(byte)((uint)iVar36 >> 8),~(byte)iVar36))));
            if ((*pcVar23 == '\f') &&
               (iVar36 = *(int *)(pcVar23 + 1) + -1, 0 < *(int *)(pcVar23 + 1))) {
              lVar14 = *(long *)(lVar14 + 0x18);
              iVar29 = 0;
              pcVar27 = "";
              do {
                iVar2 = iVar36 + iVar29;
                if (iVar2 < 0) {
                  iVar2 = iVar2 + 1;
                }
                iVar2 = iVar2 >> 1;
                puVar1 = (uint *)(*(long *)(lVar14 + 0x28) + (long)*(int *)(pcVar23 + 5) +
                                 (long)iVar2 * 8);
                param_3 = *(long *****)(*(long *)(lVar14 + 0x20) + (ulong)*puVar1 * 8);
                if (param_3 == (long ****)0x175c24f7ce) {
                  uVar5 = puVar1[1];
                  if ((int)uVar5 < 0) goto LAB_7101e82700;
                  pcVar27 = pcVar23 + (int)uVar5;
                  break;
                }
                iVar10 = iVar2 + -1;
                if (param_3 < (long ****)0x175c24f7cf) {
                  iVar29 = iVar2 + 1;
                  iVar10 = iVar36;
                }
                iVar36 = iVar10;
              } while (iVar29 <= iVar36);
            }
            else {
LAB_7101e82700:
              pcVar27 = "";
            }
            if (*pcVar27 == '\b') {
              if (fVar34 < *(float *)(pcVar27 + 1)) {
LAB_7101e82d8c:
                if ((((uint)bVar6 != (uVar4 & 0xff)) || (uVar4 == 200)) || (uVar4 == 0xffffffff)) {
                  param_3 = (long ****)0x1;
                  FUN_7103771a80(plVar26,(uint)bVar6,1);
                }
                goto LAB_7101e82830;
              }
            }
            else if (fVar34 < 0.0) goto LAB_7101e82d8c;
LAB_7101e82728:
            FUN_7103771d60(&local_70,*plVar26,pppplVar16,param_4,param_5,param_6,param_7,param_8);
            puVar30 = local_68;
            plVar26 = (long *)*local_68;
            if (plVar26 != (long *)0x0) {
              (**(code **)(*plVar26 + 0x218))(plVar26,0);
              (**(code **)(*plVar26 + 0x410))(plVar26);
              (**(code **)(*plVar26 + 0x3f0))(plVar26,0);
              iVar36 = (**(code **)(*plVar26 + 0x140))(plVar26);
              if ((iVar36 != 6) && (iVar36 = (**(code **)(*plVar26 + 0x140))(plVar26), iVar36 != 1))
              {
                (**(code **)(*plVar26 + 0x400))(plVar26);
              }
              uVar15 = (**(code **)(*plVar26 + 0x158))(plVar26);
              if ((uVar15 & 1) == 0) {
                (**(code **)(*plVar26 + 0x370))(plVar26);
              }
            }
            local_70 = &PTR_FUN_710523d9c8;
            local_68 = (undefined8 *)0x0;
            param_3 = pppplVar16;
            if (puVar30 != (undefined8 *)0x0) {
              FUN_710392eb40((ulong)puVar30);
              param_3 = pppplVar16;
            }
          }
          else {
            pppplVar16 = (long ****)(ulong)*(byte *)(lVar31 + 0x17b);
            param_3 = pppplVar16;
            if ((uint)*(byte *)(lVar31 + 0x17b) != (uVar4 & 0xff)) goto LAB_7101e82728;
          }
        }
        iVar36 = *(int *)(*(long *)*plVar22 + 0x254);
        uVar12 = 0;
        if (iVar36 == -1) {
          uVar20 = 0;
        }
        else {
          uVar20 = 0;
          if (iVar36 != 200) {
            uVar20 = (ushort)(iVar36 << 8);
            uVar12 = 1;
          }
        }
        uVar7 = *(undefined2 *)(lVar31 + 0x17a);
        *(ushort *)(lVar31 + 0x17a) = uVar20 | uVar12;
        *(undefined2 *)(lVar31 + 0x17c) = uVar7;
      }
      else {
        param_3 = (long ****)0x0;
        *(undefined1 *)(lVar31 + 0x178) = 1;
        FUN_7103771be0(*(long **)(lVar31 + 0x168),200,0);
      }
    }
LAB_7101e82830:
    lVar14 = *(long *)*plVar22;
    if (((*(int *)(lVar14 + 0x25c) == 200) || (*(int *)(lVar14 + 0x25c) == -1)) &&
       ((*(char *)(lVar31 + 0x17a) != '\0' &&
        (((*(char *)(*(long *)(lVar32 + 0x600) + 0x4aa) != '\0' &&
          ((*(byte *)(*(long *)(lVar32 + 0x600) + 0x1a8) >> 1 & 1) != 0)) &&
         (lVar24 = *(long *)(lVar14 + 0x1b8), lVar24 != 0)))))) {
      bVar6 = *(byte *)(lVar31 + 0x17b);
      lVar17 = lVar14 + 0x1b8;
      do {
        if ((int)(uint)bVar6 <= *(int *)(lVar24 + 0x20)) {
          lVar17 = lVar24;
        }
        lVar24 = *(long *)(lVar24 + (ulong)(*(int *)(lVar24 + 0x20) < (int)(uint)bVar6) * 8);
      } while (lVar24 != 0);
      if (((lVar17 != lVar14 + 0x1b8) && (*(int *)(lVar17 + 0x20) <= (int)(uint)bVar6)) &&
         ((*(long **)(lVar17 + 0x28) != (long *)0x0 &&
          (uVar15 = (**(code **)(**(long **)(lVar17 + 0x28) + 0x210))(), (uVar15 & 1) != 0)))) {
        param_3 = (long ****)0x0;
        FUN_7103771be0(*(long **)(lVar31 + 0x168),(uint)*(byte *)(lVar31 + 0x17b),0);
      }
    }
    if (*(char *)(lVar31 + 0x17e) == '\0') {
      lVar14 = *plVar22;
      if (*(long *)(lVar14 + 0xa0) != 0) {
        FUN_710373b7f0(*(long *)(lVar14 + 0xa0));
        uVar15 = *(ulong *)(lVar14 + 0xa0);
        *(undefined8 *)(lVar14 + 0xa0) = 0;
        if (uVar15 != 0) {
          *(undefined ***)(uVar15 + 8) = &PTR_FUN_7104f73d50;
          if (((*(long *)(uVar15 + 0x10) != 0) && (DAT_7106dd53a8 == '\x01')) &&
             (*(int *)(uVar15 + 0x18) == DAT_7106dd53ac)) {
            piVar18 = (int *)(*(long *)(uVar15 + 0x10) + 0x38);
            do {
              cVar8 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(piVar18,0x10);
              if (bVar9) {
                *piVar18 = *piVar18 + -1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
          }
          *(undefined8 *)(uVar15 + 0x10) = 0;
          *(undefined1 *)(uVar15 + 0x20) = 0;
          FUN_710392eb40(uVar15);
        }
      }
    }
    else {
      uVar15 = (ulong)*(byte *)(lVar31 + 0x17f);
      if ((*(char *)(*(long *)(lVar32 + 0x600) + 0x4aa) == '\0') ||
         ((*(byte *)(*(long *)(lVar32 + 0x600) + 0x274) >> 4 & 1) == 0)) {
        lVar32 = *plVar22;
        lVar14 = *(long *)(lVar32 + 0x58);
        if ((lVar14 + uVar15 * 0x10 != 0) &&
           (uVar15 < (ulong)(*(long *)(lVar32 + 0x60) - lVar14 >> 4))) {
          FUN_7103778300(0x3f800000,*(long *)(lVar14 + uVar15 * 0x10 + 8),0x71042b4a6a);
          lVar32 = *plVar22;
        }
        if (*(long *)(lVar32 + 0xa0) != 0) {
          FUN_710373b7f0(*(long *)(lVar32 + 0xa0));
          uVar15 = *(ulong *)(lVar32 + 0xa0);
          *(undefined8 *)(lVar32 + 0xa0) = 0;
          if (uVar15 != 0) {
            *(undefined ***)(uVar15 + 8) = &PTR_FUN_7104f73d50;
            if (((*(long *)(uVar15 + 0x10) != 0) && (DAT_7106dd53a8 == '\x01')) &&
               (*(int *)(uVar15 + 0x18) == DAT_7106dd53ac)) {
              piVar18 = (int *)(*(long *)(uVar15 + 0x10) + 0x38);
              do {
                cVar8 = '\x01';
                bVar9 = (bool)ExclusiveMonitorPass(piVar18,0x10);
                if (bVar9) {
                  *piVar18 = *piVar18 + -1;
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
            }
LAB_7101e82b38:
            *(undefined8 *)(uVar15 + 0x10) = 0;
            *(undefined1 *)(uVar15 + 0x20) = 0;
            FUN_710392eb40(uVar15);
          }
        }
      }
      else if ((*(char *)(lVar31 + 0x17a) == '\0') ||
              (*(byte *)(lVar31 + 0x17b) != *(byte *)(lVar31 + 0x17f))) {
        lVar32 = *plVar22;
        lVar14 = *(long *)(lVar32 + 0x58);
        if ((lVar14 + uVar15 * 0x10 != 0) &&
           (uVar15 < (ulong)(*(long *)(lVar32 + 0x60) - lVar14 >> 4))) {
          FUN_7103778300(0x3f800000,*(long *)(lVar14 + uVar15 * 0x10 + 8),0x71042b4a6a);
          lVar32 = *plVar22;
        }
        if (*(long *)(lVar32 + 0xa0) != 0) {
          FUN_710373b7f0(*(long *)(lVar32 + 0xa0));
          uVar15 = *(ulong *)(lVar32 + 0xa0);
          *(undefined8 *)(lVar32 + 0xa0) = 0;
          if (uVar15 != 0) {
            *(undefined ***)(uVar15 + 8) = &PTR_FUN_7104f73d50;
            if (((*(long *)(uVar15 + 0x10) != 0) && (DAT_7106dd53a8 == '\x01')) &&
               (*(int *)(uVar15 + 0x18) == DAT_7106dd53ac)) {
              piVar18 = (int *)(*(long *)(uVar15 + 0x10) + 0x38);
              do {
                cVar8 = '\x01';
                bVar9 = (bool)ExclusiveMonitorPass(piVar18,0x10);
                if (bVar9) {
                  *piVar18 = *piVar18 + -1;
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
            }
            goto LAB_7101e82b38;
          }
        }
      }
      else {
        lVar14 = *(long *)(*plVar22 + 0x70);
        uVar25 = *(long *)(*plVar22 + 0x78) - lVar14 >> 4;
        if ((uVar15 < uVar25) &&
           (plVar26 = *(long **)(*(long *)(lVar14 + uVar15 * 0x10 + 8) + 8), plVar26 != (long *)0x0)
           ) {
          uVar25 = (**(code **)(*plVar26 + 0x138))();
          if ((uVar25 & 1) == 0) goto LAB_7101e82b48;
          lVar14 = *(long *)(*plVar22 + 0x70);
          uVar25 = *(long *)(*plVar22 + 0x78) - lVar14 >> 4;
        }
        if (uVar15 < uVar25) {
          plVar26 = *(long **)(*(long *)(lVar14 + uVar15 * 0x10 + 8) + 8);
          if (plVar26 == (long *)0x0) {
            fVar34 = 0.0;
          }
          else {
            fVar34 = (float)(**(code **)(*plVar26 + 0x1a8))();
          }
          iVar36 = (int)fVar34;
        }
        else {
          iVar36 = 0;
        }
        lVar14 = *(long *)(lVar32 + 0x600);
        if (((*(char *)(lVar14 + 0x4aa) == '\0') || ((*(byte *)(lVar14 + 0x274) >> 4 & 1) == 0)) ||
           (*(int *)(lVar14 + 0x340) < iVar36)) goto LAB_7101e82b48;
        lVar32 = *plVar22;
        lVar14 = *(long *)(lVar32 + 0x58);
        if ((lVar14 + uVar15 * 0x10 != 0) &&
           (uVar15 < (ulong)(*(long *)(lVar32 + 0x60) - lVar14 >> 4))) {
          FUN_7103778300(0x3f800000,*(long *)(lVar14 + uVar15 * 0x10 + 8),0x71042b4a6a);
          lVar32 = *plVar22;
        }
        if (*(long *)(lVar32 + 0xa0) != 0) {
          FUN_710373b7f0(*(long *)(lVar32 + 0xa0));
          uVar15 = *(ulong *)(lVar32 + 0xa0);
          *(undefined8 *)(lVar32 + 0xa0) = 0;
          if (uVar15 != 0) {
            *(undefined ***)(uVar15 + 8) = &PTR_FUN_7104f73d50;
            if (((*(long *)(uVar15 + 0x10) != 0) && (DAT_7106dd53a8 == '\x01')) &&
               (*(int *)(uVar15 + 0x18) == DAT_7106dd53ac)) {
              piVar18 = (int *)(*(long *)(uVar15 + 0x10) + 0x38);
              do {
                cVar8 = '\x01';
                bVar9 = (bool)ExclusiveMonitorPass(piVar18,0x10);
                if (bVar9) {
                  *piVar18 = *piVar18 + -1;
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
            }
            *(undefined8 *)(uVar15 + 0x10) = 0;
            *(undefined1 *)(uVar15 + 0x20) = 0;
            FUN_710392eb40(uVar15);
          }
        }
        *(undefined2 *)(lVar31 + 0x180) = *(undefined2 *)(lVar31 + 0x17e);
      }
      *(undefined1 *)(lVar31 + 0x17e) = 0;
    }
LAB_7101e82b48:
    FUN_7101e83ce0(lVar31 + 0x1a8,plVar22,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  if ((*(int *)(lVar31 + 0x214) != 0) &&
     (iVar36 = *(int *)(lVar31 + 0x214) + -1, *(int *)(lVar31 + 0x214) = iVar36, iVar36 == 0)) {
    lVar14 = *(long *)(*(long *)(lVar31 + 0x1e8) + 8);
    if (lVar14 != 0) {
      puVar30 = *(undefined8 **)(lVar14 + 0x78);
      if (((DAT_710593ba40 & 1) == 0) &&
         (iVar36 = __cxa_guard_acquire(&DAT_710593ba40), iVar36 != 0)) {
        if (((DAT_710593ba48 & 1) == 0) &&
           (iVar36 = __cxa_guard_acquire(&DAT_710593ba48), iVar36 != 0)) {
          DAT_710593ba50 = 0;
          __cxa_guard_release(&DAT_710593ba48);
        }
        DAT_710593ba58 = &DAT_710593ba50;
        __cxa_guard_release(&DAT_710593ba40);
      }
      if (puVar30 != (undefined8 *)0x0) {
        for (puVar11 = (undefined8 *)(**(code **)*puVar30)(puVar30); puVar11 != (undefined8 *)0x0;
            puVar11 = (undefined8 *)*puVar11) {
          if ((undefined8 **)puVar11 == &DAT_710593ba58) {
            if (*(char *)((long)puVar30 + 100) != '\0') goto LAB_7101e82b68;
            break;
          }
        }
      }
    }
    lVar14 = *(long *)(*(long *)(lVar31 + 0x1e8) + 8);
    if (lVar14 != 0) {
      puVar30 = *(undefined8 **)(lVar14 + 0x78);
      if (((DAT_710593ba40 & 1) == 0) &&
         (iVar36 = __cxa_guard_acquire(&DAT_710593ba40), iVar36 != 0)) {
        if (((DAT_710593ba48 & 1) == 0) &&
           (iVar36 = __cxa_guard_acquire(&DAT_710593ba48), iVar36 != 0)) {
          DAT_710593ba50 = 0;
          __cxa_guard_release(&DAT_710593ba48);
        }
        DAT_710593ba58 = &DAT_710593ba50;
        __cxa_guard_release(&DAT_710593ba40);
      }
      if (puVar30 != (undefined8 *)0x0) {
        for (puVar11 = (undefined8 *)(**(code **)*puVar30)(puVar30); puVar11 != (undefined8 *)0x0;
            puVar11 = (undefined8 *)*puVar11) {
          if ((undefined8 **)puVar11 == &DAT_710593ba58) {
            lVar14 = puVar30[3];
            *(undefined4 *)(puVar30 + 0xb) = *(undefined4 *)((long)puVar30 + 0x54);
            if (lVar14 != 0) {
              *(undefined4 *)(lVar14 + 0x30) = *(undefined4 *)((long)puVar30 + 0x54);
              *(byte *)(lVar14 + 0x58) = *(byte *)(lVar14 + 0x58) | 0x10;
            }
            lVar14 = puVar30[4];
            if (lVar14 != 0) {
              *(undefined4 *)(lVar14 + 0x30) = *(undefined4 *)(puVar30 + 0xb);
              *(byte *)(lVar14 + 0x58) = *(byte *)(lVar14 + 0x58) | 0x10;
            }
            if ((long *)puVar30[5] != (long *)0x0) {
              (**(code **)(*(long *)puVar30[5] + 0x180))();
            }
            plVar22 = (long *)puVar30[6];
            if (plVar22 != (long *)0x0) {
              if (*(char *)((long)puVar30 + 99) == '\0') {
                (**(code **)(*plVar22 + 0x180))();
              }
              else {
                (**(code **)(*plVar22 + 400))();
              }
            }
            *(undefined2 *)((long)puVar30 + 100) = 1;
            break;
          }
        }
      }
    }
  }
LAB_7101e82b68:
  if (*(uint *)(lVar31 + 0x13c) < 0x13) {
    uVar4 = *(uint *)(lVar31 + (long)(int)*(uint *)(lVar31 + 0x13c) * 4 + 0xf0);
    if (*(uint *)(lVar31 + 0x140) != uVar4) {
      *(uint *)(lVar31 + 0x148) = *(uint *)(lVar31 + 0x140);
      *(uint *)(lVar31 + 0x140) = uVar4;
      if (0xb < uVar4) goto LAB_7101e82f44;
      lVar14 = lVar31 + (long)(int)uVar4 * 0x10;
      uVar37 = *(undefined8 *)(lVar14 + 0x38);
      *(undefined8 *)(lVar31 + 0x10) = *(undefined8 *)(lVar14 + 0x30);
      *(undefined8 *)(lVar31 + 0x18) = uVar37;
      pcVar19 = *(code **)(lVar31 + 0x20);
      uVar15 = *(ulong *)(lVar31 + 0x28) & 1;
      if (uVar15 != 0 || pcVar19 != (code *)0x0) {
        if (uVar15 != 0) {
          pcVar19 = *(code **)(pcVar19 +
                              *(long *)(*(long *)(lVar31 + 8) +
                                       ((long)*(ulong *)(lVar31 + 0x28) >> 1)));
        }
        (*pcVar19)();
      }
      *(undefined4 *)(lVar31 + 0x144) = 0;
    }
    if (*(char *)(lVar31 + 0x14c) != '\0') {
      pcVar19 = *(code **)(lVar31 + 0x20);
      uVar15 = *(ulong *)(lVar31 + 0x28) & 1;
      if (uVar15 != 0 || pcVar19 != (code *)0x0) {
        if (uVar15 != 0) {
          pcVar19 = *(code **)(pcVar19 +
                              *(long *)(*(long *)(lVar31 + 8) +
                                       ((long)*(ulong *)(lVar31 + 0x28) >> 1)));
        }
        (*pcVar19)();
      }
      *(undefined4 *)(lVar31 + 0x144) = 0;
      *(undefined1 *)(lVar31 + 0x14c) = 0;
    }
    if (*(long *)(lVar31 + 8) != 0) {
      pcVar19 = *(code **)(lVar31 + 0x10);
      uVar15 = *(ulong *)(lVar31 + 0x18) & 1;
      if (uVar15 != 0 || pcVar19 != (code *)0x0) {
        if (uVar15 != 0) {
          pcVar19 = *(code **)(pcVar19 +
                              *(long *)(*(long *)(lVar31 + 8) +
                                       ((long)*(ulong *)(lVar31 + 0x18) >> 1)));
        }
        (*pcVar19)();
      }
    }
    *(int *)(lVar31 + 0x144) = *(int *)(lVar31 + 0x144) + 1;
    return;
  }
LAB_7101e82f44:
                    /* WARNING: Subroutine does not return */
  abort();
}

