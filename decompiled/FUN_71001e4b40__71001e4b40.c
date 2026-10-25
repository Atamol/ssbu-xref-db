// addr:      71001e4b40
// offset:    0x1e4b40
// name:      FUN_71001e4b40
// mangled:   
// signature: undefined8 __cdecl FUN_71001e4b40(long param_1)


undefined8 FUN_71001e4b40(long param_1)

{
  char cVar1;
  short sVar2;
  short sVar3;
  undefined2 uVar4;
  ushort uVar5;
  uint uVar6;
  uint *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  undefined **local_b0;
  long *local_a8;
  undefined4 local_a0;
  undefined8 **local_98;
  undefined8 *local_90;
  undefined8 uStack_88;
  undefined8 **local_80;
  undefined8 *local_78;
  undefined8 uStack_70;
  undefined8 **local_68;
  undefined8 *local_60;
  undefined8 uStack_58;
  long local_50;
  ushort local_48;
  undefined1 local_46;
  
  plVar11 = &DAT_71052af128;
  if (DAT_71052af1d8 != '\0') {
    puVar7 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar6 = *puVar7;
    if (uVar6 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar6) goto LAB_71001e4ef4;
      plVar11 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar6 * 8) + 0x10);
    }
  }
  if (*(long *)(*(long *)(*plVar11 + 0x10) + 0x198) != 0) {
    local_50 = 0;
    local_90 = (undefined8 *)0x0;
    uStack_88 = 0;
    local_b0 = &PTR_FUN_7104f57900;
    local_78 = (undefined8 *)0x0;
    uStack_70 = 0;
    local_98 = &local_90;
    local_80 = &local_78;
    local_68 = &local_60;
    local_60 = (undefined8 *)0x0;
    uStack_58 = 0;
    local_48 = 1;
    local_46 = 1;
    local_a8 = FUN_71001af850(0x90);
    if (local_a8 != (long *)0x0) {
      FUN_71001beb40(local_a8);
    }
    if ((char)local_48 == '\0') {
      FUN_71001f2180((long)&local_b0);
    }
    local_a0 = 1;
    plVar11 = &DAT_71052af128;
    local_48 = local_48 & 0xff;
    if (DAT_71052af1d8 != '\0') {
      puVar7 = (uint *)FUN_7101717960(DAT_71052af1d0);
      uVar6 = *puVar7;
      if (uVar6 != 0) {
        if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar6) {
LAB_71001e4ef4:
          uVar10 = FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,
                                  0xe0000003,0);
          return uVar10;
        }
        plVar11 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar6 * 8) + 0x10);
      }
    }
    uVar6 = FUN_71001e5a20(*(long *)(*(long *)(*plVar11 + 0x10) + 0x198),
                           *(long *)(param_1 + 0x318) + 0x10,(long)&local_b0);
    if ((uVar6 & 1) != 0) {
      lVar12 = *(long *)(param_1 + 0x318);
      if (*(char *)(lVar12 + 0x78) == '\0') {
        FUN_71001f2180(lVar12 + 0x10);
        lVar12 = *(long *)(lVar12 + 0x18);
      }
      else {
        lVar12 = *(long *)(lVar12 + 0x18);
      }
      if ((char)local_48 == '\0') {
        FUN_71001f2180((long)&local_b0);
      }
      plVar11 = local_a8;
      uVar8 = FUN_71001beb00(lVar12);
      uVar9 = FUN_71001beb00((long)plVar11);
      if ((uVar8 != uVar9) || (*(int *)(lVar12 + 0x88) != (int)plVar11[0x11])) {
LAB_71001e4d94:
        lVar12 = *(long *)(param_1 + 0x318);
        if (*(char *)(lVar12 + 0x78) == '\0') {
          FUN_71001f2180(lVar12 + 0x10);
        }
        FUN_71001bec20(param_1 + 0x280,*(long *)(lVar12 + 0x18));
        lVar12 = *(long *)(param_1 + 0x318);
        if (*(char *)(lVar12 + 0x78) == '\0') {
          FUN_71001f2180(lVar12 + 0x10);
        }
        uVar4 = FUN_71001beb30(*(long *)(lVar12 + 0x18));
        *(undefined2 *)(param_1 + 0x310) = uVar4;
        lVar12 = *(long *)(param_1 + 0x318);
        if ((char)local_48 == '\0') {
          FUN_71001f2180((long)&local_b0);
          cVar1 = *(char *)(lVar12 + 0x78);
          plVar11 = local_a8;
        }
        else {
          cVar1 = *(char *)(lVar12 + 0x78);
          plVar11 = local_a8;
        }
        local_a8 = plVar11;
        if (cVar1 == '\0') {
          FUN_71001f2180(lVar12 + 0x10);
        }
        FUN_71001bec20(*(long *)(lVar12 + 0x18),(long)plVar11);
        *(undefined1 *)(lVar12 + 0x79) = 0;
        lVar12 = *(long *)(param_1 + 0x318);
        if ((char)local_48 == '\0') {
          FUN_71001f2180((long)&local_b0);
        }
        uVar5 = FUN_71001beb30((long)local_a8);
        if (*(char *)(lVar12 + 0x78) == '\0') {
          FUN_71001f2180(lVar12 + 0x10);
        }
        FUN_71001bee30(*(long *)(lVar12 + 0x18),uVar5);
        *(undefined1 *)(lVar12 + 0x79) = 0;
        local_b0 = &PTR_FUN_7104f57900;
        if (local_50 != 0) {
          FUN_71001b1870(local_50 + -4);
          local_50 = 0;
          local_48 = local_48 & 0xff;
        }
        if (local_a8 != (long *)0x0) {
          (**(code **)(*local_a8 + 8))();
        }
        FUN_7101711670(&local_68,local_60);
        FUN_7101711670(&local_80,local_78);
        FUN_7100219ca0(&local_98,local_90);
        return 1;
      }
      lVar12 = *(long *)(param_1 + 0x318);
      if (*(char *)(lVar12 + 0x78) == '\0') {
        FUN_71001f2180(lVar12 + 0x10);
      }
      sVar2 = FUN_71001beb30(*(long *)(lVar12 + 0x18));
      if ((char)local_48 == '\0') {
        FUN_71001f2180((long)&local_b0);
      }
      sVar3 = FUN_71001beb30((long)local_a8);
      if (sVar2 != sVar3) goto LAB_71001e4d94;
    }
    local_b0 = &PTR_FUN_7104f57900;
    if (local_50 != 0) {
      FUN_71001b1870(local_50 + -4);
      local_50 = 0;
      local_48 = local_48 & 0xff;
    }
    if (local_a8 != (long *)0x0) {
      (**(code **)(*local_a8 + 8))();
    }
    FUN_7101711670(&local_68,local_60);
    FUN_7101711670(&local_80,local_78);
    FUN_7100219ca0(&local_98,local_90);
  }
  return 0;
}

