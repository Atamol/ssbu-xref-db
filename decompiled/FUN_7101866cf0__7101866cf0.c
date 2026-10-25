// addr:      7101866cf0
// offset:    0x1866cf0
// name:      FUN_7101866cf0
// mangled:   
// signature: undefined __cdecl FUN_7101866cf0(long param_1, long param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101866cf0(long param_1,long param_2,undefined8 param_3,undefined8 param_4,long ****param_5
                   ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  int *piVar2;
  byte ****ppppbVar3;
  uint uVar4;
  int iVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  int *piVar13;
  long lVar14;
  ulong uVar15;
  undefined **local_98;
  undefined8 *local_90;
  undefined **local_88;
  undefined8 *local_80;
  undefined **local_78;
  undefined8 *local_70;
  
  lVar14 = *(long *)(*(long *)(param_1 + 0x138) + 0x80);
  FUN_7103776910(&local_78,**(long **)(lVar14 + 0x80) + 8,(long ****)"set_fxui_confetti",param_3,
                 param_4,param_5,param_6,param_7,param_8);
  puVar6 = local_70;
  FUN_710377acb0((long *)*local_70,1,param_3,param_4,param_5,param_6,param_7,param_8);
  if (*(int *)(lVar14 + 0xbcc) == 0) {
    FUN_7103776910(&local_88,**(long **)(lVar14 + 0x80) + 8,(long ****)"set_fxui_spark",param_3,
                   param_4,param_5,param_6,param_7,param_8);
    puVar8 = local_80;
    local_80 = (undefined8 *)0x0;
    local_70 = puVar8;
    if (puVar6 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)puVar6);
    }
    local_88 = &PTR_FUN_710523d9a8;
    local_80 = (undefined8 *)0x0;
    FUN_710377acb0((long *)*puVar8,1,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  else {
    iVar12 = *(int *)(lVar14 + 0xa58);
    piVar1 = (int *)(lVar14 + 0x9c);
    piVar13 = piVar1;
    if (*(int *)(lVar14 + 0xa0) == iVar12) {
LAB_7101866e4c:
      iVar12 = *piVar13;
    }
    else {
      if (*(int *)(lVar14 + 0x138) == iVar12) {
        piVar13 = (int *)(lVar14 + 0x134);
        goto LAB_7101866e4c;
      }
      if (*(int *)(lVar14 + 0x1d0) == iVar12) {
        piVar13 = (int *)(lVar14 + 0x1cc);
        goto LAB_7101866e4c;
      }
      if (*(int *)(lVar14 + 0x268) == iVar12) {
        piVar13 = (int *)(lVar14 + 0x264);
        goto LAB_7101866e4c;
      }
      if (*(int *)(lVar14 + 0x300) == iVar12) {
        piVar13 = (int *)(lVar14 + 0x2fc);
        goto LAB_7101866e4c;
      }
      if (*(int *)(lVar14 + 0x398) == iVar12) {
        piVar13 = (int *)(lVar14 + 0x394);
        goto LAB_7101866e4c;
      }
      if (*(int *)(lVar14 + 0x430) == iVar12) {
        piVar13 = (int *)(lVar14 + 0x42c);
        goto LAB_7101866e4c;
      }
      if (*(int *)(lVar14 + 0x4c8) == iVar12) {
        piVar13 = (int *)(lVar14 + 0x4c4);
        goto LAB_7101866e4c;
      }
      iVar12 = 0;
    }
    iVar10 = *piVar1;
    piVar13 = piVar1;
    if (iVar10 == iVar12) {
LAB_7101866ef0:
      iVar12 = piVar13[1];
      if (iVar12 == -1) goto LAB_7101866f20;
      lVar9 = lVar14 + 0xa18;
      if (*(int *)(lVar14 + 0xa18) != iVar12) {
        if (*(int *)(lVar14 + 0xa20) == iVar12) {
          lVar9 = lVar14 + 0xa20;
        }
        else if (*(int *)(lVar14 + 0xa28) == iVar12) {
          lVar9 = lVar14 + 0xa28;
        }
        else if (*(int *)(lVar14 + 0xa30) == iVar12) {
          lVar9 = lVar14 + 0xa30;
        }
        else if (*(int *)(lVar14 + 0xa38) == iVar12) {
          lVar9 = lVar14 + 0xa38;
        }
        else if (*(int *)(lVar14 + 0xa40) == iVar12) {
          lVar9 = lVar14 + 0xa40;
        }
        else if (*(int *)(lVar14 + 0xa48) == iVar12) {
          lVar9 = lVar14 + 0xa48;
        }
        else {
          lVar9 = lVar14 + 0xa50;
          if (*(int *)(lVar14 + 0xa50) != iVar12) {
            lVar9 = lVar14 + 0xa18;
          }
        }
      }
      iVar12 = *(int *)(lVar9 + 4);
    }
    else {
      if (*(int *)(lVar14 + 0x134) == iVar12) {
        piVar13 = (int *)(lVar14 + 0x134);
        goto LAB_7101866ef0;
      }
      if (*(int *)(lVar14 + 0x1cc) == iVar12) {
        piVar13 = (int *)(lVar14 + 0x1cc);
        goto LAB_7101866ef0;
      }
      if (*(int *)(lVar14 + 0x264) == iVar12) {
        piVar13 = (int *)(lVar14 + 0x264);
        goto LAB_7101866ef0;
      }
      if (*(int *)(lVar14 + 0x2fc) == iVar12) {
        piVar13 = (int *)(lVar14 + 0x2fc);
        goto LAB_7101866ef0;
      }
      if (*(int *)(lVar14 + 0x394) == iVar12) {
        piVar13 = (int *)(lVar14 + 0x394);
        goto LAB_7101866ef0;
      }
      if (*(int *)(lVar14 + 0x42c) == iVar12) {
        piVar13 = (int *)(lVar14 + 0x42c);
        goto LAB_7101866ef0;
      }
      if (*(int *)(lVar14 + 0x4c4) == iVar12) {
        piVar13 = (int *)(lVar14 + 0x4c4);
        goto LAB_7101866ef0;
      }
LAB_7101866f20:
      iVar12 = 0;
    }
    uVar4 = *(uint *)(lVar14 + 0x98);
    if (0 < (int)uVar4) {
      uVar15 = 0;
      piVar13 = (int *)(lVar14 + 0x9c);
      piVar2 = (int *)(lVar14 + 0xa18);
      do {
        piVar11 = piVar13;
        if (7 < uVar15) {
          piVar11 = &DAT_710509ec08;
        }
        iVar5 = *piVar11;
        piVar11 = piVar1;
        if ((((((iVar10 == iVar5) ||
               (piVar11 = (int *)(lVar14 + 0x134), *(int *)(lVar14 + 0x134) == iVar5)) ||
              (piVar11 = (int *)(lVar14 + 0x1cc), *(int *)(lVar14 + 0x1cc) == iVar5)) ||
             ((piVar11 = (int *)(lVar14 + 0x264), *(int *)(lVar14 + 0x264) == iVar5 ||
              (piVar11 = (int *)(lVar14 + 0x2fc), *(int *)(lVar14 + 0x2fc) == iVar5)))) ||
            ((piVar11 = (int *)(lVar14 + 0x394), *(int *)(lVar14 + 0x394) == iVar5 ||
             ((piVar11 = (int *)(lVar14 + 0x42c), *(int *)(lVar14 + 0x42c) == iVar5 ||
              (piVar11 = (int *)(lVar14 + 0x4c4), *(int *)(lVar14 + 0x4c4) == iVar5)))))) &&
           (iVar10 = piVar11[1], iVar10 != -1)) {
          piVar11 = piVar2;
          if ((((*piVar2 != iVar10) &&
               (piVar11 = (int *)(lVar14 + 0xa20), *(int *)(lVar14 + 0xa20) != iVar10)) &&
              (piVar11 = (int *)(lVar14 + 0xa28), *(int *)(lVar14 + 0xa28) != iVar10)) &&
             (((piVar11 = (int *)(lVar14 + 0xa30), *(int *)(lVar14 + 0xa30) != iVar10 &&
               (piVar11 = (int *)(lVar14 + 0xa38), *(int *)(lVar14 + 0xa38) != iVar10)) &&
              ((piVar11 = (int *)(lVar14 + 0xa40), *(int *)(lVar14 + 0xa40) != iVar10 &&
               ((piVar11 = (int *)(lVar14 + 0xa48), *(int *)(lVar14 + 0xa48) != iVar10 &&
                (piVar11 = (int *)(lVar14 + 0xa50), *(int *)(lVar14 + 0xa50) != iVar10)))))))) {
            piVar11 = piVar2;
          }
          if (piVar11[1] == iVar12) {
LAB_71018671a8:
            lVar9 = (long)*(int *)(lVar14 + 0xb78 + uVar15 * 4);
            ppppbVar3 = (byte ****)"set_parts_player_%02d";
            if (*(int *)(lVar14 + 0xbcc) != 0) {
              ppppbVar3 = (byte ****)"set_parts_player_1%1d";
            }
            FUN_7103776640(&local_88,**(long **)(lVar14 + 0x80) + 8,ppppbVar3,lVar9,param_4,param_5,
                           param_6,param_7,param_8);
            FUN_7103776910(&local_98,(long)&local_88,(long ****)"set_fxui_spark",lVar9,param_4,
                           param_5,param_6,param_7,param_8);
            puVar8 = local_90;
            FUN_710377acb0((long *)*local_90,1,lVar9,param_4,param_5,param_6,param_7,param_8);
            local_98 = &PTR_FUN_710523d9a8;
            local_90 = (undefined8 *)0x0;
            if (puVar8 != (undefined8 *)0x0) {
              FUN_710392eb40((ulong)puVar8);
            }
            puVar8 = local_80;
            local_88 = &PTR_FUN_710523d988;
            local_80 = (undefined8 *)0x0;
            if (puVar8 != (undefined8 *)0x0) {
              uVar7 = puVar8[3];
              puVar8[2] = &PTR_FUN_710523d9a8;
              puVar8[3] = 0;
              if (uVar7 != 0) {
                FUN_710392eb40(uVar7);
              }
              FUN_710392eb40((ulong)puVar8);
            }
          }
        }
        else if (iVar12 == 0) goto LAB_71018671a8;
        if ((ulong)uVar4 - 1 == uVar15) break;
        iVar10 = *piVar1;
        uVar15 = uVar15 + 1;
        piVar13 = piVar13 + 0x26;
      } while( true );
    }
    local_78 = &PTR_FUN_710523d9a8;
    local_70 = (undefined8 *)0x0;
    puVar8 = puVar6;
    if (puVar6 == (undefined8 *)0x0) goto LAB_7101867274;
  }
  local_70 = (undefined8 *)0x0;
  local_78 = &PTR_FUN_710523d9a8;
  FUN_710392eb40((ulong)puVar8);
LAB_7101867274:
  FUN_7103726af0(*(long *)(param_2 + 8),*(undefined4 *)(param_1 + 0x10));
  return;
}

