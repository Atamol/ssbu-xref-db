// addr:      710187e7d0
// offset:    0x187e7d0
// name:      FUN_710187e7d0
// mangled:   
// signature: undefined __cdecl FUN_710187e7d0(long param_1, undefined8 param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_710187e7d0(long param_1,undefined8 param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  float *pfVar1;
  long lVar2;
  undefined8 *puVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar6;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 extraout_x1_08;
  long *********ppppppppplVar7;
  ulong uVar8;
  long lVar9;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  undefined **local_70;
  undefined8 *local_68;
  
  lVar12 = *(long *)(param_1 + 0x58);
  lVar9 = *(long *)(lVar12 + 0x128);
  lVar11 = *(long *)(lVar9 + 0x80);
  FUN_7103776910(&local_70,**(long **)(lVar11 + 0x21e0) + 8,(long ****)"set_fxui_confetti",param_3,
                 param_4,param_5,param_6,param_7,param_8);
  puVar3 = local_68;
  FUN_710377acb0((long *)*local_68,1,param_3,param_4,param_5,param_6,param_7,param_8);
  local_70 = &PTR_FUN_710523d9a8;
  local_68 = (undefined8 *)0x0;
  uVar6 = extraout_x1;
  if (puVar3 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar3);
    uVar6 = extraout_x1_00;
  }
  FUN_7103775fa0((long *)**(undefined8 **)(lVar11 + 0x21d8),uVar6,(long ****)param_3,param_4,param_5
                 ,param_6,param_7,param_8);
  FUN_7103775fa0((long *)**(undefined8 **)(lVar11 + 0x21e8),extraout_x1_01,(long ****)param_3,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_7103775fa0((long *)**(undefined8 **)(lVar11 + 0x21c0),extraout_x1_02,(long ****)param_3,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_7103775fa0((long *)**(undefined8 **)(lVar11 + 0x21c8),extraout_x1_03,(long ****)param_3,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_7103775fa0((long *)**(undefined8 **)(lVar11 + 0x21e0),extraout_x1_04,(long ****)param_3,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_7103775fa0((long *)**(undefined8 **)(lVar11 + 0x21d0),extraout_x1_05,(long ****)param_3,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_7103775fa0((long *)**(undefined8 **)(lVar11 + 0x21f0),extraout_x1_06,(long ****)param_3,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_7103775fa0((long *)**(undefined8 **)(lVar11 + 0x21f8),extraout_x1_07,(long ****)param_3,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_7103775fa0((long *)**(undefined8 **)(lVar11 + 0x2200),extraout_x1_08,(long ****)param_3,
                 param_4,param_5,param_6,param_7,param_8);
  if ((DAT_7105339168 != 0) && (pfVar1 = (float *)(DAT_7105339168 + 0x72b4), *pfVar1 != 0.0)) {
    *(undefined1 *)(DAT_7105339168 + 0x72b9) = 1;
    *pfVar1 = 0.0;
  }
  *(undefined1 *)(lVar9 + 0x70) = 1;
  lVar9 = *(long *)(*(long *)(DAT_7105329060 + 8) + 200);
  lVar11 = *(long *)(*(long *)(DAT_7105329060 + 8) + 0xd0);
  uVar8 = lVar11 - lVar9;
  if ((int)(uVar8 >> 3) == 0) {
    return;
  }
  uVar14 = 0;
  do {
    if ((ulong)(lVar11 - lVar9 >> 3) <= uVar14) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    lVar11 = *(long *)(lVar9 + uVar14 * 8);
    if (*(int *)(lVar11 + 0x834) != 0) {
      lVar15 = 0;
      uVar13 = 0;
      do {
        uVar5 = FUN_7103263f80(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x168),
                               *(ulong *)(lVar11 + lVar15 + 0x38));
        uVar5 = FUN_7103238d60(uVar5,0x11);
        FUN_710323ecb0((undefined8 *)(*(long *)(lVar12 + 0x138) + 0x38),uVar5,param_3,param_4,
                       param_5,param_6,param_7,param_8);
        lVar2 = *(long *)(lVar9 + uVar14 * 8) + lVar15;
        puVar10 = *(undefined1 **)(lVar2 + 0x38);
        lVar16 = *(long *)(DAT_710532f730 + 8);
        lVar11 = lVar16 + 0x160;
        bVar4 = FUN_7103264990(lVar11,(ulong)puVar10);
        uVar5 = 0xb28d453e;
        if (bVar4) {
LAB_710187e9c8:
          puVar10 = FUN_71032631a0(*(long *)(lVar16 + 0x168),uVar5 | 0x1300000000);
        }
        else {
          bVar4 = FUN_7103264ab0(lVar11,(ulong)puVar10);
          uVar5 = 0xb3e567a6;
          if (bVar4) goto LAB_710187e9c8;
        }
        ppppppppplVar7 = (long *********)0x1;
        uVar5 = FUN_7103238a70((ulong)puVar10,(ulong)*(byte *)(lVar2 + 0x48),1);
        FUN_710323ecb0((undefined8 *)(*(long *)(lVar12 + 0x138) + 0x38),uVar5,ppppppppplVar7,param_4
                       ,param_5,param_6,param_7,param_8);
        lVar11 = *(long *)(lVar9 + uVar14 * 8) + lVar15;
        param_3 = (long *********)0x2;
        uVar5 = FUN_7103238a70(*(ulong *)(lVar11 + 0x38),(ulong)*(byte *)(lVar11 + 0x48),2);
        FUN_710323ecb0((undefined8 *)(*(long *)(lVar12 + 0x138) + 0x38),uVar5,param_3,param_4,
                       param_5,param_6,param_7,param_8);
        lVar11 = *(long *)(lVar9 + uVar14 * 8);
        uVar13 = uVar13 + 1;
        lVar15 = lVar15 + 0x1c8;
      } while (uVar13 < *(uint *)(lVar11 + 0x834));
    }
    uVar14 = uVar14 + 1;
    if (uVar14 == (uVar8 >> 3 & 0xffffffff)) {
      return;
    }
    lVar9 = *(long *)(*(long *)(DAT_7105329060 + 8) + 200);
    lVar11 = *(long *)(*(long *)(DAT_7105329060 + 8) + 0xd0);
  } while( true );
}

