// addr:      71001a2450
// offset:    0x1a2450
// name:      FUN_71001a2450
// mangled:   
// signature: undefined FUN_71001a2450(void)


undefined8 FUN_71001a2450(long *param_1)

{
  bool bVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  char *pcVar6;
  undefined4 auStack_c8 [2];
  int aiStack_c0 [4];
  int aiStack_b0 [32];
  
  *(undefined4 *)(param_1 + 0x22) = 0xc;
  FUN_7100192e90(aiStack_b0,DAT_71052adfc0);
  aiStack_c0[0] = 0x6c50;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_c0 | 4));
  auStack_c8[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_c0 | 4),(Result *)auStack_c8);
  if (aiStack_b0[0] != aiStack_c0[0]) {
    if (*(char *)((long)param_1 + 0xc1) == '\0') {
      if (*(char *)((long)param_1 + 0x85) == '\0') {
        if ((*(ulong *)(DAT_71052ac580 + 0x30) < (ulong)param_1[0xb]) &&
           (bVar1 = FUN_7100190a90(DAT_71052adfc0,*(byte *)(param_1 + 0x12)), bVar1)) {
          return 5;
        }
        uVar5 = (**(code **)(*param_1 + 0x80))(param_1);
        if ((uVar5 & 1) != 0) {
          return 0;
        }
      }
    }
    else {
      *(char *)(DAT_71052adfc0 + 0xab) = (char)param_1[0x12];
      lVar2 = FUN_7100161fa0(DAT_71052add68);
      *(char *)(lVar2 + 0xa0) = (char)param_1[0x12];
      plVar3 = (long *)FUN_7100161fa0(DAT_71052add68);
      plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,(char)param_1[0x12]);
      if (plVar3 != (long *)0x0) {
        plVar4 = (long *)FUN_7100161fb0(DAT_71052add68);
        FUN_710015fd60((undefined8 *)aiStack_b0);
        (**(code **)(*plVar4 + 0x28))(aiStack_c0,plVar4,plVar3,aiStack_b0);
        if (aiStack_c0[0] == 0) {
          FUN_7100160b20((long)plVar4,(long)aiStack_b0);
          FUN_71000beb40((long)(plVar4 + 0x21),(long)(plVar3 + 2));
          FUN_710015ff20((undefined8 *)aiStack_b0);
          if (*(char *)((long)param_1 + 0x86) != (char)param_1[0x12]) {
            plVar3 = (long *)FUN_7100161fa0(DAT_71052add68);
            lVar2 = (**(code **)(*plVar3 + 0x48))(plVar3,*(undefined1 *)((long)param_1 + 0x86));
            if (lVar2 != 0) {
              (**(code **)(*param_1 + 0x70))(param_1,*(undefined1 *)((long)param_1 + 0x86));
            }
          }
          param_1[6] = (long)FUN_71001a2190;
          param_1[7] = 0;
          pcVar6 = "ProcessHostMigrationJob::HostMigrationSuccess";
          *(undefined1 *)((long)param_1 + 0xc2) = 0;
          goto LAB_71001a24d4;
        }
        FUN_710015ff20((undefined8 *)aiStack_b0);
        aiStack_b0[0] = 0;
        aiStack_b0[1] = 0x10000;
        aiStack_b0[2] = 0;
        (**(code **)(*plVar3 + 0x18))(plVar3,aiStack_b0);
      }
    }
  }
  param_1[6] = (long)FUN_71001a1d80;
  param_1[7] = 0;
  pcVar6 = "ProcessHostMigrationJob::HostMigrationFailure";
LAB_71001a24d4:
  param_1[8] = (long)pcVar6;
  return 0;
}

