// addr:      710020abf0
// offset:    0x20abf0
// name:      FUN_710020abf0
// mangled:   
// signature: long * __cdecl FUN_710020abf0(long param_1, long param_2, undefined4 param_3, ulong param_4)


long * FUN_710020abf0(long param_1,long param_2,undefined4 param_3,ulong param_4)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  uint *puVar6;
  ulonglong uVar7;
  long *plVar8;
  ulonglong uVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  undefined8 auStack_190 [18];
  undefined8 auStack_100 [18];
  undefined1 local_70;
  
  plVar11 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_710020ac74:
    if ((*plVar11 == 0) || (lVar10 = *(long *)(*plVar11 + 0x10), lVar10 == 0)) goto LAB_710020aca4;
    lVar10 = *(long *)(lVar10 + 0x10);
  }
  else {
    puVar6 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar6;
    if (uVar1 == 0) goto LAB_710020ac74;
    if ((ulong)uVar1 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar11 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
      goto LAB_710020ac74;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_710020aca4:
    lVar10 = 0;
  }
  plVar11 = (long *)(lVar10 + 0x78);
  (**(code **)(*plVar11 + 0x10))(plVar11);
  FUN_71001beb40(auStack_190);
  if (*(char *)(param_2 + 0x68) == '\0') {
    FUN_71001f2180(param_2);
    cVar2 = *(char *)(param_2 + 0x6a);
  }
  else {
    cVar2 = *(char *)(param_2 + 0x6a);
  }
  if (cVar2 == '\0') {
    plVar8 = (long *)0x0;
    goto LAB_710020af0c;
  }
  if (*(char *)(param_2 + 0x68) == '\0') {
    FUN_71001f2180(param_2);
  }
  lVar10 = *(long *)(param_2 + 8);
  uVar7 = FUN_71001f2ba0(param_2,"sid",0);
  FUN_71001beb40(auStack_100);
  FUN_71001bec20((long)auStack_100,lVar10);
  local_70 = (undefined1)uVar7;
  plVar12 = (long *)(param_1 + 0xa0);
  plVar13 = (long *)*plVar12;
  plVar8 = plVar12;
  if (plVar13 == (long *)0x0) {
LAB_710020ad60:
    FUN_71001bef00();
  }
  else {
    do {
      bVar3 = FUN_710021a4f0((long)(plVar13 + 4),(long)auStack_100);
      lVar10 = 8;
      if (!bVar3) {
        lVar10 = 0;
        plVar8 = plVar13;
      }
      plVar13 = *(long **)((long)plVar13 + lVar10);
    } while (plVar13 != (long *)0x0);
    if ((plVar8 == plVar12) || (bVar3 = FUN_710021a4f0((long)auStack_100,(long)(plVar8 + 4)), bVar3)
       ) goto LAB_710020ad60;
    plVar8 = (long *)plVar8[0x17];
    FUN_71001bef00();
    if (plVar8 != (long *)0x0) goto LAB_710020af0c;
  }
  if ((param_4 & 1) == 0) {
    uVar7 = FUN_71001f2ba0(param_2,"Tpt",0xffffffff);
  }
  else {
    uVar1 = *(uint *)(param_1 + 8);
    if (DAT_71052af1d8 == '\0') {
LAB_710020ae04:
      lVar10 = (ulong)uVar1 * 0x2e8 + 0x71052af4f0;
    }
    else {
      puVar6 = (uint *)FUN_7101717960(DAT_71052af1d0);
      if (*puVar6 == 0) goto LAB_710020ae04;
      lVar10 = *(long *)(&DAT_71052af4e8 + (ulong)uVar1 * 0x2e8) + (ulong)*puVar6 * 0x168;
    }
    uVar7 = (ulonglong)*(uint *)(lVar10 + 0x140);
  }
  (**(code **)(**(long **)(param_1 + 0x168) + 0x48))(*(long **)(param_1 + 0x168),uVar7 & 0xffffffff)
  ;
  plVar8 = FUN_71001af850(0x510);
  if (plVar8 != (long *)0x0) {
    uVar4 = (**(code **)(**(long **)(param_1 + 0x168) + 0x10))();
    FUN_7100200470(plVar8,param_1,param_2,param_1 + 0xf8,uVar4);
  }
  *(short *)(plVar8 + 0x18) = (short)param_3;
  uVar9 = FUN_71001f2ba0(param_2,"sid",0);
  FUN_710020af50((long *)(param_1 + 0x98),(long)plVar8,(char)uVar9);
  if ((int)uVar7 != 0) {
    plVar12 = *(long **)(param_1 + 0x18);
    lVar10 = plVar8[0x18];
    if ((char)plVar8[0xf] == '\0') {
      FUN_71001f2180((long)(plVar8 + 2));
    }
    (**(code **)(*plVar12 + 0x30))(plVar12,uVar7 & 0xffffffff,(short)lVar10,plVar8[3]);
  }
  if (((param_4 & 1) != 0) &&
     ((**(code **)(**(long **)(param_1 + 0x18) + 0x18))
                (*(long **)(param_1 + 0x18),param_2,uVar7 & 0xffffffff,param_3), (int)uVar7 != 0)) {
    if (*(char *)(param_2 + 0x68) == '\0') {
      FUN_71001f2180(param_2);
    }
    uVar5 = FUN_71001beb30(*(long *)(param_2 + 8));
    *(undefined2 *)(param_1 + 0x1b8) = uVar5;
  }
LAB_710020af0c:
  FUN_71001bef00();
  (**(code **)(*plVar11 + 0x20))(plVar11);
  return plVar8;
}

