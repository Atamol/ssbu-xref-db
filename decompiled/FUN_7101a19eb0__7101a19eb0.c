// addr:      7101a19eb0
// offset:    0x1a19eb0
// name:      FUN_7101a19eb0
// mangled:   
// signature: undefined __cdecl FUN_7101a19eb0(long param_1, int param_2)


void FUN_7101a19eb0(long param_1,int param_2)

{
  bool bVar1;
  undefined1 *puVar2;
  ulong uVar3;
  char *pcVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  
  if ((ulong)(*(long *)(param_1 + 600) - *(long *)(param_1 + 0x250) >> 4) <= (ulong)(long)param_2) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  plVar8 = (long *)(*(long *)(param_1 + 0x250) + (long)param_2 * 0x10 + 8);
  FUN_7103778300(0x3f800000,*(long *)(*(long *)(*plVar8 + 0x5e8) + 0x10),0x71042b4086);
  puVar5 = *(undefined1 **)(*plVar8 + 0x200);
  if ((*(int *)(*plVar8 + 0x1f8) != 3 && ((ulong)puVar5 & 0xff00000000000000) == 0xc100000000000000)
      && ((ulong)puVar5 & 0xffffffffff) != 0) {
    lVar7 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x168);
    puVar2 = FUN_71032631a0(lVar7,0xfd5f7fa78);
    if (((ulong)puVar2 & 0xff00000000000000) == 0xc100000000000000 &&
        ((ulong)puVar2 & 0xffffffffff) != 0) {
      if ((((ulong)puVar2 ^ (ulong)puVar5) & 0xffffffffff) == 0) {
        return;
      }
    }
    else if ((((ulong)puVar2 & 0xffffffffff) != 0) &&
            (((ulong)puVar2 & 0xff00000000000000) == 0xc100000000000000)) {
      return;
    }
    if (*(int *)(param_1 + 0x16c) == 10) {
      if ((((*(int *)(param_1 + 0x164) == 0) && (*(int *)(param_1 + 0x170) == 0)) &&
          (*(int *)(param_1 + 0x160) == 1)) &&
         (uVar3 = FUN_7103264270(lVar7,puVar5), (int)uVar3 != -1)) {
        puVar6 = *(undefined8 **)(*DAT_7105314510 + 0x208);
        uVar3 = FUN_7103264270(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x168),puVar5);
        if ((-1 < (int)uVar3) &&
           (*(char *)(*(long *)*puVar6 + (long)(int)uVar3 * 8 + 0x1296) != '\0')) {
          lVar7 = *(long *)(*(long *)(*plVar8 + 0x5e8) + 0x10);
          pcVar4 = "clear_kumite_on";
          goto LAB_7101a19fdc;
        }
      }
    }
    else if (((*(int *)(param_1 + 0x16c) == 9) &&
             (bVar1 = FUN_7101a0dd00(*(int *)(param_1 + 0x160),puVar5), param_2 == 0)) && (bVar1)) {
      lVar7 = *(long *)(*(long *)(*plVar8 + 0x5e8) + 0x10);
      pcVar4 = "clear_standard_on";
LAB_7101a19fdc:
      FUN_7103778300(0x3f800000,lVar7,(long)pcVar4);
      return;
    }
  }
  return;
}

