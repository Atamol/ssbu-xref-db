// addr:      7101c01a00
// offset:    0x1c01a00
// name:      FUN_7101c01a00
// mangled:   
// signature: undefined __cdecl FUN_7101c01a00(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101c01a00(long param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  byte ****ppppbVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  int iVar11;
  int *piVar12;
  int *piVar13;
  int iVar14;
  int *piVar15;
  ulong uVar16;
  undefined **local_d8;
  undefined8 *local_d0;
  undefined **local_c8;
  undefined8 *local_c0;
  undefined **local_b8;
  undefined8 *local_b0;
  undefined4 local_a8 [2];
  undefined **local_a0;
  long local_98;
  undefined8 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  FUN_7103778300(0x3f800000,*(long *)(**(long **)(param_1 + 0x80) + 0x10),0x710443386d);
  lVar8 = *(long *)(DAT_710532f8d0 + 8);
  if ((ulong)(*(long *)(lVar8 + 0x48) - *(long *)(lVar8 + 0x40) >> 3) < 3) {
    uVar16 = 0;
    if (*(char *)(lVar8 + 0x191) == '\0') goto LAB_7101c01a7c;
LAB_7101c01aec:
    local_90 = 0x87650000000000;
    local_80 = 0xffffffffffffffff;
    uStack_78 = 0;
    local_a8[0] = 0;
    local_70 = 0;
  }
  else {
    uVar16 = *(ulong *)(*(long *)(lVar8 + 0x40) + 0x10);
    if (*(char *)(lVar8 + 0x191) != '\0') goto LAB_7101c01aec;
LAB_7101c01a7c:
    param_3 = 4;
    uVar9 = FUN_7103313f20(lVar8,uVar16,(long ****)&DAT_00000004,param_4,param_5,param_6,param_7,
                           param_8);
    if ((uVar9 & 1) == 0) goto LAB_7101c01aec;
    FUN_71024076d0(local_a8,uVar16);
    if (((local_98 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_90 == DAT_7106dd53ac)) {
      piVar12 = (int *)(local_98 + 0x38);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar6) {
          *piVar12 = *piVar12 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
  }
  local_a0 = &PTR_FUN_7104f73d50;
  local_98 = 0;
  local_88 = 0;
  FUN_7103776910(&local_b8,**(long **)(param_1 + 0x80) + 8,(long ****)"set_fxui_confetti",param_3,
                 param_4,param_5,param_6,param_7,param_8);
  puVar7 = local_b0;
  FUN_710377aa20((long *)*local_b0,0);
  if (*(int *)(param_1 + 0xbcc) == 0) {
    FUN_7103776910(&local_c8,**(long **)(param_1 + 0x80) + 8,(long ****)"set_fxui_spark",param_3,
                   param_4,param_5,param_6,param_7,param_8);
    puVar10 = local_c0;
    local_c0 = (undefined8 *)0x0;
    local_b0 = puVar10;
    if (puVar7 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)puVar7);
    }
    local_c8 = &PTR_FUN_710523d9a8;
    local_c0 = (undefined8 *)0x0;
    FUN_710377aa20((long *)*puVar10,0);
    goto LAB_7101c02068;
  }
  iVar14 = *(int *)(param_1 + 0xa58);
  piVar12 = (int *)(param_1 + 0x9c);
  piVar15 = piVar12;
  if (*(int *)(param_1 + 0xa0) == iVar14) {
LAB_7101c01c4c:
    iVar14 = *piVar15;
  }
  else {
    if (*(int *)(param_1 + 0x138) == iVar14) {
      piVar15 = (int *)(param_1 + 0x134);
      goto LAB_7101c01c4c;
    }
    if (*(int *)(param_1 + 0x1d0) == iVar14) {
      piVar15 = (int *)(param_1 + 0x1cc);
      goto LAB_7101c01c4c;
    }
    if (*(int *)(param_1 + 0x268) == iVar14) {
      piVar15 = (int *)(param_1 + 0x264);
      goto LAB_7101c01c4c;
    }
    if (*(int *)(param_1 + 0x300) == iVar14) {
      piVar15 = (int *)(param_1 + 0x2fc);
      goto LAB_7101c01c4c;
    }
    if (*(int *)(param_1 + 0x398) == iVar14) {
      piVar15 = (int *)(param_1 + 0x394);
      goto LAB_7101c01c4c;
    }
    if (*(int *)(param_1 + 0x430) == iVar14) {
      piVar15 = (int *)(param_1 + 0x42c);
      goto LAB_7101c01c4c;
    }
    if (*(int *)(param_1 + 0x4c8) == iVar14) {
      piVar15 = (int *)(param_1 + 0x4c4);
      goto LAB_7101c01c4c;
    }
    iVar14 = 0;
  }
  iVar11 = *piVar12;
  piVar15 = piVar12;
  if (iVar11 == iVar14) {
LAB_7101c01cec:
    iVar14 = piVar15[1];
    if (iVar14 == -1) goto LAB_7101c01d1c;
    lVar8 = param_1 + 0xa18;
    if (*(int *)(param_1 + 0xa18) != iVar14) {
      if (*(int *)(param_1 + 0xa20) == iVar14) {
        lVar8 = param_1 + 0xa20;
      }
      else if (*(int *)(param_1 + 0xa28) == iVar14) {
        lVar8 = param_1 + 0xa28;
      }
      else if (*(int *)(param_1 + 0xa30) == iVar14) {
        lVar8 = param_1 + 0xa30;
      }
      else if (*(int *)(param_1 + 0xa38) == iVar14) {
        lVar8 = param_1 + 0xa38;
      }
      else if (*(int *)(param_1 + 0xa40) == iVar14) {
        lVar8 = param_1 + 0xa40;
      }
      else if (*(int *)(param_1 + 0xa48) == iVar14) {
        lVar8 = param_1 + 0xa48;
      }
      else {
        lVar8 = param_1 + 0xa50;
        if (*(int *)(param_1 + 0xa50) != iVar14) {
          lVar8 = param_1 + 0xa18;
        }
      }
    }
    iVar14 = *(int *)(lVar8 + 4);
  }
  else {
    if (*(int *)(param_1 + 0x134) == iVar14) {
      piVar15 = (int *)(param_1 + 0x134);
      goto LAB_7101c01cec;
    }
    if (*(int *)(param_1 + 0x1cc) == iVar14) {
      piVar15 = (int *)(param_1 + 0x1cc);
      goto LAB_7101c01cec;
    }
    if (*(int *)(param_1 + 0x264) == iVar14) {
      piVar15 = (int *)(param_1 + 0x264);
      goto LAB_7101c01cec;
    }
    if (*(int *)(param_1 + 0x2fc) == iVar14) {
      piVar15 = (int *)(param_1 + 0x2fc);
      goto LAB_7101c01cec;
    }
    if (*(int *)(param_1 + 0x394) == iVar14) {
      piVar15 = (int *)(param_1 + 0x394);
      goto LAB_7101c01cec;
    }
    if (*(int *)(param_1 + 0x42c) == iVar14) {
      piVar15 = (int *)(param_1 + 0x42c);
      goto LAB_7101c01cec;
    }
    if (*(int *)(param_1 + 0x4c4) == iVar14) {
      piVar15 = (int *)(param_1 + 0x4c4);
      goto LAB_7101c01cec;
    }
LAB_7101c01d1c:
    iVar14 = 0;
  }
  uVar3 = *(uint *)(param_1 + 0x98);
  if (0 < (int)uVar3) {
    uVar16 = 0;
    piVar15 = (int *)(param_1 + 0x9c);
    piVar1 = (int *)(param_1 + 0xa18);
    do {
      piVar13 = piVar15;
      if (7 < uVar16) {
        piVar13 = &DAT_710509ec08;
      }
      iVar4 = *piVar13;
      piVar13 = piVar12;
      if (((((iVar11 == iVar4) ||
            (piVar13 = (int *)(param_1 + 0x134), *(int *)(param_1 + 0x134) == iVar4)) ||
           ((piVar13 = (int *)(param_1 + 0x1cc), *(int *)(param_1 + 0x1cc) == iVar4 ||
            ((piVar13 = (int *)(param_1 + 0x264), *(int *)(param_1 + 0x264) == iVar4 ||
             (piVar13 = (int *)(param_1 + 0x2fc), *(int *)(param_1 + 0x2fc) == iVar4)))))) ||
          ((piVar13 = (int *)(param_1 + 0x394), *(int *)(param_1 + 0x394) == iVar4 ||
           ((piVar13 = (int *)(param_1 + 0x42c), *(int *)(param_1 + 0x42c) == iVar4 ||
            (piVar13 = (int *)(param_1 + 0x4c4), *(int *)(param_1 + 0x4c4) == iVar4)))))) &&
         (iVar11 = piVar13[1], iVar11 != -1)) {
        piVar13 = piVar1;
        if (((((*piVar1 != iVar11) &&
              (piVar13 = (int *)(param_1 + 0xa20), *(int *)(param_1 + 0xa20) != iVar11)) &&
             (piVar13 = (int *)(param_1 + 0xa28), *(int *)(param_1 + 0xa28) != iVar11)) &&
            ((piVar13 = (int *)(param_1 + 0xa30), *(int *)(param_1 + 0xa30) != iVar11 &&
             (piVar13 = (int *)(param_1 + 0xa38), *(int *)(param_1 + 0xa38) != iVar11)))) &&
           ((piVar13 = (int *)(param_1 + 0xa40), *(int *)(param_1 + 0xa40) != iVar11 &&
            ((piVar13 = (int *)(param_1 + 0xa48), *(int *)(param_1 + 0xa48) != iVar11 &&
             (piVar13 = (int *)(param_1 + 0xa50), *(int *)(param_1 + 0xa50) != iVar11)))))) {
          piVar13 = piVar1;
        }
        if (piVar13[1] == iVar14) {
LAB_7101c01fa4:
          lVar8 = (long)*(int *)(param_1 + 0xb78 + uVar16 * 4);
          ppppbVar2 = (byte ****)"set_parts_player_%02d";
          if (*(int *)(param_1 + 0xbcc) != 0) {
            ppppbVar2 = (byte ****)"set_parts_player_1%1d";
          }
          FUN_7103776640(&local_c8,**(long **)(param_1 + 0x80) + 8,ppppbVar2,lVar8,param_4,param_5,
                         param_6,param_7,param_8);
          FUN_7103776910(&local_d8,(long)&local_c8,(long ****)"set_fxui_spark",lVar8,param_4,param_5
                         ,param_6,param_7,param_8);
          puVar7 = local_d0;
          FUN_710377aa20((long *)*local_d0,0);
          local_d8 = &PTR_FUN_710523d9a8;
          local_d0 = (undefined8 *)0x0;
          if (puVar7 != (undefined8 *)0x0) {
            FUN_710392eb40((ulong)puVar7);
          }
          puVar7 = local_c0;
          local_c8 = &PTR_FUN_710523d988;
          local_c0 = (undefined8 *)0x0;
          if (puVar7 != (undefined8 *)0x0) {
            uVar9 = puVar7[3];
            puVar7[2] = &PTR_FUN_710523d9a8;
            puVar7[3] = 0;
            if (uVar9 != 0) {
              FUN_710392eb40(uVar9);
            }
            FUN_710392eb40((ulong)puVar7);
          }
        }
      }
      else if (iVar14 == 0) goto LAB_7101c01fa4;
      if ((ulong)uVar3 - 1 == uVar16) break;
      iVar11 = *piVar12;
      uVar16 = uVar16 + 1;
      piVar15 = piVar15 + 0x26;
    } while( true );
  }
  puVar10 = local_b0;
  if (local_b0 == (undefined8 *)0x0) {
    return;
  }
LAB_7101c02068:
  local_b0 = (undefined8 *)0x0;
  local_b8 = &PTR_FUN_710523d9a8;
  FUN_710392eb40((ulong)puVar10);
  return;
}

