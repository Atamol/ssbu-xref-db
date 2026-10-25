// addr:      7101a18170
// offset:    0x1a18170
// name:      FUN_7101a18170
// mangled:   
// signature: undefined __cdecl FUN_7101a18170(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101a18170(long param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  byte bVar10;
  char cVar11;
  bool bVar12;
  uint uVar13;
  long *plVar14;
  ulong uVar15;
  long *********ppppppppplVar16;
  undefined1 *puVar17;
  int iVar18;
  int *piVar19;
  uint *puVar20;
  uint uVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long *********ppppppppplVar26;
  long lVar27;
  undefined4 local_b8 [4];
  long local_a8;
  int local_a0;
  
  iVar18 = *(int *)(param_1 + 0x160);
  if (*(int *)(param_1 + 0x13c) == 0) {
    if (0 < iVar18) {
      puVar1 = (uint *)(param_1 + 0x484);
      puVar2 = (uint *)(param_1 + 0x51c);
      puVar3 = (uint *)(param_1 + 0x5b4);
      puVar4 = (uint *)(param_1 + 0x64c);
      puVar5 = (uint *)(param_1 + 0x6e4);
      uVar22 = 0;
      bVar12 = false;
      puVar6 = (uint *)(param_1 + 700);
      puVar7 = (uint *)(param_1 + 0x354);
      puVar8 = (uint *)(param_1 + 0xc38);
      puVar9 = (uint *)(param_1 + 0x3ec);
      lVar23 = 8;
      do {
        uVar13 = (uint)uVar22;
        puVar20 = puVar6;
        if ((((((uVar13 == *puVar6) || (puVar20 = puVar7, uVar13 == *puVar7)) ||
              (puVar20 = puVar9, uVar13 == *puVar9)) ||
             ((puVar20 = puVar1, uVar13 == *puVar1 || (puVar20 = puVar2, uVar13 == *puVar2)))) ||
            ((puVar20 = puVar3, uVar13 == *puVar3 ||
             ((puVar20 = puVar4, uVar13 == *puVar4 || (puVar20 = puVar5, uVar13 == *puVar5)))))) &&
           (uVar13 = puVar20[1], uVar13 != 0xffffffff)) {
          puVar20 = puVar8;
          if ((((*puVar8 != uVar13) &&
               (puVar20 = (uint *)(param_1 + 0xc40), *(uint *)(param_1 + 0xc40) != uVar13)) &&
              (puVar20 = (uint *)(param_1 + 0xc48), *(uint *)(param_1 + 0xc48) != uVar13)) &&
             (((puVar20 = (uint *)(param_1 + 0xc50), *(uint *)(param_1 + 0xc50) != uVar13 &&
               (puVar20 = (uint *)(param_1 + 0xc58), *(uint *)(param_1 + 0xc58) != uVar13)) &&
              ((puVar20 = (uint *)(param_1 + 0xc60), *(uint *)(param_1 + 0xc60) != uVar13 &&
               ((puVar20 = (uint *)(param_1 + 0xc68), *(uint *)(param_1 + 0xc68) != uVar13 &&
                (puVar20 = (uint *)(param_1 + 0xc70), *(uint *)(param_1 + 0xc70) != uVar13)))))))) {
            puVar20 = puVar8;
          }
          uVar13 = puVar20[1];
        }
        else {
          uVar13 = 0;
        }
        uVar21 = *(uint *)(param_1 + 0xcec);
        if (uVar21 != 0xffffffff) {
          puVar20 = puVar6;
          if ((((*(uint *)(param_1 + 0x2c0) == uVar21) ||
               (puVar20 = puVar7, *(uint *)(param_1 + 0x358) == uVar21)) ||
              (puVar20 = puVar9, *(uint *)(param_1 + 0x3f0) == uVar21)) ||
             (((puVar20 = puVar1, *(uint *)(param_1 + 0x488) == uVar21 ||
               (puVar20 = puVar2, *(uint *)(param_1 + 0x520) == uVar21)) ||
              ((puVar20 = puVar3, *(uint *)(param_1 + 0x5b8) == uVar21 ||
               ((puVar20 = puVar4, *(uint *)(param_1 + 0x650) == uVar21 ||
                (puVar20 = puVar5, *(uint *)(param_1 + 0x6e8) == uVar21)))))))) {
            uVar21 = *puVar20;
          }
          else {
            uVar21 = 0;
          }
        }
        if ((0 < (int)uVar13) && (uVar22 == uVar21)) {
          if ((ulong)(*(long *)(param_1 + 600) - *(long *)(param_1 + 0x250) >> 4) <= uVar22) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_out_of_range();
          }
          lVar24 = *(long *)(*(long *)(param_1 + 0x250) + lVar23);
          FUN_710377aee0(0x3f800000,*(long *)(lVar24 + 0x5e8) + 400);
          lVar24 = *(long *)(lVar24 + 0x5e8);
          FUN_7103778300(0x3f800000,*(long *)(lVar24 + 0x10),0x710433a0fe);
          FUN_7103778300(0x3f800000,*(long *)(lVar24 + 0xf0),0x710433a0fe);
          FUN_7103778300(0x3f800000,*(long *)(lVar24 + 0x100),0x710433a0fe);
          iVar18 = *(int *)(param_1 + 0x160);
          bVar12 = true;
        }
        uVar22 = uVar22 + 1;
        lVar23 = lVar23 + 0x10;
      } while ((long)uVar22 < (long)iVar18);
      if (((((bVar12) && (*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0')) &&
           (uVar22 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x1bcdec7bcb,
                                    (long ****)&DAT_00000004,param_4,param_5,param_6,param_7,param_8
                                   ), (uVar22 & 1) != 0)) &&
          ((FUN_71024076d0(local_b8,0x1bcdec7bcb), local_a8 != 0 && (DAT_7106dd53a8 == '\x01')))) &&
         (local_a0 == DAT_7106dd53ac)) {
        piVar19 = (int *)(local_a8 + 0x38);
        do {
          cVar11 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar19,0x10);
          if (bVar12) {
            *piVar19 = *piVar19 + -1;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
      }
    }
  }
  else {
    if (0 < iVar18) {
      uVar22 = 0;
      lVar23 = 8;
      do {
        if ((ulong)(*(long *)(param_1 + 600) - *(long *)(param_1 + 0x250) >> 4) <= uVar22) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_out_of_range();
        }
        lVar24 = *(long *)(*(long *)(*(long *)(param_1 + 0x250) + lVar23) + 0x5e8);
        plVar14 = *(long **)(*(long *)(lVar24 + 0x198) + 8);
        if (((plVar14 != (long *)0x0) &&
            (uVar15 = (**(code **)(*plVar14 + 0x148))(), (uVar15 & 1) != 0)) &&
           ((plVar14 = *(long **)(*(long *)(lVar24 + 0x198) + 8), plVar14 != (long *)0x0 &&
            (uVar15 = (**(code **)(*plVar14 + 0x138))(), (uVar15 & 1) == 0)))) {
          return;
        }
        uVar22 = uVar22 + 1;
        lVar23 = lVar23 + 0x10;
      } while ((long)uVar22 < (long)*(int *)(param_1 + 0x160));
      if (0 < *(int *)(param_1 + 0x160)) {
        uVar22 = 0;
        lVar23 = 8;
        do {
          puVar17 = &DAT_c1ffff0000000000;
          lVar24 = *(long *)(param_1 + 0x250);
          if ((ulong)(*(long *)(param_1 + 600) - lVar24 >> 4) <= uVar22) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_out_of_range();
          }
          lVar25 = *(long *)(lVar24 + lVar23);
          ppppppppplVar26 = *(long **********)(lVar25 + 0x200);
          if ((((ulong)ppppppppplVar26 & 0xff00000000000000) == 0xc100000000000000 &&
               ((ulong)ppppppppplVar26 & 0xffffffffff) != 0) && (*(char *)(lVar25 + 0x6bd) != '\0'))
          {
            lVar27 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x168);
            bVar10 = *(byte *)(lVar25 + 0x210);
            uVar13 = FUN_71032632a0(lVar27,(ulong)ppppppppplVar26);
            ppppppppplVar16 = ppppppppplVar26;
            if ((uVar13 & 1) != 0) {
              ppppppppplVar16 = (long *********)FUN_71032631a0(lVar27,0x11b1ccb807);
            }
            FUN_71019fd290(*(undefined8 **)(lVar25 + 0x5e8),(undefined1 *)ppppppppplVar16,
                           ppppppppplVar26,(byte ****)(ulong)bVar10,(ulong)*(byte *)(lVar25 + 0x6c2)
                           ,0,param_7,param_8);
            FUN_7103778300(0x3f800000,
                           *(long *)(*(long *)(*(long *)(lVar24 + lVar23) + 0x5e8) + 0x10),
                           0x710425ed91);
            lVar24 = *(long *)(*(long *)(lVar24 + lVar23) + 0x5e8);
            FUN_7103778760(*(long *)(lVar24 + 0x10),0x710433a9c5);
            FUN_7103778760(*(long *)(lVar24 + 0xf0),0x710433a9c5);
            FUN_7103778760(*(long *)(lVar24 + 0x100),0x710433a9c5);
          }
          else {
            lVar27 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x168);
            uVar13 = FUN_71032632a0(lVar27,0xc1ffff0000000000);
            if ((uVar13 & 1) != 0) {
              puVar17 = FUN_71032631a0(lVar27,0x11b1ccb807);
            }
            FUN_71019fd290(*(undefined8 **)(lVar25 + 0x5e8),puVar17,
                           (long *********)&DAT_c1ffff0000000000,(byte ****)0x0,
                           (ulong)*(byte *)(lVar25 + 0x6c2),0,param_7,param_8);
            FUN_7103778300(0x3f800000,
                           *(long *)(*(long *)(*(long *)(lVar24 + lVar23) + 0x5e8) + 0x10),
                           0x710425ed91);
            lVar24 = *(long *)(*(long *)(lVar24 + lVar23) + 0x5e8);
            FUN_7103778630(0,*(long *)(lVar24 + 0x10),0x710433a9c5);
            FUN_7103778630(0,*(long *)(lVar24 + 0xf0),0x710433a9c5);
            FUN_7103778630(0,*(long *)(lVar24 + 0x100),0x710433a9c5);
          }
          uVar22 = uVar22 + 1;
          lVar23 = lVar23 + 0x10;
        } while ((long)uVar22 < (long)*(int *)(param_1 + 0x160));
      }
    }
    if (0x12 < *(uint *)(param_1 + 0x134)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x134) * 4 + 0xe8) = 9;
  }
  return;
}

