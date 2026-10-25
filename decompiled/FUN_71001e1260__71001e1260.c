// addr:      71001e1260
// offset:    0x1e1260
// name:      FUN_71001e1260
// mangled:   
// signature: undefined8 __cdecl FUN_71001e1260(long param_1, long * param_2, long param_3, long param_4)


undefined8 FUN_71001e1260(long param_1,long *param_2,long param_3,long param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint *puVar7;
  long lVar8;
  long *plVar9;
  undefined4 local_34;
  
  bVar4 = FUN_71001ccd00(param_2);
  if (!bVar4) {
    return 0;
  }
  FUN_71001b2f70(param_1 + 8,param_3);
  *(long *)(param_1 + 0x30) = param_4;
  FUN_71001b52b0(param_4,0xf);
  puVar5 = FUN_71001af850(0x120);
  uVar3 = DAT_7104f57808;
  uVar2 = DAT_7104f57804;
  if (puVar5 != (undefined8 *)0x0) {
    FUN_71001d38d0(puVar5,0);
    *(undefined4 *)(puVar5 + 0x14) = 0;
    *puVar5 = &PTR_FUN_7104f574b8;
    local_34 = 0x80010001;
    FUN_71001b4200((undefined4 *)(puVar5 + 0x15),&local_34);
    puVar5[0x18] = 0;
    FUN_71001b0350(puVar5 + 0x19,1,1);
    *(undefined4 *)(puVar5 + 0x22) = uVar2;
    *(undefined4 *)((long)puVar5 + 0x114) = uVar3;
    puVar5[0x19] = &PTR_FUN_7104f551a8;
    puVar6 = FUN_71001af850(0x28);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &PTR_FUN_7104f592e8;
      puVar6[2] = FUN_71001e11e0;
      puVar6[3] = 0;
      puVar6[4] = param_1;
    }
    puVar5[0x23] = puVar6;
    FUN_71001e02d0();
  }
  FUN_71001e1020((long)puVar5,(int)param_2[3]);
  plVar9 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_71001e13d0:
    if ((*plVar9 != 0) && (lVar8 = *(long *)(*plVar9 + 0x10), lVar8 != 0)) {
      lVar8 = *(long *)(lVar8 + 0x10);
      goto LAB_71001e140c;
    }
  }
  else {
    puVar7 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar7;
    if (uVar1 == 0) goto LAB_71001e13d0;
    if ((ulong)uVar1 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar9 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
      goto LAB_71001e13d0;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
  }
  lVar8 = 0;
LAB_71001e140c:
  FUN_71001ccdf0(lVar8,(long)puVar5,0);
  return 1;
}

