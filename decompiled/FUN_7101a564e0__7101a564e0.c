// addr:      7101a564e0
// offset:    0x1a564e0
// name:      FUN_7101a564e0
// mangled:   
// signature: undefined __cdecl FUN_7101a564e0(long param_1, ulong param_2)


void FUN_7101a564e0(long param_1,ulong param_2)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  code *UNRECOVERED_JUMPTABLE;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  undefined *puVar12;
  
  lVar6 = *(long *)(param_1 + 0x218);
  lVar7 = *(long *)(param_1 + 0x220);
  if ((param_2 & 1) == 0) {
    if (lVar6 != lVar7) {
      uVar8 = (lVar7 + -0x10) - lVar6;
      uVar1 = ((uint)(uVar8 >> 4) & 0xfffffff) + 1;
      if ((uVar1 & 3) != 0) {
        lVar10 = -((ulong)uVar1 & 3);
        do {
          plVar11 = (long *)(lVar6 + 8);
          lVar6 = lVar6 + 0x10;
          lVar10 = lVar10 + 1;
          *(undefined1 *)(*(long *)(*plVar11 + 0x20) + 0x161) = 0;
        } while (lVar10 != 0);
      }
      if (0x2f < uVar8) {
        do {
          *(undefined1 *)(*(long *)(*(long *)(lVar6 + 8) + 0x20) + 0x161) = 0;
          *(undefined1 *)(*(long *)(*(long *)(lVar6 + 0x18) + 0x20) + 0x161) = 0;
          *(undefined1 *)(*(long *)(*(long *)(lVar6 + 0x28) + 0x20) + 0x161) = 0;
          plVar11 = (long *)(lVar6 + 0x38);
          lVar6 = lVar6 + 0x40;
          *(undefined1 *)(*(long *)(*plVar11 + 0x20) + 0x161) = 0;
        } while (lVar7 != lVar6);
      }
    }
    FUN_71032d0240(*(long *)(param_1 + 0x260));
    FUN_7103778300(0x3f800000,*(long *)(**(long **)(param_1 + 0x100) + 0x10),0x71042d4aad);
    FUN_7103778300(0x3f800000,*(long *)(**(long **)(param_1 + 0xf8) + 0x10),0x71042d4aad);
    FUN_710377b010(0,param_1 + 0x130);
    FUN_710377aee0(0x3f800000,param_1 + 0x140);
    lVar6 = *(long *)(param_1 + 0x250);
    iVar2 = *(int *)(lVar6 + 0x4d8);
    uVar8 = (ulong)iVar2;
    if (iVar2 != -1) {
      if (iVar2 < *(int *)(lVar6 + 0xc)) {
        uVar9 = (*(long *)(lVar6 + 0xb0) - *(long *)(lVar6 + 0xa8) >> 4) * -0x1041041041041041;
        if (uVar9 < uVar8 || uVar9 - uVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_out_of_range();
        }
        puVar12 = (undefined *)(*(long *)(lVar6 + 0xa8) + uVar8 * 0x3f0 + 8);
      }
      else if ((DAT_7105324ed0 & 1) == 0) {
        iVar4 = __cxa_guard_acquire(&DAT_7105324ed0);
        puVar12 = &DAT_7105324af0;
        if (iVar4 != 0) {
          FUN_71017abd00((undefined8 *)&DAT_7105324af0);
          __cxa_guard_release(&DAT_7105324ed0);
          puVar12 = &DAT_7105324af0;
        }
      }
      else {
        puVar12 = &DAT_7105324af0;
      }
      lVar6 = *(long *)(param_1 + 0x250);
      if (*(int *)(puVar12 + 8) == 2) {
        if (*(int *)(lVar6 + 0xc) <= iVar2) {
          return;
        }
        uVar9 = (*(long *)(lVar6 + 0xb0) - *(long *)(lVar6 + 0xa8) >> 4) * -0x1041041041041041;
        if (uVar9 < uVar8 || uVar9 - uVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_out_of_range();
        }
        if (*(char *)(*(long *)(lVar6 + 0xa8) + uVar8 * 0x3f0 + 0x3ed) == '\0') {
          return;
        }
      }
    }
    lVar7 = *(long *)(*(long *)(lVar6 + 0x60) + 0x1b8);
    if (lVar7 != 0) {
      lVar6 = *(long *)(lVar6 + 0x60) + 0x1b8;
      lVar10 = lVar6;
      do {
        bVar3 = *(int *)(lVar7 + 0x20) < 0;
        if (!bVar3) {
          lVar10 = lVar7;
        }
        lVar7 = *(long *)(lVar7 + (ulong)bVar3 * 8);
      } while (lVar7 != 0);
      if (((lVar10 != lVar6) && (*(int *)(lVar10 + 0x20) < 1)) &&
         (plVar11 = *(long **)(lVar10 + 0x28), plVar11 != (long *)0x0)) {
        (**(code **)(*plVar11 + 0x1f8))(plVar11,1);
        UNRECOVERED_JUMPTABLE = *(code **)(*plVar11 + 0x388);
        uVar5 = 0;
        goto LAB_7101a56880;
      }
    }
  }
  else {
    if (lVar6 != lVar7) {
      uVar8 = (lVar7 + -0x10) - lVar6;
      uVar1 = ((uint)(uVar8 >> 4) & 0xfffffff) + 1;
      if ((uVar1 & 3) != 0) {
        lVar10 = -((ulong)uVar1 & 3);
        do {
          plVar11 = (long *)(lVar6 + 8);
          lVar6 = lVar6 + 0x10;
          lVar10 = lVar10 + 1;
          *(undefined1 *)(*(long *)(*plVar11 + 0x20) + 0x161) = 1;
        } while (lVar10 != 0);
      }
      if (0x2f < uVar8) {
        do {
          *(undefined1 *)(*(long *)(*(long *)(lVar6 + 8) + 0x20) + 0x161) = 1;
          *(undefined1 *)(*(long *)(*(long *)(lVar6 + 0x18) + 0x20) + 0x161) = 1;
          *(undefined1 *)(*(long *)(*(long *)(lVar6 + 0x28) + 0x20) + 0x161) = 1;
          plVar11 = (long *)(lVar6 + 0x38);
          lVar6 = lVar6 + 0x40;
          *(undefined1 *)(*(long *)(*plVar11 + 0x20) + 0x161) = 1;
        } while (lVar7 != lVar6);
      }
    }
    FUN_71032d0460(*(long *)(param_1 + 0x260));
    FUN_7103778300(0x3f800000,*(long *)(**(long **)(param_1 + 0x100) + 0x10),0x71043ef055);
    FUN_7103778300(0x3f800000,*(long *)(**(long **)(param_1 + 0xf8) + 0x10),0x71043ef055);
    FUN_710377b010(0,param_1 + 0x140);
    FUN_710377aee0(0x3f800000,param_1 + 0x130);
    lVar6 = *(long *)(*(long *)(param_1 + 0x250) + 0x60);
    lVar7 = *(long *)(lVar6 + 0x1b8);
    if (lVar7 != 0) {
      lVar6 = lVar6 + 0x1b8;
      lVar10 = lVar6;
      do {
        bVar3 = *(int *)(lVar7 + 0x20) < 0;
        if (!bVar3) {
          lVar10 = lVar7;
        }
        lVar7 = *(long *)(lVar7 + (ulong)bVar3 * 8);
      } while (lVar7 != 0);
      if (((lVar10 != lVar6) && (*(int *)(lVar10 + 0x20) < 1)) &&
         (plVar11 = *(long **)(lVar10 + 0x28), plVar11 != (long *)0x0)) {
        (**(code **)(*plVar11 + 0x1f8))(plVar11,0);
        UNRECOVERED_JUMPTABLE = *(code **)(*plVar11 + 0x388);
        uVar5 = 1;
LAB_7101a56880:
                    /* WARNING: Could not recover jumptable at 0x007101a56894. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(plVar11,uVar5,0);
        return;
      }
    }
  }
  return;
}

