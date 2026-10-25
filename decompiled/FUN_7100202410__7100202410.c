// addr:      7100202410
// offset:    0x202410
// name:      FUN_7100202410
// mangled:   
// signature: undefined __cdecl FUN_7100202410(long param_1, long * param_2)


void FUN_7100202410(long param_1,long *param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  uint *puVar5;
  ulonglong uVar6;
  ushort uVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  ulong local_68;
  
  uVar7 = (short)param_2[0x40] + 1;
  *(ushort *)(param_2 + 0x40) = uVar7;
  if ((*(ushort *)(param_2 + 0xc) & 0xf) == 3) {
    uVar10 = 0;
    do {
      lVar11 = *(long *)(*(long *)(param_1 + 0xe0) + uVar10 * 8);
      plVar9 = &DAT_71052af138;
      if (DAT_71052af1d8 == '\0') {
LAB_71002024c0:
        if ((*plVar9 == 0) || (lVar8 = *(long *)(*plVar9 + 0x10), lVar8 == 0)) goto LAB_71002024ec;
        lVar8 = *(long *)(lVar8 + 0x10);
      }
      else {
        puVar5 = (uint *)FUN_7101717960(DAT_71052af1d0);
        uVar4 = *puVar5;
        if (uVar4 == 0) goto LAB_71002024c0;
        if ((ulong)uVar4 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
          plVar9 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar4 * 8) + 0x20);
          goto LAB_71002024c0;
        }
        FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_71002024ec:
        lVar8 = 0;
      }
      plVar9 = (long *)(lVar8 + 0x78);
      (**(code **)(*plVar9 + 0x10))(plVar9);
      iVar1 = *(int *)(lVar11 + 0x58);
      (**(code **)(*plVar9 + 0x20))(plVar9);
      if (iVar1 != 0) {
        *(long *)(param_1 + 0x398) = *(long *)(param_1 + 0x398) + 1;
        uVar4 = *(int *)(param_2[0x3e] + 8) << 1;
        if (499 < uVar4) {
          uVar4 = 500;
        }
        *(uint *)(param_2[0x3e] + 8) = uVar4;
        FUN_7100203410(*(long *)(param_1 + 8) + 0x40,param_2);
        return;
      }
      bVar3 = uVar10 < *(ushort *)(param_1 + 0x180);
      uVar10 = uVar10 + 1;
    } while (bVar3);
    uVar7 = *(ushort *)(param_2 + 0x40);
  }
  if (*(ulong *)(param_1 + 0x470) < (ulong)uVar7) {
    *(ulong *)(param_1 + 0x470) = (ulong)uVar7;
  }
  if (1 < uVar7) {
    *(long *)(param_1 + 0x460) = *(long *)(param_1 + 0x460) + 1;
    uVar10 = 0;
    if (param_2[0x27] != 0) {
      uVar10 = (ulong)*(ushort *)(param_2[0x27] + 0x18);
    }
    *(ulong *)(param_1 + 0x468) = *(long *)(param_1 + 0x468) + uVar10;
  }
  uVar10 = FUN_7100205980(param_1,(long)param_2);
  *(int *)(param_2[0x3e] + 8) = (int)uVar10;
  FUN_7100203410(*(long *)(param_1 + 8) + 0x40,param_2);
  uVar10 = (ulong)*(uint *)(*(long *)(param_1 + 8) + 8);
  if (DAT_71052af1d8 != '\0') {
    puVar5 = (uint *)FUN_7101717960(DAT_71052af1d0);
    if (*puVar5 != 0) {
      cVar2 = *(char *)(*(long *)(&DAT_71052af4e8 + uVar10 * 0x2e8) + (ulong)*puVar5 * 0x168 + 0xb4)
      ;
      goto joined_r0x00710020261c;
    }
  }
  cVar2 = (&DAT_71052af5a4)[uVar10 * 0x2e8];
joined_r0x00710020261c:
  if (cVar2 != '\0') {
    if (DAT_7104f54e20 == '\0') {
      FUN_71001b6a50((long *)&local_68);
    }
    else {
      FUN_71001b68a0(&local_68,0);
    }
    DAT_71052aeba8 = local_68;
    *(ulong *)(param_1 + 0x138) = local_68;
  }
  plVar9 = *(long **)(param_1 + 8);
  uVar7 = *(ushort *)(param_1 + 0xc0);
  uVar6 = FUN_71001f2ba0(param_1 + 0x10,"sid",0);
  lVar11 = (**(code **)(**(long **)(param_1 + 0x328) + 0x38))();
  uVar4 = FUN_7100205520(plVar9,(uint)uVar7,(int)uVar6,(long)param_2,lVar11);
  if ((uVar4 & 1) == 0) {
    *(long *)(param_1 + 0x458) = *(long *)(param_1 + 0x458) + 1;
  }
  return;
}

