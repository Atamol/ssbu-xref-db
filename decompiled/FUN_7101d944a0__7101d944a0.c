// addr:      7101d944a0
// offset:    0x1d944a0
// name:      FUN_7101d944a0
// mangled:   
// signature: undefined __cdecl FUN_7101d944a0(long param_1, uint param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101d944a0(long param_1,uint param_2,undefined8 param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  short *psVar1;
  int iVar2;
  byte bVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  int *piVar10;
  undefined4 uVar11;
  long lVar12;
  int iVar13;
  short *psVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined4 local_80 [2];
  undefined **local_78;
  long local_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  lVar16 = *(long *)(param_1 + 0x80);
  *(char *)(lVar16 + 0x19) = (char)(param_2 >> 8);
  *(char *)(lVar16 + 0x18) = (char)param_2;
  *(char *)(lVar16 + 0x1a) = (char)(param_2 >> 0x10);
  FUN_7103775dc0((long *)**(undefined8 **)(lVar16 + 0x10),0,(long ****)&DAT_00001000,param_4,param_5
                 ,param_6,param_7,param_8);
  if ((param_2 & 1) == 0) {
    FUN_7103778300(0x3f800000,*(long *)(lVar16 + 0x28),0x7104421055);
  }
  else {
    lVar9 = *(long *)(*(long *)(lVar16 + 0x28) + 8);
    if (lVar9 != 0) {
      plVar7 = (long *)FUN_71037964b0(lVar9,0x7104421055);
      if (plVar7 == (long *)0x0) {
        uVar17 = 0;
      }
      else {
        uVar17 = (**(code **)(*plVar7 + 0x1a8))();
        lVar9 = *(long *)(*(long *)(lVar16 + 0x28) + 8);
        if (lVar9 == 0) goto joined_r0x007101d94570;
      }
      plVar7 = (long *)FUN_71037964b0(lVar9,0x7104421055);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x1a0))(uVar17);
      }
    }
  }
joined_r0x007101d94570:
  if ((param_2 >> 8 & 1) == 0) {
    if ((param_2 & 1) == 0) {
      iVar13 = 0;
      lVar9 = 72000;
      psVar14 = (short *)(*(long *)(*DAT_7105329f98 + 0x30) + 0x68);
      do {
        if (psVar14[-0x24] != 0) {
          iVar13 = iVar13 + 1;
        }
        sVar4 = *psVar14;
        if (psVar14[-0x12] != 0) {
          iVar13 = iVar13 + 1;
        }
        psVar1 = psVar14 + 0x12;
        psVar14 = psVar14 + 0x48;
        if (sVar4 != 0) {
          iVar13 = iVar13 + 1;
        }
        if (*psVar1 != 0) {
          iVar13 = iVar13 + 1;
        }
        lVar9 = lVar9 + -0x90;
      } while (lVar9 != 0);
      *(int *)(*(long *)(*DAT_7105329f98 + 0x30) + 0x8ac0c) = iVar13;
    }
  }
  else {
    lVar12 = *(long *)(*DAT_7105329f98 + 0x30);
    iVar13 = 0;
    lVar9 = 72000;
    psVar14 = (short *)(lVar12 + 0x68);
    do {
      if (psVar14[-0x24] != 0) {
        iVar13 = iVar13 + 1;
      }
      sVar4 = *psVar14;
      if (psVar14[-0x12] != 0) {
        iVar13 = iVar13 + 1;
      }
      psVar1 = psVar14 + 0x12;
      psVar14 = psVar14 + 0x48;
      if (sVar4 != 0) {
        iVar13 = iVar13 + 1;
      }
      if (*psVar1 != 0) {
        iVar13 = iVar13 + 1;
      }
      lVar9 = lVar9 + -0x90;
    } while (lVar9 != 0);
    iVar2 = *(int *)(lVar12 + 0x8ac0c);
    *(int *)(lVar12 + 0x8ac0c) = iVar13;
    if (iVar2 < iVar13) {
      FUN_7103778300(0x3f800000,*(long *)(lVar16 + 0x28),0x71042d6675);
      if ((*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') &&
         (uVar8 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x1e8bc5bbd2,(long ****)&DAT_00000004
                                 ,param_4,param_5,param_6,param_7,param_8), (uVar8 & 1) != 0)) {
        FUN_71024076d0(local_80,0x1e8bc5bbd2);
        if (((local_70 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_68 == DAT_7106dd53ac)) {
          piVar10 = (int *)(local_70 + 0x38);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar10,0x10);
            if (bVar6) {
              *piVar10 = *piVar10 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
      }
      else {
        local_68 = 0x87650000000000;
        local_58 = 0xffffffffffffffff;
        uStack_50 = 0;
        local_80[0] = 0;
        local_48 = 0;
      }
      local_78 = &PTR_FUN_7104f73d50;
      local_70 = 0;
      local_60 = 0;
    }
  }
  FUN_7103778300(0x3f800000,*(long *)(lVar16 + 0x28),0x71043f0fa9);
  plVar7 = DAT_7105329f98;
  if (*(char *)(lVar16 + 0x18) == '\0') {
    lVar9 = *DAT_7105329f98;
    lVar12 = *(long *)(lVar9 + 0x10);
    if (*(byte *)(lVar12 + 0x10) < 8 && (1 << (ulong)(*(byte *)(lVar12 + 0x10) & 0x1f) & 0xc2U) != 0
       ) {
      lVar12 = *(long *)(lVar16 + 0x78);
      lVar15 = *(long *)(*(long *)(lVar12 + 0x10) + 8);
      if ((lVar15 != 0) && (lVar15 = *(long *)(lVar15 + 0x18), lVar15 != 0)) {
        *(byte *)(lVar15 + 0x58) = *(byte *)(lVar15 + 0x58) & 0xfe;
      }
      *(undefined1 *)(lVar12 + 0xac) = 1;
      lVar12 = *(long *)(lVar9 + 0x10);
    }
    if (*(byte *)(lVar12 + 0x50) < 8 && (1 << (ulong)(*(byte *)(lVar12 + 0x50) & 0x1f) & 0xc2U) != 0
       ) {
      lVar12 = *(long *)(lVar16 + 0x88);
      lVar15 = *(long *)(*(long *)(lVar12 + 0x10) + 8);
      if ((lVar15 != 0) && (lVar15 = *(long *)(lVar15 + 0x18), lVar15 != 0)) {
        *(byte *)(lVar15 + 0x58) = *(byte *)(lVar15 + 0x58) & 0xfe;
      }
      *(undefined1 *)(lVar12 + 0xac) = 1;
      lVar12 = *(long *)(lVar9 + 0x10);
    }
    if (*(byte *)(lVar12 + 0x90) < 8 && (1 << (ulong)(*(byte *)(lVar12 + 0x90) & 0x1f) & 0xc2U) != 0
       ) {
      lVar12 = *(long *)(lVar16 + 0x98);
      lVar15 = *(long *)(*(long *)(lVar12 + 0x10) + 8);
      if ((lVar15 != 0) && (lVar15 = *(long *)(lVar15 + 0x18), lVar15 != 0)) {
        *(byte *)(lVar15 + 0x58) = *(byte *)(lVar15 + 0x58) & 0xfe;
      }
      *(undefined1 *)(lVar12 + 0xac) = 1;
      lVar12 = *(long *)(lVar9 + 0x10);
    }
    if ((*(byte *)(lVar12 + 0xd0) < 8) &&
       ((1 << (ulong)(*(byte *)(lVar12 + 0xd0) & 0x1f) & 0xc2U) != 0)) {
      lVar12 = *(long *)(lVar16 + 0xa8);
      lVar15 = *(long *)(*(long *)(lVar12 + 0x10) + 8);
      if ((lVar15 != 0) && (lVar15 = *(long *)(lVar15 + 0x18), lVar15 != 0)) {
        *(byte *)(lVar15 + 0x58) = *(byte *)(lVar15 + 0x58) & 0xfe;
      }
      *(undefined1 *)(lVar12 + 0xac) = 1;
      lVar12 = *(long *)(lVar9 + 0x10);
    }
    if ((*(byte *)(lVar12 + 0x110) < 8) &&
       ((1 << (ulong)(*(byte *)(lVar12 + 0x110) & 0x1f) & 0xc2U) != 0)) {
      lVar12 = *(long *)(lVar16 + 0xb8);
      lVar15 = *(long *)(*(long *)(lVar12 + 0x10) + 8);
      if ((lVar15 != 0) && (lVar15 = *(long *)(lVar15 + 0x18), lVar15 != 0)) {
        *(byte *)(lVar15 + 0x58) = *(byte *)(lVar15 + 0x58) & 0xfe;
      }
      *(undefined1 *)(lVar12 + 0xac) = 1;
      lVar12 = *(long *)(lVar9 + 0x10);
    }
    if ((*(byte *)(lVar12 + 0x150) < 8) &&
       ((1 << (ulong)(*(byte *)(lVar12 + 0x150) & 0x1f) & 0xc2U) != 0)) {
      lVar12 = *(long *)(lVar16 + 200);
      lVar15 = *(long *)(*(long *)(lVar12 + 0x10) + 8);
      if ((lVar15 != 0) && (lVar15 = *(long *)(lVar15 + 0x18), lVar15 != 0)) {
        *(byte *)(lVar15 + 0x58) = *(byte *)(lVar15 + 0x58) & 0xfe;
      }
      *(undefined1 *)(lVar12 + 0xac) = 1;
      lVar12 = *(long *)(lVar9 + 0x10);
    }
    if ((*(byte *)(lVar12 + 400) < 8) &&
       ((1 << (ulong)(*(byte *)(lVar12 + 400) & 0x1f) & 0xc2U) != 0)) {
      lVar12 = *(long *)(lVar16 + 0xd8);
      lVar15 = *(long *)(*(long *)(lVar12 + 0x10) + 8);
      if ((lVar15 != 0) && (lVar15 = *(long *)(lVar15 + 0x18), lVar15 != 0)) {
        *(byte *)(lVar15 + 0x58) = *(byte *)(lVar15 + 0x58) & 0xfe;
      }
      *(undefined1 *)(lVar12 + 0xac) = 1;
      lVar12 = *(long *)(lVar9 + 0x10);
    }
    if ((*(byte *)(lVar12 + 0x1d0) < 8) &&
       ((1 << (ulong)(*(byte *)(lVar12 + 0x1d0) & 0x1f) & 0xc2U) != 0)) {
      lVar12 = *(long *)(lVar16 + 0xe8);
      lVar15 = *(long *)(*(long *)(lVar12 + 0x10) + 8);
      if ((lVar15 != 0) && (lVar15 = *(long *)(lVar15 + 0x18), lVar15 != 0)) {
        *(byte *)(lVar15 + 0x58) = *(byte *)(lVar15 + 0x58) & 0xfe;
      }
      *(undefined1 *)(lVar12 + 0xac) = 1;
      lVar12 = *(long *)(lVar9 + 0x10);
    }
    if ((*(byte *)(lVar12 + 0x210) < 8) &&
       ((1 << (ulong)(*(byte *)(lVar12 + 0x210) & 0x1f) & 0xc2U) != 0)) {
      lVar12 = *(long *)(lVar16 + 0xf8);
      lVar15 = *(long *)(*(long *)(lVar12 + 0x10) + 8);
      if ((lVar15 != 0) && (lVar15 = *(long *)(lVar15 + 0x18), lVar15 != 0)) {
        *(byte *)(lVar15 + 0x58) = *(byte *)(lVar15 + 0x58) & 0xfe;
      }
      *(undefined1 *)(lVar12 + 0xac) = 1;
      lVar12 = *(long *)(lVar9 + 0x10);
    }
    if ((*(byte *)(lVar12 + 0x250) < 8) &&
       ((1 << (ulong)(*(byte *)(lVar12 + 0x250) & 0x1f) & 0xc2U) != 0)) {
      lVar12 = *(long *)(lVar16 + 0x108);
      lVar15 = *(long *)(*(long *)(lVar12 + 0x10) + 8);
      if ((lVar15 != 0) && (lVar15 = *(long *)(lVar15 + 0x18), lVar15 != 0)) {
        *(byte *)(lVar15 + 0x58) = *(byte *)(lVar15 + 0x58) & 0xfe;
      }
      *(undefined1 *)(lVar12 + 0xac) = 1;
      lVar12 = *(long *)(lVar9 + 0x10);
    }
    bVar3 = *(byte *)(lVar12 + 0x10);
    *(undefined4 *)(lVar16 + 0x68) = 0;
    if ((7 < bVar3) || ((1 << (ulong)(bVar3 & 0x1f) & 0xc2U) == 0)) {
      uVar8 = 0;
      lVar9 = 0x50;
      uVar11 = 0xffffffff;
      do {
        uVar8 = uVar8 + 1;
        if (9 < uVar8) goto LAB_7101d94ab8;
        bVar3 = *(byte *)(*(long *)(*plVar7 + 0x10) + lVar9);
        lVar9 = lVar9 + 0x40;
      } while (7 < bVar3 || (1 << (ulong)(bVar3 & 0x1f) & 0xc2U) == 0);
      uVar11 = (undefined4)uVar8;
LAB_7101d94ab8:
      *(undefined4 *)(lVar16 + 0x68) = uVar11;
    }
    *(undefined1 *)(lVar16 + 0x61) = 1;
    *(undefined4 *)(lVar16 + 100) = 3;
  }
  *(undefined4 *)(lVar16 + 0x50) = 0xffffffff;
  *(undefined1 *)(lVar16 + 0x4d) = 1;
  *(undefined1 *)(param_1 + 0x70) = 0;
  return;
}

