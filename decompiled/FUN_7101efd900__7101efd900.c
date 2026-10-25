// addr:      7101efd900
// offset:    0x1efd900
// name:      FUN_7101efd900
// mangled:   
// signature: undefined __cdecl FUN_7101efd900(uint * param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101efd900(uint *param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  int *piVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined4 local_80 [4];
  long local_70;
  int local_68;
  
  uVar5 = (ulong)*param_1;
  if (1 < *param_1) {
LAB_7101efdb20:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar7 = *DAT_7105328e18;
  uVar2 = *(uint *)(lVar7 + uVar5 * 0x1b8 + 0x28);
  uVar9 = (ulong)(int)uVar2;
  if ((ulong)(*(long *)(param_1 + 0x8e) - *(long *)(param_1 + 0x8c) >> 4) <= uVar9) {
LAB_7101efdb24:
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  lVar8 = **(long **)(*(long *)(param_1 + 0x8c) + uVar9 * 0x10);
  if (param_1[0x7f] == 0) {
    if (*(char *)(lVar8 + 0x275) != '\0') {
      *(undefined1 *)(lVar8 + 0x275) = 0;
      FUN_7103778760(*(long *)(lVar8 + 0x228),0x710434abb9);
      uVar5 = (ulong)*param_1;
      if (1 < *param_1) goto LAB_7101efdb20;
      lVar7 = *DAT_7105328e18;
    }
    if (4 < uVar2) goto LAB_7101efdb20;
    if ((ulong)(*(long *)(param_1 + 0x8e) - *(long *)(param_1 + 0x8c) >> 4) <= uVar9)
    goto LAB_7101efdb24;
    lVar8 = **(long **)(*(long *)(param_1 + 0x8c) + uVar9 * 0x10);
    iVar1 = *(int *)(lVar7 + uVar5 * 0x1b8 + (ulong)uVar2 * 0x50 + 0x68);
    *(undefined8 *)(lVar8 + 0x20) = 0;
    *(undefined8 *)(lVar8 + 0x28) = 0;
    *(undefined8 *)(lVar8 + 0x1e8) = 0;
    *(undefined8 *)(lVar8 + 0x1f0) = 0;
    *(undefined1 *)(lVar8 + 0x20c) = 0;
    *(undefined8 *)(lVar8 + 0x1d8) = 0;
    *(undefined8 *)(lVar8 + 0x1e0) = 0;
    *(undefined4 *)(lVar8 + 0x1b0) = 0;
    *(undefined8 *)(lVar8 + 0x1c8) = 0;
    *(undefined8 *)(lVar8 + 0x1d0) = 0;
    *(undefined8 *)(lVar8 + 0x1b8) = 0;
    *(undefined8 *)(lVar8 + 0x1c0) = 0;
    *(undefined4 *)(lVar8 + 0x208) = 0xffffffff;
    *(undefined8 *)(lVar8 + 0x1f8) = 0x100000000;
    *(undefined8 *)(lVar8 + 0x200) = 0xffffffff;
    if (iVar1 == 1) {
      *(undefined4 *)(lVar8 + 0x1b4) = 0xe;
      if ((((*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') &&
           (uVar5 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x1444b840ab,
                                   (long ****)&DAT_00000004,param_4,param_5,param_6,param_7,param_8)
           , (uVar5 & 1) != 0)) && (FUN_71024076d0(local_80,0x1444b840ab), local_70 != 0)) &&
         ((DAT_7106dd53a8 == '\x01' && (local_68 == DAT_7106dd53ac)))) {
        piVar6 = (int *)(local_70 + 0x38);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar4) {
            *piVar6 = *piVar6 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
    }
    else {
      *(undefined4 *)(lVar8 + 0x1b4) = 0xf;
    }
  }
  else if (*(int *)(lVar8 + 0x200) == 0) {
    if (0x12 < param_1[0x7d]) goto LAB_7101efdb20;
    param_1[(long)(int)param_1[0x7d] + 0x6a] = 0;
  }
  return;
}

