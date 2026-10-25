// addr:      7100249cd0
// offset:    0x249cd0
// name:      FUN_7100249cd0
// mangled:   
// signature: undefined FUN_7100249cd0(void)


void FUN_7100249cd0(long param_1)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  long lVar4;
  long *plVar5;
  undefined **ppuStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined1 *puStack_38;
  undefined4 uStack_24;
  
  plVar5 = &DAT_71052af138;
  if (DAT_71052af1d8 != '\0') {
    puVar3 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar3;
    if (uVar1 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) {
        FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
        return;
      }
      plVar5 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
    }
  }
  lVar4 = FUN_71001cd7d0(*(long *)(*(long *)(*plVar5 + 0x10) + 0x18),*(uint *)(param_1 + 0xa0));
  if (lVar4 == 0) {
    uStack_24 = 0x80010004;
  }
  else {
    FUN_71001d4540(param_1 + 0xb0);
    FUN_71001d4590(param_1 + 0xb0);
    iVar2 = nn::account::EnsureNetworkServiceAccountIdTokenCacheAsync
                      ((AsyncContext *)(*(long *)(param_1 + 0x108) + 8),
                       *(UserHandle **)(param_1 + 0xe0));
    *(int *)(param_1 + 0xa8) = iVar2;
    if (iVar2 == 0) {
      *(undefined1 *)(param_1 + 0xa4) = 1;
      ppuStack_50 = &PTR_FUN_7104f56e28;
      pcStack_48 = FUN_7100249f60;
      uStack_40 = 0;
      puStack_38 = &DAT_71044114cc;
      FUN_71001d3d60(param_1,(long)&ppuStack_50);
      return;
    }
    uStack_24 = 0x80680010;
  }
  FUN_71001b4200((undefined4 *)&ppuStack_50,&uStack_24);
  FUN_7100249e20(param_1,(int *)&ppuStack_50);
  return;
}

