// addr:      7101d28770
// offset:    0x1d28770
// name:      FUN_7101d28770
// mangled:   
// signature: undefined __cdecl FUN_7101d28770(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101d28770(long param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  int *piVar9;
  undefined4 uVar10;
  long lVar11;
  long lVar12;
  undefined4 local_d8 [2];
  undefined **local_d0;
  long local_c8;
  undefined8 local_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined **local_98;
  ulong local_90;
  uint local_88 [2];
  undefined1 local_80 [64];
  
  if (*(char *)(*(long *)(DAT_710532f7e8 + 8) + 0x161) == '\0') {
    return;
  }
  if (*(int *)(*(long *)(DAT_710532f7e8 + 8) + 0xe8) != 2) {
    return;
  }
  plVar5 = *(long **)(param_1 + 0x178);
  lVar12 = *(long *)(*(long *)(DAT_710532f840 + 8) + 0xb8);
  if (plVar5 != (long *)0x0) {
    if (*(int *)((long)plVar5 + 0x25c) != -1) {
      *(int *)(param_1 + 0x180) = *(int *)((long)plVar5 + 0x25c);
      (**(code **)(*plVar5 + 0x70))(plVar5,0);
      uVar1 = *(uint *)(param_1 + 0x114);
      if (0x12 < uVar1) goto LAB_7101d28ae0;
      uVar10 = 7;
      goto LAB_7101d28a84;
    }
    uVar1 = *(uint *)((long)plVar5 + 0x254);
    uVar8 = (ulong)*(uint *)(param_1 + 0x184);
    if (uVar1 != *(uint *)(param_1 + 0x184)) {
      local_80[0] = 0;
      local_88[0] = 0;
      local_88[1] = 0;
      FUN_710062dc20(local_88,"set_btn_item_%02d");
      FUN_7103776640(&local_98,**(long **)(param_1 + 0x130) + 8,(byte ****)local_80,uVar8,param_4,
                     param_5,param_6,param_7,param_8);
      uVar8 = local_90;
      FUN_7103778300(0x3f800000,local_90,0x71043ada16);
      local_98 = &PTR_FUN_710523d988;
      local_90 = 0;
      if (uVar8 != 0) {
        uVar6 = *(ulong *)(uVar8 + 0x18);
        *(undefined ***)(uVar8 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar8 + 0x18) = 0;
        if (uVar6 != 0) {
          FUN_710392eb40(uVar6);
        }
        FUN_710392eb40(uVar8);
      }
      FUN_7101d2aaf0(param_1,(ulong)*(uint *)(param_1 + 0x184),0,param_4,param_5,param_6,param_7,
                     param_8);
      uVar8 = (ulong)uVar1;
      *(uint *)(param_1 + 0x184) = uVar1;
      FUN_710062dc20(local_88,"set_btn_item_%02d");
      FUN_7103776640(&local_98,**(long **)(param_1 + 0x130) + 8,(byte ****)local_80,uVar8,param_4,
                     param_5,param_6,param_7,param_8);
      uVar8 = local_90;
      FUN_7103778300(0x3f800000,local_90,0x710424f77e);
      local_98 = &PTR_FUN_710523d988;
      local_90 = 0;
      if (uVar8 != 0) {
        uVar6 = *(ulong *)(uVar8 + 0x18);
        *(undefined ***)(uVar8 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar8 + 0x18) = 0;
        if (uVar6 != 0) {
          FUN_710392eb40(uVar6);
        }
        FUN_710392eb40(uVar8);
      }
      FUN_7101d2aaf0(param_1,(ulong)*(uint *)(param_1 + 0x184),1,param_4,param_5,param_6,param_7,
                     param_8);
      plVar5 = *(long **)(param_1 + 0x178);
    }
    if ((char)plVar5[0x50] != '\0') {
      lVar11 = *(long *)(lVar12 + 0x80);
      if (*(char *)(lVar11 + 0xc9) == '\0') {
        iVar4 = 4;
      }
      else {
        iVar4 = 0;
      }
      FUN_7103771be0((long *)(lVar11 + 0x2260),iVar4,0);
      *(undefined4 *)(lVar11 + 0x2270) = *(undefined4 *)(*(long *)(lVar11 + 0x2260) + 0x25c);
    }
  }
  if (*(int *)(*(long *)(lVar12 + 0x80) + 0x2270) != 0) {
    return;
  }
  uVar7 = DAT_7105308750;
  if (((*(char *)(param_1 + 0x570) != '\0') &&
      (uVar7 = nn::time::StandardSteadyClock::now(), (DAT_71053144d8 & 1) == 0)) &&
     (iVar4 = __cxa_guard_acquire(&DAT_71053144d8), iVar4 != 0)) {
    FUN_7101764000();
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  DAT_7105308750 = uVar7;
  *(undefined1 *)(*(long *)(*(long *)**(undefined8 **)(param_1 + 0x130) + 0x600) + 0x4aa) = 0;
  if ((*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') &&
     (uVar8 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x1053dffe8c,(long ****)&DAT_00000004,
                             param_4,param_5,param_6,param_7,param_8), (uVar8 & 1) != 0)) {
    FUN_71024076d0(local_d8,0x1053dffe8c);
    if (((local_c8 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_c0 == DAT_7106dd53ac)) {
      piVar9 = (int *)(local_c8 + 0x38);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar3) {
          *piVar9 = *piVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  else {
    local_c0 = 0x87650000000000;
    local_b0 = 0xffffffffffffffff;
    uStack_a8 = 0;
    local_d8[0] = 0;
    local_a0 = 0;
  }
  local_d0 = &PTR_FUN_7104f73d50;
  local_c8 = 0;
  local_b8 = 0;
  *(undefined4 *)(param_1 + 0x55c) = 2;
  uVar1 = *(uint *)(param_1 + 0x114);
  if (0x12 < uVar1) {
LAB_7101d28ae0:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar10 = 8;
LAB_7101d28a84:
  *(undefined4 *)(param_1 + (long)(int)uVar1 * 4 + 200) = uVar10;
  return;
}

