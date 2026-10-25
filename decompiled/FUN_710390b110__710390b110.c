// addr:      710390b110
// offset:    0x390b110
// name:      FUN_710390b110
// mangled:   
// signature: undefined __cdecl FUN_710390b110(long param_1, int param_2, long param_3)


void FUN_710390b110(long param_1,int param_2,long param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  lVar7 = *(long *)(param_1 + 0x58);
  lVar6 = (long)param_2;
  if (*(byte *)(param_3 + 0x10) <= *(byte *)(*(long *)(lVar7 + 0x10) + (long)param_2 * 0x18 + 0x10))
  {
    FUN_7103913220(*(long **)(param_1 + 0x30),*(uint *)(*(long *)(lVar7 + 0x10) + lVar6 * 0x18 + 8),
                   *(int *)(param_3 + 8));
    uVar2 = *(int *)(lVar7 + 0x18) - 1;
    uVar5 = (ulong)uVar2;
    if (param_2 < (int)uVar2) {
      lVar4 = lVar6 * 0x18;
      do {
        puVar1 = (undefined8 *)(*(long *)(lVar7 + 0x10) + lVar4);
        lVar6 = lVar6 + 1;
        lVar4 = lVar4 + 0x18;
        puVar1[1] = puVar1[4];
        puVar1[2] = puVar1[5];
        *puVar1 = puVar1[3];
        uVar5 = (long)*(int *)(lVar7 + 0x18) - 1;
      } while (lVar6 < (long)uVar5);
    }
    *(int *)(lVar7 + 0x18) = (int)uVar5;
    return;
  }
  uVar3 = FUN_7103908660(*(undefined8 *)(param_1 + 0x38),
                         "<goto %s> at line %d jumps into the scope of local \'%s\'");
                    /* WARNING: Subroutine does not return */
  FUN_710390b290(param_1,uVar3);
}

