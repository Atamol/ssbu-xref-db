// addr:      7101a386c0
// offset:    0x1a386c0
// name:      FUN_7101a386c0
// mangled:   
// signature: undefined __cdecl FUN_7101a386c0(long param_1, long param_2, uint param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101a386c0(long param_1,long param_2,uint param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  bool bVar2;
  long *plVar3;
  undefined1 *puVar4;
  long *********ppppppppplVar5;
  byte *pbVar6;
  ushort *puVar7;
  long ****pppplVar8;
  byte ****ppppbVar9;
  long ****pppplVar10;
  byte bVar11;
  long lVar12;
  byte **ppbVar13;
  char *pcVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  long *********ppppppppplVar19;
  byte ***pppbVar20;
  uint uVar21;
  ulong uVar22;
  undefined **local_78;
  ulong local_70;
  ushort local_64 [2];
  
  pppplVar8 = (long ****)0x0;
  ppppbVar9 = param_4;
  pppplVar10 = param_5;
  FUN_7101a4a800(*(long *)(param_2 + 8),param_3,(long ****)0x0,param_4,param_5,param_6,param_7,
                 param_8);
  lVar12 = *(long *)(param_2 + 8);
  uVar22 = (ulong)(int)param_3;
  uVar15 = (*(long *)(lVar12 + 600) - *(long *)(lVar12 + 0x250) >> 3) * 0x7efdfbf7efdfbf7f;
  if (uVar15 < uVar22 || uVar15 - uVar22 == 0) goto LAB_7101a38d74;
  *(undefined4 *)(*(long *)(lVar12 + 0x250) + uVar22 * 0x3f8 + 0x1ac) = 0;
  if ((ulong)(*(long *)(lVar12 + 0x3b8) - *(long *)(lVar12 + 0x3b0) >> 4) <= uVar22)
  goto LAB_7101a38d70;
  lVar12 = *(long *)(*(long *)(lVar12 + 0x3b0) + uVar22 * 0x10 + 8);
  *(undefined4 *)(lVar12 + 0xf8) = 0;
  if (*(int *)(lVar12 + 0xd8) == 0) {
    FUN_7103778ab0(&local_78,(undefined8 *)(lVar12 + 0x68),pppplVar8,ppppbVar9,pppplVar10,param_6,
                   param_7,param_8);
    ppppbVar9 = (byte ****)(ulong)(*(int *)(lVar12 + 8) + 1);
    pppplVar8 = (long ****)0x1;
    FUN_710377a280((long)&local_78,(byte *)"mel_player_n",1);
    uVar15 = local_70;
    local_78 = &PTR_FUN_710523d9a8;
    local_70 = 0;
    if (uVar15 != 0) {
      FUN_710392eb40(uVar15);
    }
  }
  if (*(char *)(param_1 + 0x120) == '\0') {
    lVar12 = *(long *)(param_2 + 8);
    if (0 < *(int *)(param_1 + 0x13c)) {
      uVar15 = 0;
      lVar16 = 0x1ac;
      do {
        if (param_3 != uVar15) {
          lVar17 = *(long *)(lVar12 + 0x250);
          uVar18 = (*(long *)(lVar12 + 600) - lVar17 >> 3) * 0x7efdfbf7efdfbf7f;
          if (uVar18 < uVar15 || uVar18 - uVar15 == 0) goto LAB_7101a38d70;
          if (*(int *)(lVar17 + lVar16 + -0x19c) != 3) {
            uVar21 = *(uint *)(lVar17 + lVar16);
            goto LAB_7101a38830;
          }
        }
        uVar15 = uVar15 + 1;
        lVar16 = lVar16 + 0x3f8;
      } while ((long)uVar15 < (long)*(int *)(param_1 + 0x13c));
    }
    uVar21 = 0;
LAB_7101a38830:
    uVar15 = (*(long *)(lVar12 + 600) - *(long *)(lVar12 + 0x250) >> 3) * 0x7efdfbf7efdfbf7f;
    if (uVar15 < uVar22 || uVar15 - uVar22 == 0) goto LAB_7101a38d70;
    *(uint *)(*(long *)(lVar12 + 0x250) + uVar22 * 0x3f8 + 0x1ac) = uVar21;
    if ((ulong)(*(long *)(lVar12 + 0x3b8) - *(long *)(lVar12 + 0x3b0) >> 4) <= uVar22)
    goto LAB_7101a38d70;
    lVar12 = *(long *)(*(long *)(lVar12 + 0x3b0) + uVar22 * 0x10 + 8);
    *(uint *)(lVar12 + 0xf8) = uVar21;
    if (*(int *)(lVar12 + 0xd8) != 0) goto LAB_7101a3894c;
    FUN_7103778ab0(&local_78,(undefined8 *)(lVar12 + 0x68),pppplVar8,ppppbVar9,pppplVar10,param_6,
                   param_7,param_8);
    if (uVar21 + 1 < 2) {
      ppppbVar9 = (byte ****)(ulong)(*(int *)(lVar12 + 8) + 1);
      FUN_710377a280((long)&local_78,(byte *)"mel_player_n",1);
      uVar15 = local_70;
    }
    else {
      pcVar14 = &DAT_7105314518;
      if ((uVar21 < 0x3d) && (*(char *)*DAT_7105314510 == '\0')) {
        pcVar14 = (char *)(*(long *)**(undefined8 **)((char *)*DAT_7105314510 + 0x58) +
                          (ulong)uVar21 * 0xf7d8);
      }
      plVar3 = *(long **)(local_70 + 0x10);
      uVar15 = local_70;
      if (*pcVar14 == '\0') {
        if (plVar3 != (long *)0x0) {
          puVar7 = local_64;
          uVar21 = 0;
          ppppbVar9 = (byte ****)0x0;
          local_64[0] = 0;
          local_64[1] = 0;
          goto LAB_7101a3892c;
        }
      }
      else if (plVar3 != (long *)0x0) {
        puVar7 = (ushort *)(pcVar14 + 0xc);
        uVar21 = 0xffffffff;
        ppppbVar9 = (byte ****)0x1;
LAB_7101a3892c:
        FUN_71037a2270(plVar3,puVar7,uVar21,(ulong)ppppbVar9);
        uVar15 = local_70;
      }
    }
    local_78 = &PTR_FUN_710523d9a8;
    local_70 = 0;
    if (uVar15 != 0) {
      FUN_710392eb40(uVar15);
    }
  }
LAB_7101a3894c:
  FUN_7101a38d80(param_1,param_2,(ulong)param_3,ppppbVar9,pppplVar10,param_6,param_7,param_8);
  if (((ulong)param_5 & 1) == 0) {
    lVar12 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x168);
    ppppppppplVar5 = (long *********)&DAT_c1ffff0000000000;
    puVar4 = FUN_71032631a0(lVar12,0x11b1ccb807);
    if ((((ulong)puVar4 & 0xff00000000000000) != 0xc100000000000000) ||
       (((ulong)puVar4 & 0xffffffffff) == 0)) {
      ppppppppplVar5 = (long *********)FUN_7103263030(lVar12,0xc1ffff0000000000);
    }
    pppplVar10 = (long ****)0x0;
    FUN_7101a48700(*(long *)(param_2 + 8),param_3,&DAT_c1ffff0000000000,ppppppppplVar5,0,param_6,
                   param_7,param_8);
    lVar12 = *(long *)(*(long *)(param_2 + 8) + 0x250);
    uVar15 = (*(long *)(*(long *)(param_2 + 8) + 600) - lVar12 >> 3) * 0x7efdfbf7efdfbf7f;
    if (uVar15 < uVar22 || uVar15 - uVar22 == 0) goto LAB_7101a38d74;
    *(undefined1 *)(lVar12 + uVar22 * 0x3f8 + 0x3f5) = 0;
    lVar12 = *(long *)(*(long *)(param_2 + 8) + 0x3b0);
    if ((ulong)(*(long *)(*(long *)(param_2 + 8) + 0x3b8) - lVar12 >> 4) <= uVar22)
    goto LAB_7101a38d70;
    FUN_7103778760(*(long *)(*(long *)(lVar12 + uVar22 * 0x10 + 8) + 0x20),0x710425ed91);
    lVar12 = *(long *)(*(long *)(param_2 + 8) + 0x3b0);
    if ((ulong)(*(long *)(*(long *)(param_2 + 8) + 0x3b8) - lVar12 >> 4) <= uVar22)
    goto LAB_7101a38d70;
    lVar12 = *(long *)(lVar12 + uVar22 * 0x10 + 8);
    FUN_7103778630(0,*(long *)(lVar12 + 0x20),0x710433a9c5);
    FUN_7103778630(0,*(long *)(lVar12 + 0xb0),0x710433a9c5);
    FUN_7103778630(0,*(long *)(lVar12 + 0xc0),0x710433a9c5);
    iVar1 = *(int *)(*(long *)(param_2 + 8) + 0x150) * 5 + *(int *)(*(long *)(param_2 + 8) + 0x3cc);
    *(bool *)((long)param_4[1][4] + 0x167) = iVar1 != -1;
    *(int *)(param_4[1] + 6) = iVar1;
    lVar12 = *(long *)(*(long *)(param_2 + 8) + 0x250);
    uVar15 = (*(long *)(*(long *)(param_2 + 8) + 600) - lVar12 >> 3) * 0x7efdfbf7efdfbf7f;
    if (uVar15 < uVar22 || uVar15 - uVar22 == 0) goto LAB_7101a38d74;
    FUN_71032d2e70((long)param_4[1][4],*(int *)(param_4[1] + 5),
                   (ulong)*(uint *)(lVar12 + uVar22 * 0x3f8 + 0x10),0xffffffff,pppplVar10,param_6,
                   param_7,param_8);
    ppbVar13 = param_4[1][4];
    lVar12 = *(long *)(ppbVar13[0x20] + 0x38);
    if (lVar12 != 0) {
      *(byte *)(lVar12 + 0x58) = *(byte *)(lVar12 + 0x58) | 1;
    }
    *(undefined1 *)((long)ppbVar13 + 0x163) = 1;
    pppbVar20 = param_4[1];
    *(undefined1 *)((long)pppbVar20 + 0x36) = 1;
    if (*(char *)((long)pppbVar20 + 0x35) == '\0') {
      bVar2 = false;
    }
    else {
      bVar2 = *(char *)((long)pppbVar20 + 0x37) == '\0';
    }
    ppbVar13 = pppbVar20[4];
    pbVar6 = ppbVar13[0x20];
    (**(code **)(*(long *)pbVar6 + 0x60))(pbVar6,bVar2);
    *(bool *)((long)ppbVar13 + 0x162) = bVar2;
    bVar11 = 0;
    if ((*(char *)((long)pppbVar20 + 0x35) != '\0') &&
       (bVar11 = 0, *(char *)((long)pppbVar20 + 0x36) != '\0')) {
      bVar11 = *(byte *)((long)pppbVar20 + 0x37) ^ 1;
    }
    ppbVar13 = pppbVar20[4];
    lVar12 = *(long *)(ppbVar13[0x20] + 0x38);
    if (lVar12 != 0) {
      *(byte *)(lVar12 + 0x58) = *(byte *)(lVar12 + 0x58) & 0xfe | bVar11;
    }
    *(byte *)((long)ppbVar13 + 0x163) = bVar11;
  }
  else {
    lVar12 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x168);
    ppppppppplVar19 = *(long **********)(param_1 + 0x1c8);
    puVar4 = FUN_71032631a0(lVar12,0x11b1ccb807);
    ppppppppplVar5 = ppppppppplVar19;
    if ((((((ulong)ppppppppplVar19 & 0xff00000000000000) == 0xc100000000000000) &&
         (((ulong)ppppppppplVar19 & 0xffffffffff) != 0)) &&
        (((ulong)puVar4 & 0xff00000000000000) == 0xc100000000000000)) &&
       (((ulong)puVar4 & 0xffffffffff) != 0)) {
      if ((((ulong)puVar4 ^ (ulong)ppppppppplVar19) & 0xffffffffff) == 0) {
LAB_7101a38be0:
        ppppppppplVar5 = (long *********)FUN_7103263030(lVar12,(ulong)ppppppppplVar19);
      }
    }
    else if ((((ulong)puVar4 & 0xffffffffff) != 0 &&
             ((ulong)puVar4 & 0xff00000000000000) == 0xc100000000000000) ==
             (((ulong)ppppppppplVar19 & 0xff00000000000000) == 0xc100000000000000 &&
             ((ulong)ppppppppplVar19 & 0xffffffffff) != 0)) goto LAB_7101a38be0;
    FUN_7101a48700(*(long *)(param_2 + 8),param_3,(undefined1 *)ppppppppplVar19,ppppppppplVar5,0,
                   param_6,param_7,param_8);
    lVar12 = *(long *)(*(long *)(param_2 + 8) + 0x250);
    uVar15 = (*(long *)(*(long *)(param_2 + 8) + 600) - lVar12 >> 3) * 0x7efdfbf7efdfbf7f;
    if (uVar15 < uVar22 || uVar15 - uVar22 == 0) goto LAB_7101a38d74;
    *(undefined1 *)(lVar12 + uVar22 * 0x3f8 + 0x3f5) = 1;
    lVar12 = *(long *)(*(long *)(param_2 + 8) + 0x3b0);
    if ((ulong)(*(long *)(*(long *)(param_2 + 8) + 0x3b8) - lVar12 >> 4) <= uVar22) {
LAB_7101a38d70:
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    FUN_7103778760(*(long *)(*(long *)(lVar12 + uVar22 * 0x10 + 8) + 0x20),0x710425ed91);
    lVar12 = *(long *)(*(long *)(param_2 + 8) + 0x3b0);
    if ((ulong)(*(long *)(*(long *)(param_2 + 8) + 0x3b8) - lVar12 >> 4) <= uVar22)
    goto LAB_7101a38d70;
    lVar12 = *(long *)(lVar12 + uVar22 * 0x10 + 8);
    FUN_7103778760(*(long *)(lVar12 + 0x20),0x710433a9c5);
    FUN_7103778760(*(long *)(lVar12 + 0xb0),0x710433a9c5);
    FUN_7103778760(*(long *)(lVar12 + 0xc0),0x710433a9c5);
  }
  lVar12 = *(long *)(*(long *)(param_2 + 8) + 0x250);
  uVar15 = (*(long *)(*(long *)(param_2 + 8) + 600) - lVar12 >> 3) * 0x7efdfbf7efdfbf7f;
  if (uVar22 <= uVar15 && uVar15 - uVar22 != 0) {
    *(undefined1 *)(lVar12 + uVar22 * 0x3f8 + 0x3f4) = 1;
    return;
  }
LAB_7101a38d74:
                    /* WARNING: Subroutine does not return */
  std::__vector_base_common<true>::__throw_out_of_range();
}

