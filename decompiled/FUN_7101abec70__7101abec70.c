// addr:      7101abec70
// offset:    0x1abec70
// name:      FUN_7101abec70
// mangled:   
// signature: undefined __cdecl FUN_7101abec70(long param_1, long param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101abec70(long param_1,long param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  byte bVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long ****pppplVar9;
  uint uVar10;
  long lVar11;
  int *piVar12;
  undefined4 uVar13;
  ulong uVar14;
  undefined **local_d8;
  ulong local_d0;
  undefined4 local_c8 [2];
  undefined **local_c0;
  long local_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined4 local_88 [2];
  undefined **local_80;
  long local_78;
  undefined8 local_70;
  undefined1 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long ***local_48;
  undefined4 local_34;
  
  plVar6 = (long *)(param_1 + 0x250);
  bVar3 = (**(code **)(**(long **)(param_1 + 0x250) + 0x78))();
  if ((bVar3 & 1) != *(byte *)(param_1 + 0x3ac)) {
    (**(code **)(*(long *)*plVar6 + 0x70))((long *)*plVar6,*(byte *)(param_1 + 0x3ac) != 0);
  }
  bVar4 = (**(code **)(**(long **)(param_1 + 600) + 0x68))();
  bVar3 = *(byte *)(param_1 + 0x3ac);
  if ((bVar4 & 1) != bVar3) {
    (**(code **)(**(long **)(param_1 + 600) + 0x60))(*(long **)(param_1 + 600),bVar3 != 0);
    bVar3 = *(byte *)(param_1 + 0x3ac);
  }
  if (bVar3 == 0) {
    if (*(char *)(*(long *)(param_2 + 8) + 0x4aa) == '\0') {
      return;
    }
    if ((*(byte *)(*(long *)(param_2 + 8) + 0x1ac) >> 1 & 1) == 0) {
      return;
    }
    *(undefined1 *)(param_1 + 0x220) = 1;
    return;
  }
  if (*(int *)(param_1 + 0x20c) == 0) {
    *(undefined4 *)(param_1 + 0x3a4) = 0;
    (**(code **)(**(long **)(param_1 + 0x248) + 0x60))(*(long **)(param_1 + 0x248),1);
    (**(code **)(**(long **)(param_1 + 0x240) + 0x60))(*(long **)(param_1 + 0x240),1);
    (**(code **)(**(long **)(param_1 + 0x250) + 0x60))(*(long **)(param_1 + 0x250),1);
    (**(code **)(**(long **)(param_1 + 600) + 0x60))(*(long **)(param_1 + 600),1);
    (**(code **)(**(long **)(param_1 + 0x260) + 0x60))(*(long **)(param_1 + 0x260),0);
    (**(code **)(**(long **)(param_1 + 0x268) + 0x60))(*(long **)(param_1 + 0x268),0);
    (**(code **)(**(long **)(param_1 + 0x248) + 0x70))(*(long **)(param_1 + 0x248),0);
    (**(code **)(**(long **)(param_1 + 0x240) + 0x70))(*(long **)(param_1 + 0x240),0);
    (**(code **)(**(long **)(param_1 + 0x250) + 0x70))(*(long **)(param_1 + 0x250),1);
    param_3 = (long ****)0x0;
    FUN_7103771a80(plVar6,5,0);
  }
  else if (*(char *)(param_1 + 0x220) == '\0') {
    local_d8 = (undefined **)((ulong)local_d8 & 0xffffffffffffff00);
    FUN_7101ac7fe0(param_1,(undefined1 *)&local_d8,param_3,param_4,param_5,param_6,param_7,param_8);
    if ((char)local_d8 != '\0') {
      return;
    }
  }
  else {
    (**(code **)(*(long *)*plVar6 + 0x70))((long *)*plVar6,0);
  }
  lVar11 = *(long *)(param_2 + 8);
  if (*(char *)(lVar11 + 0x4aa) != '\0') {
    if ((*(byte *)(lVar11 + 0x198) >> 1 & 1) == 0) {
      if ((*(byte *)(lVar11 + 0x1a4) >> 1 & 1) != 0) {
        (**(code **)(*(long *)*plVar6 + 0x70))((long *)*plVar6,0);
        lVar11 = *(long *)(DAT_710532f8d0 + 8);
        if ((ulong)(*(long *)(lVar11 + 0x48) - *(long *)(lVar11 + 0x40) >> 3) < 2) {
          uVar14 = 0;
          if (*(char *)(lVar11 + 0x191) == '\0') goto LAB_7101abefac;
LAB_7101abf01c:
          local_b0 = 0x87650000000000;
          local_a0 = 0xffffffffffffffff;
          uStack_98 = 0;
          local_c8[0] = 0;
          local_90 = 0;
        }
        else {
          uVar14 = *(ulong *)(*(long *)(lVar11 + 0x40) + 8);
          if (*(char *)(lVar11 + 0x191) != '\0') goto LAB_7101abf01c;
LAB_7101abefac:
          param_3 = (long ****)&DAT_00000004;
          uVar5 = FUN_7103313f20(lVar11,uVar14,(long ****)&DAT_00000004,param_4,param_5,param_6,
                                 param_7,param_8);
          if ((uVar5 & 1) == 0) goto LAB_7101abf01c;
          FUN_71024076d0(local_c8,uVar14);
          if (((local_b8 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_b0 == DAT_7106dd53ac))
          {
            piVar12 = (int *)(local_b8 + 0x38);
            do {
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(piVar12,0x10);
              if (bVar2) {
                *piVar12 = *piVar12 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
          }
        }
        local_c0 = &PTR_FUN_7104f73d50;
        local_b8 = 0;
        local_a8 = 0;
        uVar10 = *(uint *)(param_1 + 0x204);
        if (0x12 < uVar10) goto LAB_7101abf3bc;
        uVar13 = 3;
        goto LAB_7101abf060;
      }
    }
    else {
      (**(code **)(*(long *)*plVar6 + 0x70))((long *)*plVar6,0);
      lVar11 = *(long *)(DAT_710532f8d0 + 8);
      if ((ulong)(*(long *)(lVar11 + 0x48) - *(long *)(lVar11 + 0x40) >> 3) < 2) {
        uVar14 = 0;
        if (*(char *)(lVar11 + 0x191) == '\0') goto LAB_7101abeee8;
LAB_7101abef58:
        local_70 = 0x87650000000000;
        local_60 = 0xffffffffffffffff;
        uStack_58 = 0;
        local_88[0] = 0;
        local_50 = 0;
      }
      else {
        uVar14 = *(ulong *)(*(long *)(lVar11 + 0x40) + 8);
        if (*(char *)(lVar11 + 0x191) != '\0') goto LAB_7101abef58;
LAB_7101abeee8:
        param_3 = (long ****)&DAT_00000004;
        uVar5 = FUN_7103313f20(lVar11,uVar14,(long ****)&DAT_00000004,param_4,param_5,param_6,
                               param_7,param_8);
        if ((uVar5 & 1) == 0) goto LAB_7101abef58;
        FUN_71024076d0(local_88,uVar14);
        if (((local_78 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_70 == DAT_7106dd53ac)) {
          piVar12 = (int *)(local_78 + 0x38);
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar12,0x10);
            if (bVar2) {
              *piVar12 = *piVar12 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
      }
      local_80 = &PTR_FUN_7104f73d50;
      local_78 = 0;
      local_68 = 0;
      uVar10 = *(uint *)(param_1 + 0x204);
      if (0x12 < uVar10) goto LAB_7101abf3bc;
      uVar13 = 2;
LAB_7101abf060:
      *(undefined4 *)(param_1 + (long)(int)uVar10 * 4 + 0x1b8) = uVar13;
      lVar11 = *(long *)(param_2 + 8);
      if (*(char *)(lVar11 + 0x4aa) == '\0') goto LAB_7101abf080;
    }
    if ((*(byte *)(lVar11 + 0x1b0) >> 1 & 1) != 0) {
      FUN_7103776640(&local_d8,param_1 + 0x230,(byte ****)"set_parts_detail_btn",param_3,param_4,
                     param_5,param_6,param_7,param_8);
      plVar6 = (long *)FUN_710392e290(0x10,8,param_3,param_4,param_5,param_6,param_7,param_8);
      if (plVar6 == (long *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_34 = 0;
          local_48 = (long ***)&DAT_00000008;
          param_3 = &local_48;
          uVar14 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_34);
          if (((uVar14 & 1) != 0) &&
             (plVar6 = (long *)FUN_710392e290(0x10,8,param_3,param_4,param_5,param_6,param_7,param_8
                                             ), plVar6 != (long *)0x0)) goto LAB_7101abf2b0;
        }
        plVar6 = (long *)0x0;
      }
LAB_7101abf2b0:
      uVar14 = local_d0;
      *plVar6 = 0;
      lVar11 = *(long *)(local_d0 + 8);
      if ((lVar11 == 0) || (*(long *)(lVar11 + 0x60) == 0)) {
        *plVar6 = 0;
      }
      else {
        plVar7 = (long *)FUN_7103796f20(*(long *)(lVar11 + 0x60),*(long *)(lVar11 + 0x18) + 0xb0);
        *plVar6 = (long)plVar7;
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x238))(plVar7,0);
          (**(code **)(*plVar7 + 0x228))(plVar7,0);
          uVar5 = (**(code **)(*plVar7 + 0x200))(plVar7);
          if (((uVar5 & 1) != 0) &&
             (uVar5 = (**(code **)(*plVar7 + 0x210))(plVar7), (uVar5 & 1) != 0)) {
            (**(code **)(*plVar7 + 0x238))(plVar7,1);
            (**(code **)(*plVar7 + 0x3c8))(plVar7);
            (**(code **)(*plVar7 + 0x10))(plVar7);
            (**(code **)(*plVar7 + 0x18))(plVar7);
          }
        }
      }
      FUN_710392eb40((ulong)plVar6);
      local_d8 = &PTR_FUN_710523d988;
      local_d0 = 0;
      if (uVar14 != 0) {
        uVar5 = *(ulong *)(uVar14 + 0x18);
        *(undefined ***)(uVar14 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar14 + 0x18) = 0;
        if (uVar5 != 0) {
          FUN_710392eb40(uVar5);
        }
        FUN_710392eb40(uVar14);
      }
    }
  }
LAB_7101abf080:
  FUN_7103776640(&local_d8,param_1 + 0x230,(byte ****)"set_parts_detail_btn",param_3,param_4,param_5
                 ,param_6,param_7,param_8);
  plVar6 = (long *)FUN_710392e290(0x10,8,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar6 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_34 = 0;
      local_48 = (long ***)&DAT_00000008;
      pppplVar9 = &local_48;
      uVar14 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_34);
      if (((uVar14 & 1) != 0) &&
         (plVar6 = (long *)FUN_710392e290(0x10,8,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         plVar6 != (long *)0x0)) goto LAB_7101abf0f0;
    }
    plVar6 = (long *)0x0;
  }
LAB_7101abf0f0:
  uVar14 = local_d0;
  *plVar6 = 0;
  lVar11 = *(long *)(local_d0 + 8);
  if ((lVar11 == 0) || (*(long *)(lVar11 + 0x60) == 0)) {
    uVar5 = 0;
    *plVar6 = 0;
  }
  else {
    plVar7 = (long *)FUN_7103796f20(*(long *)(lVar11 + 0x60),*(long *)(lVar11 + 0x18) + 0xb0);
    *plVar6 = (long)plVar7;
    if (plVar7 == (long *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = (**(code **)(*plVar7 + 0x2f8))();
      uVar5 = uVar5 & 0xffffffff;
    }
  }
  FUN_710392eb40((ulong)plVar6);
  local_d8 = &PTR_FUN_710523d988;
  local_d0 = 0;
  if (uVar14 != 0) {
    uVar8 = *(ulong *)(uVar14 + 0x18);
    *(undefined ***)(uVar14 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar14 + 0x18) = 0;
    if (uVar8 != 0) {
      FUN_710392eb40(uVar8);
    }
    FUN_710392eb40(uVar14);
  }
  if (((uVar5 & 1) != 0) &&
     (((lVar11 = *(long *)(*(long *)(param_1 + 0x238) + 8), lVar11 == 0 ||
       (plVar6 = (long *)FUN_71037964b0(lVar11,0x71042d63b4), plVar6 == (long *)0x0)) ||
      (uVar14 = (**(code **)(*plVar6 + 0x138))(), (uVar14 & 1) != 0)))) {
    if (0x12 < *(uint *)(param_1 + 0x204)) goto LAB_7101abf3bc;
    *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x204) * 4 + 0x1b8) = 0xf;
  }
  uVar14 = (**(code **)(**(long **)(param_1 + 0x248) + 0x80))();
  if ((uVar14 & 1) == 0) {
    uVar14 = (**(code **)(**(long **)(param_1 + 0x240) + 0x80))();
    if ((uVar14 & 1) == 0) {
      return;
    }
    uVar10 = *(uint *)(param_1 + 0x204);
    if (0x12 < uVar10) goto LAB_7101abf3bc;
    uVar13 = 2;
  }
  else {
    (**(code **)(**(long **)(param_1 + 0x250) + 0x70))(*(long **)(param_1 + 0x250),0);
    uVar10 = *(uint *)(param_1 + 0x204);
    if (0x12 < uVar10) {
LAB_7101abf3bc:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar13 = 3;
  }
  *(undefined4 *)(param_1 + (long)(int)uVar10 * 4 + 0x1b8) = uVar13;
  return;
}

