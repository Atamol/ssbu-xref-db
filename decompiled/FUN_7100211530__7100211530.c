// addr:      7100211530
// offset:    0x211530
// name:      FUN_7100211530
// mangled:   
// signature: undefined4 __cdecl FUN_7100211530(undefined8 param_1, long param_2)


undefined4 FUN_7100211530(undefined8 param_1,long param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined1 *__src;
  size_t __n;
  ushort uVar3;
  ulong uVar4;
  undefined1 local_28;
  undefined1 local_27;
  undefined1 local_26;
  undefined1 local_25;
  
  uVar3 = *(ushort *)(param_2 + 0x60);
  *(undefined8 *)(param_2 + 0xf0) = 0;
  *(undefined8 *)(param_2 + 0xe0) = 0;
  *(undefined1 *)(param_2 + 0x130) = 0;
  if ((uVar3 & 0xe) == 0) {
    local_28 = 0;
    *(undefined8 *)(param_2 + 0xf0) = 1;
    memcpy((void *)(param_2 + 0xf8),&local_28,1);
    local_28 = 4;
    uVar4 = *(ulong *)(param_2 + 0xf0);
    uVar1 = uVar4;
    if (uVar4 < uVar4 + 1) {
      uVar1 = uVar4 + 1;
    }
    if (0x34 < uVar1) goto LAB_7100211cd0;
    *(ulong *)(param_2 + 0xf0) = uVar1;
    memcpy((void *)(param_2 + uVar4 + 0xf8),&local_28,1);
    uVar2 = *(undefined4 *)(param_2 + 0xd0);
    local_28 = (undefined1)uVar2;
    local_27 = (undefined1)((uint)uVar2 >> 8);
    local_26 = (undefined1)((uint)uVar2 >> 0x10);
    local_25 = (undefined1)((uint)uVar2 >> 0x18);
    uVar4 = *(ulong *)(param_2 + 0xf0);
    uVar1 = uVar4 + 4;
    if (uVar4 + 4 <= uVar4) {
      uVar1 = uVar4;
    }
    if (0x34 < uVar1) goto LAB_7100211cd0;
    *(ulong *)(param_2 + 0xf0) = uVar1;
    memcpy((void *)(param_2 + uVar4 + 0xf8),&local_28,4);
    local_28 = 1;
    uVar4 = *(ulong *)(param_2 + 0xf0);
    uVar1 = uVar4;
    if (uVar4 < uVar4 + 1) {
      uVar1 = uVar4 + 1;
    }
    if (0x34 < uVar1) goto LAB_7100211cd0;
    *(ulong *)(param_2 + 0xf0) = uVar1;
    memcpy((void *)(param_2 + uVar4 + 0xf8),&local_28,1);
    local_28 = 0x10;
    uVar4 = *(ulong *)(param_2 + 0xf0);
    uVar1 = uVar4;
    if (uVar4 < uVar4 + 1) {
      uVar1 = uVar4 + 1;
    }
    if (0x34 < uVar1) goto LAB_7100211cd0;
    *(ulong *)(param_2 + 0xf0) = uVar1;
    memcpy((void *)(param_2 + uVar4 + 0xf8),&local_28,1);
    __n = *(size_t *)(param_2 + 0x98);
    if (__n == 0) {
      local_28 = 0;
      uVar4 = *(ulong *)(param_2 + 0xf0);
      uVar1 = uVar4;
      if (uVar4 < uVar4 + 1) {
        uVar1 = uVar4 + 1;
      }
      if (0x34 < uVar1) goto LAB_7100211cd0;
      *(ulong *)(param_2 + 0xf0) = uVar1;
      memcpy((void *)(param_2 + uVar4 + 0xf8),&local_28,1);
      local_28 = 0;
      uVar4 = *(ulong *)(param_2 + 0xf0);
      uVar1 = uVar4;
      if (uVar4 < uVar4 + 1) {
        uVar1 = uVar4 + 1;
      }
      if (0x34 < uVar1) goto LAB_7100211cd0;
      *(ulong *)(param_2 + 0xf0) = uVar1;
      memcpy((void *)(param_2 + uVar4 + 0xf8),&local_28,1);
      local_28 = 0;
      uVar4 = *(ulong *)(param_2 + 0xf0);
      uVar1 = uVar4;
      if (uVar4 < uVar4 + 1) {
        uVar1 = uVar4 + 1;
      }
      if (0x34 < uVar1) goto LAB_7100211cd0;
      *(ulong *)(param_2 + 0xf0) = uVar1;
      memcpy((void *)(param_2 + uVar4 + 0xf8),&local_28,1);
      local_28 = 0;
      uVar4 = *(ulong *)(param_2 + 0xf0);
      uVar1 = uVar4;
      if (uVar4 < uVar4 + 1) {
        uVar1 = uVar4 + 1;
      }
      if (0x34 < uVar1) goto LAB_7100211cd0;
      *(ulong *)(param_2 + 0xf0) = uVar1;
      memcpy((void *)(param_2 + uVar4 + 0xf8),&local_28,1);
      local_28 = 0;
      uVar4 = *(ulong *)(param_2 + 0xf0);
      uVar1 = uVar4;
      if (uVar4 < uVar4 + 1) {
        uVar1 = uVar4 + 1;
      }
      if (0x34 < uVar1) goto LAB_7100211cd0;
      *(ulong *)(param_2 + 0xf0) = uVar1;
      memcpy((void *)(param_2 + uVar4 + 0xf8),&local_28,1);
      local_28 = 0;
      uVar4 = *(ulong *)(param_2 + 0xf0);
      uVar1 = uVar4;
      if (uVar4 < uVar4 + 1) {
        uVar1 = uVar4 + 1;
      }
      if (0x34 < uVar1) goto LAB_7100211cd0;
      *(ulong *)(param_2 + 0xf0) = uVar1;
      memcpy((void *)(param_2 + uVar4 + 0xf8),&local_28,1);
      local_28 = 0;
      uVar4 = *(ulong *)(param_2 + 0xf0);
      uVar1 = uVar4;
      if (uVar4 < uVar4 + 1) {
        uVar1 = uVar4 + 1;
      }
      if (0x34 < uVar1) goto LAB_7100211cd0;
      *(ulong *)(param_2 + 0xf0) = uVar1;
      memcpy((void *)(param_2 + uVar4 + 0xf8),&local_28,1);
      local_28 = 0;
      uVar4 = *(ulong *)(param_2 + 0xf0);
      uVar1 = uVar4;
      if (uVar4 < uVar4 + 1) {
        uVar1 = uVar4 + 1;
      }
      if (0x34 < uVar1) goto LAB_7100211cd0;
      *(ulong *)(param_2 + 0xf0) = uVar1;
      memcpy((void *)(param_2 + uVar4 + 0xf8),&local_28,1);
      local_28 = 0;
      uVar4 = *(ulong *)(param_2 + 0xf0);
      uVar1 = uVar4;
      if (uVar4 < uVar4 + 1) {
        uVar1 = uVar4 + 1;
      }
      if (0x34 < uVar1) goto LAB_7100211cd0;
      *(ulong *)(param_2 + 0xf0) = uVar1;
      memcpy((void *)(param_2 + uVar4 + 0xf8),&local_28,1);
      local_28 = 0;
      uVar4 = *(ulong *)(param_2 + 0xf0);
      uVar1 = uVar4;
      if (uVar4 < uVar4 + 1) {
        uVar1 = uVar4 + 1;
      }
      if (0x34 < uVar1) goto LAB_7100211cd0;
      *(ulong *)(param_2 + 0xf0) = uVar1;
      memcpy((void *)(param_2 + uVar4 + 0xf8),&local_28,1);
      local_28 = 0;
      uVar4 = *(ulong *)(param_2 + 0xf0);
      uVar1 = uVar4;
      if (uVar4 < uVar4 + 1) {
        uVar1 = uVar4 + 1;
      }
      if (0x34 < uVar1) goto LAB_7100211cd0;
      *(ulong *)(param_2 + 0xf0) = uVar1;
      memcpy((void *)(param_2 + uVar4 + 0xf8),&local_28,1);
      local_28 = 0;
      uVar4 = *(ulong *)(param_2 + 0xf0);
      uVar1 = uVar4;
      if (uVar4 < uVar4 + 1) {
        uVar1 = uVar4 + 1;
      }
      if (0x34 < uVar1) goto LAB_7100211cd0;
      *(ulong *)(param_2 + 0xf0) = uVar1;
      memcpy((void *)(param_2 + uVar4 + 0xf8),&local_28,1);
      local_28 = 0;
      uVar4 = *(ulong *)(param_2 + 0xf0);
      uVar1 = uVar4;
      if (uVar4 < uVar4 + 1) {
        uVar1 = uVar4 + 1;
      }
      if (0x34 < uVar1) goto LAB_7100211cd0;
      *(ulong *)(param_2 + 0xf0) = uVar1;
      memcpy((void *)(param_2 + uVar4 + 0xf8),&local_28,1);
      local_28 = 0;
      uVar4 = *(ulong *)(param_2 + 0xf0);
      uVar1 = uVar4;
      if (uVar4 < uVar4 + 1) {
        uVar1 = uVar4 + 1;
      }
      if (0x34 < uVar1) goto LAB_7100211cd0;
      *(ulong *)(param_2 + 0xf0) = uVar1;
      memcpy((void *)(param_2 + uVar4 + 0xf8),&local_28,1);
      local_28 = 0;
      uVar4 = *(ulong *)(param_2 + 0xf0);
      uVar1 = uVar4;
      if (uVar4 < uVar4 + 1) {
        uVar1 = uVar4 + 1;
      }
      if (0x34 < uVar1) goto LAB_7100211cd0;
      *(ulong *)(param_2 + 0xf0) = uVar1;
      memcpy((void *)(param_2 + uVar4 + 0xf8),&local_28,1);
      local_28 = 0;
      uVar4 = *(ulong *)(param_2 + 0xf0);
      uVar1 = uVar4;
      if (uVar4 < uVar4 + 1) {
        uVar1 = uVar4 + 1;
      }
      if (0x34 < uVar1) goto LAB_7100211cd0;
      *(ulong *)(param_2 + 0xf0) = uVar1;
      __src = &local_28;
      __n = 1;
    }
    else {
      uVar4 = *(ulong *)(param_2 + 0xf0);
      uVar1 = uVar4 + __n;
      if (uVar4 + __n <= uVar4) {
        uVar1 = uVar4;
      }
      if (0x34 < uVar1) goto LAB_7100211cd0;
      __src = (undefined1 *)(param_2 + 0x88);
      *(ulong *)(param_2 + 0xf0) = uVar1;
    }
    memcpy((void *)(param_2 + uVar4 + 0xf8),__src,__n);
    if (((*(ushort *)(param_2 + 0x60) & 0xf) == 1) && (*(short *)(param_2 + 0x80) != 0)) {
      local_28 = 3;
      uVar4 = *(ulong *)(param_2 + 0xf0);
      uVar1 = uVar4;
      if (uVar4 < uVar4 + 1) {
        uVar1 = uVar4 + 1;
      }
      if (0x34 < uVar1) goto LAB_7100211cd0;
      *(ulong *)(param_2 + 0xf0) = uVar1;
      memcpy((void *)(param_2 + uVar4 + 0xf8),&local_28,1);
      local_28 = 2;
      uVar4 = *(ulong *)(param_2 + 0xf0);
      uVar1 = uVar4;
      if (uVar4 < uVar4 + 1) {
        uVar1 = uVar4 + 1;
      }
      if (0x34 < uVar1) goto LAB_7100211cd0;
      *(ulong *)(param_2 + 0xf0) = uVar1;
      memcpy((void *)(param_2 + uVar4 + 0xf8),&local_28,1);
      local_28 = (undefined1)*(undefined2 *)(param_2 + 0x80);
      local_27 = (undefined1)((ushort)*(undefined2 *)(param_2 + 0x80) >> 8);
      uVar4 = *(ulong *)(param_2 + 0xf0);
      uVar1 = uVar4 + 2;
      if (uVar4 + 2 <= uVar4) {
        uVar1 = uVar4;
      }
      if (0x34 < uVar1) goto LAB_7100211cd0;
      *(ulong *)(param_2 + 0xf0) = uVar1;
      memcpy((void *)(param_2 + uVar4 + 0xf8),&local_28,2);
    }
    local_28 = 4;
    uVar4 = *(ulong *)(param_2 + 0xf0);
    uVar1 = uVar4;
    if (uVar4 < uVar4 + 1) {
      uVar1 = uVar4 + 1;
    }
    if (0x34 < uVar1) goto LAB_7100211cd0;
    *(ulong *)(param_2 + 0xf0) = uVar1;
    memcpy((void *)(param_2 + uVar4 + 0xf8),&local_28,1);
    local_28 = 1;
    uVar4 = *(ulong *)(param_2 + 0xf0);
    uVar1 = uVar4;
    if (uVar4 < uVar4 + 1) {
      uVar1 = uVar4 + 1;
    }
    if (0x34 < uVar1) goto LAB_7100211cd0;
    *(ulong *)(param_2 + 0xf0) = uVar1;
    memcpy((void *)(param_2 + uVar4 + 0xf8),&local_28,1);
    local_28 = *(undefined1 *)(param_2 + 0xa3);
    uVar4 = *(ulong *)(param_2 + 0xf0);
    uVar1 = uVar4;
    if (uVar4 < uVar4 + 1) {
      uVar1 = uVar4 + 1;
    }
    if (0x34 < uVar1) goto LAB_7100211cd0;
    *(ulong *)(param_2 + 0xf0) = uVar1;
    memcpy((void *)(param_2 + uVar4 + 0xf8),&local_28,1);
    uVar3 = *(ushort *)(param_2 + 0x60);
  }
  if (((uVar3 & 0x1f) == 3) && (*(int *)(param_2 + 0xa8) != 0)) {
    local_28 = 5;
    uVar4 = *(ulong *)(param_2 + 0xf0);
    uVar1 = uVar4;
    if (uVar4 < uVar4 + 1) {
      uVar1 = uVar4 + 1;
    }
    if (0x34 < uVar1) goto LAB_7100211cd0;
    *(ulong *)(param_2 + 0xf0) = uVar1;
    memcpy((void *)(param_2 + uVar4 + 0xf8),&local_28,1);
    local_28 = 1;
    uVar4 = *(ulong *)(param_2 + 0xf0);
    uVar1 = uVar4;
    if (uVar4 < uVar4 + 1) {
      uVar1 = uVar4 + 1;
    }
    if (0x34 < uVar1) goto LAB_7100211cd0;
    *(ulong *)(param_2 + 0xf0) = uVar1;
    memcpy((void *)(param_2 + uVar4 + 0xf8),&local_28,1);
    local_28 = (undefined1)*(undefined4 *)(param_2 + 0xa8);
    uVar4 = *(ulong *)(param_2 + 0xf0);
    uVar1 = uVar4;
    if (uVar4 < uVar4 + 1) {
      uVar1 = uVar4 + 1;
    }
    if (0x34 < uVar1) goto LAB_7100211cd0;
    *(ulong *)(param_2 + 0xf0) = uVar1;
    memcpy((void *)(param_2 + uVar4 + 0xf8),&local_28,1);
    uVar3 = *(ushort *)(param_2 + 0x60);
  }
  if ((uVar3 & 0xf) != 2) {
    return 1;
  }
  local_28 = 2;
  uVar4 = *(ulong *)(param_2 + 0xf0);
  uVar1 = uVar4;
  if (uVar4 < uVar4 + 1) {
    uVar1 = uVar4 + 1;
  }
  if (uVar1 < 0x35) {
    *(ulong *)(param_2 + 0xf0) = uVar1;
    local_28 = 2;
    memcpy((void *)(param_2 + uVar4 + 0xf8),&local_28,1);
    local_28 = 1;
    uVar4 = *(ulong *)(param_2 + 0xf0);
    uVar1 = uVar4;
    if (uVar4 < uVar4 + 1) {
      uVar1 = uVar4 + 1;
    }
    if (uVar1 < 0x35) {
      *(ulong *)(param_2 + 0xf0) = uVar1;
      memcpy((void *)(param_2 + uVar4 + 0xf8),&local_28,1);
      local_28 = *(undefined1 *)(param_2 + 0xa0);
      uVar4 = *(ulong *)(param_2 + 0xf0);
      uVar1 = uVar4;
      if (uVar4 < uVar4 + 1) {
        uVar1 = uVar4 + 1;
      }
      if (uVar1 < 0x35) {
        *(ulong *)(param_2 + 0xf0) = uVar1;
        memcpy((void *)(param_2 + uVar4 + 0xf8),&local_28,1);
        return 1;
      }
    }
  }
LAB_7100211cd0:
  FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/LiteBuffer.h",0x4e,0xe0000019,0);
  return 0;
}

