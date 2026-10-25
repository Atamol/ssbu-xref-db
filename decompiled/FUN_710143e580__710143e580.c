// addr:      710143e580
// offset:    0x143e580
// name:      FUN_710143e580
// mangled:   
// signature: undefined __cdecl FUN_710143e580(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_710143e580(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  byte bVar7;
  uint uVar8;
  byte *pbVar9;
  uint uVar10;
  undefined4 local_2f0;
  uint uStack_2ec;
  undefined4 local_2e8;
  byte local_2e4 [260];
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined4 *local_1a0;
  undefined1 local_198;
  undefined4 local_190;
  undefined8 local_18c;
  byte local_184 [260];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 *local_40;
  undefined1 local_38;
  
  plVar2 = DAT_710593b218;
  if (*(int *)(param_1 + 0xfc) == 0) {
    local_190 = 6;
    local_38 = 1;
    local_184[0] = 0;
    local_68 = 0;
    local_70 = 0;
    local_78 = 0;
    local_80 = 0;
    local_40 = (undefined4 *)0x0;
    local_48 = 0;
    local_50 = 0;
    for (uVar4 = 0; "save:/save_data/replay"[uVar4] != 0; uVar4 = uVar4 + 2) {
      bVar7 = "save:/save_data/replay"[uVar4 + 1];
      local_184[uVar4] = "save:/save_data/replay"[uVar4];
      if (bVar7 == 0) {
        uVar4 = uVar4 + 1;
        break;
      }
      local_184[uVar4 + 1] = bVar7;
    }
    uVar6 = 0x811c9dc5;
    local_184[uVar4 & 0xffffffff] = 0;
    local_18c = uVar4 << 0x20;
    uVar10 = (uint)local_184[0];
    uVar8 = uVar6;
    if (uVar10 != 0) {
      pbVar9 = local_184;
      do {
        pbVar9 = pbVar9 + 1;
        uVar8 = uVar8 * 0x89 ^ uVar10;
        uVar10 = (uint)*pbVar9;
      } while (uVar10 != 0);
    }
    local_18c = CONCAT44((int)uVar4,uVar8);
    local_40 = (undefined4 *)(param_1 + 0x11c);
    *(undefined4 *)(param_1 + 0x11c) = 0;
    if (local_184[0] == 0) {
      uVar4 = 0;
    }
    else {
      uVar3 = 0;
      uVar4 = 0x103;
      bVar7 = local_184[0];
      do {
        local_2e4[uVar3] = bVar7;
        if (0x102 < (int)uVar3 + 1U) goto LAB_710143e770;
        bVar7 = local_184[uVar3 + 1];
        uVar3 = uVar3 + 1;
      } while (bVar7 != 0);
      uVar4 = uVar3 & 0xffffffff;
    }
LAB_710143e770:
    local_2e4[uVar4] = 0;
    uVar8 = (uint)local_2e4[0];
    local_2e8 = (undefined4)uVar4;
    if (local_2e4[0] != 0) {
      pbVar9 = local_2e4;
      do {
        pbVar9 = pbVar9 + 1;
        uVar6 = uVar6 * 0x89 ^ uVar8;
        uVar8 = (uint)*pbVar9;
      } while (uVar8 != 0);
    }
    _local_2f0 = CONCAT44(uVar6,6);
    local_1d8 = local_78;
    local_1e0 = local_80;
    local_1b8 = local_58;
    local_1c0 = local_60;
    local_1c8 = local_68;
    local_1d0 = local_70;
    local_198 = local_38;
    local_1a0 = local_40;
    local_1a8 = local_48;
    local_1b0 = local_50;
    FUN_71037222b0(*plVar2,&local_2f0,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  else if (*(int *)(param_1 + 0x11c) != 0) {
    if (*(int *)(param_1 + 0x11c) == 1) {
      lVar5 = *DAT_710593b218;
      uVar4 = *(ulong *)(lVar5 + 0x70);
      lVar1 = *(long *)(lVar5 + 0x78);
      *(undefined8 *)(lVar5 + 0x70) = 0;
      *(undefined8 *)(lVar5 + 0x78) = 0;
      *(undefined8 *)(lVar5 + 0x80) = 0;
      if ((ulong)(*(long *)(param_1 + 0x198) + ((long)(lVar1 - uVar4) >> 3) * -0x3333333333333333) <
          0x401) {
        if (0x12 < *(uint *)(param_1 + 0xf4)) goto LAB_710143e840;
        *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0xf4) * 4 + 0xa8) = 3;
      }
      else {
        uVar3 = *(ulong *)(param_1 + 0x110);
        *(undefined8 *)(param_1 + 0x110) = 0;
        if (uVar3 != 0) {
          FUN_710392eb40(uVar3);
        }
        if (0x12 < *(uint *)(param_1 + 0xf4)) {
LAB_710143e840:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0xf4) * 4 + 0xa8) = 0;
        *(undefined4 *)(param_1 + 0x108) = 2;
      }
      if (uVar4 != 0) {
        FUN_710392eb40(uVar4);
      }
    }
    else {
      uVar4 = *(ulong *)(param_1 + 0x110);
      *(undefined8 *)(param_1 + 0x110) = 0;
      if (uVar4 != 0) {
        FUN_710392eb40(uVar4);
      }
      *(undefined4 *)(param_1 + 0x108) = 2;
      if (0x12 < *(uint *)(param_1 + 0xf4)) goto LAB_710143e840;
      *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0xf4) * 4 + 0xa8) = 0;
    }
  }
  return;
}

