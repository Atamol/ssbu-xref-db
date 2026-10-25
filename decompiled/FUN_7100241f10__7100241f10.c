// addr:      7100241f10
// offset:    0x241f10
// name:      FUN_7100241f10
// mangled:   
// signature: undefined FUN_7100241f10(void)


void FUN_7100241f10(long param_1)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  uint *puVar4;
  long lVar5;
  undefined1 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  long *plVar13;
  ulong uVar14;
  long lVar15;
  undefined **ppuStack_68;
  code *pcStack_60;
  undefined8 uStack_58;
  undefined1 *puStack_50;
  undefined4 uStack_44;
  
  plVar13 = &DAT_71052af138;
  if (DAT_71052af1d8 != '\0') {
    puVar4 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar4;
    if (uVar1 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) {
        FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
        return;
      }
      plVar13 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
    }
  }
  lVar5 = FUN_71001cd7d0(*(long *)(*(long *)(*plVar13 + 0x10) + 0x18),*(uint *)(param_1 + 0xa8));
  if (lVar5 == 0) {
    uStack_44 = 0x80010004;
    goto LAB_71002420b8;
  }
  if (*(int *)(param_1 + 0xfc) != 2) {
    ppuStack_68 = *(undefined ***)(param_1 + 0x140);
    pcStack_60 = *(code **)(param_1 + 0x148);
    uStack_58 = *(undefined8 *)(param_1 + 0x150);
    goto LAB_71002420c8;
  }
  if (*(int *)(param_1 + 0x184) - 1U < 299) {
    uStack_44 = 0x10001;
    goto LAB_71002420b8;
  }
  puVar12 = *(undefined1 **)(param_1 + 400);
  if (puVar12 < *(undefined1 **)(param_1 + 0x198)) {
    *puVar12 = 0;
    *(long *)(param_1 + 400) = *(long *)(param_1 + 400) + 1;
    if (*(char *)(param_1 + 0x1a0) != '\0') goto LAB_71002420b0;
LAB_71002420ec:
    iVar2 = *(int *)(param_1 + 0x184);
    if (iVar2 < 0x199) {
      if (iVar2 == 0x133) {
        bVar3 = FUN_71001b4e00(*(char **)(param_1 + 0x1c0),"");
        if ((!bVar3) && (*(uint *)(param_1 + 0x180) < 5)) {
          FUN_71001b2f70(param_1 + 0xb0,param_1 + 0x1a8);
          goto LAB_71002421bc;
        }
      }
      else if (iVar2 == 0x194) {
        uStack_44 = 0x80050018;
        goto LAB_71002420b8;
      }
      goto LAB_71002420b0;
    }
    if ((iVar2 != 500) && (iVar2 != 0x199)) goto LAB_71002420b0;
    if (*(uint *)(param_1 + 0x180) < 3) {
LAB_71002421bc:
      ppuStack_68 = &PTR_FUN_7104f56e28;
      puStack_50 = &DAT_71044114cc;
      uStack_58 = 0;
      pcStack_60 = FUN_7100241d00;
      FUN_71001d3d60(param_1,(long)&ppuStack_68);
      return;
    }
    uStack_44 = 0x80050019;
  }
  else {
    lVar15 = *(long *)(param_1 + 0x188);
    lVar5 = (long)puVar12 - lVar15;
    uVar14 = lVar5 + 1;
    if ((long)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    uVar7 = (long)*(undefined1 **)(param_1 + 0x198) - lVar15;
    if (uVar7 < 0x3fffffffffffffff) {
      uVar7 = uVar7 * 2;
      if (uVar14 <= uVar7) {
        uVar14 = uVar7;
      }
      if (uVar14 != 0) goto LAB_7100242044;
      puVar8 = (undefined8 *)0x0;
    }
    else {
      uVar14 = 0x7fffffffffffffff;
LAB_7100242044:
      puVar8 = FUN_71001b1820(uVar14);
    }
    puVar11 = (undefined1 *)((long)puVar8 + lVar5);
    puVar9 = puVar11 + 1;
    *puVar11 = 0;
    puVar6 = *(undefined1 **)(param_1 + 0x188);
    puVar10 = *(undefined1 **)(param_1 + 400);
    if (puVar10 != puVar6) {
      lVar5 = lVar5 - (long)puVar10;
      puVar12 = (undefined1 *)((long)puVar8 + (long)(puVar12 + (-1 - lVar15)));
      do {
        puVar10 = puVar10 + -1;
        *puVar12 = *puVar10;
        puVar12 = puVar12 + -1;
      } while (puVar6 != puVar10);
      puVar11 = puVar6 + lVar5;
      puVar6 = *(undefined1 **)(param_1 + 0x188);
      puVar11 = (undefined1 *)((long)puVar8 + (long)puVar11);
    }
    *(undefined1 **)(param_1 + 0x188) = puVar11;
    *(undefined1 **)(param_1 + 400) = puVar9;
    *(ulong *)(param_1 + 0x198) = (long)puVar8 + uVar14;
    if (puVar6 != (undefined1 *)0x0) {
      FUN_71001b1870((long)puVar6);
    }
    if (*(char *)(param_1 + 0x1a0) == '\0') goto LAB_71002420ec;
LAB_71002420b0:
    uStack_44 = 0x8005001a;
  }
LAB_71002420b8:
  FUN_71001b4200((undefined4 *)&ppuStack_68,&uStack_44);
LAB_71002420c8:
  FUN_7100241610(param_1,(int *)&ppuStack_68);
  return;
}

