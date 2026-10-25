// addr:      71001f10d0
// offset:    0x1f10d0
// name:      FUN_71001f10d0
// mangled:   
// signature: undefined4 __cdecl FUN_71001f10d0(long param_1, undefined8 param_2, long param_3)


undefined4 FUN_71001f10d0(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  char cVar2;
  uint *puVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined4 uVar8;
  undefined **local_d0;
  long *local_c8;
  undefined4 local_c0;
  undefined8 **local_b8;
  undefined8 *local_b0;
  undefined8 uStack_a8;
  undefined8 **local_a0;
  undefined8 *local_98;
  undefined8 uStack_90;
  undefined8 **local_88;
  undefined8 *local_80;
  undefined8 uStack_78;
  long local_70;
  ushort local_68;
  undefined1 local_66;
  
  plVar7 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_71001f114c:
    if ((*plVar7 != 0) && (lVar6 = *(long *)(*plVar7 + 0x10), lVar6 != 0)) {
      lVar6 = *(long *)(lVar6 + 0x10);
      goto LAB_71001f1180;
    }
  }
  else {
    puVar3 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar3;
    if (uVar1 == 0) goto LAB_71001f114c;
    if ((ulong)uVar1 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar7 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
      goto LAB_71001f114c;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
  }
  lVar6 = 0;
LAB_71001f1180:
  plVar7 = (long *)(lVar6 + 0x78);
  (**(code **)(*plVar7 + 0x10))(plVar7);
  lVar6 = *(long *)(param_1 + 0x138);
  uVar8 = 1;
  if (param_1 + 0x130 != lVar6) {
    do {
      local_b0 = (undefined8 *)0x0;
      uStack_a8 = 0;
      local_70 = 0;
      local_68 = 1;
      local_66 = 1;
      local_98 = (undefined8 *)0x0;
      uStack_90 = 0;
      local_80 = (undefined8 *)0x0;
      uStack_78 = 0;
      local_d0 = &PTR_FUN_7104f57900;
      local_b8 = &local_b0;
      local_a0 = &local_98;
      local_88 = &local_80;
      plVar4 = FUN_71001af850(0x90);
      if (plVar4 != (long *)0x0) {
        FUN_71001beb40(plVar4);
      }
      local_c8 = plVar4;
      if ((char)local_68 == '\0') {
        FUN_71001f2180((long)&local_d0);
        cVar2 = (char)local_68;
        local_c0 = 1;
        local_68 = local_68 & 0xff;
        if (cVar2 == '\0') {
          FUN_71001f2180((long)&local_d0);
        }
      }
      else {
        local_c0 = 1;
        local_68 = local_68 & 0xff;
      }
      FUN_71001bec20((long)local_c8,param_3);
      local_68 = local_68 & 0xff;
      uVar5 = (**(code **)(**(long **)(lVar6 + 0x10) + 0x10))
                        (*(long **)(lVar6 + 0x10),param_2,&local_d0);
      if ((uVar5 & 1) != 0) {
        local_d0 = &PTR_FUN_7104f57900;
        if (local_70 != 0) {
          FUN_71001b1870(local_70 + -4);
          local_70 = 0;
          local_68 = local_68 & 0xff;
        }
        if (local_c8 != (long *)0x0) {
          (**(code **)(*local_c8 + 8))();
        }
        FUN_7101711670(&local_88,local_80);
        FUN_7101711670(&local_a0,local_98);
        FUN_7100219ca0(&local_b8,local_b0);
        uVar8 = 0;
        goto LAB_71001f1354;
      }
      lVar6 = *(long *)(lVar6 + 8);
      local_d0 = &PTR_FUN_7104f57900;
      if (local_70 != 0) {
        FUN_71001b1870(local_70 + -4);
        local_70 = 0;
        local_68 = local_68 & 0xff;
      }
      if (local_c8 != (long *)0x0) {
        (**(code **)(*local_c8 + 8))();
      }
      FUN_7101711670(&local_88,local_80);
      FUN_7101711670(&local_a0,local_98);
      FUN_7100219ca0(&local_b8,local_b0);
    } while (param_1 + 0x130 != lVar6);
    uVar8 = 1;
  }
LAB_71001f1354:
  (**(code **)(*plVar7 + 0x20))(plVar7);
  return uVar8;
}

