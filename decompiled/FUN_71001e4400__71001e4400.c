// addr:      71001e4400
// offset:    0x1e4400
// name:      FUN_71001e4400
// mangled:   
// signature: undefined4 __cdecl FUN_71001e4400(long param_1, long param_2)


undefined4 FUN_71001e4400(long param_1,long param_2)

{
  uint uVar1;
  bool bVar2;
  undefined4 uVar3;
  uint *puVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  undefined1 auVar12 [16];
  undefined **local_98;
  undefined1 local_90 [16];
  undefined1 *local_80;
  undefined8 uStack_78;
  undefined ***local_68;
  
  plVar10 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_71001e447c:
    if ((*plVar10 != 0) && (lVar9 = *(long *)(*plVar10 + 0x10), lVar9 != 0)) {
      lVar9 = *(long *)(lVar9 + 0x10);
      goto LAB_71001e44b0;
    }
  }
  else {
    puVar4 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar4;
    if (uVar1 == 0) goto LAB_71001e447c;
    if ((ulong)uVar1 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar10 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
      goto LAB_71001e447c;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
  }
  lVar9 = 0;
LAB_71001e44b0:
  plVar10 = (long *)(lVar9 + 0x78);
  (**(code **)(*plVar10 + 0x10))(plVar10);
  if ((*(long *)(param_1 + 0x10) == 0) ||
     (uVar5 = FUN_71001f2ba0(param_2,"RVCID",0), (int)uVar5 == 0)) {
LAB_71001e485c:
    uVar3 = 0;
  }
  else {
    puVar6 = FUN_71001b1400();
    lVar9 = FUN_71001b17c0((long)puVar6);
    FUN_71001b3130(lVar9,2);
    puVar6 = FUN_71001b1400();
    lVar9 = FUN_71001b17c0((long)puVar6);
    FUN_71001b3140(lVar9,2);
    uVar1 = *(uint *)(param_1 + 0x148);
    *(uint *)(param_1 + 0x148) = uVar1 + 1;
    FUN_71001f2a80((undefined4 *)&local_98,param_2,"PRID",(ulong)uVar1);
    plVar8 = &DAT_71052af128;
    if (DAT_71052af1d8 != '\0') {
      puVar4 = (uint *)FUN_7101717960(DAT_71052af1d0);
      uVar1 = *puVar4;
      if (uVar1 != 0) {
        if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) {
          uVar3 = FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,
                                 0xe0000003,0);
          return uVar3;
        }
        plVar8 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x10);
      }
    }
    lVar9 = (**(code **)(**(long **)(*(long *)(*plVar8 + 0x10) + 0xe8) + 0x80))();
    if ((((*(char *)(lVar9 + 0x10) != '\0') &&
         (bVar2 = FUN_71001b4e00(*(char **)(param_1 + 0x180),""), !bVar2)) &&
        (*(short *)(param_1 + 400) != 0)) && (*(char *)(param_1 + 0x192) != '\0')) {
      puVar6 = FUN_71001b1400();
      lVar9 = FUN_71001b17c0((long)puVar6);
      FUN_71001b3130(lVar9,2);
      puVar6 = FUN_71001b1400();
      lVar9 = FUN_71001b17c0((long)puVar6);
      FUN_71001b3140(lVar9,2);
      FUN_71001f2a80((undefined4 *)&local_98,param_2,"R",1);
      local_90[0] = 0;
      uStack_78 = 0x10;
      local_98 = &PTR_FUN_710509cc08;
      local_80 = local_90;
      FUN_71001b47e0((long)&local_98,"Rsa",-1);
      FUN_710021bff0((long *)(param_2 + 0x30),(long)&local_98);
      local_98 = &PTR_FUN_710509cc08;
      FUN_71001b4910((long)&local_98);
      uStack_78 = 0x10;
      local_90[0] = 0;
      local_98 = &PTR_FUN_710509cc08;
      local_80 = local_90;
      FUN_71001b47e0((long)&local_98,"Rsa",-1);
      local_68 = &local_98;
      auVar12 = FUN_710021c110((long *)(param_2 + 0x30),(long)&local_98,"",&local_68);
      FUN_71001b2f70(auVar12._0_8_ + 0x48,param_1 + 0x168);
      local_98 = &PTR_FUN_710509cc08;
      FUN_71001b4910((long)&local_98);
      FUN_71001f2a80((undefined4 *)&local_98,param_2,"Rsp",(ulong)*(ushort *)(param_1 + 400));
    }
    lVar9 = param_1 + 0x38;
    for (lVar11 = *(long *)(param_1 + 0x40); lVar9 != lVar11; lVar11 = *(long *)(lVar11 + 8)) {
      uVar5 = FUN_71001f2ba0(lVar11 + 0x10,"RVCID",0);
      uVar7 = FUN_71001f2ba0(param_2,"RVCID",0);
      if ((int)uVar5 == (int)uVar7) {
        if (lVar9 != lVar11) goto LAB_71001e485c;
        break;
      }
    }
    uVar5 = FUN_71001f2ba0(param_2,"RVCID",0);
    for (lVar11 = *(long *)(param_1 + 0x60); param_1 + 0x58 != lVar11;
        lVar11 = *(long *)(lVar11 + 8)) {
      uVar7 = FUN_71001f2ba0(lVar11 + 0x18,"RVCID",0);
      if ((int)uVar7 == (int)uVar5) goto LAB_71001e485c;
    }
    uVar5 = FUN_71001f2ba0(param_2,"RVCID",0);
    for (lVar11 = *(long *)(param_1 + 0x80); param_1 + 0x78 != lVar11;
        lVar11 = *(long *)(lVar11 + 8)) {
      uVar7 = FUN_71001f2ba0(lVar11 + 0x18,"RVCID",0);
      if ((int)uVar7 == (int)uVar5) goto LAB_71001e485c;
    }
    plVar8 = FUN_71001b1820(0x80);
    *plVar8 = 0;
    plVar8[2] = (long)&PTR_FUN_7104f57900;
    plVar8[6] = 0;
    plVar8[5] = (long)(plVar8 + 6);
    plVar8[9] = 0;
    plVar8[7] = 0;
    plVar8[8] = (long)(plVar8 + 9);
    plVar8[0xc] = 0;
    plVar8[10] = 0;
    plVar8[0xb] = (long)(plVar8 + 0xc);
    plVar8[0xd] = 0;
    plVar8[0xe] = 0;
    *(undefined2 *)(plVar8 + 0xf) = 1;
    *(undefined1 *)((long)plVar8 + 0x7a) = 0;
    puVar6 = FUN_71001af850(0x90);
    if (puVar6 != (undefined8 *)0x0) {
      FUN_71001beb40(puVar6);
    }
    plVar8[3] = (long)puVar6;
    FUN_71001f1f40((long)(plVar8 + 2),param_2);
    plVar8[1] = lVar9;
    lVar9 = *(long *)(param_1 + 0x38);
    *plVar8 = lVar9;
    *(long **)(lVar9 + 8) = plVar8;
    *(long **)(param_1 + 0x38) = plVar8;
    *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + 1;
    uVar3 = 1;
  }
  (**(code **)(*plVar10 + 0x20))(plVar10);
  return uVar3;
}

