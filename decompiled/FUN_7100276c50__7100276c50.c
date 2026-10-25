// addr:      7100276c50
// offset:    0x276c50
// name:      FUN_7100276c50
// mangled:   
// signature: undefined FUN_7100276c50(void)


void FUN_7100276c50(long param_1)

{
  long lVar1;
  uint uVar2;
  undefined4 uVar3;
  uint *puVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  void *__src;
  size_t __n;
  void *pvVar8;
  int aiStack_58 [6];
  undefined4 uStack_34;
  
  plVar6 = &DAT_71052af138;
  if (DAT_71052af1d8 != '\0') {
    puVar4 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar2 = *puVar4;
    if (uVar2 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar2) goto LAB_7100276f04;
      plVar6 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar2 * 8) + 0x20);
    }
  }
  lVar5 = FUN_71001cd7d0(*(long *)(*(long *)(*plVar6 + 0x10) + 0x18),*(uint *)(param_1 + 0xa8));
  if (lVar5 == 0) goto LAB_7100276e20;
  pvVar8 = *(void **)(param_1 + 0x288);
  __src = *(void **)(param_1 + 0x280);
  if (pvVar8 == __src) {
    uStack_34 = 0x8069000b;
    goto LAB_7100276ed0;
  }
  plVar6 = *(long **)(param_1 + 0xf0);
  if (plVar6 == (long *)0x0) {
    if (*(void **)(param_1 + 0x2a0) == (void *)0x0) {
      return;
    }
    __n = (size_t)((int)pvVar8 - (int)__src);
    if (*(ulong *)(param_1 + 0x2a8) < __n) {
      uStack_34 = 0x80050017;
      goto LAB_7100276ed0;
    }
    memcpy(*(void **)(param_1 + 0x2a0),__src,__n);
    lVar5 = *(long *)(param_1 + 0x280);
  }
  else {
    if (*(char *)(param_1 + 0x2d3) != '\0') {
      *(undefined1 *)(param_1 + 0x2d3) = 0;
      uVar3 = *(undefined4 *)(param_1 + 0x1cc);
      (**(code **)(*plVar6 + 0x10))
                (plVar6,uVar3,(long)((int)pvVar8 - (int)__src),*(undefined8 *)(param_1 + 600),
                 *(undefined2 *)(param_1 + 0x260),*(undefined2 *)(param_1 + 0x262),0);
      plVar6 = &DAT_71052af138;
      if (DAT_71052af1d8 != '\0') {
        puVar4 = (uint *)FUN_7101717960(DAT_71052af1d0);
        uVar2 = *puVar4;
        if (uVar2 != 0) {
          if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar2)
          goto LAB_7100276f04;
          plVar6 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar2 * 8) + 0x20);
        }
      }
      lVar5 = FUN_71001cd7d0(*(long *)(*(long *)(*plVar6 + 0x10) + 0x18),*(uint *)(param_1 + 0xa8));
      if (lVar5 != 0) {
        lVar5 = 0;
        if (*(long *)(param_1 + 0x288) != *(long *)(param_1 + 0x280)) {
          lVar5 = (long)((int)*(long *)(param_1 + 0x288) - (int)*(long *)(param_1 + 0x280));
        }
        (**(code **)(**(long **)(param_1 + 0xf0) + 0x18))(*(long **)(param_1 + 0xf0),uVar3,lVar5);
        plVar6 = &DAT_71052af138;
        if (DAT_71052af1d8 != '\0') {
          puVar4 = (uint *)FUN_7101717960(DAT_71052af1d0);
          uVar2 = *puVar4;
          if (uVar2 != 0) {
            if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar2) {
LAB_7100276f04:
              FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,
                             0xe0000003,0);
              return;
            }
            plVar6 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar2 * 8) + 0x20);
          }
        }
        lVar5 = FUN_71001cd7d0(*(long *)(*(long *)(*plVar6 + 0x10) + 0x18),*(uint *)(param_1 + 0xa8)
                              );
        if (lVar5 != 0) {
          plVar6 = *(long **)(param_1 + 0xf0);
          __src = *(void **)(param_1 + 0x280);
          pvVar8 = *(void **)(param_1 + 0x288);
          goto LAB_7100276e64;
        }
      }
LAB_7100276e20:
      uStack_34 = 0x80010004;
      goto LAB_7100276ed0;
    }
LAB_7100276e64:
    lVar5 = 0;
    if (pvVar8 != __src) {
      lVar5 = (long)((int)pvVar8 - (int)__src);
    }
    uVar7 = (**(code **)(*plVar6 + 0x20))(plVar6,__src,lVar5);
    if ((uVar7 & 1) == 0) {
      FUN_71001d6410(param_1,1);
      *(undefined4 *)(param_1 + 0x44) = 0x10;
      return;
    }
    lVar5 = *(long *)(param_1 + 0x280);
  }
  lVar1 = 0;
  if (*(long *)(param_1 + 0x288) != lVar5) {
    lVar1 = (long)((int)*(long *)(param_1 + 0x288) - (int)lVar5);
  }
  *(long *)(param_1 + 0x2c8) = lVar1 + *(long *)(param_1 + 0x2c8);
  uStack_34 = 0x10001;
LAB_7100276ed0:
  FUN_71001b4200(aiStack_58,&uStack_34);
  FUN_7100276980(param_1,aiStack_58);
  return;
}

