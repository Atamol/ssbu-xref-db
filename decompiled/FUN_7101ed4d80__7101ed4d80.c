// addr:      7101ed4d80
// offset:    0x1ed4d80
// name:      FUN_7101ed4d80
// mangled:   
// signature: undefined __cdecl FUN_7101ed4d80(undefined1 * param_1, long param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101ed4d80(undefined1 *param_1,long param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  bool bVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long ****pppplVar5;
  long ****pppplVar6;
  long ****pppplVar7;
  long lVar8;
  ulong uVar9;
  float fVar10;
  long ***local_50;
  ulong local_48;
  undefined4 local_34;
  
  pppplVar5 = &local_50;
  pppplVar7 = &local_50;
  pppplVar6 = param_3;
  FUN_7103776640(&local_50,param_2,(byte ****)(param_3 + 1),param_3,param_4,param_5,param_6,param_7,
                 param_8);
  uVar2 = local_48;
  if ((long ****)param_1 != &local_50) {
    local_48 = 0;
    uVar9 = *(ulong *)(param_1 + 8);
    *(ulong *)(param_1 + 8) = uVar2;
    if (uVar9 != 0) {
      uVar2 = *(ulong *)(uVar9 + 0x18);
      *(undefined ***)(uVar9 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar9 + 0x18) = 0;
      if (uVar2 != 0) {
        FUN_710392eb40(uVar2);
      }
      FUN_710392eb40(uVar9);
    }
  }
  uVar2 = local_48;
  local_50 = (long ***)&PTR_FUN_710523d988;
  local_48 = 0;
  if (uVar2 != 0) {
    uVar9 = *(ulong *)(uVar2 + 0x18);
    *(undefined ***)(uVar2 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar2 + 0x18) = 0;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
    FUN_710392eb40(uVar2);
  }
  FUN_7103776640(&local_50,param_2,(byte ****)(param_3 + 10),pppplVar6,param_4,param_5,param_6,
                 param_7,param_8);
  uVar2 = local_48;
  if ((long ****)(param_1 + 0x10) != &local_50) {
    local_48 = 0;
    uVar9 = *(ulong *)(param_1 + 0x18);
    *(ulong *)(param_1 + 0x18) = uVar2;
    if (uVar9 != 0) {
      uVar2 = *(ulong *)(uVar9 + 0x18);
      *(undefined ***)(uVar9 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar9 + 0x18) = 0;
      if (uVar2 != 0) {
        FUN_710392eb40(uVar2);
      }
      FUN_710392eb40(uVar9);
    }
  }
  uVar2 = local_48;
  local_50 = (long ***)&PTR_FUN_710523d988;
  local_48 = 0;
  if (uVar2 != 0) {
    uVar9 = *(ulong *)(uVar2 + 0x18);
    *(undefined ***)(uVar2 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar2 + 0x18) = 0;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
    FUN_710392eb40(uVar2);
  }
  FUN_7103776640(&local_50,param_2,(byte ****)(param_3 + 0x13),pppplVar6,param_4,param_5,param_6,
                 param_7,param_8);
  uVar2 = local_48;
  if ((long ****)(param_1 + 0x20) != &local_50) {
    local_48 = 0;
    uVar9 = *(ulong *)(param_1 + 0x28);
    *(ulong *)(param_1 + 0x28) = uVar2;
    if (uVar9 != 0) {
      uVar2 = *(ulong *)(uVar9 + 0x18);
      *(undefined ***)(uVar9 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar9 + 0x18) = 0;
      if (uVar2 != 0) {
        FUN_710392eb40(uVar2);
      }
      FUN_710392eb40(uVar9);
    }
  }
  uVar2 = local_48;
  local_50 = (long ***)&PTR_FUN_710523d988;
  local_48 = 0;
  if (uVar2 != 0) {
    uVar9 = *(ulong *)(uVar2 + 0x18);
    *(undefined ***)(uVar2 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar2 + 0x18) = 0;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
    FUN_710392eb40(uVar2);
  }
  FUN_7103776910(&local_50,param_2,param_3 + 0x1c,pppplVar6,param_4,param_5,param_6,param_7,param_8)
  ;
  uVar2 = local_48;
  if ((long ****)(param_1 + 0x30) != &local_50) {
    local_48 = 0;
    uVar9 = *(ulong *)(param_1 + 0x38);
    *(ulong *)(param_1 + 0x38) = uVar2;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
  }
  uVar2 = local_48;
  local_50 = (long ***)&PTR_FUN_710523d9a8;
  local_48 = 0;
  if (uVar2 != 0) {
    FUN_710392eb40(uVar2);
  }
  FUN_71037780e0(&local_50,(long)param_1,(long ****)"gage_size_orange",pppplVar6,param_4,param_5,
                 param_6,param_7,param_8);
  uVar2 = local_48;
  if ((long ****)(param_1 + 0x50) != &local_50) {
    local_48 = 0;
    uVar9 = *(ulong *)(param_1 + 0x58);
    *(ulong *)(param_1 + 0x58) = uVar2;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
  }
  uVar2 = local_48;
  local_50 = (long ***)&PTR_FUN_710523d9e8;
  local_48 = 0;
  if (uVar2 != 0) {
    FUN_710392eb40(uVar2);
  }
  FUN_71037780e0(&local_50,(long)param_1,(long ****)"cursor_position",pppplVar6,param_4,param_5,
                 param_6,param_7,param_8);
  uVar2 = local_48;
  if ((long ****)(param_1 + 0x60) != &local_50) {
    local_48 = 0;
    uVar9 = *(ulong *)(param_1 + 0x68);
    *(ulong *)(param_1 + 0x68) = uVar2;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
  }
  uVar2 = local_48;
  local_50 = (long ***)&PTR_FUN_710523d9e8;
  local_48 = 0;
  if (uVar2 != 0) {
    FUN_710392eb40(uVar2);
  }
  bVar1 = FUN_7103776510((long)param_1,"set_sel_csr_white",pppplVar6,param_4,param_5,param_6,param_7
                         ,param_8);
  if (bVar1) {
    FUN_7103776910(&local_50,(long)param_1,(long ****)"set_sel_csr_white",pppplVar6,param_4,param_5,
                   param_6,param_7,param_8);
    uVar2 = local_48;
    if ((long ****)(param_1 + 0x40) != &local_50) {
      local_48 = 0;
      uVar9 = *(ulong *)(param_1 + 0x48);
      *(ulong *)(param_1 + 0x48) = uVar2;
      if (uVar9 != 0) {
        FUN_710392eb40(uVar9);
      }
    }
    uVar2 = local_48;
    local_50 = (long ***)&PTR_FUN_710523d9a8;
    local_48 = 0;
    if (uVar2 != 0) {
      FUN_710392eb40(uVar2);
    }
    lVar8 = **(long **)(param_1 + 0x48);
    if (lVar8 != 0) {
      *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) & 0xfe;
    }
  }
  plVar3 = (long *)FUN_710392e290(0x10,8,pppplVar6,param_4,param_5,param_6,param_7,param_8);
  if (plVar3 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_34 = 0;
      local_50 = (long ***)&DAT_00000008;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_34);
      pppplVar6 = pppplVar5;
      if (((uVar2 & 1) != 0) &&
         (plVar3 = (long *)FUN_710392e290(0x10,8,pppplVar5,param_4,param_5,param_6,param_7,param_8),
         pppplVar6 = pppplVar5, plVar3 != (long *)0x0)) goto LAB_7101ed50ec;
    }
    plVar3 = (long *)0x0;
  }
LAB_7101ed50ec:
  *plVar3 = 0;
  lVar8 = *(long *)(*(long *)(param_1 + 0x18) + 8);
  if ((lVar8 == 0) || (*(long *)(lVar8 + 0x60) == 0)) {
    *plVar3 = 0;
  }
  else {
    plVar4 = (long *)FUN_7103796f20(*(long *)(lVar8 + 0x60),*(long *)(lVar8 + 0x18) + 0xb0);
    *plVar3 = (long)plVar4;
    if (plVar4 != (long *)0x0) {
      pppplVar6 = (long ****)0x1;
      (**(code **)(*plVar4 + 0x268))(plVar4,1);
    }
  }
  FUN_710392eb40((ulong)plVar3);
  plVar3 = (long *)FUN_710392e290(0x10,8,pppplVar6,param_4,param_5,param_6,param_7,param_8);
  if (plVar3 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_34 = 0;
      local_50 = (long ***)&DAT_00000008;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_34);
      if (((uVar2 & 1) != 0) &&
         (plVar3 = (long *)FUN_710392e290(0x10,8,pppplVar7,param_4,param_5,param_6,param_7,param_8),
         plVar3 != (long *)0x0)) goto LAB_7101ed5198;
    }
    plVar3 = (long *)0x0;
  }
LAB_7101ed5198:
  *plVar3 = 0;
  lVar8 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  if ((lVar8 == 0) || (*(long *)(lVar8 + 0x60) == 0)) {
    *plVar3 = 0;
  }
  else {
    plVar4 = (long *)FUN_7103796f20(*(long *)(lVar8 + 0x60),*(long *)(lVar8 + 0x18) + 0xb0);
    *plVar3 = (long)plVar4;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x268))(plVar4,1,1);
    }
  }
  FUN_710392eb40((ulong)plVar3);
  fVar10 = *(float *)(param_3 + 0x24);
  *(float *)(param_1 + 0xd0) = fVar10;
  *(float *)(param_1 + 0xdc) = fVar10 * 0.3;
  *(float *)(param_1 + 0xe0) = fVar10 * 0.0001;
  return;
}

