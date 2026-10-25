// addr:      7100275400
// offset:    0x275400
// name:      FUN_7100275400
// mangled:   
// signature: undefined __cdecl FUN_7100275400(long param_1, int * param_2)


void FUN_7100275400(long param_1,int *param_2)

{
  uint uVar1;
  uint *puVar2;
  long *plVar3;
  int iVar4;
  code *pcVar5;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  plVar3 = &DAT_71052af138;
  if (DAT_71052af1d8 != '\0') {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar2;
    if (uVar1 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) {
        FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
        return;
      }
      plVar3 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
    }
  }
  plVar3 = (long *)FUN_71001cd7d0(*(long *)(*(long *)(*plVar3 + 0x10) + 0x18),
                                  *(uint *)(param_1 + 0xa8));
  if (plVar3 == (long *)0x0) {
    FUN_71001d0a10((long *)(param_1 + 0xf8));
  }
  else {
    pcVar5 = FUN_710170d030;
    if (*param_2 < 0) {
      pcVar5 = (code *)0x0;
    }
    if (pcVar5 == (code *)0x0) {
      local_48 = *(undefined8 *)param_2;
      local_40 = *(undefined8 *)(param_2 + 2);
      uStack_38 = *(undefined8 *)(param_2 + 4);
      iVar4 = 3;
    }
    else {
      if (*(char *)(param_1 + 0x2a8) == '\0') {
        FUN_71001b2f70(*(long *)(param_1 + 0xc0),param_1 + 200);
        **(undefined8 **)(param_1 + 0x1b8) = *(undefined8 *)(param_1 + 0x1c0);
        **(undefined4 **)(param_1 + 0x1c8) = *(undefined4 *)(param_1 + 0x1d0);
      }
      else {
        FUN_71001b3cb0(*(long *)(param_1 + 0xc0),"invalidurl");
        **(undefined8 **)(param_1 + 0x1b8) = 0;
        **(undefined4 **)(param_1 + 0x1c8) = 0;
      }
      local_48 = *(undefined8 *)param_2;
      local_40 = *(undefined8 *)(param_2 + 2);
      uStack_38 = *(undefined8 *)(param_2 + 4);
      iVar4 = 2;
    }
    FUN_71001d0f00(plVar3,iVar4,&local_48,1);
  }
  FUN_71001cd870(param_1);
  return;
}

