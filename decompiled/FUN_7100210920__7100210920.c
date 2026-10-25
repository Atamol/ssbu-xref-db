// addr:      7100210920
// offset:    0x210920
// name:      FUN_7100210920
// mangled:   
// signature: undefined __cdecl FUN_7100210920(long param_1, ulong param_2, void * param_3)


void FUN_7100210920(long param_1,ulong param_2,void *param_3)

{
  undefined1 *__dest;
  ulong uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  uint *puVar4;
  long *plVar5;
  ulong local_70;
  undefined **local_68;
  undefined8 uStack_60;
  undefined **local_58;
  ulong local_50;
  undefined1 auStack_48 [8];
  undefined1 local_40;
  undefined8 local_38;
  
  if (DAT_71052af1d8 != '\0') {
    puVar4 = (uint *)FUN_7101717960(DAT_71052af1d0);
    if (*puVar4 != 0) {
      plVar5 = *(long **)(*(long *)(&DAT_71052af4e8 + (param_2 & 0xffffffff) * 0x2e8) +
                          (ulong)*puVar4 * 0x168 + 0x100);
      goto joined_r0x0071002109c4;
    }
  }
  plVar5 = *(long **)(&DAT_71052af5f0 + (param_2 & 0xffffffff) * 0x2e8);
joined_r0x0071002109c4:
  if (plVar5 == (long *)0x0) {
    memset(param_3,0xef,0x10);
    return;
  }
  local_40 = 0;
  local_68 = &PTR_FUN_7104f597f8;
  uStack_60 = 0;
  local_58 = &PTR_FUN_7104f59838;
  uVar3 = FUN_71001bef20(param_1 + 0x140);
  local_38 = (undefined1 *)CONCAT44(local_38._4_4_,uVar3);
  local_50 = 4;
  memcpy(auStack_48,&local_38,4);
  uVar2 = FUN_71001beb30(param_1 + 0x140);
  uVar1 = local_50 + 2;
  if (local_50 + 2 <= local_50) {
    uVar1 = local_50;
  }
  local_38 = (undefined1 *)CONCAT71(CONCAT61(local_38._2_6_,(char)((ushort)uVar2 >> 8)),(char)uVar2)
  ;
  if (uVar1 < 7) {
    __dest = auStack_48 + local_50;
    local_50 = uVar1;
    memcpy(__dest,&local_38,2);
  }
  else {
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/LiteBuffer.h",0x4e,0xe0000019,0);
  }
  local_38 = auStack_48;
  local_70 = local_50;
  (**(code **)(*plVar5 + 0x18))(plVar5,&local_38,&local_70,1,param_3);
  *(undefined8 *)((long)param_3 + 0x10) = 0x10;
  return;
}

