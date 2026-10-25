// addr:      7101d40460
// offset:    0x1d40460
// name:      FUN_7101d40460
// mangled:   
// signature: undefined __cdecl FUN_7101d40460(long param_1, int param_2)


void FUN_7101d40460(long param_1,int param_2)

{
  int iVar1;
  undefined8 *puVar2;
  byte *pbVar3;
  long lVar4;
  undefined *puVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  byte bVar11;
  byte local_e0 [64];
  undefined8 local_a0;
  byte local_98 [64];
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined2 local_44;
  
  if (-1 < param_2) {
    if ((ulong)(long)param_2 < (ulong)(*(long *)(param_1 + 0x60) - *(long *)(param_1 + 0x58) >> 2))
    {
      puVar2 = *(undefined8 **)(param_1 + 0x40);
      local_58 = 0xd00000000;
      local_50 = 0x5f74706f5f756e6d;
      uVar9 = 0x811c9dc5;
      local_48 = 0x676e616c;
      local_44 = 0x5f;
      uVar6 = 0x6d;
      pbVar3 = (byte *)((long)&local_50 + 1);
      uVar7 = uVar9;
      do {
        uVar7 = uVar7 * 0x89 ^ uVar6;
        uVar6 = (uint)*pbVar3;
        pbVar3 = pbVar3 + 1;
      } while (uVar6 != 0);
      local_58 = CONCAT44(0xd,uVar7);
      iVar1 = *(int *)(param_1 + 0x50);
      lVar4 = 0;
      switch(*(undefined4 *)(*(long *)(param_1 + 0x58) + (long)param_2 * 4)) {
      case 0:
        break;
      default:
        lVar4 = 4;
        if (iVar1 != 2) {
          lVar4 = 1;
        }
        break;
      case 2:
        lVar4 = 2;
        if (iVar1 != 1) {
          lVar4 = 5;
        }
        break;
      case 3:
        lVar4 = 6;
        if (iVar1 != 2) {
          lVar4 = 3;
        }
        break;
      case 4:
        lVar4 = 7;
        break;
      case 5:
        lVar4 = 9;
        break;
      case 6:
        lVar4 = 8;
        break;
      case 7:
        lVar4 = 10;
        break;
      case 8:
        lVar4 = 0xb;
        break;
      case 9:
        lVar4 = 0xc;
        break;
      case 10:
        lVar4 = 0xd;
      }
      puVar5 = (&PTR_s_jp_ja_710523d010)[lVar4];
      uVar8 = 0;
      while( true ) {
        bVar11 = puVar5[uVar8];
        if (bVar11 == 0) break;
        local_98[uVar8] = bVar11;
        if (0x3e < (int)uVar8 + 1U) {
          uVar8 = (ulong)((int)uVar8 + 1);
          break;
        }
        bVar11 = (puVar5 + uVar8)[1];
        if (bVar11 == 0) {
          uVar8 = uVar8 + 1;
          break;
        }
        local_98[uVar8 + 1] = bVar11;
        uVar8 = uVar8 + 2;
      }
      local_98[uVar8 & 0xffffffff] = 0;
      local_a0 = uVar8 << 0x20;
      uVar7 = (uint)local_98[0];
      if (uVar7 != 0) {
        pbVar3 = local_98;
        do {
          pbVar3 = pbVar3 + 1;
          uVar9 = uVar9 * 0x89 ^ uVar7;
          uVar7 = (uint)*pbVar3;
        } while (uVar7 != 0);
      }
      local_a0 = CONCAT44((int)uVar8,uVar9);
      uVar8 = 0;
      bVar11 = 0x6d;
      do {
        local_e0[uVar8] = bVar11;
        if (0x3e < (int)uVar8 + 1U) {
          uVar8 = (ulong)((int)uVar8 + 1);
          break;
        }
        bVar11 = *(byte *)((long)&local_50 + uVar8 + 1);
        uVar8 = uVar8 + 1;
      } while (bVar11 != 0);
      local_e0[uVar8 & 0xffffffff] = 0;
      uVar7 = (uint)uVar8;
      if (local_e0[0] != 0) {
        pbVar3 = local_e0;
        do {
          pbVar3 = pbVar3 + 1;
        } while (*pbVar3 != 0);
      }
      if (((int)uVar7 < 0x3f) && (local_98[0] != 0)) {
        pbVar3 = local_98;
        uVar10 = uVar8 & 0xffffffff;
        while( true ) {
          pbVar3 = pbVar3 + 1;
          uVar7 = (int)uVar8 + 1;
          local_e0[(int)uVar8] = local_98[0];
          if ((0x3d < (uint)uVar10) || (local_98[0] = *pbVar3, local_98[0] == 0)) break;
          uVar8 = (ulong)uVar7;
          uVar10 = (ulong)((uint)uVar10 + 1);
        }
      }
      local_e0[(int)uVar7] = 0;
      if (local_e0[0] != 0) {
        pbVar3 = local_e0;
        do {
          pbVar3 = pbVar3 + 1;
        } while (*pbVar3 != 0);
      }
      if ((long *)*puVar2 != (long *)0x0) {
        FUN_7103375650((long *)*puVar2,"language_name_label",&DAT_71042d5020);
      }
      return;
    }
  }
  if ((long *)**(undefined8 **)(param_1 + 0x40) != (long *)0x0) {
    FUN_7103375650((long *)**(undefined8 **)(param_1 + 0x40),"language_name_label",&DAT_71042d5020);
    return;
  }
  return;
}

