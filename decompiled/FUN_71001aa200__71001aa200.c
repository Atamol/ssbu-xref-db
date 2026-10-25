// addr:      71001aa200
// offset:    0x1aa200
// name:      FUN_71001aa200
// mangled:   
// signature: undefined8 __cdecl FUN_71001aa200(long * param_1)


undefined8 FUN_71001aa200(long *param_1)

{
  byte bVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  int local_50 [4];
  
  bVar1 = FUN_7100193560(DAT_71052adfc0);
  if (bVar1 < 0x20) {
    local_50[0] = 0;
    local_50[1] = 0x800;
    local_50[2] = 0;
    (**(code **)(*param_1 + 0x28))(param_1,local_50);
    plVar2 = (long *)FUN_7100193a30(DAT_71052adfc0);
    local_50[0] = 0;
    local_50[1] = 0x800;
    local_50[2] = 0;
    FUN_71001ac5b0();
    FUN_71001abc50(local_50,plVar2,param_1[0xd],
                   (uint)*(ushort *)(param_1 + 0xb) * (uint)*(ushort *)(param_1 + 0xb),
                   *(uint *)(param_1 + 0xf),(uint *)((long)param_1 + 0x7c),(uint)bVar1,param_1[0x10]
                  );
    if (local_50[0] == 0) {
      *(undefined4 *)(plVar2 + 7) = *(undefined4 *)((long)param_1 + 0x5c);
      *(int *)((long)plVar2 + 0x34) = (int)param_1[0xc];
      *(undefined4 *)(param_1 + 0xf) = 0;
      FUN_71001ac5b0();
      lVar3 = FUN_7100193580(DAT_71052adfc0);
      uVar4 = FUN_710019aa90(lVar3);
      if ((uVar4 & 1) == 0) {
        param_1[8] = (long)"RelayRouteManageJob::WaitAllDirectConnectionReport";
        param_1[6] = (long)FUN_71001a9ef0;
        param_1[7] = 0;
        return 5;
      }
      *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
    }
  }
  return 1;
}

