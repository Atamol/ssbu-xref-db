// addr:      7102358930
// offset:    0x2358930
// name:      FUN_7102358930
// mangled:   
// signature: undefined __cdecl FUN_7102358930(ulong * param_1, long param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7102358930(ulong *param_1,long param_2,undefined8 param_3,byte ****param_4,long ****param_5
                   ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  ulong uVar5;
  bool bVar6;
  int iVar7;
  undefined8 *puVar8;
  uint *puVar9;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 uVar10;
  char *pcVar11;
  long ****pppplVar12;
  byte ****ppppbVar13;
  code *pcVar14;
  long lVar15;
  uint uVar16;
  long lVar17;
  long *plVar18;
  ulong local_70;
  long *plStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  uint local_28 [2];
  
  if (((DAT_710532f4d8 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_710532f4d8), iVar7 != 0)) {
    DAT_710532f4a4 = 0xffffff;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_710532f4d8);
    lVar17 = *(long *)(param_2 + 0x28);
  }
  else {
    lVar17 = *(long *)(param_2 + 0x28);
  }
  if (lVar17 != 0) {
    lVar15 = param_2 + 0x28;
    do {
      bVar6 = (*(ulong *)(lVar17 + 0x20) & 0xfffffffffe) < 0x1438d705e2;
      if (!bVar6) {
        lVar15 = lVar17;
      }
      lVar17 = *(long *)(lVar17 + (ulong)bVar6 * 8);
    } while (lVar17 != 0);
    if ((lVar15 != param_2 + 0x28) && ((*(ulong *)(lVar15 + 0x20) & 0xffffffffff) < 0x1438d705e3)) {
      puVar9 = (uint *)(lVar15 + 0x28);
      goto LAB_71023589ac;
    }
  }
  puVar9 = &DAT_710532f4a4;
LAB_71023589ac:
  pcVar11 = "model.numdlb";
  FUN_710353e1d0((uint *)&local_70,puVar9,(byte *)"model.numdlb");
  if ((uint)local_70 != 0xffffff) {
    FUN_7103540b10(DAT_7105332f20,(uint)local_70,(long *********)pcVar11,param_4,param_5,param_6,
                   param_7,param_8);
  }
  if (((uint)local_70 == 0xffffff) ||
     (lVar17 = **(long **)(DAT_7105332f20 + 0x78),
     *(uint *)(*(long *)(lVar17 + 0x40) + 4) <= (uint)local_70)) {
    local_70 = 0;
  }
  else {
    local_70 = *(ulong *)(*(long *)(lVar17 + 0x60) + (local_70 & 0xffffffff) * 0x20) & 0xffffffffff;
  }
  lVar17 = (*(long **)(DAT_7105332f20 + 0x78))[1];
  pcVar14 = FUN_7103542240;
  ppppbVar13 = (byte ****)&DAT_00000008;
  puVar8 = bsearch(&local_70,*(void **)(lVar17 + 0x20),(ulong)*(uint *)(*(long *)(lVar17 + 8) + 8),8
                   ,FUN_7103542240);
  local_28[0] = 0xffffff;
  if (puVar8 != (undefined8 *)0x0) {
    uVar4 = (uint)((ulong)*puVar8 >> 0x20);
    uVar16 = uVar4 >> 8;
    if ((uVar16 != 0xffffff) &&
       (uVar2 = *(uint *)(*(long *)(lVar17 + 8) + 4), local_28[0] = uVar4 >> 8,
       uVar2 < uVar16 || uVar2 == local_28[0])) {
      local_28[0] = 0xffffff;
    }
  }
  pppplVar12 = (long ****)&DAT_00000004;
  FUN_71035c2890(&local_70,local_28,(long *********)&DAT_00000004,ppppbVar13,(long ****)pcVar14,
                 param_6,param_7,param_8);
  plVar1 = plStack_68;
  uVar5 = local_70;
  local_70 = 0;
  plStack_68 = (long *)0x0;
  plVar18 = (long *)param_1[1];
  *param_1 = uVar5;
  param_1[1] = (ulong)plVar1;
  uVar10 = extraout_x1;
  if (plVar18 != (long *)0x0) {
    plVar1 = plVar18 + 1;
    do {
      lVar17 = *plVar1;
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar17 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar17 == 0) {
      (**(code **)(*plVar18 + 0x10))(plVar18);
      std::__shared_weak_count::__release_weak();
      uVar10 = extraout_x1_00;
    }
  }
  if (plStack_68 != (long *)0x0) {
    plVar1 = plStack_68 + 1;
    do {
      lVar17 = *plVar1;
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar17 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar17 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      std::__shared_weak_count::__release_weak();
      uVar10 = extraout_x1_01;
    }
  }
  if (*param_1 != 0) {
    FUN_71035597d0(param_1,uVar10,pppplVar12,ppppbVar13,(long ****)pcVar14,param_6,param_7,param_8);
    plStack_68 = (long *)0x0;
    local_70 = 0x3f400000;
    uStack_58 = 0;
    local_60 = 0x3f40000000000000;
    uStack_48 = 0x3f400000;
    local_50 = 0;
    uStack_38 = 0x3f800000c1a00000;
    local_40 = 0;
    (**(code **)(*(long *)*param_1 + 0x148))((long *)*param_1,&local_70);
    (**(code **)(*(long *)*param_1 + 0xa8))((long *)*param_1,0);
  }
  return;
}

