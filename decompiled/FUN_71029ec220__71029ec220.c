// addr:      71029ec220
// offset:    0x29ec220
// name:      FUN_71029ec220
// mangled:   
// signature: undefined __cdecl FUN_71029ec220(undefined8 * param_1, ulong param_2, undefined8 param_3, byte param_4, undefined1 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71029ec220(undefined8 *param_1,ulong param_2,undefined8 param_3,byte param_4,
                   undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char *pcVar1;
  char *pcVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long ***local_50;
  undefined8 uStack_48;
  
  param_1[2] = param_3;
  *param_1 = &PTR_FUN_71051016f8;
  param_1[1] = param_2;
  *(undefined1 *)(param_1 + 4) = 1;
  *(undefined4 *)(param_1 + 0x13) = 0;
  *(undefined1 *)((long)param_1 + 0x9c) = 0;
  param_1[0x17] = 0;
  *(undefined8 *)((long)param_1 + 0x43) = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined1 *)((long)param_1 + 0x94) = 0;
  *(undefined8 *)((long)param_1 + 0x8c) = 0;
  *(undefined8 *)((long)param_1 + 0x84) = 0;
  *(undefined8 *)((long)param_1 + 0x7c) = 0;
  *(undefined8 *)((long)param_1 + 0x74) = 0;
  *(undefined8 *)((long)param_1 + 0x6c) = 0;
  *(undefined8 *)((long)param_1 + 100) = 0;
  *(undefined8 *)((long)param_1 + 0x5c) = 0;
  *(undefined8 *)((long)param_1 + 0x54) = 0;
  *(undefined8 *)((long)param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  uVar7 = _DAT_7107521008;
  uVar3 = _ConstantZero;
  param_1[0x1c] = 0x300000000;
  param_1[0x19] = uVar7;
  param_1[0x18] = uVar3;
  param_1[0x1b] = uVar7;
  param_1[0x1a] = uVar3;
  uVar3 = param_6;
  memset(param_1 + 0x1e,0,0x118);
  *(undefined1 *)((long)param_1 + 0x1f1) = 0;
  param_1[0x41] = 0;
  param_1[0x43] = 0;
  param_1[0x42] = 0;
  *(undefined1 *)((long)param_1 + 0x209) = 0;
  param_1[0x44] = 0;
  uStack_48 = uRam0000007107459008;
  local_50 = _ConstantZero;
  FUN_710318bf30(0,0,param_1 + 0x46,param_2,&local_50,(byte ****)&DAT_ffffffff,
                 (long ****)&DAT_ffffffff,uVar3,param_7,param_8);
  lVar4 = param_1[2];
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined1 *)((long)param_1 + 0x49) = param_5;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined2 *)(param_1 + 0x4c) = 0;
  *(undefined1 *)((long)param_1 + 0x262) = 0;
  param_1[6] = 0;
  *(byte *)(param_1 + 9) = param_4;
  param_1[3] = param_6;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0xb] = 0x3f800000;
  param_1[10] = &DAT_3f8000003f800000;
  uVar7 = param_1[0x1f];
  uVar8 = param_1[0x21];
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  uVar6 = **(undefined4 **)(lVar4 + 0x98);
  param_1[0x1f] = uVar7;
  param_1[0x1e] = CONCAT44((int)((ulong)param_1[0x1e] >> 0x20),uVar6);
  uVar3 = CONCAT44(*(undefined4 *)(*(long *)(lVar4 + 0x98) + 4),uVar6);
  param_1[0x1f] = uVar7;
  param_1[0x1e] = uVar3;
  param_1[0x1f] = (ulong)*(uint *)(*(long *)(lVar4 + 0x98) + 8);
  param_1[0x1e] = uVar3;
  uVar7 = param_1[0x2f];
  uVar9 = param_1[0x31];
  uVar6 = *(undefined4 *)(*(long *)(lVar4 + 0x98) + 0xc);
  param_1[0x2f] = uVar7;
  param_1[0x2e] = CONCAT44((int)((ulong)param_1[0x2e] >> 0x20),uVar6);
  uVar3 = CONCAT44(*(undefined4 *)(*(long *)(lVar4 + 0x98) + 0x10),uVar6);
  param_1[0x2f] = uVar7;
  param_1[0x2e] = uVar3;
  param_1[0x2f] = (ulong)*(uint *)(*(long *)(lVar4 + 0x98) + 0x14);
  param_1[0x2e] = uVar3;
  uVar6 = *(undefined4 *)(*(long *)(lVar4 + 0x98) + 0x1c);
  param_1[0x21] = uVar8;
  param_1[0x20] = CONCAT44((int)((ulong)param_1[0x20] >> 0x20),uVar6);
  uVar3 = CONCAT44(*(undefined4 *)(*(long *)(lVar4 + 0x98) + 0x20),uVar6);
  param_1[0x21] = uVar8;
  param_1[0x20] = uVar3;
  param_1[0x21] = (ulong)*(uint *)(*(long *)(lVar4 + 0x98) + 0x24);
  param_1[0x20] = uVar3;
  uVar6 = *(undefined4 *)(*(long *)(lVar4 + 0x98) + 0x28);
  uVar7 = param_1[0x23];
  uVar8 = param_1[0x25];
  param_1[0x31] = uVar9;
  param_1[0x30] = CONCAT44((int)((ulong)param_1[0x30] >> 0x20),uVar6);
  uVar3 = CONCAT44(*(undefined4 *)(*(long *)(lVar4 + 0x98) + 0x2c),uVar6);
  param_1[0x31] = uVar9;
  param_1[0x30] = uVar3;
  param_1[0x31] = (ulong)*(uint *)(*(long *)(lVar4 + 0x98) + 0x30);
  param_1[0x30] = uVar3;
  uVar6 = *(undefined4 *)(*(long *)(lVar4 + 0x98) + 0x38);
  param_1[0x23] = uVar7;
  param_1[0x22] = CONCAT44((int)((ulong)param_1[0x22] >> 0x20),uVar6);
  uVar3 = CONCAT44(*(undefined4 *)(*(long *)(lVar4 + 0x98) + 0x3c),uVar6);
  param_1[0x23] = uVar7;
  param_1[0x22] = uVar3;
  param_1[0x23] = (ulong)*(uint *)(*(long *)(lVar4 + 0x98) + 0x40);
  param_1[0x22] = uVar3;
  uVar7 = param_1[0x33];
  uVar9 = param_1[0x35];
  uVar6 = *(undefined4 *)(*(long *)(lVar4 + 0x98) + 0x44);
  param_1[0x33] = uVar7;
  param_1[0x32] = CONCAT44((int)((ulong)param_1[0x32] >> 0x20),uVar6);
  uVar3 = CONCAT44(*(undefined4 *)(*(long *)(lVar4 + 0x98) + 0x48),uVar6);
  param_1[0x33] = uVar7;
  param_1[0x32] = uVar3;
  lVar5 = param_1[2];
  param_1[0x33] = (ulong)*(uint *)(*(long *)(lVar4 + 0x98) + 0x4c);
  param_1[0x32] = uVar3;
  uVar6 = *(undefined4 *)(*(long *)(lVar5 + 0x98) + 0x54);
  param_1[0x25] = uVar8;
  param_1[0x24] = CONCAT44((int)((ulong)param_1[0x24] >> 0x20),uVar6);
  uVar3 = CONCAT44(*(undefined4 *)(*(long *)(lVar5 + 0x98) + 0x58),uVar6);
  param_1[0x25] = uVar8;
  param_1[0x24] = uVar3;
  param_1[0x25] = (ulong)*(uint *)(*(long *)(lVar5 + 0x98) + 0x5c);
  param_1[0x24] = uVar3;
  uVar6 = *(undefined4 *)(*(long *)(lVar5 + 0x98) + 0x60);
  uVar7 = param_1[0x27];
  uVar8 = param_1[0x29];
  param_1[0x35] = uVar9;
  param_1[0x34] = CONCAT44((int)((ulong)param_1[0x34] >> 0x20),uVar6);
  uVar3 = CONCAT44(*(undefined4 *)(*(long *)(lVar5 + 0x98) + 100),uVar6);
  param_1[0x35] = uVar9;
  param_1[0x34] = uVar3;
  param_1[0x35] = (ulong)*(uint *)(*(long *)(lVar5 + 0x98) + 0x68);
  param_1[0x34] = uVar3;
  uVar6 = *(undefined4 *)(*(long *)(lVar5 + 0x98) + 0x70);
  param_1[0x27] = uVar7;
  param_1[0x26] = CONCAT44((int)((ulong)param_1[0x26] >> 0x20),uVar6);
  uVar3 = CONCAT44(*(undefined4 *)(*(long *)(lVar5 + 0x98) + 0x74),uVar6);
  param_1[0x27] = uVar7;
  param_1[0x26] = uVar3;
  param_1[0x27] = (ulong)*(uint *)(*(long *)(lVar5 + 0x98) + 0x78);
  param_1[0x26] = uVar3;
  uVar7 = param_1[0x37];
  uVar9 = param_1[0x39];
  uVar6 = *(undefined4 *)(*(long *)(lVar5 + 0x98) + 0x7c);
  param_1[0x37] = uVar7;
  param_1[0x36] = CONCAT44((int)((ulong)param_1[0x36] >> 0x20),uVar6);
  uVar3 = CONCAT44(*(undefined4 *)(*(long *)(lVar5 + 0x98) + 0x80),uVar6);
  param_1[0x37] = uVar7;
  param_1[0x36] = uVar3;
  param_1[0x37] = (ulong)*(uint *)(*(long *)(lVar5 + 0x98) + 0x84);
  param_1[0x36] = uVar3;
  uVar6 = *(undefined4 *)(*(long *)(lVar5 + 0x98) + 0x8c);
  param_1[0x29] = uVar8;
  param_1[0x28] = CONCAT44((int)((ulong)param_1[0x28] >> 0x20),uVar6);
  uVar3 = CONCAT44(*(undefined4 *)(*(long *)(lVar5 + 0x98) + 0x90),uVar6);
  param_1[0x29] = uVar8;
  param_1[0x28] = uVar3;
  param_1[0x29] = (ulong)*(uint *)(*(long *)(lVar5 + 0x98) + 0x94);
  param_1[0x28] = uVar3;
  uVar6 = *(undefined4 *)(*(long *)(lVar5 + 0x98) + 0x98);
  uVar7 = param_1[0x2b];
  uVar8 = param_1[0x2d];
  param_1[0x39] = uVar9;
  param_1[0x38] = CONCAT44((int)((ulong)param_1[0x38] >> 0x20),uVar6);
  uVar3 = CONCAT44(*(undefined4 *)(*(long *)(lVar5 + 0x98) + 0x9c),uVar6);
  param_1[0x39] = uVar9;
  param_1[0x38] = uVar3;
  lVar4 = param_1[2];
  param_1[0x39] = (ulong)*(uint *)(*(long *)(lVar5 + 0x98) + 0xa0);
  param_1[0x38] = uVar3;
  uVar6 = *(undefined4 *)(*(long *)(lVar4 + 0x98) + 0xa8);
  param_1[0x2b] = uVar7;
  param_1[0x2a] = CONCAT44((int)((ulong)param_1[0x2a] >> 0x20),uVar6);
  uVar3 = CONCAT44(*(undefined4 *)(*(long *)(lVar4 + 0x98) + 0xac),uVar6);
  param_1[0x2b] = uVar7;
  param_1[0x2a] = uVar3;
  param_1[0x2b] = (ulong)*(uint *)(*(long *)(lVar4 + 0x98) + 0xb0);
  param_1[0x2a] = uVar3;
  uVar7 = param_1[0x3b];
  uVar9 = param_1[0x3d];
  uVar6 = *(undefined4 *)(*(long *)(lVar4 + 0x98) + 0xb4);
  param_1[0x3b] = uVar7;
  param_1[0x3a] = CONCAT44((int)((ulong)param_1[0x3a] >> 0x20),uVar6);
  uVar3 = CONCAT44(*(undefined4 *)(*(long *)(lVar4 + 0x98) + 0xb8),uVar6);
  param_1[0x3b] = uVar7;
  param_1[0x3a] = uVar3;
  param_1[0x3b] = (ulong)*(uint *)(*(long *)(lVar4 + 0x98) + 0xbc);
  param_1[0x3a] = uVar3;
  uVar6 = *(undefined4 *)(*(long *)(lVar4 + 0x98) + 0xc4);
  param_1[0x2d] = uVar8;
  param_1[0x2c] = CONCAT44((int)((ulong)param_1[0x2c] >> 0x20),uVar6);
  uVar3 = CONCAT44(*(undefined4 *)(*(long *)(lVar4 + 0x98) + 200),uVar6);
  param_1[0x2d] = uVar8;
  param_1[0x2c] = uVar3;
  param_1[0x2d] = (ulong)*(uint *)(*(long *)(lVar4 + 0x98) + 0xcc);
  param_1[0x2c] = uVar3;
  uVar6 = *(undefined4 *)(*(long *)(lVar4 + 0x98) + 0xd0);
  param_1[0x3d] = uVar9;
  param_1[0x3c] = CONCAT44((int)((ulong)param_1[0x3c] >> 0x20),uVar6);
  uVar3 = CONCAT44(*(undefined4 *)(*(long *)(lVar4 + 0x98) + 0xd4),uVar6);
  param_1[0x3d] = uVar9;
  param_1[0x3c] = uVar3;
  param_1[0x3d] = (ulong)*(uint *)(*(long *)(lVar4 + 0x98) + 0xd8);
  param_1[0x3c] = uVar3;
  if (param_4 - 4 < 4) {
    pcVar2 = (char *)(param_1 + 0x3e);
    pcVar1 = (char *)(param_1 + 0x41);
    switch((uint)param_4) {
    case 4:
      break;
    case 5:
      std::string::assign(pcVar1);
      break;
    case 6:
      std::string::assign(pcVar1);
      break;
    case 7:
      pcVar2 = pcVar1;
    }
    std::string::assign(pcVar2);
  }
  return;
}

