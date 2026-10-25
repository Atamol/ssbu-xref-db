// addr:      7101d0e0c0
// offset:    0x1d0e0c0
// name:      FUN_7101d0e0c0
// mangled:   
// signature: undefined __cdecl FUN_7101d0e0c0(long param_1, uint param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101d0e0c0(long param_1,uint param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char *pcVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  byte *pbVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  uint local_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined8 local_98;
  undefined2 local_90;
  undefined4 local_8e;
  undefined2 local_8a;
  undefined1 local_88;
  
  iVar3 = *(int *)(param_1 + 0x108);
  uVar7 = (ulong)param_2;
  if (*(char *)(param_1 + 0x10c) != '\0') {
    if (iVar3 < 1) {
      return;
    }
    uVar8 = 0;
    do {
      FUN_7101d0f730(*(long *)(param_1 + 0x100),0,(ulong)uVar8,0,param_5,param_6,param_7,param_8);
      iVar3 = *(int *)(param_1 + 0x108);
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < iVar3);
  }
  if (0 < iVar3) {
    uVar9 = 0;
    do {
      if (3 < (uint)uVar9) {
LAB_7101d0e490:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar10 = *(long *)(param_1 + 0x100);
      uVar2 = (ulong)*(uint *)(lVar10 + ((long)(uVar9 << 0x20) >> 0x1e) + 0x28);
      FUN_71003a4ca0(&local_a8,"progress_%d_w%d_r%d",uVar9 & 0xffffffff,
                     (ulong)*(uint *)(lVar10 + 0x18),uVar2,param_5,param_6,param_7,param_8);
      FUN_7103778760(*(long *)(lVar10 + 0x10),(long)&local_a0);
      lVar10 = *(long *)(param_1 + 0x100);
      if (uVar9 == uVar7) {
        FUN_71003a4ca0(&local_a8,"center_%d_h%d",(ulong)param_2,(ulong)*(uint *)(lVar10 + 0x1c),
                       uVar2,param_5,param_6,param_7,param_8);
        FUN_7103778760(*(long *)(lVar10 + 0x10),(long)&local_a0);
        lVar10 = *(long *)(param_1 + 0x100);
        FUN_71003a4ca0(&local_a8,"enlarge_%d_s%d",uVar7,(ulong)*(uint *)(lVar10 + 0x24),uVar2,
                       param_5,param_6,param_7,param_8);
        FUN_7103778760(*(long *)(lVar10 + 0x10),(long)&local_a0);
        if (3 < param_2) goto LAB_7101d0e490;
        lVar10 = *(long *)(param_1 + 0xf8);
        uVar2 = (ulong)*(uint *)(lVar10 + (long)(int)param_2 * 4 + 0x28);
        FUN_71003a4ca0(&local_a8,"progress_%d_w%d_r%d",(ulong)param_2,
                       (ulong)*(uint *)(lVar10 + 0x18),uVar2,param_5,param_6,param_7,param_8);
        FUN_7103778760(*(long *)(lVar10 + 0x10),(long)&local_a0);
        lVar10 = *(long *)(param_1 + 0xf8);
        FUN_71003a4ca0(&local_a8,"center_%d_h%d",(ulong)param_2,(ulong)*(uint *)(lVar10 + 0x1c),
                       uVar2,param_5,param_6,param_7,param_8);
        FUN_7103778760(*(long *)(lVar10 + 0x10),(long)&local_a0);
        if ((ulong)(*(long *)(param_1 + 0x188) - *(long *)(param_1 + 0x180) >> 3) <= uVar7)
        goto LAB_7101d0e494;
        lVar10 = *(long *)(*(long *)(param_1 + 0x180) + uVar7 * 8);
        local_a0 = 0x6d696e615f746661;
        local_98 = 0x6572676f72705f65;
        local_90 = 0x7373;
        local_8e = 0x696c615f;
        local_8a = 0x6576;
        uVar6 = 0x61;
        uVar8 = 0x811c9dc5;
        local_88 = 0;
        pbVar5 = (byte *)((long)&local_a0 + 1);
        do {
          uVar8 = uVar8 * 0x89 ^ uVar6;
          uVar6 = (uint)*pbVar5;
          pbVar5 = pbVar5 + 1;
        } while (uVar6 != 0);
        _local_a8 = CONCAT44(0x18,uVar8);
        FUN_7103778760(*(long *)(lVar10 + 8),(long)&local_a0);
        *(undefined1 *)(lVar10 + 0x28) = 0;
      }
      else {
        lVar11 = (long)(int)(uint)uVar9;
        uVar2 = (ulong)*(uint *)(lVar10 + lVar11 * 4 + 0x28);
        FUN_71003a4ca0(&local_a8,"lose_%d_w%d_r%d",uVar9 & 0xffffffff,
                       (ulong)*(uint *)(lVar10 + 0x18),uVar2,param_5,param_6,param_7,param_8);
        FUN_7103778760(*(long *)(lVar10 + 0x10),(long)&local_a0);
        lVar4 = *(long *)(param_1 + 0x100);
        lVar10 = lVar4 + lVar11;
        *(undefined1 *)(lVar10 + 0x48) = 1;
        if (*(char *)(lVar10 + 0x4c) == '\0') {
          pcVar1 = "icon_down_%d";
        }
        else {
          pcVar1 = "icon_reset_%d";
        }
        FUN_7103778430(lVar4 + 8,pcVar1,uVar9 & 0xffffffff,uVar2,param_5,param_6,param_7,param_8);
        lVar10 = *(long *)(param_1 + 0xf8);
        FUN_71003a4ca0(&local_a8,"progress_%d_w%d_r%d",uVar9 & 0xffffffff,
                       (ulong)*(uint *)(lVar10 + 0x18),(ulong)*(uint *)(lVar10 + lVar11 * 4 + 0x28),
                       param_5,param_6,param_7,param_8);
        FUN_7103778760(*(long *)(lVar10 + 0x10),(long)&local_a0);
        lVar10 = *(long *)(param_1 + 0xf8);
        FUN_71003a4ca0(&local_a8,"lose_%d_w%d_r%d",uVar9 & 0xffffffff,
                       (ulong)*(uint *)(lVar10 + 0x18),(ulong)*(uint *)(lVar10 + lVar11 * 4 + 0x28),
                       param_5,param_6,param_7,param_8);
        FUN_7103778760(*(long *)(lVar10 + 0x10),(long)&local_a0);
        if ((ulong)(*(long *)(param_1 + 0x188) - *(long *)(param_1 + 0x180) >> 3) <= uVar9) {
LAB_7101d0e494:
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_out_of_range();
        }
        lVar10 = *(long *)(*(long *)(param_1 + 0x180) + uVar9 * 8);
        local_a0 = 0x6d696e615f746661;
        local_98 = 0x6572676f72705f65;
        local_90 = 0x7373;
        local_8e = 0x736f6c5f;
        local_8a = 0x7265;
        uVar6 = 0x61;
        uVar8 = 0x811c9dc5;
        local_88 = 0;
        pbVar5 = (byte *)((long)&local_a0 + 1);
        do {
          uVar8 = uVar8 * 0x89 ^ uVar6;
          uVar6 = (uint)*pbVar5;
          pbVar5 = pbVar5 + 1;
        } while (uVar6 != 0);
        _local_a8 = CONCAT44(0x18,uVar8);
        FUN_7103778760(*(long *)(lVar10 + 8),(long)&local_a0);
        *(undefined1 *)(lVar10 + 0x28) = 1;
      }
      uVar9 = uVar9 + 1;
    } while ((long)uVar9 < (long)*(int *)(param_1 + 0x108));
  }
  return;
}

