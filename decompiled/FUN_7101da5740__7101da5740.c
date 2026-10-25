// addr:      7101da5740
// offset:    0x1da5740
// name:      FUN_7101da5740
// mangled:   
// signature: undefined __cdecl FUN_7101da5740(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101da5740(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  ulong uVar2;
  bool bVar3;
  bool bVar4;
  ulong uVar5;
  char *pcVar6;
  short sVar7;
  long lVar8;
  long lVar9;
  byte bVar10;
  byte bVar11;
  undefined **local_60;
  ulong local_58;
  
  if (*(int *)(param_1 + 0x770) == 9) {
    iVar1 = *(int *)(*(long *)(param_1 + 0x80) + 0x254) << 0x18;
    if (iVar1 == 0x16000000) {
      sVar7 = *(short *)(param_1 + 0xac);
    }
    else if (iVar1 == 0x15000000) {
      sVar7 = *(short *)(param_1 + 0xaa);
    }
    else {
      if (iVar1 != 0x14000000) goto LAB_7101da57c8;
      sVar7 = *(short *)(param_1 + 0xa8);
    }
    bVar3 = false;
    bVar11 = 0;
    bVar4 = sVar7 != -1;
    bVar10 = 1;
  }
  else {
    if (*(int *)(param_1 + 0x770) == 8) {
      bVar3 = *(short *)(param_1 + 0x98) != -1;
      bVar4 = false;
      bVar10 = 0;
      bVar11 = 1;
      goto LAB_7101da57fc;
    }
LAB_7101da57c8:
    bVar3 = false;
    bVar11 = 0;
    bVar4 = false;
    bVar10 = 0;
  }
LAB_7101da57fc:
  lVar9 = param_1 + 0x50;
  FUN_7103776640(&local_60,lVar9,(byte ****)"set_parts_det_key_00",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  uVar2 = local_58;
  if ((*(long *)(local_58 + 8) != 0) &&
     (lVar8 = *(long *)(*(long *)(local_58 + 8) + 0x18), lVar8 != 0)) {
    *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) & 0xfe | bVar3;
  }
  local_60 = &PTR_FUN_710523d988;
  local_58 = 0;
  if (uVar2 != 0) {
    uVar5 = *(ulong *)(uVar2 + 0x18);
    *(undefined ***)(uVar2 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar2 + 0x18) = 0;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
    FUN_710392eb40(uVar2);
  }
  FUN_7103776640(&local_60,lVar9,(byte ****)"set_parts_det_key_01",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  uVar2 = local_58;
  if ((*(long *)(local_58 + 8) != 0) &&
     (lVar8 = *(long *)(*(long *)(local_58 + 8) + 0x18), lVar8 != 0)) {
    *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) & 0xfe | bVar4;
  }
  local_60 = &PTR_FUN_710523d988;
  local_58 = 0;
  if (uVar2 != 0) {
    uVar5 = *(ulong *)(uVar2 + 0x18);
    *(undefined ***)(uVar2 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar2 + 0x18) = 0;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
    FUN_710392eb40(uVar2);
  }
  if (*(int *)(param_1 + 0x428) == 2) {
    pcVar6 = "set_parts_det_key_05";
  }
  else {
    pcVar6 = "set_parts_det_key_02";
  }
  FUN_7103776640(&local_60,lVar9,(byte ****)pcVar6,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar2 = local_58;
  if ((*(long *)(local_58 + 8) != 0) &&
     (lVar8 = *(long *)(*(long *)(local_58 + 8) + 0x18), lVar8 != 0)) {
    *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) & 0xfe | bVar11;
  }
  local_60 = &PTR_FUN_710523d988;
  local_58 = 0;
  if (uVar2 != 0) {
    uVar5 = *(ulong *)(uVar2 + 0x18);
    *(undefined ***)(uVar2 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar2 + 0x18) = 0;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
    FUN_710392eb40(uVar2);
  }
  if (*(int *)(param_1 + 0x428) == 2) {
    pcVar6 = "set_parts_det_key_06";
  }
  else {
    pcVar6 = "set_parts_det_key_04";
  }
  FUN_7103776640(&local_60,lVar9,(byte ****)pcVar6,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar2 = local_58;
  if ((*(long *)(local_58 + 8) != 0) &&
     (lVar8 = *(long *)(*(long *)(local_58 + 8) + 0x18), lVar8 != 0)) {
    *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) & 0xfe | bVar10;
  }
  local_60 = &PTR_FUN_710523d988;
  local_58 = 0;
  if (uVar2 != 0) {
    uVar5 = *(ulong *)(uVar2 + 0x18);
    *(undefined ***)(uVar2 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar2 + 0x18) = 0;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
    FUN_710392eb40(uVar2);
  }
  FUN_7103776640(&local_60,lVar9,(byte ****)"set_parts_det_key_03",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  uVar2 = local_58;
  if ((*(long *)(local_58 + 8) != 0) &&
     (lVar9 = *(long *)(*(long *)(local_58 + 8) + 0x18), lVar9 != 0)) {
    *(byte *)(lVar9 + 0x58) = *(byte *)(lVar9 + 0x58) & 0xfe | bVar3;
  }
  local_60 = &PTR_FUN_710523d988;
  local_58 = 0;
  if (uVar2 != 0) {
    uVar5 = *(ulong *)(uVar2 + 0x18);
    *(undefined ***)(uVar2 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar2 + 0x18) = 0;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
    FUN_710392eb40(uVar2);
  }
  return;
}

