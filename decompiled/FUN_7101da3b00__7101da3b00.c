// addr:      7101da3b00
// offset:    0x1da3b00
// name:      FUN_7101da3b00
// mangled:   
// signature: undefined __cdecl FUN_7101da3b00(undefined8 * param_1, undefined8 param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, ulong param_7, undefined8 param_8)


void FUN_7101da3b00(undefined8 *param_1,undefined8 param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,ulong param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  char *pcVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  long lVar12;
  undefined4 local_138 [2];
  undefined **local_130;
  long local_128;
  undefined8 local_120;
  undefined1 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined2 local_f8;
  undefined6 uStack_f6;
  undefined2 local_f0;
  undefined2 uStack_ee;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined2 local_e4;
  undefined4 local_b4;
  undefined1 local_b0;
  undefined4 local_ac;
  undefined1 local_a8;
  undefined **local_a0;
  ulong local_98;
  undefined4 local_90;
  undefined2 local_8c;
  undefined4 local_8a;
  undefined1 local_86;
  undefined **local_80;
  ulong local_78;
  undefined **local_70;
  ulong local_68;
  
  if (*(int *)((long)param_1 + 0x774) == 0) {
    FUN_7101da5650(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    plVar4 = param_1 + 0xe;
    (**(code **)(*(long *)*plVar4 + 0x70))((long *)*plVar4,1);
    (**(code **)(*(long *)param_1[0x10] + 0x70))((long *)param_1[0x10],0);
    (**(code **)(*(long *)param_1[0xf] + 0x70))((long *)param_1[0xf],0);
    (**(code **)(*(long *)param_1[0x11] + 0x70))((long *)param_1[0x11],0);
    lVar12 = *(long *)(param_1[1] + 0x80);
    (**(code **)(**(long **)(lVar12 + 0x2268) + 0x70))(*(long **)(lVar12 + 0x2268),0);
    if (*(char *)(lVar12 + 0x11b4) == '\0') {
      FUN_7103771a80((long *)(lVar12 + 0x2268),3,0);
    }
    else {
      lVar12 = *(long *)(lVar12 + 0x2268);
      if (*(int *)(lVar12 + 0x254) == 3) {
        FUN_710376b960(lVar12);
      }
    }
    FUN_7101da8880((long)param_1);
    if (*(int *)(param_1[0xe] + 0x254) != 3) {
      if (*(char *)((long)param_1 + 0x44f) != '\0') {
        FUN_7103771a80(plVar4,3,1);
        *(undefined2 *)((long)param_1 + 0x44e) = 0;
        return;
      }
      FUN_7103771a80(plVar4,3,0);
    }
    *(undefined1 *)((long)param_1 + 0x44e) = 0;
    return;
  }
  if (*(char *)((long)param_1 + 0x44e) != '\0') {
    FUN_7103776640(&local_70,(long)(param_1 + 10),(byte ****)"set_parts_btn_attacker",param_3,
                   param_4,param_5,param_6,param_7,param_8);
    uVar7 = local_68;
    lVar12 = *(long *)(local_68 + 8);
    if (lVar12 != 0) {
      plVar4 = (long *)FUN_71037964b0(lVar12,0x710436c90a);
      if (plVar4 != (long *)0x0) {
        uVar5 = (**(code **)(*plVar4 + 0x138))();
        if ((uVar5 & 1) == 0) goto LAB_7101da3d38;
        lVar12 = *(long *)(uVar7 + 8);
        if (lVar12 == 0) goto LAB_7101da3bac;
      }
      plVar4 = (long *)FUN_71037964b0(lVar12,0x710436c90a);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x1a0))(0);
      }
    }
LAB_7101da3bac:
    FUN_7103776640(&local_80,(long)(param_1 + 10),(byte ****)"set_parts_slot",param_3,param_4,
                   param_5,param_6,param_7,param_8);
    if (*(int *)(param_1 + 0x16) != 0) {
      uVar11 = 0;
      do {
        param_3 = (long *********)(ulong)uVar11;
        FUN_7103776640((undefined8 *)&local_f8,(long)&local_80,(byte ****)"set_parts_btn_spter_%02d"
                       ,param_3,param_4,param_5,param_6,param_7,param_8);
        uVar5 = CONCAT44(uStack_ec,CONCAT22(uStack_ee,local_f0));
        if ((*(long *)(uVar5 + 8) != 0) &&
           (plVar4 = (long *)FUN_71037964b0(*(long *)(uVar5 + 8),0x710436c90a),
           plVar4 != (long *)0x0)) {
          (**(code **)(*plVar4 + 0x1a0))(0);
        }
        local_f8 = 0xd988;
        uStack_f6 = 0x710523;
        local_f0 = 0;
        uStack_ee = 0;
        uStack_ec = 0;
        if (uVar5 != 0) {
          uVar6 = *(ulong *)(uVar5 + 0x18);
          *(undefined ***)(uVar5 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar5 + 0x18) = 0;
          if (uVar6 != 0) {
            FUN_710392eb40(uVar6);
          }
          FUN_710392eb40(uVar5);
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < *(uint *)(param_1 + 0x16));
    }
    local_a0 = &PTR_FUN_71050c0b38;
    local_98 = 0xffffffffffffffff;
    local_8c = 0;
    local_90 = 0;
    local_8a = 0xffff;
    local_86 = 0;
    if (*(uint *)(param_1 + 0x1c) < 4) {
      FUN_7102529a70((long)&local_a0,(long)param_1 + (ulong)*(uint *)(param_1 + 0x1c) * 0x54 + 0x268
                    );
      local_f8 = 0xffff;
      uStack_ec = 0;
      uStack_e8 = 0;
      local_e4 = 0;
      local_b4 = 0xffffffff;
      local_b0 = 0;
      local_ac = 0;
      local_a8 = 0;
      uStack_f6 = 0xffffffffffff;
      local_f0 = 0xffff;
      FUN_7101da9670((long)param_1,(long *)&local_f8,param_3,param_4,param_5,param_6,param_7,param_8
                    );
      FUN_7101da9e30(param_1,*(uint *)(param_1 + 0x1c),(long *********)&local_f8,(byte ****)0x0,
                     param_5,param_6,param_7,param_8);
      uVar5 = local_78;
      *(undefined1 *)((long)param_1 + 0x44e) = 0;
      **(uint **)(DAT_710593b988 + 8) = **(uint **)(DAT_710593b988 + 8) & 0xfffffffd;
      local_80 = &PTR_FUN_710523d988;
      local_78 = 0;
      if (uVar5 != 0) {
        uVar6 = *(ulong *)(uVar5 + 0x18);
        *(undefined ***)(uVar5 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar5 + 0x18) = 0;
        if (uVar6 != 0) {
          FUN_710392eb40(uVar6);
        }
        FUN_710392eb40(uVar5);
      }
LAB_7101da3d38:
      local_70 = &PTR_FUN_710523d988;
      local_68 = 0;
      if (uVar7 != 0) {
        uVar5 = *(ulong *)(uVar7 + 0x18);
        *(undefined ***)(uVar7 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar7 + 0x18) = 0;
        if (uVar5 != 0) {
          FUN_710392eb40(uVar5);
        }
        FUN_710392eb40(uVar7);
      }
      return;
    }
    goto LAB_7101da43a0;
  }
  FUN_7101da5740((long)param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  if ((*(char *)(param_1[0xe] + 0x280) != '\0') && (*(int *)(param_1 + 0x85) != 2)) {
    lVar12 = *(long *)(param_1[1] + 0x80);
    if (*(char *)(lVar12 + 0xc9) == '\0') {
      iVar9 = 4;
    }
    else {
      iVar9 = 0;
    }
    FUN_7103771be0((long *)(lVar12 + 0x2260),iVar9,0);
    *(undefined4 *)(lVar12 + 0x2270) = *(undefined4 *)(*(long *)(lVar12 + 0x2260) + 0x25c);
    FUN_7103771a80(param_1 + 0xe,1,0);
    iVar9 = 5;
    goto LAB_7101da42c4;
  }
  lVar12 = *(long *)(**(long **)param_1[4] + 0x600);
  if (*(char *)(lVar12 + 0x4aa) == '\0') goto LAB_7101da42c0;
  if ((*(byte *)(lVar12 + 0x1d4) >> 1 & 1) == 0) {
    if ((*(byte *)(lVar12 + 0x1d8) >> 1 & 1) == 0) {
      if (((*(int *)(param_1 + 0x16) < 1) || (*(char *)(lVar12 + 0x4aa) == '\0')) ||
         ((*(byte *)(lVar12 + 0x1b0) >> 1 & 1) == 0)) {
        if ((*(byte *)(lVar12 + 0x1c0) >> 1 & 1) == 0) {
          if ((*(byte *)(lVar12 + 0x1c8) >> 1 & 1) != 0) {
            if (*(int *)(param_1 + 0x85) == 2) {
              pcVar8 = "set_parts_det_key_05";
            }
            else {
              pcVar8 = "set_parts_det_key_02";
            }
            FUN_7103776640((undefined8 *)&local_f8,(long)(param_1 + 10),(byte ****)pcVar8,param_3,
                           param_4,param_5,param_6,param_7,param_8);
            uVar7 = CONCAT44(uStack_ec,CONCAT22(uStack_ee,local_f0));
            FUN_7103778300(0x3f800000,uVar7,0x71042a357e);
            local_f8 = 0xd988;
            uStack_f6 = 0x710523;
            local_f0 = 0;
            uStack_ee = 0;
            uStack_ec = 0;
            if (uVar7 != 0) {
              uVar5 = *(ulong *)(uVar7 + 0x18);
              *(undefined ***)(uVar7 + 0x10) = &PTR_FUN_710523d9a8;
              *(undefined8 *)(uVar7 + 0x18) = 0;
              if (uVar5 != 0) {
                FUN_710392eb40(uVar5);
              }
              FUN_710392eb40(uVar7);
            }
            FUN_7101dab570(param_1,1,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
          }
        }
        else if (*(short *)(param_1 + 0x13) != -1) {
          puVar1 = param_1 + 10;
          FUN_7103776640((undefined8 *)&local_f8,(long)puVar1,(byte ****)"set_parts_det_key_00",
                         param_3,param_4,param_5,param_6,param_7,param_8);
          uVar7 = CONCAT44(uStack_ec,CONCAT22(uStack_ee,local_f0));
          FUN_7103778300(0x3f800000,uVar7,0x71042a357e);
          local_f8 = 0xd988;
          uStack_f6 = 0x710523;
          local_f0 = 0;
          uStack_ee = 0;
          uStack_ec = 0;
          if (uVar7 != 0) {
            uVar5 = *(ulong *)(uVar7 + 0x18);
            *(undefined ***)(uVar7 + 0x10) = &PTR_FUN_710523d9a8;
            *(undefined8 *)(uVar7 + 0x18) = 0;
            if (uVar5 != 0) {
              FUN_710392eb40(uVar5);
            }
            FUN_710392eb40(uVar7);
          }
          lVar12 = *(long *)(DAT_710532f8d0 + 8);
          if ((ulong)(*(long *)(lVar12 + 0x48) - *(long *)(lVar12 + 0x40) >> 3) < 3) {
            uVar7 = 0;
            if (*(char *)(lVar12 + 0x191) == '\0') goto LAB_7101da4080;
LAB_7101da40f0:
            local_120 = 0x87650000000000;
            local_110 = 0xffffffffffffffff;
            uStack_108 = 0;
            local_138[0] = 0;
            local_100 = 0;
          }
          else {
            uVar7 = *(ulong *)(*(long *)(lVar12 + 0x40) + 0x10);
            if (*(char *)(lVar12 + 0x191) != '\0') goto LAB_7101da40f0;
LAB_7101da4080:
            param_3 = (long *********)&DAT_00000004;
            uVar5 = FUN_7103313f20(lVar12,uVar7,(long ****)&DAT_00000004,param_4,param_5,param_6,
                                   param_7,param_8);
            if ((uVar5 & 1) == 0) goto LAB_7101da40f0;
            FUN_71024076d0(local_138,uVar7);
            if (((local_128 != 0) && (DAT_7106dd53a8 == '\x01')) &&
               ((int)local_120 == DAT_7106dd53ac)) {
              piVar10 = (int *)(local_128 + 0x38);
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar10,0x10);
                if (bVar3) {
                  *piVar10 = *piVar10 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
          }
          local_130 = &PTR_FUN_7104f73d50;
          local_128 = 0;
          local_118 = 0;
          FUN_7103776640((undefined8 *)&local_f8,(long)puVar1,(byte ****)"set_parts_btn_attacker",
                         param_3,param_4,param_5,param_6,param_7,param_8);
          uVar7 = CONCAT44(uStack_ec,CONCAT22(uStack_ee,local_f0));
          FUN_7103778300(0x3f800000,uVar7,0x710436c90a);
          *(undefined1 *)((long)param_1 + 0x44e) = 1;
          **(uint **)(DAT_710593b988 + 8) = **(uint **)(DAT_710593b988 + 8) | 2;
          FUN_7103776640(&local_a0,(long)puVar1,(byte ****)"set_parts_slot",param_3,param_4,param_5,
                         param_6,param_7,param_8);
          if (*(int *)(param_1 + 0x16) != 0) {
            uVar11 = 0;
            do {
              FUN_7103776640(&local_70,(long)&local_a0,(byte ****)"set_parts_btn_spter_%02d",
                             (ulong)uVar11,param_4,param_5,param_6,param_7,param_8);
              uVar5 = local_68;
              FUN_7103778300(0x3f800000,local_68,0x710436c90a);
              local_70 = &PTR_FUN_710523d988;
              local_68 = 0;
              if (uVar5 != 0) {
                uVar6 = *(ulong *)(uVar5 + 0x18);
                *(undefined ***)(uVar5 + 0x10) = &PTR_FUN_710523d9a8;
                *(undefined8 *)(uVar5 + 0x18) = 0;
                if (uVar6 != 0) {
                  FUN_710392eb40(uVar6);
                }
                FUN_710392eb40(uVar5);
              }
              uVar11 = uVar11 + 1;
            } while (uVar11 < *(uint *)(param_1 + 0x16));
          }
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
          local_f8 = 0xd988;
          uStack_f6 = 0x710523;
          local_f0 = 0;
          uStack_ee = 0;
          uStack_ec = 0;
          if (uVar7 != 0) {
            uVar5 = *(ulong *)(uVar7 + 0x18);
            *(undefined ***)(uVar7 + 0x10) = &PTR_FUN_710523d9a8;
            *(undefined8 *)(uVar7 + 0x18) = 0;
            if (uVar5 != 0) {
              FUN_710392eb40(uVar5);
            }
            FUN_710392eb40(uVar7);
          }
        }
LAB_7101da42c0:
        iVar9 = 0;
      }
      else {
        (**(code **)(*(long *)param_1[0x10] + 0x70))((long *)param_1[0x10],1);
        if (3 < *(uint *)(param_1 + 0x1c)) goto LAB_7101da43a0;
        FUN_7101dabb40((long)param_1,(long)param_1 + (ulong)*(uint *)(param_1 + 0x1c) * 0x54 + 0x268
                       ,0);
        iVar9 = 9;
      }
    }
    else {
      iVar9 = 7;
      if (*(int *)(param_1 + 0x85) != 2) {
        iVar9 = 5;
      }
    }
  }
  else {
    plVar4 = (long *)param_1[0xf];
    (**(code **)(*plVar4 + 0x70))(plVar4,1);
    iVar9 = 10;
    FUN_7103771a80(param_1 + 0xf,10,0);
  }
LAB_7101da42c4:
  uVar7 = (**(code **)(*(long *)param_1[0x10] + 0x78))();
  if ((uVar7 & 1) == 0) {
    uVar7 = (**(code **)(*(long *)param_1[0xf] + 0x78))();
    if ((uVar7 & 1) == 0) {
      uVar7 = (**(code **)(**(long **)(*(long *)(param_1[1] + 0x80) + 0x2268) + 0x78))();
      if ((uVar7 & 1) == 0) {
        if (iVar9 == 0) {
          return;
        }
        if (iVar9 == 5) {
          if (*(uint *)((long)param_1 + 0x76c) < 0x13) {
            *(undefined4 *)((long)param_1 + (long)(int)*(uint *)((long)param_1 + 0x76c) * 4 + 0x720)
                 = 5;
            return;
          }
          goto LAB_7101da43a0;
        }
      }
      else if (*(int *)(param_1 + 0x85) == 2) {
        iVar9 = 7;
      }
      else {
        iVar9 = 6;
        *(undefined1 *)((long)param_1 + 0x44f) = 1;
      }
    }
    else {
      iVar9 = 10;
    }
  }
  else {
    iVar9 = 9;
  }
  FUN_710376b960(param_1[0xe]);
  if (*(uint *)((long)param_1 + 0x76c) < 0x13) {
    *(int *)((long)param_1 + (long)(int)*(uint *)((long)param_1 + 0x76c) * 4 + 0x720) = iVar9;
    return;
  }
LAB_7101da43a0:
                    /* WARNING: Subroutine does not return */
  abort();
}

