// addr:      710233b710
// offset:    0x233b710
// name:      FUN_710233b710
// mangled:   
// signature: undefined __cdecl FUN_710233b710(long * param_1)


void FUN_710233b710(long *param_1)

{
  char *pcVar1;
  byte bVar2;
  int iVar3;
  long ****in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  uint uVar4;
  long lVar5;
  undefined4 uVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  byte *pbVar10;
  long lVar11;
  undefined8 local_b0;
  byte local_a8 [64];
  undefined8 local_68;
  byte local_60 [64];
  
  lVar11 = *param_1;
  if (*(int *)((long)param_1 + 0xf4) == 0) {
    if (((DAT_71053144d8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_71053144d8), iVar3 != 0)) {
      FUN_7101764000();
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
    }
    uVar8 = 0;
    pcVar1 = "ReplayDownloadScene";
    if (DAT_71053050f0 != 0x7070000) {
      pcVar1 = "ReplayLoadScene";
    }
    while( true ) {
      bVar2 = pcVar1[uVar8];
      if (bVar2 == 0) break;
      local_a8[uVar8] = bVar2;
      if (0x3e < (int)uVar8 + 1U) {
        uVar8 = (ulong)((int)uVar8 + 1);
        break;
      }
      bVar2 = (pcVar1 + uVar8)[1];
      if (bVar2 == 0) {
        uVar8 = uVar8 + 1;
        break;
      }
      local_a8[uVar8 + 1] = bVar2;
      uVar8 = uVar8 + 2;
    }
    uVar4 = 0x811c9dc5;
    local_a8[uVar8 & 0xffffffff] = 0;
    uVar7 = (uint)local_a8[0];
    uVar9 = uVar4;
    if (local_a8[0] != 0) {
      pbVar10 = local_a8;
      do {
        pbVar10 = pbVar10 + 1;
        uVar9 = uVar9 * 0x89 ^ uVar7;
        uVar7 = (uint)*pbVar10;
      } while (uVar7 != 0);
    }
    local_b0 = CONCAT44((int)uVar8,uVar9);
    lVar5 = *(long *)(lVar11 + 0x38);
    if (lVar5 == 0) {
      local_60[0] = 0;
      local_68 = (long ***)0x0;
    }
    else {
      uVar8 = 0;
      while( true ) {
        pbVar10 = (byte *)(lVar5 + 0x10 + uVar8);
        bVar2 = *pbVar10;
        if (bVar2 == 0) break;
        local_60[uVar8] = bVar2;
        if (0x3e < (int)uVar8 + 1U) {
          uVar8 = (ulong)((int)uVar8 + 1);
          break;
        }
        bVar2 = pbVar10[1];
        if (bVar2 == 0) {
          uVar8 = uVar8 + 1;
          break;
        }
        local_60[uVar8 + 1] = bVar2;
        uVar8 = uVar8 + 2;
      }
      local_60[uVar8 & 0xffffffff] = 0;
      uVar9 = (uint)local_60[0];
      local_68 = (long ***)(uVar8 << 0x20);
      if (local_60[0] != 0) {
        pbVar10 = local_60;
        do {
          pbVar10 = pbVar10 + 1;
          uVar4 = uVar4 * 0x89 ^ uVar9;
          uVar9 = (uint)*pbVar10;
        } while (uVar9 != 0);
      }
      local_68 = (long ***)CONCAT44((int)uVar8,uVar4);
    }
    FUN_71037266d0(*(long *)(lVar11 + 0x20),&local_b0,(long ****)&local_68,(byte ****)0x0,in_x4,
                   in_x5,in_x6,in_x7);
    *(undefined4 *)(lVar11 + 0x30) = 1;
  }
  else {
    lVar5 = *(long *)(lVar11 + 0x28);
    if (((*(long *)(lVar5 + 0x60) == 0) && (*(long *)(lVar5 + 0x30) == *(long *)(lVar5 + 0x38))) &&
       (*(long *)(*(long *)(lVar11 + 0x20) + 0x10) == 0)) {
      uVar9 = *(uint *)((long)param_1 + 0xec);
      if (*(int *)(lVar11 + 0x40) == 2) {
        if (0x12 < uVar9) {
LAB_710233b95c:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        uVar6 = 1;
      }
      else {
        if (0x12 < uVar9) goto LAB_710233b95c;
        uVar6 = 2;
      }
      *(undefined4 *)((long)param_1 + (long)(int)uVar9 * 4 + 0xa0) = uVar6;
    }
  }
  return;
}

