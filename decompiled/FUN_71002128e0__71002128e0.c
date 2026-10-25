// addr:      71002128e0
// offset:    0x2128e0
// name:      FUN_71002128e0
// mangled:   
// signature: undefined4 __cdecl FUN_71002128e0(undefined8 param_1, long param_2)


undefined4 FUN_71002128e0(undefined8 param_1,long param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  ushort uVar3;
  size_t sVar4;
  ulong uVar5;
  undefined1 local_28;
  undefined1 local_27;
  undefined1 local_26;
  undefined1 local_25;
  
  *(undefined8 *)(param_2 + 0xf0) = 0;
  *(undefined8 *)(param_2 + 0xe0) = 0;
  *(undefined1 *)(param_2 + 0x130) = 0;
  if ((*(ushort *)(param_2 + 0x60) & 0xe) == 0) {
    local_28 = 0;
    *(undefined8 *)(param_2 + 0xf0) = 1;
    memcpy((void *)(param_2 + 0xf8),&local_28,1);
    local_28 = 4;
    uVar5 = *(ulong *)(param_2 + 0xf0);
    uVar1 = uVar5;
    if (uVar5 < uVar5 + 1) {
      uVar1 = uVar5 + 1;
    }
    if (0x34 < uVar1) goto LAB_7100212bec;
    *(ulong *)(param_2 + 0xf0) = uVar1;
    memcpy((void *)(param_2 + uVar5 + 0xf8),&local_28,1);
    uVar2 = *(undefined4 *)(param_2 + 0xd0);
    local_28 = (undefined1)uVar2;
    local_27 = (undefined1)((uint)uVar2 >> 8);
    local_26 = (undefined1)((uint)uVar2 >> 0x10);
    local_25 = (undefined1)((uint)uVar2 >> 0x18);
    uVar5 = *(ulong *)(param_2 + 0xf0);
    uVar1 = uVar5 + 4;
    if (uVar5 + 4 <= uVar5) {
      uVar1 = uVar5;
    }
    if (0x34 < uVar1) goto LAB_7100212bec;
    *(ulong *)(param_2 + 0xf0) = uVar1;
    memcpy((void *)(param_2 + uVar5 + 0xf8),&local_28,4);
    if ((*(ushort *)(param_2 + 0x60) & 0x1f) == 0x10) goto LAB_7100212918;
LAB_7100212a90:
    uVar3 = *(ushort *)(param_2 + 0x60);
  }
  else {
    if ((*(ushort *)(param_2 + 0x60) & 0x1f) != 0x10) goto LAB_7100212a90;
LAB_7100212918:
    if (*(long *)(param_2 + 0x98) != 0x10) goto LAB_7100212a90;
    local_28 = 1;
    uVar5 = *(ulong *)(param_2 + 0xf0);
    uVar1 = uVar5;
    if (uVar5 < uVar5 + 1) {
      uVar1 = uVar5 + 1;
    }
    if (0x34 < uVar1) goto LAB_7100212bec;
    *(ulong *)(param_2 + 0xf0) = uVar1;
    memcpy((void *)(param_2 + uVar5 + 0xf8),&local_28,1);
    local_28 = 0x10;
    uVar5 = *(ulong *)(param_2 + 0xf0);
    uVar1 = uVar5;
    if (uVar5 < uVar5 + 1) {
      uVar1 = uVar5 + 1;
    }
    if (0x34 < uVar1) goto LAB_7100212bec;
    *(ulong *)(param_2 + 0xf0) = uVar1;
    memcpy((void *)(param_2 + uVar5 + 0xf8),&local_28,1);
    sVar4 = *(size_t *)(param_2 + 0x98);
    if (sVar4 == 0) goto LAB_7100212a90;
    uVar5 = *(ulong *)(param_2 + 0xf0);
    uVar1 = uVar5 + sVar4;
    if (uVar5 + sVar4 <= uVar5) {
      uVar1 = uVar5;
    }
    if (0x34 < uVar1) goto LAB_7100212bec;
    *(ulong *)(param_2 + 0xf0) = uVar1;
    memcpy((void *)(param_2 + uVar5 + 0xf8),(void *)(param_2 + 0x88),sVar4);
    uVar3 = *(ushort *)(param_2 + 0x60);
  }
  if ((uVar3 & 0x1f) == 1) {
    local_28 = 0x80;
    uVar5 = *(ulong *)(param_2 + 0xf0);
    uVar1 = uVar5;
    if (uVar5 < uVar5 + 1) {
      uVar1 = uVar5 + 1;
    }
    if (0x34 < uVar1) goto LAB_7100212bec;
    *(ulong *)(param_2 + 0xf0) = uVar1;
    memcpy((void *)(param_2 + uVar5 + 0xf8),&local_28,1);
    local_28 = 0x10;
    uVar5 = *(ulong *)(param_2 + 0xf0);
    uVar1 = uVar5;
    if (uVar5 < uVar5 + 1) {
      uVar1 = uVar5 + 1;
    }
    if (0x34 < uVar1) goto LAB_7100212bec;
    *(ulong *)(param_2 + 0xf0) = uVar1;
    memcpy((void *)(param_2 + uVar5 + 0xf8),&local_28,1);
    sVar4 = *(size_t *)(param_2 + 0x58);
    if (sVar4 != 0) {
      uVar5 = *(ulong *)(param_2 + 0xf0);
      uVar1 = uVar5 + sVar4;
      if (uVar5 + sVar4 <= uVar5) {
        uVar1 = uVar5;
      }
      if (0x34 < uVar1) goto LAB_7100212bec;
      *(ulong *)(param_2 + 0xf0) = uVar1;
      memcpy((void *)(param_2 + uVar5 + 0xf8),(void *)(param_2 + 0x48),sVar4);
    }
  }
  if (((*(ushort *)(param_2 + 0x60) & 0x1f) != 3) || (*(int *)(param_2 + 0xa8) == 0)) {
    return 1;
  }
  local_28 = 5;
  uVar5 = *(ulong *)(param_2 + 0xf0);
  uVar1 = uVar5;
  if (uVar5 < uVar5 + 1) {
    uVar1 = uVar5 + 1;
  }
  if (uVar1 < 0x35) {
    *(ulong *)(param_2 + 0xf0) = uVar1;
    memcpy((void *)(param_2 + uVar5 + 0xf8),&local_28,1);
    local_28 = 1;
    uVar5 = *(ulong *)(param_2 + 0xf0);
    uVar1 = uVar5;
    if (uVar5 < uVar5 + 1) {
      uVar1 = uVar5 + 1;
    }
    if (uVar1 < 0x35) {
      *(ulong *)(param_2 + 0xf0) = uVar1;
      memcpy((void *)(param_2 + uVar5 + 0xf8),&local_28,1);
      local_28 = (undefined1)*(undefined4 *)(param_2 + 0xa8);
      uVar5 = *(ulong *)(param_2 + 0xf0);
      uVar1 = uVar5;
      if (uVar5 < uVar5 + 1) {
        uVar1 = uVar5 + 1;
      }
      if (uVar1 < 0x35) {
        *(ulong *)(param_2 + 0xf0) = uVar1;
        memcpy((void *)(param_2 + uVar5 + 0xf8),&local_28,1);
        return 1;
      }
    }
  }
LAB_7100212bec:
  FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/LiteBuffer.h",0x4e,0xe0000019,0);
  return 0;
}

