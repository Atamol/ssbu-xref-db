// addr:      710020c140
// offset:    0x20c140
// name:      FUN_710020c140
// mangled:   
// signature: undefined FUN_710020c140(void)


undefined4 FUN_710020c140(long param_1,uint param_2,long param_3)

{
  uint *puVar1;
  uint uVar2;
  size_t __n;
  uint *puVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  uint *__dest;
  uint *__src;
  long *plVar8;
  undefined4 uVar9;
  long *plVar10;
  long *plVar11;
  
  plVar4 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_710020c1b4:
    if ((*plVar4 != 0) && (lVar5 = *(long *)(*plVar4 + 0x10), lVar5 != 0)) {
      lVar5 = *(long *)(lVar5 + 0x10);
      goto LAB_710020c1e8;
    }
  }
  else {
    puVar3 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar2 = *puVar3;
    if (uVar2 == 0) goto LAB_710020c1b4;
    if ((ulong)uVar2 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar4 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar2 * 8) + 0x20);
      goto LAB_710020c1b4;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
  }
  lVar5 = 0;
LAB_710020c1e8:
  plVar10 = (long *)(lVar5 + 0x78);
  (**(code **)(*plVar10 + 0x10))(plVar10);
  plVar4 = *(long **)(param_1 + 0x128);
  if (plVar4 != (long *)0x0) {
    plVar6 = (long *)(param_1 + 0x128);
    plVar7 = plVar4;
    plVar11 = plVar6;
    do {
      if (*(uint *)(plVar7 + 4) >= param_2) {
        plVar11 = plVar7;
      }
      plVar7 = (long *)plVar7[*(uint *)(plVar7 + 4) < param_2];
    } while (plVar7 != (long *)0x0);
    if ((plVar11 != plVar6) && (*(uint *)(plVar11 + 4) <= param_2 && plVar11 != plVar6)) {
LAB_710020c23c:
      do {
        if (*(uint *)(plVar11 + 4) != param_2) break;
        plVar7 = (long *)plVar11[1];
        if (plVar11[5] == param_3) {
          if (plVar7 == (long *)0x0) {
            plVar7 = plVar11 + 2;
            plVar6 = (long *)*plVar7;
            if ((long *)*plVar6 != plVar11) {
              do {
                lVar5 = *plVar7;
                plVar7 = (long *)(lVar5 + 0x10);
                plVar6 = (long *)*plVar7;
              } while (*plVar6 != lVar5);
            }
          }
          else {
            do {
              plVar6 = plVar7;
              plVar7 = (long *)*plVar6;
            } while ((long *)*plVar6 != (long *)0x0);
          }
          if (*(long **)(param_1 + 0x120) == plVar11) {
            *(long **)(param_1 + 0x120) = plVar6;
          }
          *(long *)(param_1 + 0x130) = *(long *)(param_1 + 0x130) + -1;
          std::__tree_remove<std::__tree_node_base<void*>*>(plVar4,plVar11);
          FUN_71001b1870((long)plVar11);
          puVar3 = *(uint **)(param_1 + 0x138);
          puVar1 = *(uint **)(param_1 + 0x140);
          if ((puVar3 == puVar1) || (*puVar3 == param_2)) {
LAB_710020c394:
            __src = puVar3 + 1;
            __dest = puVar3;
          }
          else {
            __src = puVar3 + 1;
            do {
              __dest = __src;
              puVar3 = puVar1;
              if (puVar1 == __dest) goto LAB_710020c394;
              __src = __dest + 1;
            } while (*__dest != param_2);
          }
          __n = (long)puVar1 - (long)__src;
          if (__n != 0) {
            memmove(__dest,__src,__n);
          }
          *(uint **)(param_1 + 0x140) = __dest + ((long)__n >> 2);
          uVar9 = 1;
          goto LAB_710020c2b4;
        }
        if (plVar7 == (long *)0x0) {
          plVar7 = plVar11 + 2;
          plVar8 = (long *)*plVar7;
          if ((long *)*plVar8 == plVar11) {
            plVar11 = plVar8;
            if (plVar8 == plVar6) break;
            goto LAB_710020c23c;
          }
          do {
            lVar5 = *plVar7;
            plVar7 = (long *)(lVar5 + 0x10);
            plVar11 = (long *)*plVar7;
          } while (*plVar11 != lVar5);
        }
        else {
          do {
            plVar11 = plVar7;
            plVar7 = (long *)*plVar11;
          } while ((long *)*plVar11 != (long *)0x0);
        }
      } while (plVar11 != plVar6);
    }
  }
  uVar9 = 0;
LAB_710020c2b4:
  (**(code **)(*plVar10 + 0x20))(plVar10);
  return uVar9;
}

