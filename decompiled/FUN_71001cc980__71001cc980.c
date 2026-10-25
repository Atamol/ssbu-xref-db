// addr:      71001cc980
// offset:    0x1cc980
// name:      FUN_71001cc980
// mangled:   
// signature: undefined4 __cdecl FUN_71001cc980(long * param_1, undefined8 param_2, long param_3, undefined4 param_4, long param_5, undefined4 param_6, undefined8 param_7, undefined4 param_8)


undefined4
FUN_71001cc980(long *param_1,undefined8 param_2,long param_3,undefined4 param_4,long param_5,
              undefined4 param_6,undefined8 param_7,undefined4 param_8)

{
  uint uVar1;
  bool bVar2;
  uint *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  undefined4 uVar7;
  long *plVar8;
  long *plVar9;
  undefined **local_d0;
  undefined4 local_c8;
  undefined1 local_c4;
  long local_c0;
  undefined8 uStack_b8;
  ulong local_b0;
  undefined8 local_a8;
  byte local_a0;
  undefined1 local_9f;
  undefined1 local_9e;
  undefined **local_98;
  undefined4 local_90;
  undefined1 local_8c;
  long local_88;
  undefined8 uStack_80;
  ulong local_78;
  undefined8 local_70;
  byte local_68;
  undefined1 local_67;
  undefined1 local_66;
  
  plVar6 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_71001cca14:
    if ((*plVar6 == 0) || (lVar5 = *(long *)(*plVar6 + 0x10), lVar5 == 0)) goto LAB_71001cca44;
    lVar5 = *(long *)(lVar5 + 0x10);
  }
  else {
    puVar3 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar3;
    if (uVar1 == 0) goto LAB_71001cca14;
    if ((ulong)uVar1 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar6 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
      goto LAB_71001cca14;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_71001cca44:
    lVar5 = 0;
  }
  plVar6 = (long *)(lVar5 + 0x78);
  (**(code **)(*plVar6 + 0x10))(plVar6);
  bVar2 = FUN_71001ccd00(param_1);
  if (!bVar2) {
    uVar7 = 0;
    goto LAB_71001cccc4;
  }
  local_90 = 1;
  local_8c = 0;
  local_78 = *(ulong *)(param_3 + 0x20);
  local_68 = 0;
  local_98 = &PTR_FUN_7104f56018;
  local_88 = FUN_71001cf7a0((long)&local_98,local_78);
  uStack_80 = *(undefined8 *)(param_3 + 0x18);
  local_70 = 0;
  FUN_71001cc790((long)&local_98,param_3);
  local_68 = *(byte *)(param_3 + 0x30) & 0xfb;
  local_67 = *(undefined1 *)(param_3 + 0x31);
  local_66 = *(undefined1 *)(param_3 + 0x32);
  local_c8 = 1;
  local_c4 = 0;
  local_b0 = *(ulong *)(param_5 + 0x20);
  local_a0 = 0;
  local_d0 = &PTR_FUN_7104f56018;
  local_c0 = FUN_71001cf7a0((long)&local_d0,local_b0);
  uStack_b8 = *(undefined8 *)(param_5 + 0x18);
  local_a8 = 0;
  FUN_71001cc790((long)&local_d0,param_5);
  local_a0 = *(byte *)(param_5 + 0x30) & 0xfb;
  local_9f = *(undefined1 *)(param_5 + 0x31);
  local_9e = *(undefined1 *)(param_5 + 0x32);
  puVar4 = FUN_71001af850(0x130);
  if (puVar4 != (undefined8 *)0x0) {
    FUN_71001cd060(puVar4,param_8,(int)param_1[3],param_2,(long)&local_98,param_4,(long)&local_d0,
                   param_6,param_7);
  }
  plVar8 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_71001ccbd0:
    if ((*plVar8 == 0) || (lVar5 = *(long *)(*plVar8 + 0x10), lVar5 == 0)) goto LAB_71001ccc38;
    lVar5 = *(long *)(lVar5 + 0x10);
    if (DAT_7104f561d1 != '\0') goto LAB_71001ccc4c;
LAB_71001ccbfc:
    FUN_71001d8820(lVar5,(long)puVar4,0);
  }
  else {
    puVar3 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar3;
    if (uVar1 == 0) goto LAB_71001ccbd0;
    if ((ulong)uVar1 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar8 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
      goto LAB_71001ccbd0;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_71001ccc38:
    lVar5 = 0;
    if (DAT_7104f561d1 == '\0') goto LAB_71001ccbfc;
LAB_71001ccc4c:
    plVar8 = (long *)(lVar5 + 0xc0);
    (**(code **)(*plVar8 + 0x10))(plVar8);
    plVar9 = (long *)(lVar5 + 0x30);
    (**(code **)(*plVar9 + 0x10))(plVar9);
    FUN_71001d8820(lVar5,(long)puVar4,0);
    (**(code **)(*plVar9 + 0x20))(plVar9);
    (**(code **)(*plVar8 + 0x20))(plVar8);
  }
  local_d0 = &PTR_FUN_7104f56018;
  FUN_71001b1870(local_c0);
  local_98 = &PTR_FUN_7104f56018;
  FUN_71001b1870(local_88);
  uVar7 = 1;
LAB_71001cccc4:
  (**(code **)(*plVar6 + 0x20))(plVar6);
  return uVar7;
}

