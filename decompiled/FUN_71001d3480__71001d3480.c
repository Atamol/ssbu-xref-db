// addr:      71001d3480
// offset:    0x1d3480
// name:      FUN_71001d3480
// mangled:   
// signature: undefined __cdecl FUN_71001d3480(long param_1, long param_2, int param_3, undefined8 * param_4)


void FUN_71001d3480(long param_1,long param_2,int param_3,undefined8 *param_4)

{
  uint uVar1;
  bool bVar2;
  uint *puVar3;
  uint *puVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined4 *local_a8;
  undefined4 *local_a0;
  undefined8 local_98;
  uint *local_90;
  uint *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  local_90 = (uint *)0x0;
  local_88 = (uint *)0x0;
  local_80 = 0;
  plVar8 = *(long **)(param_1 + 0x48);
  if ((long *)(param_1 + 0x50) != plVar8) {
    do {
      lVar5 = plVar8[5];
      if ((*(int *)(lVar5 + 0x14) == 1) &&
         ((*(long *)(lVar5 + 0x70) == param_2 ||
          ((param_3 != 0 && (*(int *)(lVar5 + 0x78) == param_3)))))) {
        plVar6 = &DAT_71052af138;
        local_98 = 0;
        local_a8 = (undefined4 *)0x0;
        local_a0 = (undefined4 *)0x0;
        if (DAT_71052af1d8 != '\0') {
          puVar3 = (uint *)FUN_7101717960(DAT_71052af1d0);
          uVar1 = *puVar3;
          if (uVar1 != 0) {
            if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1)
            goto LAB_71001d375c;
            plVar6 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
          }
        }
        FUN_71001d19f0(*(long *)(*(long *)(*plVar6 + 0x10) + 0x18),*(uint *)(plVar8[5] + 0x18),
                       (long *)&local_a8);
        FUN_71001d2cd0((ulong *)&local_90,local_88,local_a8,local_a0);
        plVar6 = (long *)plVar8[1];
        if ((long *)plVar8[1] == (long *)0x0) {
          plVar6 = plVar8 + 2;
          plVar7 = (long *)*plVar6;
          if ((long *)*plVar7 != plVar8) {
            do {
              lVar5 = *plVar6;
              plVar6 = (long *)(lVar5 + 0x10);
              plVar7 = (long *)*plVar6;
            } while (*plVar7 != lVar5);
          }
        }
        else {
          do {
            plVar7 = plVar6;
            plVar6 = (long *)*plVar7;
          } while ((long *)*plVar7 != (long *)0x0);
        }
        local_78 = *param_4;
        local_70 = param_4[1];
        uStack_68 = param_4[2];
        FUN_71001d0f00((long *)plVar8[5],3,&local_78,1);
        plVar8 = plVar7;
        if (local_a8 != (undefined4 *)0x0) {
          local_a0 = local_a8;
          FUN_71001b1870((long)local_a8);
        }
      }
      else {
        plVar6 = (long *)plVar8[1];
        if ((long *)plVar8[1] == (long *)0x0) {
          plVar6 = plVar8 + 2;
          bVar2 = *(long **)*plVar6 != plVar8;
          plVar8 = (long *)*plVar6;
          if (bVar2) {
            do {
              lVar5 = *plVar6;
              plVar6 = (long *)(lVar5 + 0x10);
              plVar8 = (long *)*plVar6;
            } while (*plVar8 != lVar5);
          }
        }
        else {
          do {
            plVar8 = plVar6;
            plVar6 = (long *)*plVar8;
          } while ((long *)*plVar8 != (long *)0x0);
        }
      }
    } while ((long *)(param_1 + 0x50) != plVar8);
    puVar3 = local_90;
    if (local_90 != local_88) {
      do {
        plVar8 = &DAT_71052af138;
        if (DAT_71052af1d8 != '\0') {
          puVar4 = (uint *)FUN_7101717960(DAT_71052af1d0);
          uVar1 = *puVar4;
          if (uVar1 != 0) {
            if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) {
LAB_71001d375c:
              FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,
                             0xe0000003,0);
              return;
            }
            plVar8 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
          }
        }
        uVar1 = *puVar3;
        plVar6 = (long *)(*(long *)(*(long *)(*plVar8 + 0x10) + 0x18) + 0x50);
        plVar7 = (long *)*plVar6;
        plVar8 = plVar6;
        if (plVar7 != (long *)0x0) {
          do {
            if (*(uint *)(plVar7 + 4) >= uVar1) {
              plVar8 = plVar7;
            }
            plVar7 = (long *)plVar7[*(uint *)(plVar7 + 4) < uVar1];
          } while (plVar7 != (long *)0x0);
          if (((plVar8 != plVar6) && (*(uint *)(plVar8 + 4) <= uVar1)) &&
             ((long *)plVar8[5] != (long *)0x0)) {
            FUN_71001d0a10((long *)plVar8[5]);
          }
        }
        puVar3 = puVar3 + 1;
      } while (puVar3 != local_88);
    }
  }
  if ((param_3 == 0) && (*(long *)(param_2 + 0xb8) != 0)) {
    FUN_71001d3480(param_1,*(long *)(param_2 + 0xb8),0,param_4);
  }
  if (local_90 != (uint *)0x0) {
    local_88 = local_90;
    FUN_71001b1870((long)local_90);
  }
  return;
}

