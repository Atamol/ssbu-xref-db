// addr:      710193e300
// offset:    0x193e300
// name:      FUN_710193e300
// mangled:   
// signature: undefined __cdecl FUN_710193e300(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_710193e300(long param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 uVar2;
  long ****pppplVar3;
  int iVar4;
  long *plVar5;
  char cVar6;
  undefined4 uVar7;
  ushort *puVar8;
  long *plVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  ushort uVar13;
  int iVar14;
  ulong uVar15;
  int iVar16;
  ushort *puVar17;
  long lVar18;
  undefined8 *puVar19;
  long *plVar20;
  long lVar21;
  long *plVar22;
  uint auStack_98 [2];
  char acStack_90 [64];
  
  lVar18 = *(long *)(*(long *)(param_1 + 0x1c0) + 0x80);
  FUN_7103775dc0((long *)**(undefined8 **)(lVar18 + 0x1f0),0,(long ****)&DAT_00001000,param_4,
                 param_5,param_6,param_7,param_8);
  uVar2 = 0x14fff;
  FUN_7103775dc0((long *)**(undefined8 **)(lVar18 + 0x328),1,(long ****)0x14fff,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_7101e9c150(*(long *)(lVar18 + 0x208),1,uVar2,param_4,param_5,param_6,param_7,param_8);
  FUN_710377abf0((long *)**(undefined8 **)(lVar18 + 0x240),1);
  FUN_710377abf0((long *)**(undefined8 **)(lVar18 + 0x270),1);
  FUN_710377abf0((long *)**(undefined8 **)(lVar18 + 0x2a0),1);
  FUN_710377abf0((long *)**(undefined8 **)(lVar18 + 0x2d0),1);
  lVar18 = *(long *)(param_1 + 0x1c8);
  *(undefined1 *)(lVar18 + 0x70) = 0;
  pppplVar3 = (long ****)0x0;
  FUN_7103775dc0((long *)**(undefined8 **)(*(long *)(lVar18 + 0x80) + 8),3,(long ****)0x0,param_4,
                 param_5,param_6,param_7,param_8);
  lVar18 = *(long *)(*(long *)(*(long *)(param_1 + 0x1e8) + 8) + 8);
  if ((((*(char *)(lVar18 + 0x388) == '\0') ||
       (uVar12 = (ulong)*(byte *)(*(long *)(param_1 + 0x1e8) + 0x10), 0xd < uVar12)) ||
      (3 < *(byte *)(param_1 + 0x1e0))) ||
     ((lVar18 = *(long *)(lVar18 + uVar12 * 8 + 8), lVar18 == 0 ||
      (*(short *)(lVar18 + (ulong)*(byte *)(param_1 + 0x1e0) * 0x1c8 + 8) == -1)))) {
    uVar2 = extraout_x1;
    if (*(char *)(param_1 + 0x1e2) == '\0') goto LAB_710193ea00;
    lVar18 = *(long *)(*(long *)(param_1 + 0x1c0) + 0x80);
    puVar19 = *(undefined8 **)(lVar18 + 0x208);
    plVar1 = (long *)*puVar19;
    (**(code **)(*plVar1 + 0x60))(plVar1,0);
    plVar1 = (long *)*puVar19;
    (**(code **)(*plVar1 + 0x70))(plVar1,0);
    *(undefined1 *)(*(long *)(lVar18 + 0x378) + 0x80) = 0;
    uVar12 = FUN_71032a3d90(*(long *)(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x208) + 8),
                            0x1530ff0e86);
    uVar15 = *(ulong *)(lVar18 + 0x3b8);
    uVar2 = extraout_x1_00;
    if ((((uVar12 & 0xff00000000000000) == 0x5200000000000000) && ((uVar12 & 0xffffffffff) != 0)) &&
       (((uVar15 & 0xff00000000000000) == 0x5200000000000000 && ((uVar15 & 0xffffffffff) != 0)))) {
      if (((uVar15 ^ uVar12) & 0xffffffffff) != 0) {
LAB_710193e5ec:
        if (3 < (ulong)*(byte *)(lVar18 + 0x382)) goto LAB_710193ea70;
        lVar21 = lVar18 + (ulong)*(byte *)(lVar18 + 0x382) * 0x30;
        FUN_7103778300(0x3f800000,*(long *)(lVar21 + 0x220),0x71043ef74a);
        FUN_710377aa20((long *)**(undefined8 **)(lVar21 + 0x240),0);
        uVar12 = (ulong)*(byte *)(lVar18 + 0x382);
        cVar6 = *(char *)(lVar18 + 0x212);
        if (((uVar12 < 4) && (cVar6 != '\0')) &&
           (lVar21 = *(long *)(*(long *)(lVar18 + 0x208) + uVar12 * 8 + 0x48), lVar21 != 0)) {
          plVar1 = *(long **)(lVar21 + 0x88);
          plVar20 = (long *)plVar1[1];
          if (plVar20 != (long *)0x0) {
            if ((char)plVar1[2] != '\0') {
              plVar22 = *(long **)(*plVar1 + 0x80);
              plVar1 = (long *)(*plVar1 + 0x88);
              if (plVar22 != plVar1) {
                do {
                  while( true ) {
                    uVar12 = (**(code **)(*(long *)plVar22[0xd] + 0x148))();
                    if (((uVar12 & 1) != 0) &&
                       (uVar12 = (**(code **)(*plVar20 + 0x120))(plVar20,plVar22[0xd]),
                       (uVar12 & 1) != 0)) {
                      (**(code **)(*(long *)plVar22[0xd] + 0x178))();
                      (**(code **)(*(long *)plVar22[0xd] + 0x140))((long *)plVar22[0xd],0);
                    }
                    plVar5 = (long *)plVar22[1];
                    if ((long *)plVar22[1] == (long *)0x0) break;
                    do {
                      plVar22 = plVar5;
                      plVar5 = (long *)*plVar22;
                    } while ((long *)*plVar22 != (long *)0x0);
LAB_710193e704:
                    if (plVar22 == plVar1) goto LAB_710193e71c;
                  }
                  plVar5 = plVar22 + 2;
                  plVar9 = (long *)*plVar5;
                  if ((long *)*plVar9 != plVar22) {
                    do {
                      lVar10 = *plVar5;
                      plVar5 = (long *)(lVar10 + 0x10);
                      plVar22 = (long *)*plVar5;
                    } while (*plVar22 != lVar10);
                    goto LAB_710193e704;
                  }
                  plVar22 = plVar9;
                } while (plVar9 != plVar1);
LAB_710193e71c:
                plVar20 = *(long **)(*(long *)(lVar21 + 0x88) + 8);
              }
            }
            (**(code **)(*plVar20 + 0x188))(plVar20);
          }
          FUN_7103778300(0x3f800000,*(long *)(lVar21 + 8),0x710425fbe5);
          FUN_7103778300(0x3f800000,*(long *)(lVar21 + 8),0x710435bea3);
          FUN_7103778300(0x3f800000,*(long *)(lVar21 + 0x28),0x710425fbe5);
          *(undefined1 *)(lVar21 + 0xb3) = 0;
          if (*(char *)(lVar21 + 0xb4) != '\0') {
            FUN_7103778300(0x3f800000,*(long *)(lVar21 + 8),0x71043cfbc9);
          }
          *(undefined1 *)(lVar21 + 0xb4) = 0;
          uVar12 = (ulong)*(byte *)(lVar18 + 0x382);
          cVar6 = *(char *)(lVar18 + 0x212);
        }
        if ((((uint)uVar12 < 4) && (cVar6 != '\0')) &&
           (lVar21 = *(long *)(*(long *)(lVar18 + 0x208) + uVar12 * 8 + 0x48), lVar21 != 0)) {
          FUN_7103778300(0x3f800000,*(long *)(lVar21 + 8),0x710434aaac);
          *(undefined1 *)(lVar21 + 0xb1) = 1;
        }
        FUN_71003a4ca0(auStack_98,"cam_school%d_dialog_training_start_again",
                       (ulong)(*(byte *)(*(long *)(lVar18 + 0x3b0) + 8) + 1),pppplVar3,param_4,
                       param_5,param_6,param_7,param_8);
        FUN_710377a120(*(long *)(lVar18 + 0x2e8) + 0x10,acStack_90,pppplVar3,param_4,param_5,param_6
                       ,param_7,param_8);
        lVar21 = *(long *)(*(long *)(*(long *)(lVar18 + 0x2e8) + 0x18) + 0x10);
        iVar4 = 0;
        if (lVar21 != 0) {
          puVar8 = *(ushort **)(lVar21 + 0xd8);
          if ((puVar8 == (ushort *)0x0) || (uVar13 = *puVar8, uVar13 == 0)) {
            iVar4 = 0;
          }
          else {
            uVar11 = 0;
            iVar4 = 0;
            puVar17 = puVar8;
            do {
              if ((uVar13 | 1) == 0xf) {
                if (uVar13 == 0xe) {
                  iVar14 = 0;
                  iVar16 = (puVar17[3] >> 1) + 4;
                }
                else {
                  iVar14 = 0;
                  iVar16 = 3;
                  if (uVar13 != 0xf) {
                    iVar16 = 0;
                  }
                }
              }
              else {
                iVar14 = 1;
                iVar16 = 1;
              }
              uVar11 = iVar16 + uVar11;
              puVar17 = puVar8 + uVar11;
              iVar4 = iVar14 + iVar4;
              uVar13 = *puVar17;
            } while (uVar13 != 0);
          }
        }
        *(int *)(lVar18 + 0x2f8) = iVar4;
        FUN_7101e94ba0((long *)(lVar18 + 0x2e8),1,pppplVar3,param_4,param_5,param_6,param_7,param_8)
        ;
        uVar2 = extraout_x1_01;
      }
    }
    else if (((uVar15 & 0xffffffffff) != 0 && (uVar15 & 0xff00000000000000) == 0x5200000000000000)
             != ((uVar12 & 0xff00000000000000) == 0x5200000000000000 && (uVar12 & 0xffffffffff) != 0
                )) goto LAB_710193e5ec;
    *(undefined8 *)(lVar18 + 0x10) = 0;
    *(undefined8 *)(lVar18 + 0x18) = 0;
    *(undefined8 *)(lVar18 + 0x1d4) = 0;
    *(undefined8 *)(lVar18 + 0x1cc) = 0;
    *(undefined8 *)(lVar18 + 0x1c4) = 0;
    *(undefined8 *)(lVar18 + 0x1bc) = 0;
    *(undefined8 *)(lVar18 + 0x1b4) = 0;
    *(undefined8 *)(lVar18 + 0x1ac) = 0;
    *(undefined8 *)(lVar18 + 0x1a4) = 0;
    *(undefined8 *)(lVar18 + 0x194) = 0;
    *(undefined8 *)(lVar18 + 0x19c) = 0;
    *(undefined8 *)(lVar18 + 0x1e0) = 0xffffffff;
    *(undefined4 *)(lVar18 + 0x1e8) = 0xffffffff;
    *(undefined4 *)(lVar18 + 0x1dc) = 0;
    *(undefined1 *)(lVar18 + 0x1ec) = 0;
    *(undefined4 *)(lVar18 + 400) = 7;
    if (0x12 < *(uint *)(param_1 + 0x1a4)) goto LAB_710193ea70;
    *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x1a4) * 4 + 0x158) = 0xc;
    if (*(int *)(param_1 + 0x1a4) < 0x12) {
      uVar11 = *(int *)(param_1 + 0x1a4) + 1;
      *(uint *)(param_1 + 0x1a4) = uVar11;
      if (0x12 < uVar11) goto LAB_710193ea70;
      *(undefined4 *)(param_1 + (long)(int)uVar11 * 4 + 0x158) = 10;
      if (0x11 < *(int *)(param_1 + 0x1a4)) goto LAB_710193ea1c;
      uVar11 = *(int *)(param_1 + 0x1a4) + 1;
      *(uint *)(param_1 + 0x1a4) = uVar11;
      if (0x12 < uVar11) goto LAB_710193ea70;
      uVar7 = 0x12;
      goto LAB_710193ea18;
    }
  }
  else {
    lVar21 = *(long *)(*(long *)(param_1 + 0x1c0) + 0x80);
    puVar19 = *(undefined8 **)(lVar21 + 0x208);
    plVar1 = (long *)*puVar19;
    (**(code **)(*plVar1 + 0x60))(plVar1,0);
    plVar1 = (long *)*puVar19;
    (**(code **)(*plVar1 + 0x70))(plVar1,0);
    *(undefined1 *)(*(long *)(lVar21 + 0x378) + 0x80) = 0;
    FUN_71003a4ca0(auStack_98,"cam_school%d_dialog_training_start",
                   (ulong)(*(byte *)(*(long *)(lVar21 + 0x3b0) + 8) + 1),pppplVar3,param_4,param_5,
                   param_6,param_7,param_8);
    FUN_710377a120(*(long *)(lVar21 + 0x2e8) + 0x10,acStack_90,pppplVar3,param_4,param_5,param_6,
                   param_7,param_8);
    lVar18 = *(long *)(*(long *)(*(long *)(lVar21 + 0x2e8) + 0x18) + 0x10);
    iVar4 = 0;
    if (lVar18 != 0) {
      puVar8 = *(ushort **)(lVar18 + 0xd8);
      if ((puVar8 == (ushort *)0x0) || (uVar13 = *puVar8, uVar13 == 0)) {
        iVar4 = 0;
      }
      else {
        uVar11 = 0;
        iVar4 = 0;
        puVar17 = puVar8;
        do {
          if ((uVar13 | 1) == 0xf) {
            if (uVar13 == 0xe) {
              iVar14 = 0;
              iVar16 = (puVar17[3] >> 1) + 4;
            }
            else {
              iVar14 = 0;
              iVar16 = 3;
              if (uVar13 != 0xf) {
                iVar16 = 0;
              }
            }
          }
          else {
            iVar14 = 1;
            iVar16 = 1;
          }
          uVar11 = iVar16 + uVar11;
          puVar17 = puVar8 + uVar11;
          iVar4 = iVar14 + iVar4;
          uVar13 = *puVar17;
        } while (uVar13 != 0);
      }
    }
    *(int *)(lVar21 + 0x2f8) = iVar4;
    FUN_7101e94ba0((long *)(lVar21 + 0x2e8),1,pppplVar3,param_4,param_5,param_6,param_7,param_8);
    *(undefined8 *)(lVar21 + 0x10) = 0;
    *(undefined8 *)(lVar21 + 0x18) = 0;
    *(undefined8 *)(lVar21 + 0x1d4) = 0;
    *(undefined8 *)(lVar21 + 0x1cc) = 0;
    *(undefined8 *)(lVar21 + 0x1c4) = 0;
    *(undefined8 *)(lVar21 + 0x1bc) = 0;
    *(undefined8 *)(lVar21 + 0x1b4) = 0;
    *(undefined8 *)(lVar21 + 0x1ac) = 0;
    *(undefined8 *)(lVar21 + 0x1a4) = 0;
    *(undefined8 *)(lVar21 + 0x194) = 0;
    *(undefined8 *)(lVar21 + 0x19c) = 0;
    *(undefined8 *)(lVar21 + 0x1e0) = 0xffffffff;
    *(undefined4 *)(lVar21 + 0x1e8) = 0xffffffff;
    *(undefined4 *)(lVar21 + 0x1dc) = 0;
    *(undefined1 *)(lVar21 + 0x1ec) = 0;
    *(undefined4 *)(lVar21 + 400) = 7;
    uVar2 = extraout_x1_02;
LAB_710193ea00:
    uVar11 = *(uint *)(param_1 + 0x1a4);
    if (0x12 < uVar11) goto LAB_710193ea70;
    uVar7 = 5;
LAB_710193ea18:
    *(undefined4 *)(param_1 + (long)(int)uVar11 * 4 + 0x158) = uVar7;
  }
LAB_710193ea1c:
  FUN_71032e5b10(*(long *)(DAT_710532f7c8 + 8),uVar2,pppplVar3,param_4,param_5,param_6,param_7,
                 param_8);
  uVar11 = *(uint *)(param_1 + 0x1a4);
  if ((int)uVar11 < 0x12) {
    uVar11 = uVar11 + 1;
    *(uint *)(param_1 + 0x1a4) = uVar11;
    if (0x12 < uVar11) {
LAB_710193ea70:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined4 *)(param_1 + (long)(int)uVar11 * 4 + 0x158) = 0x12;
  }
  return;
}

