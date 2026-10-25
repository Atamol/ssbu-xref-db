// addr:      71038fe990
// offset:    0x38fe990
// name:      FUN_71038fe990
// mangled:   
// signature: undefined __cdecl FUN_71038fe990(long param_1, int param_2)


void FUN_71038fe990(long param_1,int param_2)

{
  int *piVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  int iVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  
  lVar12 = *(long *)(param_1 + 0x18);
  puVar7 = *(undefined8 **)(lVar12 + 0x98);
  *(undefined8 *)(lVar12 + 0x98) = *puVar7;
  *puVar7 = *(undefined8 *)(lVar12 + 0x58);
  *(undefined8 **)(lVar12 + 0x58) = puVar7;
  bVar3 = *(byte *)((long)puVar7 + 9);
  *(byte *)((long)puVar7 + 9) = bVar3 & 0xf7;
  if (*(byte *)(lVar12 + 0x55) - 2 < 4) {
    *(byte *)((long)puVar7 + 9) = bVar3 & 0xf0 | *(byte *)(lVar12 + 0x54) & 3;
  }
  bVar3 = *(byte *)(puVar7 + 1);
  if ((bVar3 & 0xf) == 7) {
    lVar8 = puVar7[2];
  }
  else if ((bVar3 & 0xf) == 5) {
    lVar8 = puVar7[5];
  }
  else {
    lVar8 = *(long *)(*(long *)(param_1 + 0x18) + ((ulong)bVar3 & 0xf) * 8 + 0x1a0);
  }
  if (lVar8 == 0) {
    puVar9 = &DAT_7104862960;
  }
  else {
    lVar10 = *(long *)(*(long *)(param_1 + 0x18) + 0xf0);
    puVar11 = (undefined8 *)
              (*(long *)(lVar8 + 0x18) +
              (long)(int)(*(uint *)(lVar10 + 0xc) &
                         (-1 << (ulong)(*(byte *)(lVar8 + 0xb) & 0x1f) ^ 0xffffffffU)) * 0x20);
    do {
      if ((*(int *)(puVar11 + 3) == 0x44) && (puVar9 = puVar11, puVar11[2] == lVar10)) break;
      piVar1 = (int *)((long)puVar11 + 0x1c);
      puVar11 = puVar11 + (long)*piVar1 * 4;
      puVar9 = &DAT_7104862960;
    } while (*piVar1 != 0);
  }
  if ((*(uint *)(puVar9 + 1) & 0xf) == 6) {
    uVar4 = *(undefined1 *)(param_1 + 0xc9);
    uVar5 = *(undefined1 *)(lVar12 + 0x57);
    *(undefined1 *)(param_1 + 0xc9) = 0;
    *(undefined1 *)(lVar12 + 0x57) = 0;
    puVar11 = *(undefined8 **)(param_1 + 0x10);
    uVar2 = puVar9[1];
    *puVar11 = *puVar9;
    puVar11[1] = uVar2;
    lVar8 = *(long *)(param_1 + 0x10);
    *(undefined8 **)(lVar8 + 0x10) = puVar7;
    *(uint *)(lVar8 + 0x18) = bVar3 | 0x40;
    lVar8 = *(long *)(param_1 + 0x10);
    *(long *)(param_1 + 0x10) = lVar8 + 0x20;
    iVar6 = FUN_71038fca90(param_1,FUN_71038feb90,0,lVar8 - *(long *)(param_1 + 0x38),0);
    *(undefined1 *)(param_1 + 0xc9) = uVar4;
    *(undefined1 *)(lVar12 + 0x57) = uVar5;
    if ((param_2 != 0) && (iVar6 != 0)) {
      if (iVar6 == 2) {
        FUN_7103908660(param_1,"error in __gc metamethod (%s)");
        iVar6 = 5;
      }
                    /* WARNING: Subroutine does not return */
      FUN_71038fb3c0(param_1,iVar6);
    }
  }
  return;
}

