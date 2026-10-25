// addr:      7101c12220
// offset:    0x1c12220
// name:      FUN_7101c12220
// mangled:   
// signature: undefined __cdecl FUN_7101c12220(long param_1, char param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101c12220(long param_1,char param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  long lVar9;
  byte *pbVar10;
  long lVar11;
  byte *pbVar12;
  long lVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  long lVar18;
  undefined8 local_b8;
  undefined1 local_b0 [64];
  undefined **local_70;
  ulong local_68;
  undefined **local_60;
  ulong local_58;
  
  FUN_7103776640(&local_60,**(long **)(param_1 + 0x6a8) + 8,(byte ****)"set_parts_det_00",param_3,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_7103776910(&local_70,(long)&local_60,(long ****)"set_rep_det_title_00",param_3,param_4,param_5
                 ,param_6,param_7,param_8);
  local_b0[0] = 0;
  local_b8 = 0;
  if (param_2 == '\0') {
    FUN_710062dc20((uint *)&local_b8,"det_win_time");
    lVar4 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x198);
    uVar7 = 0x11a65e8b53;
  }
  else if (param_2 == '\x01') {
    FUN_710062dc20((uint *)&local_b8,"det_win_stock");
    lVar4 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x198);
    uVar7 = 0x12bf2b2922;
  }
  else {
    uVar7 = local_68;
    if (param_2 != '\x02') goto LAB_7101c12518;
    FUN_710062dc20((uint *)&local_b8,"det_win_stamina");
    lVar4 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x198);
    uVar7 = 0xf83b14356;
  }
  uVar7 = FUN_71032821b0(lVar4,uVar7);
  plVar5 = FUN_710323f760(*(long **)(param_1 + 0x150),uVar7,(long ****)param_3,param_4,param_5,
                          param_6,param_7,param_8);
  FUN_7103778b80(local_68,(long)plVar5,param_3,param_4,param_5,param_6,param_7,param_8);
  FUN_7103778300(0x3f800000,local_58,(long)local_b0);
  pbVar16 = *(byte **)(param_1 + 0x648);
  for (pbVar15 = *(byte **)(param_1 + 0x640); uVar7 = local_68, pbVar15 != pbVar16;
      pbVar15 = pbVar15 + 1) {
    bVar1 = *pbVar15;
    if (1 < bVar1 - 0x19) {
      pbVar17 = *(byte **)(param_1 + 0x640);
      pbVar10 = *(byte **)(param_1 + 0x648);
      pbVar12 = pbVar17;
      if (pbVar17 != pbVar10) {
        bVar2 = *pbVar17;
        while (bVar2 != 0x1a) {
          pbVar12 = pbVar12 + 1;
          if (pbVar10 == pbVar12) goto LAB_7101c1240c;
          bVar2 = *pbVar12;
        }
      }
      if (pbVar10 != pbVar12) {
        pbVar14 = pbVar17;
        if ((pbVar17 != pbVar10) && ((uint)*pbVar17 != (uint)bVar1)) {
          do {
            pbVar14 = pbVar14 + 1;
            if (pbVar10 == pbVar14) {
              if (-1 < (long)pbVar12 - (long)pbVar10) goto LAB_7101c1240c;
              goto LAB_7101c12368;
            }
          } while (*pbVar14 != bVar1);
        }
        if ((long)pbVar12 - (long)pbVar14 < 0) goto LAB_7101c12368;
      }
LAB_7101c1240c:
      pbVar12 = pbVar17;
      if (pbVar17 != pbVar10) {
        bVar2 = *pbVar17;
        pbVar14 = pbVar17;
        while ((pbVar12 = pbVar14, bVar2 != bVar1 &&
               (pbVar14 = pbVar14 + 1, pbVar12 = pbVar10, pbVar10 != pbVar14))) {
          bVar2 = *pbVar14;
        }
      }
      lVar4 = *(long *)(param_1 + 0x6b8);
      if (*(long **)(lVar4 + 0x160) != (long *)0x0) {
        (**(code **)(**(long **)(lVar4 + 0x160) + 0x18))();
        iVar8 = *(int *)(lVar4 + 0x2c4);
        if (0 < iVar8) {
          iVar3 = (int)pbVar12 - (int)pbVar17;
          lVar18 = 0;
          do {
            if ((iVar3 - *(int *)(lVar4 + 0x29c) == (int)lVar18) &&
               (iVar3 < *(int *)(lVar4 + 0x288))) {
              lVar9 = *(long *)(lVar4 + 0x168);
              lVar11 = *(long *)(lVar9 + lVar18 * 8);
              lVar13 = **(long **)(lVar11 + 0x20);
              if (lVar13 != 0) {
                *(byte *)(lVar13 + 0x58) = *(byte *)(lVar13 + 0x58) | 1;
                lVar11 = *(long *)(lVar9 + lVar18 * 8);
              }
              *(int *)(lVar11 + 0x30) = iVar3;
              lVar9 = *(long *)(lVar9 + lVar18 * 8);
              (**(code **)(**(long **)(lVar4 + 0x160) + 0x10))
                        (*(long **)(lVar4 + 0x160),*(undefined4 *)(lVar9 + 0x30),lVar9 + 8,
                         lVar9 + 0x18);
              iVar8 = *(int *)(lVar4 + 0x2c4);
            }
            lVar18 = lVar18 + 1;
          } while (lVar18 < iVar8);
        }
        (**(code **)(**(long **)(lVar4 + 0x160) + 0x20))();
      }
    }
LAB_7101c12368:
  }
LAB_7101c12518:
  local_70 = &PTR_FUN_710523d9a8;
  local_68 = 0;
  if (uVar7 != 0) {
    FUN_710392eb40(uVar7);
  }
  uVar7 = local_58;
  local_60 = &PTR_FUN_710523d988;
  local_58 = 0;
  if (uVar7 != 0) {
    uVar6 = *(ulong *)(uVar7 + 0x18);
    *(undefined ***)(uVar7 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar7 + 0x18) = 0;
    if (uVar6 != 0) {
      FUN_710392eb40(uVar6);
    }
    FUN_710392eb40(uVar7);
  }
  return;
}

