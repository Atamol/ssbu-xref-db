// addr:      7100278360
// offset:    0x278360
// name:      FUN_7100278360
// mangled:   
// signature: undefined FUN_7100278360(void)


void FUN_7100278360(long param_1)

{
  uint uVar1;
  uint *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  void *__src;
  size_t __n;
  void *pvVar7;
  int aiStack_58 [6];
  undefined4 uStack_34;
  
  plVar4 = &DAT_71052af138;
  if (DAT_71052af1d8 != '\0') {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar2;
    if (uVar1 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) goto LAB_710027861c;
      plVar4 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
    }
  }
  lVar3 = FUN_71001cd7d0(*(long *)(*(long *)(*plVar4 + 0x10) + 0x18),*(uint *)(param_1 + 0xa8));
  if (lVar3 == 0) goto LAB_7100278538;
  pvVar7 = *(void **)(param_1 + 0x2d8);
  __src = *(void **)(param_1 + 0x2d0);
  if (pvVar7 == __src) {
    uStack_34 = 0x8069000b;
    goto LAB_71002785e8;
  }
  plVar4 = *(long **)(param_1 + 0xf0);
  if (plVar4 == (long *)0x0) {
    if (*(void **)(param_1 + 0x2f0) == (void *)0x0) {
      return;
    }
    __n = (size_t)((int)pvVar7 - (int)__src);
    if (*(ulong *)(param_1 + 0x2f8) < __n) {
      uStack_34 = 0x80050017;
      goto LAB_71002785e8;
    }
    memcpy(*(void **)(param_1 + 0x2f0),__src,__n);
    lVar3 = *(long *)(param_1 + 0x2d0);
  }
  else {
    if (*(char *)(param_1 + 0x323) != '\0') {
      lVar3 = *(long *)(param_1 + 0x290);
      *(undefined1 *)(param_1 + 0x323) = 0;
      if (lVar3 == 0) {
        lVar3 = *(long *)(param_1 + 0x1d0);
      }
      (**(code **)(*plVar4 + 0x10))
                (plVar4,lVar3,(long)((int)pvVar7 - (int)__src),*(undefined8 *)(param_1 + 0x2a8),
                 *(undefined2 *)(param_1 + 0x2b0),*(undefined2 *)(param_1 + 0x2b2),0);
      plVar4 = &DAT_71052af138;
      if (DAT_71052af1d8 != '\0') {
        puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
        uVar1 = *puVar2;
        if (uVar1 != 0) {
          if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1)
          goto LAB_710027861c;
          plVar4 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
        }
      }
      lVar5 = FUN_71001cd7d0(*(long *)(*(long *)(*plVar4 + 0x10) + 0x18),*(uint *)(param_1 + 0xa8));
      if (lVar5 != 0) {
        lVar5 = 0;
        if (*(long *)(param_1 + 0x2d8) != *(long *)(param_1 + 0x2d0)) {
          lVar5 = (long)((int)*(long *)(param_1 + 0x2d8) - (int)*(long *)(param_1 + 0x2d0));
        }
        (**(code **)(**(long **)(param_1 + 0xf0) + 0x18))(*(long **)(param_1 + 0xf0),lVar3,lVar5);
        plVar4 = &DAT_71052af138;
        if (DAT_71052af1d8 != '\0') {
          puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
          uVar1 = *puVar2;
          if (uVar1 != 0) {
            if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) {
LAB_710027861c:
              FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,
                             0xe0000003,0);
              return;
            }
            plVar4 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
          }
        }
        lVar3 = FUN_71001cd7d0(*(long *)(*(long *)(*plVar4 + 0x10) + 0x18),*(uint *)(param_1 + 0xa8)
                              );
        if (lVar3 != 0) {
          plVar4 = *(long **)(param_1 + 0xf0);
          __src = *(void **)(param_1 + 0x2d0);
          pvVar7 = *(void **)(param_1 + 0x2d8);
          goto LAB_710027857c;
        }
      }
LAB_7100278538:
      uStack_34 = 0x80010004;
      goto LAB_71002785e8;
    }
LAB_710027857c:
    lVar3 = 0;
    if (pvVar7 != __src) {
      lVar3 = (long)((int)pvVar7 - (int)__src);
    }
    uVar6 = (**(code **)(*plVar4 + 0x20))(plVar4,__src,lVar3);
    if ((uVar6 & 1) == 0) {
      FUN_71001d6410(param_1,1);
      *(undefined4 *)(param_1 + 0x44) = 0x10;
      return;
    }
    lVar3 = *(long *)(param_1 + 0x2d0);
  }
  lVar5 = 0;
  if (*(long *)(param_1 + 0x2d8) != lVar3) {
    lVar5 = (long)((int)*(long *)(param_1 + 0x2d8) - (int)lVar3);
  }
  *(long *)(param_1 + 0x318) = lVar5 + *(long *)(param_1 + 0x318);
  uStack_34 = 0x10001;
LAB_71002785e8:
  FUN_71001b4200(aiStack_58,&uStack_34);
  FUN_7100278090(param_1,aiStack_58);
  return;
}

