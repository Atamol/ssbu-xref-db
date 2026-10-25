// addr:      7100275a50
// offset:    0x275a50
// name:      FUN_7100275a50
// mangled:   
// signature: undefined FUN_7100275a50(void)


void FUN_7100275a50(long param_1)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  uint *puVar4;
  long lVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulong uVar9;
  undefined ***pppuVar10;
  undefined4 uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  long *plVar17;
  ulonglong uVar18;
  undefined1 *puVar19;
  long lVar20;
  undefined4 uStack_8c;
  undefined **ppuStack_88;
  code *pcStack_80;
  undefined8 uStack_78;
  undefined1 *puStack_70;
  undefined **ppuStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  plVar17 = &DAT_71052af138;
  if (DAT_71052af1d8 != '\0') {
    puVar4 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar4;
    if (uVar1 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) {
        FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
        return;
      }
      plVar17 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
    }
  }
  lVar5 = FUN_71001cd7d0(*(long *)(*(long *)(*plVar17 + 0x10) + 0x18),*(uint *)(param_1 + 0xa8));
  if (lVar5 == 0) {
    uVar11 = 0x80010004;
  }
  else {
    if (*(int *)(param_1 + 0x10c) != 2) {
      ppuStack_68 = *(undefined ***)(param_1 + 0x150);
      uStack_60 = *(undefined8 *)(param_1 + 0x158);
      uStack_58 = *(undefined8 *)(param_1 + 0x160);
      if (*(char *)(param_1 + 0x29c) != '\0') {
        ppuStack_88 = &PTR_FUN_7104f56e28;
        pcStack_80 = FUN_7100274fb0;
        uStack_78 = 0;
        puStack_70 = &DAT_71044114cc;
        FUN_71001d3d60(param_1,(long)&ppuStack_88);
        return;
      }
      ppuStack_88 = (undefined **)CONCAT44(ppuStack_88._4_4_,0x80050018);
      bVar2 = FUN_71001b4260((int *)&ppuStack_68,(int *)&ppuStack_88);
      if (bVar2) {
        uStack_8c = 0x80690004;
LAB_7100275d2c:
        FUN_71001b4200((undefined4 *)&ppuStack_88,&uStack_8c);
        FUN_71001b4300((undefined4 *)&ppuStack_68,(undefined4 *)&ppuStack_88);
      }
      else {
        ppuStack_88 = (undefined **)CONCAT44(ppuStack_88._4_4_,0x80010012);
        bVar2 = FUN_71001b4260((int *)&ppuStack_68,(int *)&ppuStack_88);
        if (bVar2) {
          uStack_8c = 0x80690009;
          goto LAB_7100275d2c;
        }
      }
      pppuVar10 = &ppuStack_68;
      goto LAB_7100275cdc;
    }
    puVar19 = *(undefined1 **)(param_1 + 0x288);
    plVar17 = (long *)(param_1 + 0x280);
    uVar18 = *(ulonglong *)(param_1 + 0x1d8);
    uVar1 = *(uint *)(param_1 + 0x1d0);
    if (puVar19 < *(undefined1 **)(param_1 + 0x290)) {
      *puVar19 = 0;
      *(long *)(param_1 + 0x288) = *(long *)(param_1 + 0x288) + 1;
    }
    else {
      lVar20 = *plVar17;
      lVar5 = (long)puVar19 - lVar20;
      uVar9 = lVar5 + 1;
      if ((long)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      uVar12 = (long)*(undefined1 **)(param_1 + 0x290) - lVar20;
      if (uVar12 < 0x3fffffffffffffff) {
        uVar12 = uVar12 * 2;
        if (uVar9 <= uVar12) {
          uVar9 = uVar12;
        }
        if (uVar9 != 0) goto LAB_7100275bd4;
        puVar13 = (undefined8 *)0x0;
      }
      else {
        uVar9 = 0x7fffffffffffffff;
LAB_7100275bd4:
        puVar13 = FUN_71001b1820(uVar9);
      }
      puVar16 = (undefined1 *)((long)puVar13 + lVar5);
      puVar14 = puVar16 + 1;
      *puVar16 = 0;
      puVar6 = *(undefined1 **)(param_1 + 0x280);
      puVar15 = *(undefined1 **)(param_1 + 0x288);
      if (puVar15 != puVar6) {
        puVar19 = (undefined1 *)((long)puVar13 + (long)(puVar19 + (-1 - lVar20)));
        puVar16 = puVar15;
        do {
          puVar16 = puVar16 + -1;
          *puVar19 = *puVar16;
          puVar19 = puVar19 + -1;
        } while (puVar6 != puVar16);
        puVar16 = puVar6 + (lVar5 - (long)puVar15);
        puVar6 = (undefined1 *)*plVar17;
        puVar16 = (undefined1 *)((long)puVar13 + (long)puVar16);
      }
      *(undefined1 **)(param_1 + 0x280) = puVar16;
      *(undefined1 **)(param_1 + 0x288) = puVar14;
      *(ulong *)(param_1 + 0x290) = (long)puVar13 + uVar9;
      if (puVar6 != (undefined1 *)0x0) {
        FUN_71001b1870((long)puVar6);
      }
    }
    ppuStack_88 = (undefined **)0x0;
    uVar7 = strtoull((char *)*plVar17,(char **)&ppuStack_88,10);
    if ((((*(char *)ppuStack_88 == ',') &&
         (uVar8 = strtoull((char *)((long)ppuStack_88 + 1),(char **)&ppuStack_88,10), uVar18 != 0))
        && (uVar8 == uVar18)) && (*(char *)ppuStack_88 == ',')) {
      uVar9 = strtoul((char *)((long)ppuStack_88 + 1),(char **)&ppuStack_88,10);
      uVar3 = (uint)uVar9;
      if (uVar3 == 0) {
        if (1 < uVar1) goto LAB_7100275cbc;
      }
      else if ((1 < uVar1) && (uVar1 != uVar3)) goto LAB_7100275cbc;
      *(uint *)(param_1 + 0x1d0) = uVar3;
      if (*(ulong *)(param_1 + 0x1c0) < uVar7) {
        *(ulonglong *)(param_1 + 0x1c0) = uVar7;
      }
    }
    else {
LAB_7100275cbc:
      *(undefined1 *)(param_1 + 0x2a8) = 1;
    }
    uVar11 = 0x10001;
  }
  ppuStack_68 = (undefined **)CONCAT44(ppuStack_68._4_4_,uVar11);
  FUN_71001b4200((undefined4 *)&ppuStack_88,(undefined4 *)&ppuStack_68);
  pppuVar10 = &ppuStack_88;
LAB_7100275cdc:
  FUN_7100275400(param_1,(int *)pppuVar10);
  return;
}

