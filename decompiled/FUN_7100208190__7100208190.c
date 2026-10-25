// addr:      7100208190
// offset:    0x208190
// name:      FUN_7100208190
// mangled:   
// signature: undefined __cdecl FUN_7100208190(long param_1, long * param_2, long param_3, ulong param_4)


void FUN_7100208190(long param_1,long *param_2,long param_3,ulong param_4)

{
  int iVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  uint *puVar7;
  int iVar8;
  long *plVar9;
  uint uVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  undefined **local_80;
  undefined2 local_78;
  undefined **local_70;
  undefined2 local_68;
  
  uVar13 = param_4 & 0xff;
  local_70 = &PTR_FUN_7104f59348;
  local_68 = *(undefined2 *)(param_3 + 8);
  plVar6 = (long *)FUN_7100208ce0(*(long *)(*(long *)(param_1 + 0xe0) + uVar13 * 8),(long)&local_70)
  ;
  if ((plVar6 == (long *)0x0) ||
     (uVar5 = FUN_7100201730(*(long *)(param_1 + 8) + 0x40,plVar6), (uVar5 & 1) == 0)) {
    *(long *)(param_1 + 0x420) = *(long *)(param_1 + 0x420) + 1;
    return;
  }
  uVar2 = *(ushort *)(plVar6 + 0x40);
  uVar14 = (ulong)*(uint *)(*(long *)(param_1 + 8) + 8);
  if (DAT_71052af1d8 == '\0') {
LAB_7100208294:
    uVar14 = *(ulong *)(&DAT_71052af5d8 + uVar14 * 0x2e8);
  }
  else {
    puVar7 = (uint *)FUN_7101717960(DAT_71052af1d0);
    if (*puVar7 == 0) goto LAB_7100208294;
    uVar14 = *(ulong *)(*(long *)(&DAT_71052af4e8 + uVar14 * 0x2e8) + (ulong)*puVar7 * 0x168 + 0xe8)
    ;
  }
  if (uVar2 < uVar14) {
    if ((ulong)(*param_2 - plVar6[0x3a]) < 0xea61) {
      iVar8 = (int)(*param_2 - plVar6[0x3a]);
      if (*(char *)(param_1 + 0x134) == '\0') {
        iVar4 = iVar8 - (*(uint *)(param_1 + 0x128) >> 3);
        iVar1 = -iVar4;
        if (-1 < iVar4) {
          iVar1 = iVar4;
        }
        uVar5 = iVar4 + *(uint *)(param_1 + 0x128);
        uVar10 = (*(uint *)(param_1 + 300) - (*(uint *)(param_1 + 300) >> 2)) + iVar1;
      }
      else {
        uVar5 = iVar8 << 3;
        *(undefined1 *)(param_1 + 0x134) = 0;
        uVar10 = iVar8 << 1;
      }
      *(uint *)(param_1 + 0x128) = uVar5;
      *(uint *)(param_1 + 300) = uVar10;
      *(int *)(param_1 + 0x130) = iVar8;
    }
    else {
      uVar5 = *(uint *)(param_1 + 0x128);
      uVar10 = *(uint *)(param_1 + 300);
    }
    uVar10 = uVar10 & 0xfffffffc;
    if (uVar10 < 0x22) {
      uVar10 = 0x21;
    }
    uVar10 = uVar10 + (uVar5 >> 3);
    if (*(uint *)(param_1 + 0x498) < uVar10) {
      *(uint *)(param_1 + 0x498) = uVar10;
    }
    if (uVar10 < *(uint *)(param_1 + 0x49c)) {
      *(uint *)(param_1 + 0x49c) = uVar10;
    }
  }
  uVar14 = plVar6[0x3a];
  local_80 = &PTR_FUN_7104f59348;
  local_78 = *(undefined2 *)(param_3 + 8);
  FUN_7100208e10(*(long *)(*(long *)(param_1 + 0xe0) + uVar13 * 8),(long)&local_80,
                 (undefined8 *)(param_1 + 0x4b0));
  lVar11 = *(long *)(*(long *)(param_1 + 0xe0) + uVar13 * 8);
  plVar6 = &DAT_71052af138;
  if (DAT_71052af1d8 != '\0') {
    puVar7 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar5 = *puVar7;
    if (uVar5 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar5) goto LAB_7100208558;
      plVar6 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar5 * 8) + 0x20);
    }
  }
  (**(code **)(*(long *)(*(long *)(*(long *)(*plVar6 + 0x10) + 0x10) + 0x78) + 0x10))();
  plVar6 = *(long **)(lVar11 + 8);
  if (((long *)(*(long *)(*(long *)(param_1 + 0xe0) + uVar13 * 8) + 0x10) != plVar6) &&
     (plVar12 = (long *)plVar6[6], plVar12 != (long *)0x0)) {
    sVar3 = *(short *)(param_3 + 8);
    iVar8 = 0;
    while ((short)((2 - sVar3) + (short)plVar12[0xe]) < 1) {
      if (((ulong)plVar12[0x3a] < uVar14) && (*(ushort *)(plVar12 + 0x40) < 5)) {
        FUN_7100201730(*(long *)(param_1 + 8) + 0x40,plVar12);
        FUN_7100202410(param_1,plVar12);
        iVar8 = iVar8 + 1;
      }
      plVar12 = (long *)plVar6[1];
      if ((long *)plVar6[1] == (long *)0x0) {
        plVar12 = plVar6 + 2;
        plVar9 = (long *)*plVar12;
        if ((long *)*plVar9 != plVar6) {
          do {
            lVar11 = *plVar12;
            plVar12 = (long *)(lVar11 + 0x10);
            plVar9 = (long *)*plVar12;
          } while (*plVar9 != lVar11);
        }
      }
      else {
        do {
          plVar9 = plVar12;
          plVar12 = (long *)*plVar9;
        } while ((long *)*plVar9 != (long *)0x0);
      }
      if ((((long *)(*(long *)(*(long *)(param_1 + 0xe0) + uVar13 * 8) + 0x10) == plVar9) ||
          (1 < iVar8)) || (plVar12 = (long *)plVar9[6], plVar6 = plVar9, plVar12 == (long *)0x0))
      break;
    }
  }
  plVar6 = &DAT_71052af138;
  if (DAT_71052af1d8 != '\0') {
    puVar7 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar5 = *puVar7;
    if (uVar5 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar5) {
LAB_7100208558:
        FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
        return;
      }
      plVar6 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar5 * 8) + 0x20);
    }
  }
  (**(code **)(*(long *)(*(long *)(*(long *)(*plVar6 + 0x10) + 0x10) + 0x78) + 0x20))();
  FUN_7100205410(param_1,param_4 & 0xffffffff);
  return;
}

