// addr:      7101ac0920
// offset:    0x1ac0920
// name:      FUN_7101ac0920
// mangled:   
// signature: undefined __cdecl FUN_7101ac0920(long param_1, long param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101ac0920(long param_1,long param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long ****pppplVar10;
  long lVar11;
  int *piVar12;
  undefined4 local_e0 [2];
  undefined **local_d8;
  long local_d0;
  undefined8 local_c8;
  undefined1 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 local_a0 [2];
  undefined **local_98;
  long local_90;
  undefined8 local_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined **local_60;
  long *local_58;
  long ***local_50;
  undefined4 local_44;
  
  if (*(int *)(param_1 + 0x20c) == 0) {
    *(undefined4 *)(param_1 + 0x3a4) = 2;
    (**(code **)(**(long **)(param_1 + 0x248) + 0x60))(*(long **)(param_1 + 0x248),0);
    (**(code **)(**(long **)(param_1 + 0x240) + 0x60))(*(long **)(param_1 + 0x240),0);
    (**(code **)(**(long **)(param_1 + 0x250) + 0x60))(*(long **)(param_1 + 0x250),1);
    (**(code **)(**(long **)(param_1 + 600) + 0x60))(*(long **)(param_1 + 600),0);
    (**(code **)(**(long **)(param_1 + 0x260) + 0x60))(*(long **)(param_1 + 0x260),0);
    (**(code **)(**(long **)(param_1 + 0x268) + 0x60))(*(long **)(param_1 + 0x268),0);
    lVar5 = param_1 + 0x230;
    FUN_7103776910(&local_60,lVar5,(long ****)"set_parts_arrow_l",param_3,param_4,param_5,param_6,
                   param_7,param_8);
    plVar6 = local_58;
    lVar11 = *local_58;
    if (lVar11 != 0) {
      *(byte *)(lVar11 + 0x58) = *(byte *)(lVar11 + 0x58) & 0xfe;
    }
    local_60 = &PTR_FUN_710523d9a8;
    local_58 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar6);
    }
    FUN_7103776910(&local_60,lVar5,(long ****)"set_parts_arrow_r",param_3,param_4,param_5,param_6,
                   param_7,param_8);
    plVar6 = local_58;
    lVar11 = *local_58;
    if (lVar11 != 0) {
      *(byte *)(lVar11 + 0x58) = *(byte *)(lVar11 + 0x58) & 0xfe;
    }
    local_60 = &PTR_FUN_710523d9a8;
    local_58 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar6);
    }
    (**(code **)(**(long **)(param_1 + 0x240) + 0x70))(*(long **)(param_1 + 0x240),0);
    (**(code **)(**(long **)(param_1 + 0x248) + 0x70))(*(long **)(param_1 + 0x248),0);
    (**(code **)(**(long **)(param_1 + 0x250) + 0x70))(*(long **)(param_1 + 0x250),0);
    if ((*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') &&
       (uVar7 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x1206bb3247,(long ****)&DAT_00000004,
                               param_4,param_5,param_6,param_7,param_8), (uVar7 & 1) != 0)) {
      FUN_71024076d0(local_a0,0x1206bb3247);
      if (((local_90 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_88 == DAT_7106dd53ac)) {
        piVar12 = (int *)(local_90 + 0x38);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar12,0x10);
          if (bVar3) {
            *piVar12 = *piVar12 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
    }
    else {
      local_88 = 0x87650000000000;
      local_78 = 0xffffffffffffffff;
      uStack_70 = 0;
      local_a0[0] = 0;
      local_68 = 0;
    }
    local_98 = &PTR_FUN_7104f73d50;
    pppplVar10 = (long ****)0x0;
    local_90 = 0;
    local_80 = 0;
    FUN_7103771a80((long *)(param_1 + 0x250),5,0);
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x238),0x71042f8402);
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x2e8),0x7104421d8e);
    FUN_7103776640(&local_60,lVar5,(byte ****)"set_parts_detail_btn",pppplVar10,param_4,param_5,
                   param_6,param_7,param_8);
    plVar6 = (long *)FUN_710392e290(0x10,8,pppplVar10,param_4,param_5,param_6,param_7,param_8);
    if (plVar6 == (long *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_44 = 0;
        local_50 = (long ***)&DAT_00000008;
        pppplVar10 = &local_50;
        uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_44);
        if (((uVar7 & 1) != 0) &&
           (plVar6 = (long *)FUN_710392e290(0x10,8,pppplVar10,param_4,param_5,param_6,param_7,
                                            param_8), plVar6 != (long *)0x0)) goto LAB_7101ac0d80;
      }
      plVar6 = (long *)0x0;
    }
LAB_7101ac0d80:
    plVar4 = local_58;
    *plVar6 = 0;
    lVar11 = *(long *)((long)local_58 + 8);
    if ((lVar11 == 0) || (*(long *)(lVar11 + 0x60) == 0)) {
      uVar7 = 0;
      *plVar6 = 0;
    }
    else {
      plVar8 = (long *)FUN_7103796f20(*(long *)(lVar11 + 0x60),*(long *)(lVar11 + 0x18) + 0xb0);
      *plVar6 = (long)plVar8;
      if (plVar8 == (long *)0x0) {
        uVar7 = 0;
      }
      else {
        uVar7 = (**(code **)(*plVar8 + 0x2f8))();
        uVar7 = uVar7 & 0xffffffff;
      }
    }
    FUN_710392eb40((ulong)plVar6);
    local_60 = &PTR_FUN_710523d988;
    local_58 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      uVar9 = *(ulong *)((long)plVar4 + 0x18);
      *(undefined ***)((long)plVar4 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)((long)plVar4 + 0x18) = 0;
      if (uVar9 != 0) {
        FUN_710392eb40(uVar9);
      }
      FUN_710392eb40((ulong)plVar4);
    }
    if ((uVar7 & 1) != 0) {
      return;
    }
    FUN_7103776640(&local_60,lVar5,(byte ****)"set_parts_detail_btn",pppplVar10,param_4,param_5,
                   param_6,param_7,param_8);
    plVar6 = (long *)FUN_710392e290(0x10,8,pppplVar10,param_4,param_5,param_6,param_7,param_8);
    if (plVar6 == (long *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_44 = 0;
        local_50 = (long ***)&DAT_00000008;
        pppplVar10 = &local_50;
        uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_44);
        if (((uVar7 & 1) != 0) &&
           (plVar6 = (long *)FUN_710392e290(0x10,8,pppplVar10,param_4,param_5,param_6,param_7,
                                            param_8), plVar6 != (long *)0x0)) goto LAB_7101ac0e6c;
      }
      plVar6 = (long *)0x0;
    }
LAB_7101ac0e6c:
    plVar4 = local_58;
    *plVar6 = 0;
    lVar5 = *(long *)((long)local_58 + 8);
    if ((lVar5 == 0) || (*(long *)(lVar5 + 0x60) == 0)) {
      *plVar6 = 0;
    }
    else {
      plVar8 = (long *)FUN_7103796f20(*(long *)(lVar5 + 0x60),*(long *)(lVar5 + 0x18) + 0xb0);
      *plVar6 = (long)plVar8;
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x2f0))(plVar8,1,0);
      }
    }
    FUN_710392eb40((ulong)plVar6);
    local_60 = &PTR_FUN_710523d988;
    local_58 = (long *)0x0;
    if (plVar4 == (long *)0x0) {
      return;
    }
    uVar7 = *(ulong *)((long)plVar4 + 0x18);
    *(undefined ***)((long)plVar4 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)((long)plVar4 + 0x18) = 0;
    if (uVar7 != 0) {
      FUN_710392eb40(uVar7);
    }
    FUN_710392eb40((ulong)plVar4);
    return;
  }
  lVar5 = *(long *)(*(long *)(param_1 + 0x238) + 8);
  if (((lVar5 != 0) && (plVar6 = (long *)FUN_71037964b0(lVar5,0x71042f8402), plVar6 != (long *)0x0))
     && (uVar7 = (**(code **)(*plVar6 + 0x138))(), (uVar7 & 1) == 0)) {
    return;
  }
  lVar11 = *(long *)(param_2 + 8);
  lVar5 = param_1 + 0x230;
  if ((*(char *)(lVar11 + 0x4aa) != '\0') &&
     ((((*(byte *)(lVar11 + 0x1b0) >> 1 & 1) != 0 || ((*(byte *)(lVar11 + 0x1ac) >> 1 & 1) != 0)) ||
      ((*(byte *)(lVar11 + 0x1a8) >> 1 & 1) != 0)))) {
    FUN_7103776640(&local_60,lVar5,(byte ****)"set_parts_detail_btn",param_3,param_4,param_5,param_6
                   ,param_7,param_8);
    plVar6 = (long *)FUN_710392e290(0x10,8,param_3,param_4,param_5,param_6,param_7,param_8);
    if (plVar6 == (long *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_44 = 0;
        local_50 = (long ***)&DAT_00000008;
        param_3 = &local_50;
        uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_44);
        if (((uVar7 & 1) != 0) &&
           (plVar6 = (long *)FUN_710392e290(0x10,8,param_3,param_4,param_5,param_6,param_7,param_8),
           plVar6 != (long *)0x0)) goto LAB_7101ac0a10;
      }
      plVar6 = (long *)0x0;
    }
LAB_7101ac0a10:
    plVar4 = local_58;
    *plVar6 = 0;
    lVar11 = local_58[1];
    if ((lVar11 == 0) || (*(long *)(lVar11 + 0x60) == 0)) {
      *plVar6 = 0;
    }
    else {
      plVar8 = (long *)FUN_7103796f20(*(long *)(lVar11 + 0x60),*(long *)(lVar11 + 0x18) + 0xb0);
      *plVar6 = (long)plVar8;
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x238))(plVar8,0);
        (**(code **)(*plVar8 + 0x228))(plVar8,0);
        uVar7 = (**(code **)(*plVar8 + 0x200))(plVar8);
        if (((uVar7 & 1) != 0) && (uVar7 = (**(code **)(*plVar8 + 0x210))(plVar8), (uVar7 & 1) != 0)
           ) {
          (**(code **)(*plVar8 + 0x238))(plVar8,1);
          (**(code **)(*plVar8 + 0x3c8))(plVar8);
          (**(code **)(*plVar8 + 0x10))(plVar8);
          (**(code **)(*plVar8 + 0x18))(plVar8);
        }
      }
    }
    FUN_710392eb40((ulong)plVar6);
    local_60 = &PTR_FUN_710523d988;
    local_58 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      uVar7 = plVar4[3];
      plVar4[2] = (long)&PTR_FUN_710523d9a8;
      plVar4[3] = 0;
      if (uVar7 != 0) {
        FUN_710392eb40(uVar7);
      }
      FUN_710392eb40((ulong)plVar4);
    }
  }
  FUN_7103776640(&local_60,lVar5,(byte ****)"set_parts_detail_btn",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  plVar6 = (long *)FUN_710392e290(0x10,8,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar6 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_44 = 0;
      local_50 = (long ***)&DAT_00000008;
      param_3 = &local_50;
      uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_44);
      if (((uVar7 & 1) != 0) &&
         (plVar6 = (long *)FUN_710392e290(0x10,8,param_3,param_4,param_5,param_6,param_7,param_8),
         plVar6 != (long *)0x0)) goto LAB_7101ac0f5c;
    }
    plVar6 = (long *)0x0;
  }
LAB_7101ac0f5c:
  plVar4 = local_58;
  *plVar6 = 0;
  lVar11 = local_58[1];
  if ((lVar11 == 0) || (*(long *)(lVar11 + 0x60) == 0)) {
    uVar7 = 0;
    *plVar6 = 0;
  }
  else {
    plVar8 = (long *)FUN_7103796f20(*(long *)(lVar11 + 0x60),*(long *)(lVar11 + 0x18) + 0xb0);
    *plVar6 = (long)plVar8;
    if (plVar8 == (long *)0x0) {
      uVar7 = 0;
    }
    else {
      uVar7 = (**(code **)(*plVar8 + 0x2f8))();
      uVar7 = uVar7 & 0xffffffff;
    }
  }
  FUN_710392eb40((ulong)plVar6);
  local_60 = &PTR_FUN_710523d988;
  local_58 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    uVar9 = plVar4[3];
    plVar4[2] = (long)&PTR_FUN_710523d9a8;
    plVar4[3] = 0;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
    FUN_710392eb40((ulong)plVar4);
  }
  if ((uVar7 & 1) != 0) {
    return;
  }
  FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x238),0x71042d63b4);
  FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x2e8),0x71043ceeea);
  FUN_7103776910(&local_60,lVar5,(long ****)"set_parts_arrow_l",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  plVar6 = local_58;
  lVar11 = *local_58;
  if (lVar11 != 0) {
    *(byte *)(lVar11 + 0x58) =
         *(byte *)(lVar11 + 0x58) & 0xfe |
         1 < (int)((ulong)((*(long **)(param_1 + 0x300))[1] - **(long **)(param_1 + 0x300)) >> 6) *
             -0x11111111;
  }
  local_60 = &PTR_FUN_710523d9a8;
  local_58 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar6);
  }
  FUN_7103776910(&local_60,lVar5,(long ****)"set_parts_arrow_r",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  plVar6 = local_58;
  lVar11 = *local_58;
  if (lVar11 != 0) {
    *(byte *)(lVar11 + 0x58) =
         *(byte *)(lVar11 + 0x58) & 0xfe |
         1 < (int)((ulong)((*(long **)(param_1 + 0x300))[1] - **(long **)(param_1 + 0x300)) >> 6) *
             -0x11111111;
  }
  local_60 = &PTR_FUN_710523d9a8;
  local_58 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar6);
  }
  if (*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') {
    param_3 = (long ****)&DAT_00000004;
    uVar7 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x13c06f8281,(long ****)&DAT_00000004,
                           param_4,param_5,param_6,param_7,param_8);
    if ((uVar7 & 1) != 0) {
      FUN_71024076d0(local_e0,0x13c06f8281);
      if (((local_d0 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_c8 == DAT_7106dd53ac)) {
        piVar12 = (int *)(local_d0 + 0x38);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar12,0x10);
          if (bVar3) {
            *piVar12 = *piVar12 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      goto LAB_7101ac1190;
    }
  }
  local_c8 = 0x87650000000000;
  local_b8 = 0xffffffffffffffff;
  uStack_b0 = 0;
  local_e0[0] = 0;
  local_a8 = 0;
LAB_7101ac1190:
  local_d8 = &PTR_FUN_7104f73d50;
  local_d0 = 0;
  local_c0 = 0;
  if (*(uint *)(param_1 + 0x204) < 0x13) {
    *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x204) * 4 + 0x1b8) = 4;
    iVar1 = (int)((ulong)((*(long **)(param_1 + 0x300))[1] - **(long **)(param_1 + 0x300)) >> 6) *
            -0x11111111;
    FUN_7103776910(&local_60,lVar5,(long ****)"set_parts_arrow_l",param_3,param_4,param_5,param_6,
                   param_7,param_8);
    plVar6 = local_58;
    lVar11 = *local_58;
    if (lVar11 != 0) {
      *(byte *)(lVar11 + 0x58) = *(byte *)(lVar11 + 0x58) & 0xfe | 1 < iVar1;
    }
    local_60 = &PTR_FUN_710523d9a8;
    local_58 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar6);
    }
    FUN_7103776910(&local_60,lVar5,(long ****)"set_parts_arrow_r",param_3,param_4,param_5,param_6,
                   param_7,param_8);
    plVar6 = local_58;
    lVar5 = *local_58;
    if (lVar5 != 0) {
      *(byte *)(lVar5 + 0x58) = *(byte *)(lVar5 + 0x58) & 0xfe | 1 < iVar1;
    }
    local_60 = &PTR_FUN_710523d9a8;
    local_58 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar6);
    }
    (**(code **)(**(long **)(param_1 + 0x248) + 0x60))(*(long **)(param_1 + 0x248),1);
    (**(code **)(**(long **)(param_1 + 0x240) + 0x60))(*(long **)(param_1 + 0x240),1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

