// addr:      71001f5750
// offset:    0x1f5750
// name:      FUN_71001f5750
// mangled:   
// signature: undefined4 __cdecl FUN_71001f5750(long param_1, long param_2, char param_3, char * param_4)


undefined4 FUN_71001f5750(long param_1,long param_2,char param_3,char *param_4)

{
  ushort uVar1;
  uint uVar2;
  ushort uVar3;
  uint *puVar4;
  ushort *puVar5;
  ushort *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined4 uVar10;
  ushort uVar11;
  long *plVar12;
  ushort local_60 [4];
  long local_58;
  ushort local_48 [4];
  
  plVar12 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_71001f57d0:
    if ((*plVar12 == 0) || (lVar7 = *(long *)(*plVar12 + 0x10), lVar7 == 0)) goto LAB_71001f5800;
    lVar7 = *(long *)(lVar7 + 0x10);
  }
  else {
    puVar4 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar2 = *puVar4;
    if (uVar2 == 0) goto LAB_71001f57d0;
    if ((ulong)uVar2 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar12 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar2 * 8) + 0x20);
      goto LAB_71001f57d0;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_71001f5800:
    lVar7 = 0;
  }
  plVar12 = (long *)(lVar7 + 0x78);
  (**(code **)(*plVar12 + 0x10))(plVar12);
  local_48[0] = 0;
  uVar2 = *(uint *)(param_2 + 8);
  if (DAT_71052af1d8 != '\0') {
    puVar4 = (uint *)FUN_7101717960(DAT_71052af1d0);
    if (*puVar4 != 0) {
      lVar7 = *(long *)(&DAT_71052af4e8 + (ulong)uVar2 * 0x2e8) + (ulong)*puVar4 * 0x168;
      goto joined_r0x0071001f58d0;
    }
  }
  lVar7 = (ulong)uVar2 * 0x2e8 + 0x71052af4f0;
joined_r0x0071001f58d0:
  if (param_3 == '\0') {
    local_48[0] = 0;
    uVar11 = 0x10;
    if (*(int *)(lVar7 + 0x140) != 0) {
      uVar11 = 0x20;
    }
    do {
      uVar11 = uVar11 - 1;
      param_3 = (char)uVar11;
      uVar3 = local_60[0];
      if ((uVar11 & 0xff) == 0) goto LAB_71001f58b0;
      uVar1 = (ushort)*(byte *)(param_2 + 8) | uVar11 * 0x100;
      local_48[0] = uVar1;
      lVar7 = FUN_71001f59a0(param_1,local_48);
    } while (lVar7 != 0);
    lVar7 = FUN_71001f59a0(param_1,local_48);
    uVar3 = local_60[0];
    local_60[0] = uVar1;
  }
  else {
    uVar11 = CONCAT11(param_3,*(undefined1 *)(param_2 + 8));
    local_48[0] = uVar11;
    lVar7 = FUN_71001f59a0(param_1,local_48);
    uVar3 = local_60[0];
    local_60[0] = uVar11;
  }
  if (lVar7 == 0) {
    puVar5 = *(ushort **)(param_1 + 0x10);
    lVar7 = (long)*(ushort **)(param_1 + 0x18) - (long)puVar5;
    if (lVar7 != 0) {
      uVar8 = lVar7 >> 4;
      puVar6 = puVar5;
      do {
        uVar9 = uVar8;
        if ((long)uVar8 < 0) {
          uVar9 = uVar8 + 1;
        }
        uVar9 = (long)uVar9 >> 1;
        puVar5 = puVar6 + uVar9 * 8 + 8;
        uVar8 = uVar8 + ~uVar9;
        if (local_60[0] <= puVar6[uVar9 * 8]) {
          puVar5 = puVar6;
          uVar8 = uVar9;
        }
        puVar6 = puVar5;
      } while (uVar8 != 0);
    }
    local_58 = param_2;
    if ((puVar5 == *(ushort **)(param_1 + 0x18)) || (local_60[0] < *puVar5)) {
      FUN_710021cb90((ulong *)(param_1 + 0x10),(undefined8 *)puVar5,(undefined8 *)local_60);
    }
    if (param_4 != (char *)0x0) {
      *param_4 = param_3;
    }
    uVar10 = 1;
  }
  else {
LAB_71001f58b0:
    local_60[0] = uVar3;
    uVar10 = 0;
  }
  (**(code **)(*plVar12 + 0x20))(plVar12);
  return uVar10;
}

