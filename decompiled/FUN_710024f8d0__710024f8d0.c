// addr:      710024f8d0
// offset:    0x24f8d0
// name:      FUN_710024f8d0
// mangled:   
// signature: uint __cdecl FUN_710024f8d0(long param_1, long * param_2, void * param_3, int * param_4)


uint FUN_710024f8d0(long param_1,long *param_2,void *param_3,int *param_4)

{
  bool bVar1;
  uint *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  undefined8 auStack_e8 [3];
  undefined8 auStack_d0 [3];
  undefined8 uStack_b8;
  char local_b0;
  uint local_44;
  
  FUN_71001e6720(&uStack_b8);
  plVar7 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_710024f954:
    if ((*plVar7 == 0) || (lVar6 = *(long *)(*plVar7 + 0x10), lVar6 == 0)) goto LAB_710024f984;
    lVar6 = *(long *)(lVar6 + 0x10);
  }
  else {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar8 = *puVar2;
    if (uVar8 == 0) goto LAB_710024f954;
    if ((ulong)uVar8 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar7 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar8 * 8) + 0x20);
      goto LAB_710024f954;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_710024f984:
    lVar6 = 0;
  }
  plVar7 = (long *)(lVar6 + 0x78);
  (**(code **)(*plVar7 + 0x10))(plVar7);
  FUN_710022b480((long)&uStack_b8,*(ushort *)(param_1 + 0x48),1);
  uVar3 = FUN_710022b390((long)&uStack_b8,param_2);
  if ((uVar3 & 1) == 0) {
    param_4 = (int *)0x0;
LAB_710024fa00:
    bVar1 = false;
  }
  else {
    FUN_710022b400((long)&uStack_b8,0xb);
    FUN_71001d0460((long)&uStack_b8,param_3,4);
    if (local_b0 == '\0') {
      local_44 = param_4[2] - *param_4;
      FUN_71001d0460((long)&uStack_b8,&local_44,4);
      if (*(void **)param_4 != *(void **)(param_4 + 2)) {
        FUN_71001d0460((long)&uStack_b8,*(void **)param_4,(ulong)local_44);
      }
      if (local_b0 == '\0') {
        DAT_71052b5d08 = FUN_7100252f90;
        if ((*(char *)(param_1 + 0x70) != '\0') && (bVar1 = FUN_710022b500(param_1,0x10), bVar1)) {
          bVar1 = true;
          goto LAB_710024fa74;
        }
        uVar3 = FUN_710022a7f0(param_1,(long)param_2,(long)&uStack_b8);
        param_4 = (int *)(uVar3 & 0xffffffff);
        goto LAB_710024fa00;
      }
      local_44 = 0x8001000a;
      FUN_71001b4200((undefined4 *)auStack_e8,&local_44);
      puVar5 = auStack_e8;
    }
    else {
      local_44 = 0x8001000a;
      FUN_71001b4200((undefined4 *)auStack_d0,&local_44);
      puVar5 = auStack_d0;
    }
    FUN_71001d0c90((long)param_2,puVar5);
    bVar1 = false;
    param_4 = (int *)0x1;
  }
LAB_710024fa74:
  uVar8 = (uint)param_4;
  (**(code **)(*plVar7 + 0x20))(plVar7);
  if (bVar1) {
    uVar4 = FUN_710022a7f0(param_1,(long)param_2,(long)&uStack_b8);
    uVar8 = (uint)uVar4;
  }
  FUN_71001e6910(&uStack_b8);
  return uVar8 & 1;
}

