// addr:      71001fa8c0
// offset:    0x1fa8c0
// name:      FUN_71001fa8c0
// mangled:   
// signature: undefined FUN_71001fa8c0(void)


undefined4
FUN_71001fa8c0(long param_1,ushort param_2,ushort *param_3,ulong param_4,uint param_5,byte param_6,
              uint param_7,uint param_8,byte param_9)

{
  long ****pppplVar1;
  long ***ppplVar2;
  ushort uVar3;
  uint uVar4;
  uint *puVar5;
  long lVar6;
  int *piVar7;
  ulong uVar8;
  long ***ppplVar9;
  long *plVar10;
  undefined4 uVar11;
  long ****pppplVar12;
  long *plVar13;
  long ***ppplStack_98;
  long ***ppplStack_90;
  long lStack_88;
  ushort auStack_7c [2];
  uint uStack_78;
  ushort uStack_74;
  
  plVar10 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_71001fa954:
    if ((*plVar10 == 0) || (lVar6 = *(long *)(*plVar10 + 0x10), lVar6 == 0)) goto LAB_71001fa984;
    lVar6 = *(long *)(lVar6 + 0x10);
  }
  else {
    puVar5 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar4 = *puVar5;
    if (uVar4 == 0) goto LAB_71001fa954;
    if ((ulong)uVar4 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar10 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar4 * 8) + 0x20);
      goto LAB_71001fa954;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_71001fa984:
    lVar6 = 0;
  }
  plVar10 = (long *)(lVar6 + 0x78);
  (**(code **)(*plVar10 + 0x10))(plVar10);
  auStack_7c[0] = 0;
  if ((param_2 == 0) && (param_5 == 0)) {
    piVar7 = *(int **)(param_1 + 0x2c8);
    if (piVar7 == *(int **)(param_1 + 0x2d0)) {
      param_2 = 0;
      goto LAB_71001faa3c;
    }
    uVar8 = (ulong)((long)*(int **)(param_1 + 0x2d0) + (-0x10 - (long)piVar7)) >> 4;
    uVar4 = (int)uVar8 + 1;
    param_2 = 0;
    if (uVar8 != 0) {
      lVar6 = (((ulong)uVar4 & 1) - 1) - uVar8;
      do {
        while (*piVar7 == 0) {
          param_2 = *(ushort *)(piVar7 + 1);
          if (piVar7[4] == 0) goto LAB_71001faa08;
LAB_71001fa9ec:
          piVar7 = piVar7 + 8;
          lVar6 = lVar6 + 2;
          if (lVar6 == 0) goto LAB_71001faa18;
        }
        if (piVar7[4] != 0) goto LAB_71001fa9ec;
LAB_71001faa08:
        param_2 = *(ushort *)(piVar7 + 5);
        piVar7 = piVar7 + 8;
        lVar6 = lVar6 + 2;
      } while (lVar6 != 0);
    }
LAB_71001faa18:
    if (((uVar4 & 1) == 0) || (*piVar7 != 0)) goto LAB_71001faa3c;
    param_2 = *(ushort *)(piVar7 + 1);
LAB_71001faa44:
    uStack_78 = param_5;
    uStack_74 = param_2;
    lVar6 = FUN_71001fa660(param_1,&uStack_78);
    if ((lVar6 == 0) ||
       ((param_5 != 0 &&
        (uVar4 = (**(code **)(**(long **)(*(long *)(lVar6 + 0xb0) + 0x10) + 0x48))(),
        ((uVar4 ^ param_7) & 1) != 0)))) goto LAB_71001faaa8;
    *(int *)(lVar6 + 0xd8) = *(int *)(lVar6 + 0xd8) + 1;
    lVar6 = FUN_71001c38c0(lVar6);
    auStack_7c[0] = FUN_71001beb30(lVar6);
    if (auStack_7c[0] == 0) goto LAB_71001faaa8;
LAB_71001faadc:
    if ((param_4 & 1) != 0) {
      if (param_5 == 0) {
        *(ushort *)(param_1 + 0x128) = auStack_7c[0];
      }
      ppplStack_98 = (long ***)&ppplStack_98;
      lStack_88 = 0;
      ppplStack_90 = ppplStack_98;
      (**(code **)(*DAT_71052af448 + 0x10))(DAT_71052af448,&ppplStack_98);
      uVar3 = auStack_7c[0];
      if (lStack_88 != 0) {
        do {
          ppplVar9 = ppplStack_90;
          if (*(char *)(ppplStack_90 + 0xf) == '\0') {
            FUN_71001f2180((long)(ppplStack_90 + 2));
          }
          FUN_71001bee30((long)ppplVar9[3],uVar3);
          *(undefined1 *)((long)ppplVar9 + 0x79) = 0;
          FUN_71001f2a80(&uStack_78,(long)(ppplStack_90 + 2),"Tpt",(ulong)param_5);
          plVar13 = &DAT_71052af128;
          if (DAT_71052af1d8 == '\0') {
LAB_71001fabc0:
            if (*plVar13 == 0) goto LAB_71001fabe4;
            lVar6 = *(long *)(*plVar13 + 0x10);
          }
          else {
            puVar5 = (uint *)FUN_7101717960(DAT_71052af1d0);
            uVar4 = *puVar5;
            if (uVar4 == 0) goto LAB_71001fabc0;
            if ((ulong)uVar4 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
              plVar13 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar4 * 8) + 0x10);
              goto LAB_71001fabc0;
            }
            FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,
                           0);
LAB_71001fabe4:
            lVar6 = 0;
          }
          FUN_71001ef610(lVar6,(long)(ppplStack_90 + 2));
          ppplVar2 = ppplStack_90;
          ppplVar9 = (long ***)*ppplStack_90;
          ppplVar9[1] = ppplStack_90[1];
          *ppplStack_90[1] = (long *)ppplVar9;
          lStack_88 = lStack_88 + -1;
          (*(code *)*ppplStack_90[2])();
          FUN_71001b1870((long)ppplVar2);
        } while (lStack_88 != 0);
      }
      (**(code **)(*DAT_71052af448 + 0x60))(DAT_71052af448,uVar3);
      if (lStack_88 != 0) {
        ppplVar9 = (long ***)*ppplStack_90;
        ppplVar9[1] = ppplStack_98[1];
        *ppplStack_98[1] = (long *)ppplVar9;
        lStack_88 = 0;
        pppplVar1 = (long ****)ppplStack_90;
        while (pppplVar1 != &ppplStack_98) {
          pppplVar12 = (long ****)pppplVar1[1];
          (*(code *)*pppplVar1[2])();
          FUN_71001b1870((long)pppplVar1);
          pppplVar1 = pppplVar12;
        }
      }
    }
    if (param_3 != (ushort *)0x0) {
      *param_3 = auStack_7c[0];
    }
    uVar11 = 1;
  }
  else {
LAB_71001faa3c:
    if ((param_5 == 0) || ((param_9 & 1) != 0)) goto LAB_71001faa44;
LAB_71001faaa8:
    if ((param_9 & 1) == 0) {
      uVar8 = FUN_71001f9fb0(param_1,param_2,auStack_7c,param_5,param_6 & 1,param_7 & 1,param_8 & 1)
      ;
      if ((uVar8 & 1) != 0) goto LAB_71001faadc;
      if (DAT_71052af1d8 != '\0') {
        puVar5 = (uint *)FUN_7101717960(DAT_71052af1d0);
        if ((*puVar5 != 0) && ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)*puVar5))
        {
          FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0)
          ;
        }
        if (DAT_71052af1d8 != '\0') {
          FUN_7101717960(DAT_71052af1d0);
        }
      }
    }
    uVar11 = 0;
  }
  (**(code **)(*plVar10 + 0x20))(plVar10);
  return uVar11;
}

