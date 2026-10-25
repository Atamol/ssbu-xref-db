// addr:      7101ba9250
// offset:    0x1ba9250
// name:      FUN_7101ba9250
// mangled:   
// signature: undefined __cdecl FUN_7101ba9250(long param_1, ulong param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101ba9250(long param_1,ulong param_2,undefined8 param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  ulong uVar13;
  undefined4 local_80 [2];
  undefined **local_78;
  long local_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  iVar10 = *(int *)(param_1 + 0x1538);
  uVar1 = iVar10 + 1;
  if (*(int *)(param_1 + 0x153c) <= (int)uVar1) {
    return;
  }
  lVar6 = *(long *)(DAT_710532f8d0 + 8);
  if ((ulong)(*(long *)(lVar6 + 0x48) - *(long *)(lVar6 + 0x40) >> 3) < 9) {
    uVar13 = 0;
    if (*(char *)(lVar6 + 0x191) == '\0') goto LAB_7101ba92c0;
LAB_7101ba9330:
    local_68 = 0x87650000000000;
    local_58 = 0xffffffffffffffff;
    uStack_50 = 0;
    local_80[0] = 0;
    local_48 = 0;
  }
  else {
    uVar13 = *(ulong *)(*(long *)(lVar6 + 0x40) + 0x40);
    if (*(char *)(lVar6 + 0x191) != '\0') goto LAB_7101ba9330;
LAB_7101ba92c0:
    uVar7 = FUN_7103313f20(lVar6,uVar13,(long ****)&DAT_00000004,param_4,param_5,param_6,param_7,
                           param_8);
    if ((uVar7 & 1) == 0) goto LAB_7101ba9330;
    FUN_71024076d0(local_80,uVar13);
    if (((local_70 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_68 == DAT_7106dd53ac)) {
      piVar9 = (int *)(local_70 + 0x38);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar4) {
          *piVar9 = *piVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
  }
  local_78 = &PTR_FUN_7104f73d50;
  local_70 = 0;
  local_60 = 0;
  uVar8 = *(uint *)(param_1 + 0x1538);
  if (uVar8 == 1) {
    lVar6 = param_1 + 0x748;
LAB_7101ba9380:
    FUN_710377aee0(0x3f800000,lVar6);
    uVar8 = *(uint *)(param_1 + 0x1538);
  }
  else if (uVar8 == 0) {
    lVar6 = param_1 + 0x738;
    goto LAB_7101ba9380;
  }
  if (2 < uVar8) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  iVar11 = 0x24;
  if ((param_2 & 1) == 0) {
    iVar11 = 0xc;
  }
  iVar11 = *(int *)(*(long *)(param_1 + (long)(int)uVar8 * 8 + 0x1500) + 0x254) + iVar11;
  *(int *)(param_1 + 0x1548) = iVar11;
  if (iVar10 < 0) {
    if (iVar10 != -1) {
      iVar10 = 0;
      iVar12 = -1;
      goto LAB_7101ba944c;
    }
    uVar8 = *(uint *)(param_1 + 0x153c);
    iVar10 = 0;
  }
  else {
    uVar8 = *(uint *)(param_1 + 0x153c);
    uVar2 = uVar1;
    if ((int)uVar8 <= (int)uVar1) {
      uVar2 = uVar8;
    }
    iVar10 = (uVar2 - 1) * 0x24;
    if ((int)(uVar2 - 1) < 1) {
      iVar10 = 0;
    }
    if ((int)uVar1 < (int)uVar8) {
      iVar10 = iVar10 + 0x24;
    }
    else {
      iVar10 = *(int *)(param_1 + 0x1544) + iVar10;
    }
  }
  uVar8 = uVar8 - 1;
  uVar2 = uVar1;
  if ((int)uVar8 <= (int)uVar1) {
    uVar2 = uVar8;
  }
  if ((int)uVar1 < (int)uVar8) {
    iVar12 = 0x24;
  }
  else {
    iVar12 = *(int *)(param_1 + 0x1544);
  }
  iVar5 = uVar2 * 0x24 + -1;
  if ((int)uVar2 < 1) {
    iVar5 = -1;
  }
  iVar12 = iVar12 + iVar5;
LAB_7101ba944c:
  if (iVar11 <= iVar12) {
    iVar12 = iVar11;
  }
  if (iVar10 <= iVar11) {
    iVar10 = iVar12;
  }
  *(int *)(param_1 + 0x1548) = iVar10;
  uVar8 = 0;
  if (uVar1 < 3) {
    uVar8 = uVar1;
  }
  *(uint *)(param_1 + 0x1538) = uVar8;
  FUN_710377a280(param_1 + 0x1518,(byte *)"mel_wazalist_open_guide_01",1);
  return;
}

