// addr:      71001e8910
// offset:    0x1e8910
// name:      FUN_71001e8910
// mangled:   
// signature: undefined __cdecl FUN_71001e8910(long param_1)


void FUN_71001e8910(long param_1)

{
  byte bVar1;
  uint *puVar2;
  ulonglong uVar3;
  byte bVar4;
  long lVar5;
  long *plVar6;
  uint uVar7;
  byte bVar8;
  ulong uStack_70;
  ulong local_68;
  
  plVar6 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_71001e8988:
    if ((*plVar6 != 0) && (lVar5 = *(long *)(*plVar6 + 0x10), lVar5 != 0)) {
      lVar5 = *(long *)(lVar5 + 0x10);
      goto LAB_71001e89bc;
    }
  }
  else {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar7 = *puVar2;
    if (uVar7 == 0) goto LAB_71001e8988;
    if ((ulong)uVar7 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar6 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar7 * 8) + 0x20);
      goto LAB_71001e8988;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
  }
  lVar5 = 0;
LAB_71001e89bc:
  plVar6 = (long *)(lVar5 + 0x78);
  (**(code **)(*plVar6 + 0x10))(plVar6);
  lVar5 = *(long *)(param_1 + 0x60);
  if (param_1 + 0x58 != lVar5) {
    do {
      FUN_71001b12a0(&local_68);
      if (*(int *)(lVar5 + 0x90) == -1) {
        if (*(uint *)(lVar5 + 0xa4) < *(uint *)(lVar5 + 0xa8)) {
          if (*(long *)(lVar5 + 0x98) == 0) goto LAB_71001e8a18;
          goto LAB_71001e8a7c;
        }
      }
      else if ((long)*(int *)(lVar5 + 0xa0) < (long)(local_68 - *(long *)(lVar5 + 0x98))) {
        if (*(long *)(lVar5 + 0x98) == 0) {
LAB_71001e8a18:
          if (7 < *(uint *)(lVar5 + 0xa4)) goto LAB_71001e8a7c;
          uVar3 = FUN_71001f2ba0(lVar5 + 0x18,"probeinit",0);
          if ((uVar3 == 0) || (uVar3 = FUN_71001f2ba0(lVar5 + 0x18,"R",0), uVar3 != 0))
          goto LAB_71001e8a7c;
          uVar7 = (uint)DAT_7104f575ec;
          bVar4 = 1;
        }
        else {
LAB_71001e8a7c:
          bVar4 = 0;
          uVar7 = 0;
        }
        bVar8 = 0;
        bVar1 = 3;
        if (!(bool)(bVar4 & *(int *)(lVar5 + 0xa4) == 0)) {
          bVar1 = 1;
        }
        do {
          FUN_71001b12a0(&uStack_70);
          FUN_71001e8450(param_1,0,lVar5 + 0x18,&uStack_70,uVar7);
          bVar8 = bVar8 + 1;
        } while (bVar8 < bVar1);
        *(int *)(lVar5 + 0xa4) = *(int *)(lVar5 + 0xa4) + 1;
      }
      lVar5 = *(long *)(lVar5 + 8);
    } while (param_1 + 0x58 != lVar5);
  }
  (**(code **)(*plVar6 + 0x20))(plVar6);
  return;
}

