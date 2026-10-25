// addr:      710023d9c0
// offset:    0x23d9c0
// name:      FUN_710023d9c0
// mangled:   
// signature: undefined __cdecl FUN_710023d9c0(long param_1, undefined4 * param_2)


void FUN_710023d9c0(long param_1,undefined4 *param_2)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  uint *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  int iVar7;
  code *pcVar8;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  piVar1 = (int *)(param_1 + 0x2a0);
  FUN_71001b4300(piVar1,param_2);
  pcVar8 = FUN_710170d030;
  pcVar2 = pcVar8;
  if (*(int *)(param_1 + 0x2a0) < 0) {
    pcVar2 = (code *)0x0;
  }
  if ((pcVar2 == (code *)0x0) && (*(long *)(*(long *)(param_1 + 0x2f0) + 0xc0) != 0)) {
    plVar5 = (long *)(param_1 + 0x138);
    FUN_71001d1590(plVar5);
    uVar3 = FUN_710023a020(*(long *)(param_1 + 0x2f0),plVar5,
                           *(long *)(*(long *)(param_1 + 0x2f0) + 0xc0));
    if ((uVar3 & 1) != 0) {
      FUN_71001d6410(param_1,2);
      puVar6 = FUN_71001af850(0x20);
      if (puVar6 != (undefined8 *)0x0) {
        puVar6[2] = 0;
        puVar6[3] = &DAT_71044114cc;
        *puVar6 = &PTR_FUN_7104f56e28;
        puVar6[1] = FUN_7100240210;
      }
      FUN_71001d4200(param_1,(long)plVar5,puVar6);
      return;
    }
  }
  plVar5 = &DAT_71052af138;
  if (DAT_71052af1d8 != '\0') {
    puVar4 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar3 = *puVar4;
    if (uVar3 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar3) {
        FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
        return;
      }
      plVar5 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar3 * 8) + 0x20);
    }
  }
  plVar5 = (long *)FUN_71001cd7d0(*(long *)(*(long *)(*plVar5 + 0x10) + 0x18),
                                  *(uint *)(param_1 + 0xa0));
  if (plVar5 != (long *)0x0) {
    if (*(undefined4 **)(param_1 + 0x478) != (undefined4 *)0x0) {
      FUN_71001b4300(*(undefined4 **)(param_1 + 0x478),piVar1);
    }
    if (*piVar1 < 0) {
      pcVar8 = (code *)0x0;
    }
    if (pcVar8 == (code *)0x0) {
      local_58 = *(undefined8 *)piVar1;
      local_50 = *(undefined8 *)(param_1 + 0x2a8);
      uStack_48 = *(undefined8 *)(param_1 + 0x2b0);
      iVar7 = 3;
    }
    else {
      iVar7 = 2;
      **(undefined8 **)(param_1 + 0x130) = *(undefined8 *)(*(long *)(param_1 + 0x2f0) + 0xc0);
      uStack_48 = *(undefined8 *)(param_1 + 0x2b0);
      local_58 = *(undefined8 *)piVar1;
      local_50 = *(undefined8 *)(param_1 + 0x2a8);
    }
    FUN_71001d0f00(plVar5,iVar7,&local_58,1);
  }
  FUN_71001cd870(param_1);
  return;
}

