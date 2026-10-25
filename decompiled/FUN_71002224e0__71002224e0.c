// addr:      71002224e0
// offset:    0x2224e0
// name:      FUN_71002224e0
// mangled:   
// signature: undefined __cdecl FUN_71002224e0(undefined8 * param_1, long param_2)


void FUN_71002224e0(undefined8 *param_1,long param_2)

{
  code *pcVar1;
  uint uVar2;
  ulong uVar3;
  uint *puVar4;
  long lVar5;
  int *piVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  int local_84;
  int local_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  undefined8 local_70;
  ulong local_68;
  
  plVar10 = (long *)(param_2 + 0xe0);
  lVar5 = *plVar10;
  plVar11 = (long *)(param_2 + 0xe8);
  lVar7 = *plVar11;
  if (lVar5 == lVar7) {
LAB_71002225d0:
    do {
      local_68 = 0;
      uVar8 = *(ulong *)(param_2 + 0x108);
      uVar3 = lVar7 - lVar5;
      if (uVar8 < uVar3 || uVar8 - uVar3 == 0) {
        if (uVar8 < uVar3) {
          lVar7 = lVar5 + uVar8;
          *plVar11 = lVar7;
        }
      }
      else {
        FUN_71001dd4a0(plVar10,uVar8 - uVar3);
        lVar5 = *plVar10;
        lVar7 = *plVar11;
      }
      (**(code **)(**(long **)(param_2 + 0xa8) + 0x68))
                (&local_80,*(long **)(param_2 + 0xa8),lVar5,&local_68,lVar7 - lVar5);
      pcVar1 = FUN_710170d030;
      if (local_80 < 0) {
        pcVar1 = (code *)0x0;
      }
      if (pcVar1 == (code *)0x0) {
        param_1[2] = local_70;
        *param_1 = CONCAT44(uStack_7c,local_80);
        param_1[1] = uStack_78;
        return;
      }
      lVar7 = *plVar11;
      lVar5 = *plVar10;
      uVar3 = lVar7 - lVar5;
      if (local_68 < uVar3 || local_68 - uVar3 == 0) {
        if (local_68 < uVar3) {
          lVar7 = lVar5 + local_68;
          *plVar11 = lVar7;
        }
        if (lVar5 == lVar7) goto LAB_7100222768;
      }
      else {
        FUN_71001dd4a0(plVar10,local_68 - uVar3);
        lVar5 = *plVar10;
        lVar7 = *plVar11;
        if (lVar5 == lVar7) {
LAB_7100222768:
          uVar3 = (**(code **)(**(long **)(param_2 + 0xa8) + 0x90))();
          if ((uVar3 & 1) == 0) {
            local_80 = -0x7ffaffea;
          }
          else {
            local_80 = 0x10001;
          }
          piVar6 = &local_80;
          goto LAB_71002227ac;
        }
      }
      uVar3 = (**(code **)(**(long **)(param_2 + 0x100) + 0x28))
                        (*(long **)(param_2 + 0x100),lVar5,lVar7 - lVar5);
      plVar9 = &DAT_71052af138;
      if (DAT_71052af1d8 != '\0') {
        puVar4 = (uint *)FUN_7101717960(DAT_71052af1d0);
        uVar2 = *puVar4;
        if (uVar2 != 0) {
          if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar2)
          goto LAB_71002227d0;
          plVar9 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar2 * 8) + 0x20);
        }
      }
      lVar7 = FUN_71001cd7d0(*(long *)(*(long *)(*plVar9 + 0x10) + 0x18),*(uint *)(param_2 + 0xa0));
      if (lVar7 == 0) {
        local_84 = -0x7ffefffc;
        goto LAB_710022278c;
      }
      if ((uVar3 & 1) == 0) goto code_r0x007100222720;
      lVar5 = *plVar10;
      *plVar11 = lVar5;
      lVar7 = lVar5;
    } while( true );
  }
  uVar3 = (**(code **)(**(long **)(param_2 + 0x100) + 0x28))
                    (*(long **)(param_2 + 0x100),lVar5,lVar7 - lVar5);
  plVar9 = &DAT_71052af138;
  if (DAT_71052af1d8 != '\0') {
    puVar4 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar2 = *puVar4;
    if (uVar2 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar2) {
LAB_71002227d0:
        FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
        return;
      }
      plVar9 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar2 * 8) + 0x20);
    }
  }
  lVar7 = FUN_71001cd7d0(*(long *)(*(long *)(*plVar9 + 0x10) + 0x18),*(uint *)(param_2 + 0xa0));
  if (lVar7 == 0) {
    local_80 = -0x7ffefffc;
  }
  else {
    if ((uVar3 & 1) != 0) {
      lVar5 = *plVar10;
      *plVar11 = lVar5;
      lVar7 = lVar5;
      goto LAB_71002225d0;
    }
    local_80 = -0x7ffaffea;
  }
  piVar6 = &local_80;
  goto LAB_71002227ac;
code_r0x007100222720:
  local_84 = -0x7ffaffea;
LAB_710022278c:
  piVar6 = &local_84;
LAB_71002227ac:
  FUN_71001b4200((undefined4 *)param_1,piVar6);
  return;
}

