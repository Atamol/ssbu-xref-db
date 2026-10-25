// addr:      71001d4010
// offset:    0x1d4010
// name:      FUN_71001d4010
// mangled:   
// signature: undefined __cdecl FUN_71001d4010(long * param_1, int * param_2)


void FUN_71001d4010(long *param_1,int *param_2)

{
  uint uVar1;
  uint *puVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  plVar6 = &DAT_71052af138;
  if (DAT_71052af1d8 != '\0') {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar2;
    if (uVar1 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) {
        FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
        return;
      }
      plVar6 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
    }
  }
  uVar1 = *(uint *)(param_1 + 0x14);
  plVar4 = (long *)(*(long *)(*(long *)(*plVar6 + 0x10) + 0x18) + 0x50);
  plVar5 = (long *)*plVar4;
  plVar6 = plVar4;
  if (plVar5 != (long *)0x0) {
    do {
      if (*(uint *)(plVar5 + 4) >= uVar1) {
        plVar6 = plVar5;
      }
      plVar5 = (long *)plVar5[*(uint *)(plVar5 + 4) < uVar1];
    } while (plVar5 != (long *)0x0);
    if (((plVar6 != plVar4) && (*(uint *)(plVar6 + 4) <= uVar1)) &&
       (plVar6 = (long *)plVar6[5], plVar6 != (long *)0x0)) {
      pcVar3 = FUN_710170d030;
      if (*param_2 < 0) {
        pcVar3 = (code *)0x0;
      }
      if (pcVar3 == (code *)0x0) {
        local_48 = *(undefined8 *)param_2;
        local_40 = *(undefined8 *)(param_2 + 2);
        uStack_38 = *(undefined8 *)(param_2 + 4);
        FUN_71001d0f00(plVar6,3,&local_48,1);
        pcVar3 = *(code **)(*param_1 + 0x80);
      }
      else {
        local_48 = *(undefined8 *)param_2;
        local_40 = *(undefined8 *)(param_2 + 2);
        uStack_38 = *(undefined8 *)(param_2 + 4);
        FUN_71001d0f00(plVar6,2,&local_48,1);
        pcVar3 = *(code **)(*param_1 + 0x78);
      }
      (*pcVar3)(param_1,plVar6);
      *(undefined4 *)(param_1 + 8) = 5;
      pcVar3 = (code *)param_1[5];
      goto joined_r0x0071001d414c;
    }
  }
  FUN_71001d0a10((long *)param_1[0x16]);
  (**(code **)(*param_1 + 0x88))(param_1);
  *(undefined4 *)(param_1 + 8) = 5;
  pcVar3 = (code *)param_1[5];
joined_r0x0071001d414c:
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)(param_1,param_1 + 6);
  }
  return;
}

