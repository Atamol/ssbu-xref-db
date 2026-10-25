// addr:      7101ba94b0
// offset:    0x1ba94b0
// name:      FUN_7101ba94b0
// mangled:   
// signature: undefined __cdecl FUN_7101ba94b0(long param_1, ulong param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101ba94b0(long param_1,ulong param_2,undefined8 param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  ulong uVar14;
  undefined4 local_80 [2];
  undefined **local_78;
  long local_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  iVar13 = *(int *)(param_1 + 0x1538);
  uVar6 = iVar13 - 1;
  if (iVar13 < 1) {
    return;
  }
  lVar7 = *(long *)(DAT_710532f8d0 + 8);
  if ((ulong)(*(long *)(lVar7 + 0x48) - *(long *)(lVar7 + 0x40) >> 3) < 9) {
    uVar14 = 0;
    if (*(char *)(lVar7 + 0x191) == '\0') goto LAB_7101ba9518;
LAB_7101ba9588:
    local_68 = 0x87650000000000;
    local_58 = 0xffffffffffffffff;
    uStack_50 = 0;
    local_80[0] = 0;
    local_48 = 0;
  }
  else {
    uVar14 = *(ulong *)(*(long *)(lVar7 + 0x40) + 0x40);
    if (*(char *)(lVar7 + 0x191) != '\0') goto LAB_7101ba9588;
LAB_7101ba9518:
    uVar8 = FUN_7103313f20(lVar7,uVar14,(long ****)&DAT_00000004,param_4,param_5,param_6,param_7,
                           param_8);
    if ((uVar8 & 1) == 0) goto LAB_7101ba9588;
    FUN_71024076d0(local_80,uVar14);
    if (((local_70 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_68 == DAT_7106dd53ac)) {
      piVar10 = (int *)(local_70 + 0x38);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar4) {
          *piVar10 = *piVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
  }
  local_78 = &PTR_FUN_7104f73d50;
  local_70 = 0;
  local_60 = 0;
  uVar9 = *(uint *)(param_1 + 0x1538);
  if (uVar9 == 2) {
    lVar7 = param_1 + 0x768;
  }
  else {
    if (uVar9 != 1) goto LAB_7101ba95e8;
    lVar7 = param_1 + 0x758;
  }
  FUN_710377aee0(0x3f800000,lVar7);
  uVar9 = *(uint *)(param_1 + 0x1538);
LAB_7101ba95e8:
  if (uVar9 < 3) {
    iVar11 = -0x24;
    if ((param_2 & 1) == 0) {
      iVar11 = -0xc;
    }
    iVar11 = *(int *)(*(long *)(param_1 + (long)(int)uVar9 * 8 + 0x1500) + 0x254) + iVar11;
    uVar9 = *(uint *)(param_1 + 0x153c);
    *(int *)(param_1 + 0x1548) = iVar11;
    if (iVar13 < 2) {
      iVar12 = 0;
    }
    else {
      uVar1 = uVar6;
      if ((int)uVar9 < iVar13) {
        uVar1 = uVar9;
      }
      iVar5 = (uVar1 - 1) * 0x24;
      if ((int)(uVar1 - 1) < 1) {
        iVar5 = 0;
      }
      if ((int)uVar9 < iVar13) {
        iVar12 = *(int *)(param_1 + 0x1544);
      }
      else {
        iVar12 = 0x24;
      }
      iVar12 = iVar12 + iVar5;
    }
    uVar1 = uVar6;
    if ((int)uVar9 <= iVar13) {
      uVar1 = uVar9 - 1;
    }
    if (iVar13 < (int)uVar9) {
      iVar13 = 0x24;
    }
    else {
      iVar13 = *(int *)(param_1 + 0x1544);
    }
    iVar5 = uVar1 * 0x24 + -1;
    if ((int)uVar1 < 1) {
      iVar5 = -1;
    }
    iVar2 = iVar13 + iVar5;
    if (iVar11 <= iVar13 + iVar5) {
      iVar2 = iVar11;
    }
    if (iVar12 <= iVar11) {
      iVar12 = iVar2;
    }
    *(int *)(param_1 + 0x1548) = iVar12;
    uVar9 = 0;
    if (uVar6 < 3) {
      uVar9 = uVar6;
    }
    *(uint *)(param_1 + 0x1538) = uVar9;
    FUN_710377a280(param_1 + 0x1518,(byte *)"mel_wazalist_open_guide_01",1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

