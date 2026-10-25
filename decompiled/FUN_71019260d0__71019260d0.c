// addr:      71019260d0
// offset:    0x19260d0
// name:      FUN_71019260d0
// mangled:   
// signature: undefined __cdecl FUN_71019260d0(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, long param_6, ulong param_7, ulong param_8)


void FUN_71019260d0(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,long param_6,ulong param_7,ulong param_8)

{
  undefined4 uVar1;
  uint uVar2;
  ushort uVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  bool bVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  uint *puVar16;
  byte bVar17;
  char *pcVar18;
  uint *puVar19;
  char *pcVar20;
  char cVar21;
  uint uVar22;
  long lVar23;
  long *plVar24;
  uint *puVar25;
  long *********ppppppppplVar26;
  long ****pppplVar27;
  long lVar28;
  ulong uVar29;
  undefined8 *puVar30;
  float fVar31;
  undefined1 auVar32 [16];
  undefined8 local_70;
  undefined8 uStack_68;
  
  lVar23 = *(long *)(*(long *)(param_1 + 0x228) + 0x428);
  lVar28 = 0xb0;
  if (1 < *(int *)(lVar23 + 0x21c8) - 1U) {
    lVar28 = 0x78;
  }
  lVar28 = *(long *)(lVar23 + lVar28);
  uVar29 = *(ulong *)(lVar28 + 0x70);
  uVar3 = *(ushort *)(lVar28 + 0x7c);
  ppppppppplVar26 = (long *********)(ulong)uVar3;
  if (((uVar29 & 0xffffffffff) != 0) &&
     (lVar23 = *(long *)(*(long *)(param_1 + 0x290) + 8),
     ((*(ulong *)(lVar23 + 0x570) ^ uVar29) & 0xffffffffff) != 0)) {
    iVar13 = *(int *)(lVar28 + 0x88);
    uVar1 = *(undefined4 *)(lVar28 + 0x8c);
    cVar21 = *(char *)(lVar28 + 0x25b);
    if (uVar3 != 0xffff) {
      if (iVar13 == 10) {
        if (cVar21 == '\0') {
LAB_7101926180:
          lVar15 = *(long *)(*DAT_7105329f98 + 0x20);
          bVar17 = 0;
        }
        else {
          lVar15 = *(long *)(*DAT_7105329f98 + 0x20);
          bVar17 = 1;
        }
        param_4 = (byte ****)0x1;
        FUN_710259c150(lVar15,bVar17,uVar3,(byte ****)0x1,param_5,param_6,param_7,param_8);
        param_3 = (long ****)ppppppppplVar26;
      }
      else if (cVar21 == '\0') goto LAB_7101926180;
    }
    *(ulong *)(lVar23 + 0x570) = uVar29;
    *(ushort *)(lVar23 + 0x578) = uVar3;
    *(int *)(lVar23 + 0x57c) = iVar13;
    *(undefined4 *)(lVar23 + 0x580) = uVar1;
    *(char *)(lVar23 + 0x584) = cVar21;
    ppppppppplVar26 = (long *********)(ulong)*(ushort *)(lVar28 + 0x7c);
  }
  lVar23 = *(long *)(*(long *)(param_1 + 0x298) + 8);
  uVar29 = *(ulong *)(lVar28 + 0x80);
  if ((uint)*(ushort *)(lVar23 + 0x290) != (uint)ppppppppplVar26) {
    *(ushort *)(lVar23 + 0x290) = (ushort)ppppppppplVar26;
    param_4 = (byte ****)0x1;
    FUN_710259c150(*(long *)(*DAT_7105329f98 + 0x20),0,(ushort)ppppppppplVar26,(byte ****)0x1,
                   param_5,param_6,param_7,param_8);
    param_3 = (long ****)ppppppppplVar26;
  }
  if (((*(ulong *)(lVar23 + 0x298) ^ uVar29) & 0xffffffffff) != 0) {
    *(ulong *)(lVar23 + 0x298) = uVar29;
  }
  if (*(int *)(param_1 + 0x42b4) == 2) {
    lVar28 = *(long *)(param_1 + 0x2a0);
  }
  else if (*(int *)(*(long *)(*(long *)(param_1 + 0x298) + 8) + 0x218) == 0) {
    lVar28 = *(long *)(*(long *)(param_1 + 0x228) + 0x428);
    if (*(int *)(lVar28 + 0x21c8) - 1U < 2) {
      if (*(float *)(lVar28 + 0x21b4) <= *(float *)(lVar28 + 0x2184)) {
        lVar28 = *(long *)(lVar28 + 0xb0);
      }
      else {
        if (*(float *)(lVar28 + 0x21b8) <= *(float *)(lVar28 + 0x2184)) goto LAB_7101926234;
        lVar28 = *(long *)(lVar28 + 0x88);
      }
    }
    else {
      lVar28 = *(long *)(lVar28 + 0x78);
      if (lVar28 == 0) goto LAB_7101926234;
    }
  }
  else {
LAB_7101926234:
    lVar28 = 0;
  }
  lVar23 = *(long *)(*(long *)(param_1 + 0x288) + 8);
  if ((*(short *)(lVar23 + 0x17e0) < 1) && (*(int *)(lVar23 + 0x1768) == 0)) {
    lVar23 = *(long *)(param_1 + 0x290);
    if (*(char *)(param_1 + 0x42cf) == '\0') goto LAB_7101926258;
  }
  else {
    lVar23 = *(long *)(param_1 + 0x290);
LAB_7101926258:
    lVar28 = 0;
  }
  pcVar20 = (char *)(param_1 + 0x42cd);
  *(long *)(*(long *)(lVar23 + 8) + 0x568) = lVar28;
  lVar15 = *(long *)(*(long *)(param_1 + 0x290) + 8);
  lVar28 = *(long *)(param_1 + 0x220);
  lVar23 = *(long *)(*(long *)(lVar15 + 0x560) + 0x80);
  if (*(int *)(lVar28 + 0x158) == 1) {
    bVar12 = *(float *)(lVar28 + 0x160) + -50.0 <= *(float *)(lVar28 + 0x16c);
    if (*(int *)(lVar23 + 0x116c) != 2) goto LAB_71019262b0;
LAB_7101926340:
    if (!bVar12) {
      lVar28 = 0;
      plVar24 = (long *)(lVar23 + 0x30);
      do {
        if ((*(uint *)(lVar23 + 0xf70 + lVar28) & 0xfffffffe) == 2) {
          FUN_7103778300(0x3f800000,*plVar24,0x7104281139);
          *(undefined4 *)(lVar23 + 0xf70 + lVar28) = 4;
        }
        lVar28 = lVar28 + 4;
        plVar24 = plVar24 + 2;
      } while (lVar28 != 0x1e8);
      *(undefined4 *)(lVar23 + 0x116c) = 1;
    }
LAB_710192639c:
    if (*pcVar20 != '\0') goto LAB_71019263a4;
LAB_7101926310:
    lVar28 = *(long *)(param_1 + 0x290);
    if (*(int *)(*(long *)(*(long *)(param_1 + 0x218) + 8) + 0x24) == 2) goto LAB_71019263a8;
    FUN_71024fc7c0(*(long *)(lVar28 + 8));
  }
  else {
    bVar12 = false;
    if (*(int *)(lVar23 + 0x116c) == 2) goto LAB_7101926340;
LAB_71019262b0:
    if (!bVar12) goto LAB_710192639c;
    plVar24 = *(long **)(param_1 + 0x248);
    lVar28 = *(long *)(param_1 + 0x228);
    uVar29 = (ulong)*(uint *)(plVar24 + 0x641);
    if (*(uint *)(plVar24 + 0x641) != 0) {
      pppplVar27 = *(long *****)(param_1 + 600);
      do {
        plVar24 = plVar24 + 1;
        param_4 = (byte ****)0x0;
        FUN_71024fc200(lVar15,*plVar24,pppplVar27,0,param_5,param_6,param_7,param_8);
        uVar29 = uVar29 - 1;
      } while (uVar29 != 0);
      lVar23 = *(long *)(*(long *)(lVar15 + 0x560) + 0x80);
    }
    lVar28 = *(long *)(lVar28 + 0x428);
    param_3 = (long ****)0x0;
    auVar32._12_4_ = (int)((ulong)*(undefined8 *)(lVar28 + 0x2168) >> 0x20);
    auVar32._0_12_ = *(undefined1 (*) [12])(lVar28 + 0x2160);
    FUN_7101e59d50(auVar32,lVar23,0,0);
    if (*pcVar20 == '\0') goto LAB_7101926310;
LAB_71019263a4:
    lVar28 = *(long *)(param_1 + 0x290);
LAB_71019263a8:
    lVar28 = *(long *)(lVar28 + 8);
    if (*(char *)(lVar28 + 0x5dc) == '\0') {
      lVar23 = *DAT_7105329f98;
      FUN_7102518f30(*(long *)(lVar23 + 0x40));
      uVar29 = (ulong)*(uint *)(*DAT_710532a860 + 0x1c);
      if (2 < *(uint *)(*DAT_710532a860 + 0x1c)) goto LAB_7101926c60;
      puVar30 = *(undefined8 **)(*DAT_7105314510 + 0x158);
      uVar22 = *(uint *)(*(long *)*puVar30 + uVar29 * 0x3d700 + 0x3d6f8);
      if (((uVar22 >> 0x13 & 1) != 0) &&
         (plVar24 = *(long **)(*(long *)(lVar23 + 0x40) + 0x90), plVar24 != (long *)0x0)) {
        FUN_7102510b80(plVar24,1,param_3,param_4,param_5,param_6,param_7,param_8);
        uVar22 = *(uint *)(*(long *)*puVar30 + uVar29 * 0x3d700 + 0x3d6f8);
      }
      if (((uVar22 >> 0x14 & 1) != 0) &&
         (plVar24 = *(long **)(*(long *)(lVar23 + 0x40) + 0x98), plVar24 != (long *)0x0)) {
        FUN_7102510b80(plVar24,1,param_3,param_4,param_5,param_6,param_7,param_8);
        uVar22 = *(uint *)(*(long *)*puVar30 + uVar29 * 0x3d700 + 0x3d6f8);
      }
      if (((uVar22 >> 0x15 & 1) != 0) &&
         (plVar24 = *(long **)(*(long *)(lVar23 + 0x40) + 0xa0), plVar24 != (long *)0x0)) {
        FUN_7102510b80(plVar24,1,param_3,param_4,param_5,param_6,param_7,param_8);
        uVar22 = *(uint *)(*(long *)*puVar30 + uVar29 * 0x3d700 + 0x3d6f8);
      }
      if (((uVar22 >> 0x16 & 1) != 0) &&
         (plVar24 = *(long **)(*(long *)(lVar23 + 0x40) + 0xa8), plVar24 != (long *)0x0)) {
        FUN_7102510b80(plVar24,1,param_3,param_4,param_5,param_6,param_7,param_8);
        uVar22 = *(uint *)(*(long *)*puVar30 + uVar29 * 0x3d700 + 0x3d6f8);
      }
      if (((uVar22 >> 0x17 & 1) != 0) &&
         (plVar24 = *(long **)(*(long *)(lVar23 + 0x40) + 0xb0), plVar24 != (long *)0x0)) {
        FUN_7102510b80(plVar24,1,param_3,param_4,param_5,param_6,param_7,param_8);
      }
      plVar24 = DAT_710532a860;
      if (2 < *(uint *)(*DAT_710532a860 + 0x1c)) goto LAB_7101926c60;
      *(uint *)(*(long *)(*(long *)(lVar28 + 0x558) + 0x80) + 0x240) =
           (uint)*(byte *)(*(long *)**(undefined8 **)(*DAT_7105314510 + 0x158) +
                           (ulong)*(uint *)(*DAT_710532a860 + 0x1c) * 0x3d700 + 0x3d68c);
      lVar23 = *(long *)(lVar28 + 0x558);
      iVar13 = FUN_7102513670(*(uint *)(*plVar24 + 0x1c));
      uVar22 = *(uint *)(*DAT_710532a860 + 0x1c);
      if (2 < uVar22) goto LAB_7101926c60;
      if (((*(byte *)(*(long *)**(undefined8 **)(*DAT_7105314510 + 0x158) + (ulong)uVar22 * 0x3d700
                     + 0x3d6f8) & 1) == 0) && (iVar14 = FUN_71025135b0(uVar22), iVar14 == 0)) {
        if (2 < *(uint *)(*DAT_710532a860 + 0x1c)) goto LAB_7101926c60;
        uVar22 = *(uint *)(*(long *)**(undefined8 **)(*DAT_7105314510 + 0x158) +
                           (ulong)*(uint *)(*DAT_710532a860 + 0x1c) * 0x3d700 + 0x3d6f8);
        bVar12 = (uVar22 >> 1 & 1) + (uVar22 >> 2 & 1) + (uVar22 >> 3 & 1) != 0;
      }
      else {
        bVar12 = true;
      }
      lVar23 = *(long *)(lVar23 + 0x80);
      if (iVar13 == 0) {
        if (bVar12) {
          pcVar18 = "facility_other";
        }
        else {
          pcVar18 = "facility_none";
        }
      }
      else if (bVar12) {
        pcVar18 = "facility_shop_other";
      }
      else {
        pcVar18 = "facility_shop";
      }
      FUN_7103778300(0x3f800000,*(long *)(lVar23 + 0x38),(long)pcVar18);
      FUN_7103778300(0x3f800000,*(long *)(lVar23 + 0x38),0x7104421055);
      iVar13 = *(int *)(lVar23 + 0x240);
      if (iVar13 == 1) {
        lVar15 = *(long *)(lVar23 + 0xa0);
        pcVar18 = "color_diff_01";
      }
      else if (iVar13 == 3) {
        lVar15 = *(long *)(lVar23 + 0xa0);
        pcVar18 = "color_diff_03";
      }
      else if (iVar13 == 2) {
        lVar15 = *(long *)(lVar23 + 0xa0);
        pcVar18 = "color_diff_02";
      }
      else {
        lVar15 = *(long *)(lVar23 + 0xa0);
        pcVar18 = "color_diff_00";
      }
      FUN_7103778300(0x3f800000,lVar15,(long)pcVar18);
      (**(code **)(**(long **)(lVar23 + 0x1c0) + 0x60))(*(long **)(lVar23 + 0x1c0),1);
      *(undefined1 *)(lVar28 + 0x5dc) = 1;
    }
  }
  if (*(int *)(param_1 + 0x1b0) == 3) {
    uVar22 = *(uint *)(*DAT_710532a860 + 0x1c);
    if (uVar22 < 3) {
      uVar2 = *(uint *)(*DAT_710532a860 + 0x78);
      if (0x13 < uVar2) {
LAB_7101926c60:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      param_3 = (long ****)
                (ulong)*(byte *)(*(long *)**(undefined8 **)(*DAT_7105314510 + 0x158) +
                                 (ulong)uVar22 * 0x3d700 + (ulong)uVar2 * 0x84 + 0x3ccb8);
    }
    else {
      param_3 = (long ****)0x0;
    }
    FUN_71024fccf0(*(long *)(*(long *)(param_1 + 0x290) + 8),*(uint *)(param_1 + 0x238));
LAB_710192686c:
    if (*pcVar20 != '\0') goto LAB_7101926874;
LAB_7101926834:
    if (*(char *)(param_1 + 0x42ce) != '\0') {
      lVar28 = *(long *)(param_1 + 0x220);
      fVar31 = *(float *)(lVar28 + 0x160);
      if (*(float *)(lVar28 + 0x1d4) <= 0.0) {
        param_4 = (byte ****)(ulong)(*(int *)(lVar28 + 0x158) != 1);
      }
      else {
        param_4 = (byte ****)0x1;
      }
      lVar28 = *(long *)(*(long *)(param_1 + 0x290) + 8);
      param_3 = (long ****)0x1;
      goto LAB_71019268b4;
    }
  }
  else {
    lVar28 = *(long *)(*(long *)(param_1 + 0x290) + 8);
    if (*(int *)(lVar28 + 0x5c0) == -1) goto LAB_710192686c;
    *(undefined4 *)(lVar28 + 0x5c0) = 0xffffffff;
    FUN_7103778300(0x3f800000,*(long *)(*(long *)(*(long *)(lVar28 + 0x558) + 0x80) + 0x38),
                   0x71042a3648);
    if (((*(int *)(lVar28 + 0x5c0) == -1) || (2 < *(int *)(lVar28 + 0x5c0))) ||
       (lVar23 = *(long *)(*(long *)(*(long *)(lVar28 + 0x558) + 0x80) + 0x128), lVar23 == 0))
    goto LAB_710192686c;
    param_3 = (long ****)0x1;
    param_4 = (byte ****)0x0;
    FUN_710377a280(lVar23,(byte *)(lVar28 + 0x48000003f8),1);
    if (*pcVar20 == '\0') goto LAB_7101926834;
LAB_7101926874:
    fVar31 = *(float *)(*(long *)(param_1 + 0x220) + 0x160);
    lVar28 = *(long *)(*(long *)(param_1 + 0x290) + 8);
    param_3 = (long ****)0x0;
    param_4 = (byte ****)0x0;
LAB_71019268b4:
    FUN_71024fcba0(lVar28,(ulong)(fVar31 != 0.0),(ulong)param_3,(ulong)param_4,param_5,param_6,
                   param_7,param_8);
  }
  cVar21 = *(char *)(param_1 + 0x42cf);
  if (cVar21 != '\0') {
    lVar28 = *(long *)(*(long *)(param_1 + 0x228) + 0x428);
    if (*(int *)(lVar28 + 0x21c8) - 1U < 2) {
      if (*(float *)(lVar28 + 0x21b4) <= *(float *)(lVar28 + 0x2184)) {
        lVar23 = *(long *)(lVar28 + 0xb0);
      }
      else {
        if (*(float *)(lVar28 + 0x21b8) <= *(float *)(lVar28 + 0x2184)) goto LAB_7101926968;
        lVar23 = *(long *)(lVar28 + 0x88);
      }
      if (lVar23 != 0) {
        if (*(float *)(lVar28 + 0x21b4) <= *(float *)(lVar28 + 0x2184)) {
          lVar28 = *(long *)(lVar28 + 0xb0);
        }
        else {
          if (*(float *)(lVar28 + 0x21b8) <= *(float *)(lVar28 + 0x2184)) goto LAB_7101926948;
          lVar28 = *(long *)(lVar28 + 0x88);
        }
LAB_7101926954:
        if ((*(int *)(lVar28 + 0x88) == 5) && (*(char *)(lVar28 + 0x25b) == '\0')) {
          puVar16 = *(uint **)(*DAT_710532a868 + 0x340);
          puVar19 = *(uint **)(*DAT_710532a868 + 0x348);
          if (puVar16 != puVar19) {
            uVar22 = *(uint *)(lVar28 + 0x8c);
            param_3 = (long ****)(ulong)uVar22;
            puVar25 = puVar16;
            do {
              if (*puVar25 == uVar22) {
                if (*(char *)((long)puVar25 + 0x7d) != '\0') {
                  uVar29 = FUN_71024d7600((int *)puVar16,(int *)puVar19,uVar22);
                  if ((uVar29 & 0xffffffffff) != 0) {
                    lVar28 = *(long *)(*(long *)(param_1 + 0x228) + 0x428);
                    if (*(int *)(lVar28 + 0x21c8) - 1U < 2) {
                      if (*(float *)(lVar28 + 0x21b4) <= *(float *)(lVar28 + 0x2184)) {
                        plVar24 = (long *)(lVar28 + 0xb0);
                      }
                      else {
                        plVar24 = (long *)(lVar28 + 0x88);
                      }
                    }
                    else {
                      plVar24 = (long *)(lVar28 + 0x78);
                    }
                    lVar28 = *(long *)(*(long *)(param_1 + 0x290) + 8);
                    if (*(int *)(lVar28 + 0x5ac) == 0) goto LAB_7101926ba4;
                    lVar23 = *plVar24;
                    uVar6 = *(undefined8 *)(lVar23 + 200);
                    uVar5 = *(undefined8 *)(lVar23 + 0xc0);
                    fVar31 = *(float *)(lVar23 + 0xa0);
                    fVar7 = *(float *)(lVar23 + 0xa4);
                    fVar8 = *(float *)(lVar23 + 0xa8);
                    fVar9 = *(float *)(lVar23 + 0xac);
                    *(undefined4 *)(lVar28 + 0x5ac) = 0;
                    lVar15 = *(long *)(*(long *)(lVar28 + 0x558) + 0x80);
                    uStack_68 = CONCAT44((float)((ulong)uVar6 >> 0x20) + fVar9,(float)uVar6 + fVar8)
                    ;
                    local_70 = CONCAT44((float)((ulong)uVar5 >> 0x20) + fVar7,(float)uVar5 + fVar31)
                    ;
                    FUN_7103778300(0x3f800000,*(long *)(lVar15 + 0x38),0x7104401b30);
                    FUN_7103778300(0x3f800000,*(long *)(lVar15 + 0x38),0x71042e7818);
                    lVar23 = *(long *)(lVar15 + 0x38);
                    pcVar20 = "guide_attention_loop";
                    goto LAB_7101926ae4;
                  }
                  cVar21 = *(char *)(param_1 + 0x42cf);
                }
                break;
              }
              puVar25 = puVar25 + 0x20;
            } while (puVar19 != puVar25);
            if (cVar21 == '\0') goto LAB_7101926b6c;
          }
        }
      }
    }
    else if (*(long *)(lVar28 + 0x78) != 0) {
      lVar28 = *(long *)(lVar28 + 0x78);
      if (lVar28 == 0) {
LAB_7101926948:
        lVar28 = 0;
      }
      goto LAB_7101926954;
    }
LAB_7101926968:
    lVar28 = *(long *)(*(long *)(param_1 + 0x228) + 0x428);
    if (*(int *)(lVar28 + 0x21c8) - 1U < 2) {
      if (*(float *)(lVar28 + 0x21b4) <= *(float *)(lVar28 + 0x2184)) {
        lVar23 = *(long *)(lVar28 + 0xb0);
      }
      else {
        if (*(float *)(lVar28 + 0x21b8) <= *(float *)(lVar28 + 0x2184)) goto LAB_7101926b6c;
        lVar23 = *(long *)(lVar28 + 0x88);
      }
      if (lVar23 != 0) {
        if (*(float *)(lVar28 + 0x21b4) <= *(float *)(lVar28 + 0x2184)) {
          lVar28 = *(long *)(lVar28 + 0xb0);
        }
        else {
          if (*(float *)(lVar28 + 0x21b8) <= *(float *)(lVar28 + 0x2184)) goto LAB_71019269f0;
          lVar28 = *(long *)(lVar28 + 0x88);
        }
LAB_71019269fc:
        param_3 = *(long *****)(param_1 + 600);
        bVar12 = FUN_710250b190(lVar28,*(long *)(param_1 + 0x248),(long)param_3);
        if (bVar12) {
          lVar28 = *(long *)(*(long *)(param_1 + 0x228) + 0x428);
          if (*(int *)(lVar28 + 0x21c8) - 1U < 2) {
            if (*(float *)(lVar28 + 0x21b4) <= *(float *)(lVar28 + 0x2184)) {
              plVar24 = (long *)(lVar28 + 0xb0);
            }
            else {
              plVar24 = (long *)(lVar28 + 0x88);
            }
          }
          else {
            plVar24 = (long *)(lVar28 + 0x78);
          }
          lVar28 = *(long *)(*(long *)(param_1 + 0x290) + 8);
          if (*(int *)(lVar28 + 0x5ac) != 0) {
            lVar23 = *plVar24;
            uVar6 = *(undefined8 *)(lVar23 + 200);
            uVar5 = *(undefined8 *)(lVar23 + 0xc0);
            fVar31 = *(float *)(lVar23 + 0xa0);
            fVar7 = *(float *)(lVar23 + 0xa4);
            fVar8 = *(float *)(lVar23 + 0xa8);
            fVar9 = *(float *)(lVar23 + 0xac);
            *(undefined4 *)(lVar28 + 0x5ac) = 0;
            lVar15 = *(long *)(*(long *)(lVar28 + 0x558) + 0x80);
            uStack_68 = CONCAT44((float)((ulong)uVar6 >> 0x20) + fVar9,(float)uVar6 + fVar8);
            local_70 = CONCAT44((float)((ulong)uVar5 >> 0x20) + fVar7,(float)uVar5 + fVar31);
            FUN_7103778300(0x3f800000,*(long *)(lVar15 + 0x38),0x7104401b30);
            lVar23 = *(long *)(lVar15 + 0x38);
            pcVar20 = "guide_attention_off";
LAB_7101926ae4:
            FUN_7103778300(0x3f800000,lVar23,(long)pcVar20);
            FUN_7103778300(0x3f800000,*(long *)(lVar15 + 0x38),0x7104433661);
            auVar11._8_8_ = uStack_68;
            auVar11._0_8_ = local_70;
            auVar10._8_8_ = uStack_68;
            auVar10._0_8_ = local_70;
            auVar32 = NEON_ext(auVar10,auVar11,8,1);
            *(ulong *)(lVar28 + 0x5b8) = (ulong)auVar32._0_4_;
            *(undefined8 *)(lVar28 + 0x5b0) = local_70;
          }
          goto LAB_7101926ba4;
        }
      }
    }
    else if (*(long *)(lVar28 + 0x78) != 0) {
      lVar28 = *(long *)(lVar28 + 0x78);
      if (lVar28 == 0) {
LAB_71019269f0:
        lVar28 = 0;
      }
      goto LAB_71019269fc;
    }
  }
LAB_7101926b6c:
  lVar28 = *(long *)(*(long *)(param_1 + 0x290) + 8);
  if (*(int *)(lVar28 + 0x5ac) != -1) {
    *(undefined4 *)(lVar28 + 0x5ac) = 0xffffffff;
    FUN_7103778300(0x3f800000,*(long *)(*(long *)(*(long *)(lVar28 + 0x558) + 0x80) + 0x38),
                   0x710436c9b6);
  }
LAB_7101926ba4:
  lVar28 = *(long *)(*(long *)(param_1 + 0x228) + 0x428);
  auVar4._12_4_ = (int)((ulong)*(undefined8 *)(lVar28 + 0x2168) >> 0x20);
  auVar4._0_12_ = *(undefined1 (*) [12])(lVar28 + 0x2160);
  FUN_71024f9120(auVar4,*(long *)(*(long *)(param_1 + 0x290) + 8),*(long *)(param_1 + 0x220),
                 (long *********)param_3,param_4,param_5,param_6,param_7,param_8);
  FUN_71024f6ce0(*(long **)(*(long *)(param_1 + 0x298) + 8));
  return;
}

