// addr:      71002105a0
// offset:    0x2105a0
// name:      FUN_71002105a0
// mangled:   
// signature: undefined __cdecl FUN_71002105a0(long param_1, long param_2, int param_3, long param_4, ulong param_5, void * param_6, undefined1 * param_7)


void FUN_71002105a0(long param_1,long param_2,int param_3,long param_4,ulong param_5,void *param_6,
                   undefined1 *param_7)

{
  undefined4 uVar1;
  ushort uVar2;
  uint *puVar3;
  size_t __n;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  ulong local_d0;
  undefined1 auStack_c8 [24];
  undefined1 local_b0;
  undefined8 local_a8;
  long local_a0;
  ulong local_98;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  undefined1 *local_70;
  long local_68;
  long local_60;
  undefined1 local_58;
  undefined1 local_57;
  undefined1 local_56;
  undefined1 local_55;
  
  *(undefined8 *)(param_7 + 0x10) = 0x10;
  switch(param_3) {
  case 0:
    memset(param_7,0xab,0x10);
    return;
  case 1:
    FUN_7100210920(param_2,param_5 & 0xffffffff,param_7);
    return;
  default:
    goto switchD_71002105ec_caseD_2;
  case 4:
  case 5:
  case 6:
    break;
  case 7:
    FUN_7100210b00(param_7,(uint *)(param_1 + 8),(long *)(param_1 + 0x9d8));
    return;
  }
  uVar6 = param_5 & 0xffffffff;
  if (DAT_71052af1d8 == '\0') {
LAB_710021065c:
    plVar5 = *(long **)(&DAT_71052af5f0 + uVar6 * 0x2e8);
  }
  else {
    puVar3 = (uint *)FUN_7101717960(DAT_71052af1d0);
    if (*puVar3 == 0) goto LAB_710021065c;
    plVar5 = *(long **)(*(long *)(&DAT_71052af4e8 + uVar6 * 0x2e8) + (ulong)*puVar3 * 0x168 + 0x100)
    ;
  }
  if (plVar5 == (long *)0x0) {
    memset(param_7,0xef,0x10);
    return;
  }
  local_80 = param_2 + 0xb4;
  local_78 = 0;
  local_a8 = 8;
  local_a0 = 0;
  if ((param_3 == 5) && (param_4 != 0)) {
    local_78 = FUN_71001d6920(param_4);
    local_a0 = FUN_71001cbc40(param_4);
  }
  local_b0 = 0;
  local_d0 = 0;
  if (((*(ushort *)(param_2 + 0x60) & 0x1f) != 0x10) || ((*(byte *)(param_2 + 0xd1) & 1) == 0)) {
    if (DAT_71052af1d8 == '\0') {
LAB_71002107a0:
      lVar4 = uVar6 * 0x2e8 + 0x71052af4f0;
    }
    else {
      puVar3 = (uint *)FUN_7101717960(DAT_71052af1d0);
      if (*puVar3 == 0) goto LAB_71002107a0;
      lVar4 = *(long *)(&DAT_71052af4e8 + uVar6 * 0x2e8) + (ulong)*puVar3 * 0x168;
    }
    uVar1 = *(undefined4 *)(lVar4 + 0x28);
    local_58 = (undefined1)uVar1;
    local_55 = (undefined1)((uint)uVar1 >> 0x18);
    local_57 = (undefined1)((uint)uVar1 >> 8);
    local_56 = (undefined1)((uint)uVar1 >> 0x10);
    local_d0 = 4;
    memcpy(auStack_c8,&local_58,4);
  }
  if ((((param_6 != (void *)0x0) && (uVar2 = *(ushort *)(param_2 + 0x60), (uVar2 & 0x600) == 0)) &&
      ((uVar2 & 0xf) != 0)) &&
     (((uVar2 & 0xf) != 5 && (__n = *(size_t *)((long)param_6 + 0x10), __n != 0)))) {
    uVar6 = local_d0 + __n;
    if (local_d0 + __n <= local_d0) {
      uVar6 = local_d0;
    }
    if (uVar6 < 0x15) {
      memcpy(auStack_c8 + local_d0,param_6,__n);
      local_d0 = uVar6;
    }
    else {
      FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/LiteBuffer.h",0x4e,0xe0000019,0);
    }
  }
  local_70 = (undefined1 *)0x0;
  if (param_3 != 6) {
    local_70 = auStack_c8;
  }
  local_98 = 0;
  if (param_3 != 6) {
    local_98 = local_d0;
  }
  local_90 = *(long *)(param_2 + 0xf0);
  local_68 = 0;
  if (local_90 != 0) {
    local_68 = param_2 + 0xf8;
  }
  lVar4 = *(long *)(param_2 + 0x138);
  if (lVar4 == 0) {
    local_88 = 0;
    local_60 = 0;
  }
  else {
    local_88 = *(long *)(lVar4 + 0x18);
    if (local_88 == 0) {
      local_60 = 0;
    }
    else {
      local_60 = *(long *)(lVar4 + 0x10) + *(long *)(lVar4 + 0x28);
    }
  }
  (**(code **)(*plVar5 + 0x18))(plVar5,&local_80,&local_a8,5,param_7);
  *(undefined8 *)(param_7 + 0x10) = 0x10;
switchD_71002105ec_caseD_2:
  return;
}

