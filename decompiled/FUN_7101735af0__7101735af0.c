// addr:      7101735af0
// offset:    0x1735af0
// name:      FUN_7101735af0
// mangled:   
// signature: uint __cdecl FUN_7101735af0(long param_1, long param_2)


uint FUN_7101735af0(long param_1,long param_2)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  code *pcVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined **local_90;
  code *local_88;
  long local_80;
  long local_78;
  long *local_70;
  long local_58;
  long local_50;
  long lStack_48;
  
  plVar8 = *(long **)(param_2 + 0x10);
  uVar4 = *(int *)((long)plVar8 + 0x1c) - 1;
  if (3 < uVar4) {
    uVar4 = 2;
  }
  if (uVar4 == 0) {
    if ((char)plVar8[0x80d8] == '\0') {
      return 0;
    }
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)(param_1 + 100),(Result *)((long)plVar8 + 0x406c4));
    iVar3 = *(int *)((long)plVar8 + 0x406c4);
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(bool *)(param_1 + 0x61) = iVar3 == 0;
    *(undefined1 *)(param_1 + 0x62) = 1;
    *(undefined1 *)(param_1 + 0x60) = 1;
    if (*(int *)(*(long *)(param_2 + 0x10) + 0x1c) != 1) {
      return 0;
    }
    FUN_71001d0a10((long *)(*(long *)(param_2 + 0x10) + 8));
    return 0;
  }
  if (uVar4 == 2) {
    local_58 = plVar8[0xc];
    local_50 = plVar8[0xd];
    lStack_48 = plVar8[0xe];
    FUN_710170cea0(&local_90,(uint *)&local_58,1);
    plVar8[0x1a] = (long)local_88;
    plVar8[0x1b] = local_80;
    plVar8[0x19] = (long)local_90;
    plVar8 = *(long **)(param_2 + 0x10);
  }
  lVar10 = *plVar8;
  lVar9 = DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
joined_r0x007101735bd4:
    if ((lVar9 != 0) && (*(long *)(lVar9 + 0x10) != 0)) {
      lVar9 = *(long *)(*(long *)(lVar9 + 0x10) + 0x10);
      goto LAB_7101735c5c;
    }
  }
  else {
    puVar5 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar2 = *puVar5;
    lVar9 = DAT_71052af138;
    if (uVar2 == 0) goto joined_r0x007101735bd4;
    if ((ulong)uVar2 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      lVar9 = *(long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar2 * 8) + 0x20);
      goto joined_r0x007101735bd4;
    }
    FUN_71001b1300("C:/c2/nintendo/NintendoSDK-NXAddon/NintendoSDK/../NintendoSDK-NEX/include\\OnlineCore/src/Core/InstanceTable.h"
                   ,0x47,0xe0000003,0);
  }
  lVar9 = 0;
LAB_7101735c5c:
  plVar8 = (long *)(lVar9 + 0x78);
  (**(code **)(*plVar8 + 0x10))(plVar8);
  *(undefined8 *)(lVar10 + 200) = 0xea60000000a7;
  (**(code **)(*plVar8 + 0x20))(plVar8);
  if (uVar4 == 2) {
    lVar9 = *(long *)(param_2 + 0x10);
    uVar1 = *(undefined8 *)(lVar9 + 200);
    uVar7 = *(undefined8 *)(lVar9 + 0xd8);
    *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(lVar9 + 0xd0);
    *(undefined8 *)(param_1 + 0x68) = uVar7;
    *(undefined8 *)(param_1 + 0x58) = uVar1;
    return 2;
  }
  if (uVar4 == 1) {
    local_90 = &PTR_FUN_710509e1f0;
    local_88 = FUN_7101735d30;
    local_80 = 0;
    local_78 = param_1;
    local_70 = (long *)&local_90;
    FUN_71017303e0((long *)&local_90,(long *)(param_1 + 0x90));
    if (&local_90 == (undefined ***)local_70) {
      pcVar6 = *(code **)(*local_70 + 0x20);
    }
    else {
      if (local_70 == (long *)0x0) {
        return 0;
      }
      pcVar6 = *(code **)(*local_70 + 0x28);
    }
    (*pcVar6)();
    return 0;
  }
  return uVar4;
}

