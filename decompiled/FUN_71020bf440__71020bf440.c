// addr:      71020bf440
// offset:    0x20bf440
// name:      FUN_71020bf440
// mangled:   
// signature: undefined8 __cdecl FUN_71020bf440(long param_1)


undefined8 FUN_71020bf440(long param_1)

{
  uint uVar1;
  uint uVar2;
  ushort *puVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  uint *puVar7;
  undefined8 *puVar8;
  code *pcVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  
  plVar5 = *(long **)(param_1 + 0x10);
  plVar6 = (long *)(**(long **)(param_1 + 0x20) + 0x10);
  uVar12 = (long)plVar5 - (long)plVar6;
  if (plVar5 <= plVar6) {
    plVar6 = &DAT_7104862960;
  }
  if ((*(uint *)(plVar6 + 1) & 0xf) == 2) {
    lVar11 = *plVar6;
  }
  else if ((*(uint *)(plVar6 + 1) & 0xf) == 7) {
    lVar11 = *plVar6 + 0x28;
  }
  else {
    lVar11 = 0;
  }
  plVar6 = (long *)(**(long **)(param_1 + 0x20) + 0x20);
  if (plVar5 <= plVar6) {
    plVar6 = &DAT_7104862960;
  }
  uVar1 = FUN_71038f4d40(param_1,plVar6,"new_instance_lua");
  plVar6 = (long *)(*(long *)(param_1 + 0x10) + -0x10);
  uVar2 = *(uint *)(*(long *)(param_1 + 0x10) + -8) & 0xf;
  if (uVar2 == 2) {
    pcVar9 = (code *)*plVar6;
  }
  else if (uVar2 == 7) {
    pcVar9 = (code *)(*plVar6 + 0x28);
  }
  else {
    pcVar9 = (code *)0x0;
  }
  *(long **)(param_1 + 0x10) = plVar6;
  puVar3 = (ushort *)(*pcVar9)(uVar1);
  FUN_71020bed60(puVar3,param_1,2);
  if ((int)(uVar12 >> 4) < 0) {
    uVar12 = **(long **)(param_1 + 0x20) +
             ((long)(uVar12 * 0x10000000 ^ 0xffffffff00000000) >> 0x1c) + 0x10;
    uVar10 = *(ulong *)(param_1 + 0x10);
    while (uVar10 < uVar12) {
      *(ulong *)(param_1 + 0x10) = uVar10 + 0x10;
      *(undefined4 *)(uVar10 + 8) = 0;
      uVar10 = *(ulong *)(param_1 + 0x10);
    }
  }
  else {
    uVar12 = *(long *)(param_1 + 0x10) + ((long)(uVar12 * -0x10000000) >> 0x1c);
  }
  *(ulong *)(param_1 + 0x10) = uVar12;
  uVar2 = app::FighterUtil::get_water_area_info(lVar11,puVar3);
  puVar7 = *(uint **)(param_1 + 0x10);
  *puVar7 = uVar2 & 1;
  puVar7[2] = 1;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
  if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
    FUN_71038fec40(param_1);
  }
  uVar4 = FUN_710391e050(param_1);
  puVar8 = *(undefined8 **)(param_1 + 0x10);
  *puVar8 = uVar4;
  *(undefined4 *)(puVar8 + 1) = 0x45;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
  FUN_71020bf290(puVar3,param_1);
  FUN_710392eb40((ulong)puVar3);
  return 2;
}

