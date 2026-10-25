// addr:      7101e134d0
// offset:    0x1e134d0
// name:      FUN_7101e134d0
// mangled:   
// signature: undefined __cdecl FUN_7101e134d0(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101e134d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  ulong uVar2;
  bool bVar3;
  bool bVar4;
  ulong uVar5;
  short sVar6;
  long lVar7;
  long lVar8;
  byte bVar9;
  byte bVar10;
  undefined **local_60;
  ulong local_58;
  
  if (*(int *)(param_1 + 0x140) == 3) {
    iVar1 = *(int *)(*(long *)(param_1 + 0x188) + 0x254) << 0x18;
    if (iVar1 == 0x2000000) {
      sVar6 = *(short *)(param_1 + 0x1ae);
    }
    else if (iVar1 == 0x1000000) {
      sVar6 = *(short *)(param_1 + 0x1ac);
    }
    else {
      if (iVar1 != 0) goto LAB_7101e1354c;
      sVar6 = *(short *)(param_1 + 0x1aa);
    }
    bVar3 = false;
    bVar10 = 0;
    bVar4 = sVar6 != -1;
    bVar9 = 1;
  }
  else {
    if (*(int *)(param_1 + 0x140) == 2) {
      bVar3 = *(short *)(param_1 + 0x1a8) != -1;
      bVar9 = 0;
      bVar4 = false;
      bVar10 = 1;
      goto LAB_7101e13584;
    }
LAB_7101e1354c:
    bVar3 = false;
    bVar10 = 0;
    bVar9 = 0;
    bVar4 = false;
  }
LAB_7101e13584:
  lVar8 = param_1 + 0x160;
  FUN_7103776640(&local_60,lVar8,(byte ****)"set_parts_det_key_00",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  uVar2 = local_58;
  if ((*(long *)(local_58 + 8) != 0) &&
     (lVar7 = *(long *)(*(long *)(local_58 + 8) + 0x18), lVar7 != 0)) {
    *(byte *)(lVar7 + 0x58) = *(byte *)(lVar7 + 0x58) & 0xfe | bVar3;
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
  FUN_7103776640(&local_60,lVar8,(byte ****)"set_parts_det_key_01",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  uVar2 = local_58;
  if ((*(long *)(local_58 + 8) != 0) &&
     (lVar7 = *(long *)(*(long *)(local_58 + 8) + 0x18), lVar7 != 0)) {
    *(byte *)(lVar7 + 0x58) = *(byte *)(lVar7 + 0x58) & 0xfe | bVar4;
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
  FUN_7103776640(&local_60,lVar8,(byte ****)"set_parts_det_key_02",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  uVar2 = local_58;
  if ((*(long *)(local_58 + 8) != 0) &&
     (lVar7 = *(long *)(*(long *)(local_58 + 8) + 0x18), lVar7 != 0)) {
    *(byte *)(lVar7 + 0x58) = *(byte *)(lVar7 + 0x58) & 0xfe | bVar10;
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
  FUN_7103776640(&local_60,lVar8,(byte ****)"set_parts_det_key_04",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  uVar2 = local_58;
  if ((*(long *)(local_58 + 8) != 0) &&
     (lVar7 = *(long *)(*(long *)(local_58 + 8) + 0x18), lVar7 != 0)) {
    *(byte *)(lVar7 + 0x58) = *(byte *)(lVar7 + 0x58) & 0xfe | bVar9;
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
  FUN_7103776640(&local_60,lVar8,(byte ****)"set_parts_det_key_03",param_3,param_4,param_5,param_6,
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
  return;
}

