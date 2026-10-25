// addr:      7101c8df10
// offset:    0x1c8df10
// name:      FUN_7101c8df10
// mangled:   
// signature: undefined __cdecl FUN_7101c8df10(long param_1, undefined8 * param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101c8df10(long param_1,undefined8 *param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long ****pppplVar8;
  undefined1 *puVar9;
  long lVar10;
  int *piVar11;
  long *plVar12;
  undefined **local_a0;
  ulong local_98;
  undefined4 local_90 [2];
  undefined **local_88;
  long local_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined **local_50;
  ulong local_48;
  
  plVar12 = *(long **)*param_2;
  if (*(int *)(param_1 + 0xdc) != 0) {
    if (((*(long *)(plVar12[2] + 8) != 0) &&
        (plVar12 = (long *)FUN_71037964b0(*(long *)(plVar12[2] + 8),0x710433a236),
        plVar12 != (long *)0x0)) && (uVar5 = (**(code **)(*plVar12 + 0x138))(), (uVar5 & 1) == 0)) {
      return;
    }
    if (*(uint *)(param_1 + 0xd4) < 0x13) {
      *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0xd4) * 4 + 0x88) = 3;
      return;
    }
    goto LAB_7101c8e578;
  }
  uVar2 = *(uint *)(param_1 + 0xc);
  pppplVar8 = (long ****)(ulong)uVar2;
  if ((int)uVar2 < 0x500000) {
    if ((int)uVar2 < 0x250000) {
      if ((int)uVar2 < 0x200000) {
        if ((int)uVar2 < 0x150000) {
          if ((int)uVar2 < 0x100000) {
            if ((int)uVar2 < 0xfe000) {
              if ((int)uVar2 < 0x50000) {
                if ((int)uVar2 < 0x10000) {
                  iVar7 = 3;
                  if (0 < (int)uVar2) {
                    iVar7 = 0;
                  }
                }
                else {
                  iVar7 = 1;
                }
              }
              else {
                iVar7 = 2;
              }
            }
            else {
              iVar7 = 8;
            }
          }
          else {
            iVar7 = 4;
          }
        }
        else {
          iVar7 = 6;
        }
      }
      else {
        iVar7 = 5;
      }
    }
    else {
      iVar7 = 7;
    }
  }
  else {
    iVar7 = 9;
  }
  plVar1 = plVar12 + 1;
  FUN_7103775dc0(plVar12,iVar7,pppplVar8,param_4,param_5,param_6,param_7,param_8);
  if ((*(long *)(plVar12[2] + 8) != 0) &&
     (lVar10 = *(long *)(*(long *)(plVar12[2] + 8) + 0x18), lVar10 != 0)) {
    *(byte *)(lVar10 + 0x58) = *(byte *)(lVar10 + 0x58) | 1;
  }
  if (*(int *)(param_1 + 0xec) == 1) {
    FUN_71037780e0(&local_50,(long)plVar1,(long ****)"pop_in",pppplVar8,param_4,param_5,param_6,
                   param_7,param_8);
    FUN_710377b140((long)&local_50);
    uVar5 = local_48;
    local_50 = &PTR_FUN_710523d9e8;
    local_48 = 0;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
  }
  else {
    FUN_7103778300(0x3f800000,plVar12[2],0x710433a236);
    lVar10 = *(long *)(DAT_710532f8d0 + 8);
    if ((ulong)(*(long *)(lVar10 + 0x48) - *(long *)(lVar10 + 0x40) >> 3) < 6) {
      uVar5 = 0;
      if (*(char *)(lVar10 + 0x191) == '\0') goto LAB_7101c8e0e8;
LAB_7101c8e158:
      local_78 = 0x87650000000000;
      local_68 = 0xffffffffffffffff;
      uStack_60 = 0;
      local_90[0] = 0;
      local_58 = 0;
    }
    else {
      uVar5 = *(ulong *)(*(long *)(lVar10 + 0x40) + 0x28);
      if (*(char *)(lVar10 + 0x191) != '\0') goto LAB_7101c8e158;
LAB_7101c8e0e8:
      pppplVar8 = (long ****)&DAT_00000004;
      uVar6 = FUN_7103313f20(lVar10,uVar5,(long ****)&DAT_00000004,param_4,param_5,param_6,param_7,
                             param_8);
      if ((uVar6 & 1) == 0) goto LAB_7101c8e158;
      FUN_71024076d0(local_90,uVar5);
      if (((local_80 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_78 == DAT_7106dd53ac)) {
        piVar11 = (int *)(local_80 + 0x38);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar11,0x10);
          if (bVar4) {
            *piVar11 = *piVar11 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
    }
    local_88 = &PTR_FUN_7104f73d50;
    local_80 = 0;
    local_70 = 0;
  }
  if (*(int *)(param_1 + 0xec) != 2) {
    FUN_7103778300(0x3f800000,plVar12[2],0x71043be6fe);
    FUN_7103778300(0x3f800000,plVar12[2],0x710434a423);
    plVar12 = (long *)(param_1 + 0xf8);
    (**(code **)(*(long *)*plVar12 + 0x70))((long *)*plVar12,1);
    (**(code **)(*(long *)*plVar12 + 0x60))((long *)*plVar12,1);
    (**(code **)(**(long **)(param_1 + 0x108) + 0x70))(*(long **)(param_1 + 0x108),0);
    (**(code **)(**(long **)(param_1 + 0x108) + 0x60))(*(long **)(param_1 + 0x108),1);
    FUN_7101c83c40((long *)(param_1 + 0x100),1,pppplVar8,param_4,param_5,param_6,param_7,param_8);
    FUN_7103776910(&local_50,(long)plVar1,(long ****)"txt_header_01",pppplVar8,param_4,param_5,
                   param_6,param_7,param_8);
    FUN_710377a120((long)&local_50,"mnu_online_room_create_detail",pppplVar8,param_4,param_5,param_6
                   ,param_7,param_8);
    FUN_7103776910(&local_a0,(long)plVar1,(long ****)"set_txt_help",pppplVar8,param_4,param_5,
                   param_6,param_7,param_8);
    FUN_710377a120((long)&local_a0,"",pppplVar8,param_4,param_5,param_6,param_7,param_8);
    uVar5 = local_98;
    local_a0 = &PTR_FUN_710523d9a8;
    local_98 = 0;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
    if (*(int *)(param_1 + 0xf0) != -1) {
      param_4 = (byte ****)0x1;
      FUN_7103783c10(plVar12,*(int *)(param_1 + 0xf0),0,1,param_5,param_6,param_7,param_8);
      pppplVar8 = (long ****)(ulong)*(uint *)(param_1 + 0xf0);
      FUN_7101c93960(param_1,(long)plVar1,pppplVar8,param_4,param_5,param_6,param_7,param_8);
    }
    FUN_710377cc80(*(long *)(param_1 + 0xf8),1);
    if (*(int *)(param_1 + 0xf0) != -1) {
      lVar10 = *plVar12;
      iVar7 = *(int *)(lVar10 + 0x2c8);
      if ((iVar7 < 0) || (*(int *)(lVar10 + 0x2c0) <= iVar7)) {
        FUN_7103776290(&local_a0,extraout_x1,pppplVar8,param_4,param_5,param_6,param_7,param_8);
      }
      else {
        FUN_7103776390(&local_a0,
                       (undefined8 *)(*(long *)(*(long *)(lVar10 + 0x168) + (long)iVar7 * 8) + 8),
                       pppplVar8,param_4,param_5,param_6,param_7,param_8);
      }
      uVar2 = *(uint *)(param_1 + 0xf0);
      if (uVar2 < 7) {
        uVar5 = (ulong)*(byte *)((long)(int)uVar2 + param_1 + 0x110);
        FUN_7101c91cb0(param_1,(long)&local_a0,uVar5,(byte ****)uVar5,(long ****)(long)(int)uVar2,1,
                       param_7,param_8);
        uVar5 = local_98;
        local_a0 = &PTR_FUN_710523d988;
        local_98 = 0;
        if (uVar5 != 0) {
          uVar6 = *(ulong *)(uVar5 + 0x18);
          *(undefined ***)(uVar5 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar5 + 0x18) = 0;
          if (uVar6 != 0) {
            FUN_710392eb40(uVar6);
          }
          FUN_710392eb40(uVar5);
        }
        goto LAB_7101c8e54c;
      }
      goto LAB_7101c8e578;
    }
    goto LAB_7101c8e54c;
  }
  FUN_7103778300(0x3f800000,plVar12[2],0x710434a431);
  FUN_7103778300(0x3f800000,plVar12[2],0x7104412ae3);
  (**(code **)(**(long **)(param_1 + 0x118) + 0x70))(*(long **)(param_1 + 0x118),1);
  (**(code **)(**(long **)(param_1 + 0x118) + 0x60))(*(long **)(param_1 + 0x118),1);
  (**(code **)(**(long **)(param_1 + 0x128) + 0x70))(*(long **)(param_1 + 0x128),0);
  (**(code **)(**(long **)(param_1 + 0x128) + 0x60))(*(long **)(param_1 + 0x128),1);
  bVar4 = FUN_7101704ba0(*(long *)(DAT_71052c4c58 + 8) + 0xa0);
  if (bVar4) {
    if (*(char *)(param_1 + 0x138) != '\0') goto LAB_7101c8e3d4;
LAB_7101c8e238:
    if ((((*(char *)(param_1 + 0x139) != '\0') || (*(char *)(param_1 + 0x13a) != '\0')) ||
        (*(char *)(param_1 + 0x13b) != '\0')) || (*(char *)(param_1 + 0x13c) != '\0'))
    goto LAB_7101c8e3d4;
    bVar4 = *(char *)(param_1 + 0x13d) != '\0';
  }
  else {
    FUN_7101797350(0);
    if (*(char *)(param_1 + 0x138) == '\0') goto LAB_7101c8e238;
LAB_7101c8e3d4:
    bVar4 = true;
  }
  FUN_7101c83c40((long *)(param_1 + 0x130),bVar4,pppplVar8,param_4,param_5,param_6,param_7,param_8);
  FUN_7101c83c40((long *)(param_1 + 0x120),1,pppplVar8,param_4,param_5,param_6,param_7,param_8);
  FUN_7103776910(&local_50,(long)plVar1,(long ****)"txt_header_00",pppplVar8,param_4,param_5,param_6
                 ,param_7,param_8);
  FUN_710377a120((long)&local_50,"mnu_online_room_create_search",pppplVar8,param_4,param_5,param_6,
                 param_7,param_8);
  if (*(int *)(param_1 + 0xf0) != -1) {
    param_4 = (byte ****)0x1;
    pppplVar8 = (long ****)0x0;
    FUN_7103783c10((long *)(param_1 + 0x118),*(int *)(param_1 + 0xf0),0,1,param_5,param_6,param_7,
                   param_8);
  }
  FUN_710377cc80(*(long *)(param_1 + 0x118),1);
  if (*(int *)(param_1 + 0xf0) != -1) {
    lVar10 = *(long *)(param_1 + 0x118);
    iVar7 = *(int *)(lVar10 + 0x2c8);
    if ((iVar7 < 0) || (*(int *)(lVar10 + 0x2c0) <= iVar7)) {
      FUN_7103776290(&local_a0,extraout_x1_00,pppplVar8,param_4,param_5,param_6,param_7,param_8);
    }
    else {
      FUN_7103776390(&local_a0,
                     (undefined8 *)(*(long *)(*(long *)(lVar10 + 0x168) + (long)iVar7 * 8) + 8),
                     pppplVar8,param_4,param_5,param_6,param_7,param_8);
    }
    uVar2 = *(uint *)(param_1 + 0xf0);
    if (5 < uVar2) {
LAB_7101c8e578:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    puVar9 = (undefined1 *)(ulong)*(byte *)((long)(int)uVar2 + param_1 + 0x138);
    FUN_7101c8f600(param_1,(long)&local_a0,puVar9,(byte ****)puVar9,(long ****)(long)(int)uVar2,1,
                   param_7,param_8);
    uVar5 = local_98;
    local_a0 = &PTR_FUN_710523d988;
    local_98 = 0;
    if (uVar5 != 0) {
      uVar6 = *(ulong *)(uVar5 + 0x18);
      *(undefined ***)(uVar5 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar5 + 0x18) = 0;
      if (uVar6 != 0) {
        FUN_710392eb40(uVar6);
      }
      FUN_710392eb40(uVar5);
    }
  }
LAB_7101c8e54c:
  uVar5 = local_48;
  local_50 = &PTR_FUN_710523d9a8;
  local_48 = 0;
  if (uVar5 != 0) {
    FUN_710392eb40(uVar5);
  }
  *(undefined4 *)(param_1 + 0xe8) = 0;
  return;
}

