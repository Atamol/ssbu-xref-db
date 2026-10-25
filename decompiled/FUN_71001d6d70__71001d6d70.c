// addr:      71001d6d70
// offset:    0x1d6d70
// name:      FUN_71001d6d70
// mangled:   
// signature: undefined __cdecl FUN_71001d6d70(long param_1)


void FUN_71001d6d70(long param_1)

{
  bool bVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  uint uVar6;
  long lVar7;
  ulong local_38;
  
  if (*(char *)(param_1 + 0x40) != '\0') {
    iVar3 = *(int *)(param_1 + 0x38);
    *(undefined1 *)(param_1 + 0x40) = 0;
    if (iVar3 != 2) {
      FUN_71001b1300("C:/home/ws/hac-appc2/Pack/7923402a/OnlineCore/src/Core/Chrono.cpp",0x2f,
                     0xe000000e,0);
      return;
    }
    goto LAB_71001d6fcc;
  }
  if (*(int *)(param_1 + 0x38) == 0) {
    if (DAT_7104f54e20 == '\0') {
      FUN_71001b6a50((long *)&local_38);
    }
    else {
      FUN_71001b68a0(&local_38,0);
    }
    DAT_71052aeba8 = local_38;
    lVar7 = ((local_38 - *(long *)(param_1 + 0x20)) - *(long *)(param_1 + 0x28)) +
            *(long *)(param_1 + 0x30);
    lVar4 = *(long *)(param_1 + 0xa0);
    if (-1 < lVar7) goto LAB_71001d6de0;
LAB_71001d6e78:
    if (*(char *)(param_1 + 0xcc) == '\0') goto LAB_71001d6f1c;
LAB_71001d6e88:
    *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 1;
    *(long *)(param_1 + 0xb0) = *(long *)(param_1 + 0xb0) + lVar4;
    if (*(int *)(param_1 + 0x38) == 0) {
      lVar7 = *(long *)(param_1 + 0x30);
      if (DAT_7104f54e20 == '\0') {
        FUN_71001b6a50((long *)&local_38);
      }
      else {
        FUN_71001b68a0(&local_38,0);
      }
      DAT_71052aeba8 = local_38;
      lVar7 = ((local_38 + lVar7) - *(long *)(param_1 + 0x20)) - *(long *)(param_1 + 0x28);
      *(long *)(param_1 + 0x30) = lVar7;
      *(undefined4 *)(param_1 + 0x38) = 2;
    }
    else {
      FUN_71001b1300("C:/home/ws/hac-appc2/Pack/7923402a/OnlineCore/src/Core/Chrono.cpp",0x61,
                     0xe000000e,0);
      lVar7 = -1;
    }
    *(long *)(param_1 + 0xa8) = *(long *)(param_1 + 0xa8) + lVar7;
    if (*(long *)(param_1 + 0xc0) < lVar4) {
      *(long *)(param_1 + 0xc0) = lVar4;
      lVar7 = *(long *)(param_1 + 0xb8);
    }
    else {
      lVar7 = *(long *)(param_1 + 0xb8);
    }
    if (lVar4 < lVar7) {
      *(long *)(param_1 + 0xb8) = lVar4;
      iVar3 = *(int *)(param_1 + 0x38);
    }
    else {
      iVar3 = *(int *)(param_1 + 0x38);
    }
  }
  else {
    lVar7 = *(long *)(param_1 + 0x30);
    lVar4 = *(long *)(param_1 + 0xa0);
    if (lVar7 < 0) goto LAB_71001d6e78;
LAB_71001d6de0:
    lVar2 = lVar4 - lVar7;
    bVar1 = lVar4 < lVar7;
    lVar4 = lVar7;
    if ((lVar2 == 0 || bVar1) ||
       ((uVar6 = 0xffffffff, lVar2 < 0x100000000 && (uVar6 = (uint)lVar2, uVar6 == 0))))
    goto LAB_71001d6e78;
    plVar5 = (long *)(param_1 + 0x58);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    if (*(char *)(param_1 + 0x41) == '\0') {
      FUN_71001b43b0((undefined8 *)(param_1 + 0x48),(long)plVar5,uVar6);
    }
    else {
      *(undefined1 *)(param_1 + 0x41) = 0;
    }
    (**(code **)(*plVar5 + 0x20))(plVar5);
    if (*(char *)(param_1 + 0xcc) != '\0') goto LAB_71001d6e88;
LAB_71001d6f1c:
    if (*(int *)(param_1 + 0x38) == 0) {
      lVar7 = *(long *)(param_1 + 0x30);
      if (DAT_7104f54e20 == '\0') {
        FUN_71001b6a50((long *)&local_38);
      }
      else {
        FUN_71001b68a0(&local_38,0);
      }
      DAT_71052aeba8 = local_38;
      lVar7 = ((local_38 + lVar7) - *(long *)(param_1 + 0x20)) - *(long *)(param_1 + 0x28);
      *(long *)(param_1 + 0x30) = lVar7;
      *(undefined4 *)(param_1 + 0x38) = 2;
    }
    else {
      FUN_71001b1300("C:/home/ws/hac-appc2/Pack/7923402a/OnlineCore/src/Core/Chrono.cpp",0x61,
                     0xe000000e,0);
      lVar7 = -1;
    }
    *(undefined4 *)(param_1 + 200) = 1;
    *(undefined1 *)(param_1 + 0xcc) = 1;
    *(long *)(param_1 + 0xa8) = lVar7;
    *(long *)(param_1 + 0xb0) = lVar4;
    *(long *)(param_1 + 0xb8) = lVar4;
    *(long *)(param_1 + 0xc0) = lVar4;
    iVar3 = *(int *)(param_1 + 0x38);
  }
  if (iVar3 != 2) {
    FUN_71001b1300("C:/home/ws/hac-appc2/Pack/7923402a/OnlineCore/src/Core/Chrono.cpp",0x2f,
                   0xe000000e,0);
    return;
  }
LAB_71001d6fcc:
  *(int *)(param_1 + 0x38) = iVar3;
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (DAT_7104f54e20 == '\0') {
    FUN_71001b6a50((long *)&local_38);
  }
  else {
    FUN_71001b68a0(&local_38,0);
  }
  DAT_71052aeba8 = local_38;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(ulong *)(param_1 + 0x28) = local_38 - *(long *)(param_1 + 0x20);
  return;
}

