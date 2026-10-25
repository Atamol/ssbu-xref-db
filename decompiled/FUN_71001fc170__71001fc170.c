// addr:      71001fc170
// offset:    0x1fc170
// name:      FUN_71001fc170
// mangled:   
// signature: uint __cdecl FUN_71001fc170(long param_1, long param_2, long param_3, long param_4)


uint FUN_71001fc170(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  uint uVar2;
  undefined2 uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  uint *puVar9;
  int iVar10;
  undefined8 auStack_e8 [18];
  char local_54 [4];
  
  lVar8 = DAT_71052af448;
  if (*(int *)(DAT_71052af448 + 8) == 1) {
    lVar1 = DAT_71052af448 + 0x130;
    uVar5 = FUN_71001beb00(param_4);
    uVar6 = FUN_71001beb00(lVar1);
    if ((uVar5 != uVar6) || (*(int *)(param_4 + 0x88) != *(int *)(lVar8 + 0x1b8)))
    goto LAB_71001fc1e4;
LAB_71001fc2f8:
    uVar4 = 1;
    goto LAB_71001fc350;
  }
LAB_71001fc1e4:
  iVar10 = 0;
  local_54[0] = '\0';
  do {
    plVar7 = FUN_7100218560(param_2,param_1 + 0xf0,param_4,param_3,local_54);
    if (plVar7 == (long *)0x0) break;
    iVar10 = iVar10 + 1;
    lVar8 = FUN_71001c38c0(param_2);
    uVar3 = FUN_71001beb30(lVar8);
    *(undefined2 *)((long)plVar7 + 0xac) = uVar3;
    (**(code **)(*(long *)(param_1 + 0x2f8) + 0x18))((long *)(param_1 + 0x2f8),plVar7,1);
  } while (*(long *)(param_3 + 0x18) != 0);
  uVar4 = 1;
  if ((iVar10 != 0) || (local_54[0] != '\0')) goto LAB_71001fc350;
  if (*(long *)(param_3 + 0x18) == 0) goto LAB_71001fc2f8;
  FUN_71001bebd0(auStack_e8,param_4);
  uVar4 = FUN_71001f10d0(param_1,param_3,(long)auStack_e8);
  uVar4 = uVar4 ^ 1;
  if (((uVar4 & 1) == 0) && (*(int *)(param_2 + 0x9c) != 0)) {
    plVar7 = &DAT_71052af138;
    if (DAT_71052af1d8 == '\0') {
LAB_71001fc2e0:
      if ((*plVar7 == 0) || (lVar8 = *(long *)(*plVar7 + 0x10), lVar8 == 0)) goto LAB_71001fc318;
      lVar8 = *(long *)(lVar8 + 0x10);
    }
    else {
      puVar9 = (uint *)FUN_7101717960(DAT_71052af1d0);
      uVar2 = *puVar9;
      if (uVar2 == 0) goto LAB_71001fc2e0;
      if ((ulong)uVar2 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
        plVar7 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar2 * 8) + 0x20);
        goto LAB_71001fc2e0;
      }
      FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_71001fc318:
      lVar8 = 0;
    }
    plVar7 = (long *)(lVar8 + 0x78);
    (**(code **)(*plVar7 + 0x10))(plVar7);
    FUN_71001c3f10(param_2,param_4);
    (**(code **)(*plVar7 + 0x20))(plVar7);
  }
  FUN_71001bef00();
LAB_71001fc350:
  return uVar4 & 1;
}

