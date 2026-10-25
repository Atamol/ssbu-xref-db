// addr:      71001fadb0
// offset:    0x1fadb0
// name:      FUN_71001fadb0
// mangled:   
// signature: bool __cdecl FUN_71001fadb0(long param_1, uint param_2, undefined2 param_3, long param_4)


bool FUN_71001fadb0(long param_1,uint param_2,undefined2 param_3,long param_4)

{
  uint uVar1;
  uint *puVar2;
  long lVar3;
  long *plVar4;
  uint local_48;
  undefined2 local_44;
  
  plVar4 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_71001fae2c:
    if ((*plVar4 != 0) && (lVar3 = *(long *)(*plVar4 + 0x10), lVar3 != 0)) {
      lVar3 = *(long *)(lVar3 + 0x10);
      goto LAB_71001fae60;
    }
  }
  else {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar2;
    if (uVar1 == 0) goto LAB_71001fae2c;
    if ((ulong)uVar1 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar4 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
      goto LAB_71001fae2c;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
  }
  lVar3 = 0;
LAB_71001fae60:
  plVar4 = (long *)(lVar3 + 0x78);
  (**(code **)(*plVar4 + 0x10))(plVar4);
  local_48 = param_2;
  local_44 = param_3;
  lVar3 = FUN_71001fa660(param_1,&local_48);
  if (lVar3 != 0) {
    FUN_71001c3a70(lVar3,param_4);
  }
  (**(code **)(*plVar4 + 0x20))(plVar4);
  return lVar3 != 0;
}

