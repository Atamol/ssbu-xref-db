// addr:      7100240370
// offset:    0x240370
// name:      FUN_7100240370
// mangled:   
// signature: undefined __cdecl FUN_7100240370(undefined8 * param_1, undefined4 param_2, undefined8 param_3, long param_4)


void FUN_7100240370(undefined8 *param_1,undefined4 param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  uint *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined **local_60;
  code *pcStack_58;
  undefined8 local_50;
  undefined1 *puStack_48;
  undefined4 local_34;
  
  FUN_71001d38d0(param_1,2);
  *param_1 = &PTR_FUN_7104f5b7f8;
  param_1[0x19] = &PTR_FUN_710523be40;
  *(undefined4 *)(param_1 + 0x1a) = 1;
  *(undefined1 *)((long)param_1 + 0xd4) = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x19] = &PTR_FUN_7104f56058;
  param_1[0x1d] = param_1 + 0x1d;
  param_1[0x1e] = param_1 + 0x1d;
  local_60 = (undefined **)CONCAT44(local_60._4_4_,0x80010001);
  FUN_71001b4200((undefined4 *)(param_1 + 0x24),(undefined4 *)&local_60);
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x14) = param_2;
  param_1[0x13] = 0x1000;
  param_1[0x15] = param_3;
  param_1[0x16] = param_4;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  if ((param_4 != 0) && (lVar3 = *(long *)(param_4 + 0x88), lVar3 != 0)) {
    plVar4 = &DAT_71052af138;
    if (DAT_71052af1d8 != '\0') {
      puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
      uVar1 = *puVar2;
      if (uVar1 != 0) {
        if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) {
          FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0)
          ;
          return;
        }
        plVar4 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
      }
    }
    lVar5 = *(long *)(*(long *)(*plVar4 + 0x10) + 0x18);
    local_34 = 0x80010004;
    FUN_71001b4200((undefined4 *)&local_60,&local_34);
    FUN_71001d3480(lVar5,lVar3,0,&local_60);
  }
  local_60 = &PTR_FUN_7104f56e28;
  pcStack_58 = FUN_7100240530;
  local_50 = 0;
  puStack_48 = &DAT_71044114cc;
  FUN_71001d3d60((long)param_1,(long)&local_60);
  return;
}

