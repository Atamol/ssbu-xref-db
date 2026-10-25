// addr:      7100278f20
// offset:    0x278f20
// name:      FUN_7100278f20
// mangled:   
// signature: undefined __cdecl FUN_7100278f20(undefined4 * param_1, long param_2, undefined4 param_3, undefined8 param_4, undefined8 * param_5, undefined8 param_6, undefined8 param_7)


void FUN_7100278f20(undefined4 *param_1,long param_2,undefined4 param_3,undefined8 param_4,
                   undefined8 *param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  uint uVar2;
  uint *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  undefined **local_80;
  code *pcStack_78;
  undefined8 local_70;
  undefined1 *puStack_68;
  
  plVar12 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_7100278fb0:
    if ((*plVar12 == 0) || (lVar5 = *(long *)(*plVar12 + 0x10), lVar5 == 0)) goto LAB_7100278fe0;
    lVar5 = *(long *)(lVar5 + 0x10);
  }
  else {
    puVar3 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar2 = *puVar3;
    if (uVar2 == 0) goto LAB_7100278fb0;
    if ((ulong)uVar2 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar12 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar2 * 8) + 0x20);
      goto LAB_7100278fb0;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_7100278fe0:
    lVar5 = 0;
  }
  plVar12 = (long *)(lVar5 + 0x78);
  (**(code **)(*plVar12 + 0x10))(plVar12);
  puVar9 = *(undefined8 **)(param_2 + 0xb8);
  *(undefined4 *)(param_2 + 0xa0) = param_3;
  if (puVar9 != *(undefined8 **)(param_2 + 0xc0)) {
    *puVar9 = *param_5;
    *(undefined8 **)(param_2 + 0xb8) = puVar9 + 1;
    goto LAB_7100279144;
  }
  puVar4 = *(undefined8 **)(param_2 + 0xb0);
  lVar5 = (long)puVar9 - (long)puVar4 >> 3;
  uVar14 = lVar5 + 1;
  if (uVar14 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar6 = (long)*(undefined8 **)(param_2 + 0xc0) - (long)puVar4;
  if ((ulong)(lVar6 >> 3) < 0xfffffffffffffff) {
    uVar7 = lVar6 >> 2;
    if (uVar14 <= uVar7) {
      uVar14 = uVar7;
    }
    if (uVar14 != 0) goto LAB_7100279060;
    puVar8 = (undefined8 *)0x0;
  }
  else {
    uVar14 = 0x1fffffffffffffff;
LAB_7100279060:
    puVar8 = FUN_71001b1820(uVar14 << 3);
    puVar4 = *(undefined8 **)(param_2 + 0xb0);
    puVar9 = *(undefined8 **)(param_2 + 0xb8);
  }
  puVar1 = puVar8 + lVar5;
  *puVar1 = *param_5;
  if (puVar9 == puVar4) {
    *(undefined8 **)(param_2 + 0xb0) = puVar1;
    *(undefined8 **)(param_2 + 0xb8) = puVar1 + 1;
    *(undefined8 **)(param_2 + 0xc0) = puVar8 + uVar14;
  }
  else {
    uVar7 = (long)puVar9 + (-8 - (long)puVar4);
    uVar2 = ((uint)(uVar7 >> 3) & 0x1fffffff) + 1;
    puVar11 = puVar1;
    puVar10 = puVar9;
    if ((uVar2 & 3) != 0) {
      lVar5 = -((ulong)uVar2 & 3);
      do {
        puVar10 = puVar10 + -1;
        lVar5 = lVar5 + 1;
        puVar11 = puVar11 + -1;
        *puVar11 = *puVar10;
      } while (lVar5 != 0);
    }
    if (0x17 < uVar7) {
      puVar11 = puVar11 + -2;
      do {
        puVar11[1] = puVar10[-1];
        *puVar11 = puVar10[-2];
        puVar11[-1] = puVar10[-3];
        puVar10 = puVar10 + -4;
        puVar11[-2] = *puVar10;
        puVar11 = puVar11 + -4;
      } while (puVar4 != puVar10);
    }
    *(ulong *)(param_2 + 0xb0) =
         (long)puVar1 + (~((long)puVar9 + (-8 - (long)puVar4)) & 0xfffffffffffffff8U);
    *(undefined8 **)(param_2 + 0xb8) = puVar1 + 1;
    *(undefined8 **)(param_2 + 0xc0) = puVar8 + uVar14;
  }
  if (puVar4 != (undefined8 *)0x0) {
    FUN_71001b1870((long)puVar4);
  }
LAB_7100279144:
  *(undefined8 *)(param_2 + 0xe8) = param_6;
  *(undefined8 *)(param_2 + 0xf0) = 0;
  *(undefined8 *)(param_2 + 0xa8) = param_4;
  *(undefined1 *)(param_2 + 0x110) = 1;
  *(undefined8 *)(param_2 + 0x1d8) = param_7;
  plVar13 = &DAT_71052af138;
  if (DAT_71052af1d8 != '\0') {
    puVar3 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar2 = *puVar3;
    if (uVar2 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar2) {
        FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
        return;
      }
      plVar13 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar2 * 8) + 0x20);
    }
  }
  lVar5 = FUN_71001cd7d0(*(long *)(*(long *)(*plVar13 + 0x10) + 0x18),*(uint *)(param_2 + 0xa0));
  FUN_710022e7e0(param_2 + 0x118,*(long *)(lVar5 + 0xb8));
  local_80 = &PTR_FUN_7104f56e28;
  pcStack_78 = FUN_7100279250;
  local_70 = 0;
  puStack_68 = &DAT_71044114cc;
  FUN_71001d3d60(param_2,(long)&local_80);
  local_80 = (undefined **)CONCAT71(local_80._1_7_,1);
  FUN_71001b4220(param_1,(char *)&local_80);
  (**(code **)(*plVar12 + 0x20))(plVar12);
  return;
}

