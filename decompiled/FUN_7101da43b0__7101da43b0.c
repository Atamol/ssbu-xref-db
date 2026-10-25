// addr:      7101da43b0
// offset:    0x1da43b0
// name:      FUN_7101da43b0
// mangled:   
// signature: undefined __cdecl FUN_7101da43b0(undefined8 * param_1, undefined8 param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, ulong param_7, undefined8 param_8)


void FUN_7101da43b0(undefined8 *param_1,undefined8 param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,ulong param_7,undefined8 param_8)

{
  int iVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  char *pcVar9;
  ulong uVar10;
  ulong uVar11;
  int *piVar12;
  int iVar13;
  long lVar14;
  undefined4 local_128 [2];
  undefined **local_120;
  long local_118;
  undefined8 local_110;
  undefined1 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined2 local_e0;
  undefined2 uStack_de;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined2 local_d4;
  undefined4 local_a4;
  undefined1 local_a0;
  undefined4 local_9c;
  undefined1 local_98;
  undefined **local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined2 local_7c;
  undefined4 local_7a;
  undefined1 local_76;
  undefined **local_70;
  ulong local_68;
  undefined **local_60;
  ulong local_58;
  
  if (*(int *)((long)param_1 + 0x774) == 0) {
    FUN_7101da5650(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    (**(code **)(*(long *)param_1[0xe] + 0x70))((long *)param_1[0xe],0);
    (**(code **)(*(long *)param_1[0x10] + 0x70))((long *)param_1[0x10],1);
    (**(code **)(*(long *)param_1[0xf] + 0x70))((long *)param_1[0xf],0);
    (**(code **)(*(long *)param_1[0x11] + 0x70))((long *)param_1[0x11],0);
    lVar14 = *(long *)(param_1[1] + 0x80);
    (**(code **)(**(long **)(lVar14 + 0x2268) + 0x70))(*(long **)(lVar14 + 0x2268),0);
    if (*(char *)(lVar14 + 0x11b4) == '\0') {
      param_3 = (long *********)0x0;
      FUN_7103771a80((long *)(lVar14 + 0x2268),3,0);
    }
    else {
      lVar14 = *(long *)(lVar14 + 0x2268);
      if (*(int *)(lVar14 + 0x254) == 3) {
        FUN_710376b960(lVar14);
      }
    }
    FUN_7101da8880((long)param_1);
    iVar1 = *(int *)(param_1[0x10] + 0x254);
    *(int *)((long)param_1 + 0xd4) = iVar1;
    if (0x13 < iVar1) {
      FUN_7103776640(&local_e8,(long)(param_1 + 10),(byte ****)"set_parts_slot",param_3,param_4,
                     param_5,param_6,param_7,param_8);
      uVar10 = (ulong)(iVar1 - 0x14);
      FUN_7103776640(&local_90,(long)&local_e8,(byte ****)"set_parts_btn_spter_%02d",uVar10,param_4,
                     param_5,param_6,param_7,param_8);
      FUN_7103776640(&local_60,(long)&local_90,(byte ****)"set_parts_csr_01",uVar10,param_4,param_5,
                     param_6,param_7,param_8);
      uVar11 = local_58;
      FUN_7103778300(0x3f800000,local_58,0x7104412fd0);
      local_60 = &PTR_FUN_710523d988;
      local_58 = 0;
      if (uVar11 != 0) {
        uVar7 = *(ulong *)(uVar11 + 0x18);
        *(undefined ***)(uVar11 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar11 + 0x18) = 0;
        if (uVar7 != 0) {
          FUN_710392eb40(uVar7);
        }
        FUN_710392eb40(uVar11);
      }
      FUN_7103776640(&local_60,(long)&local_90,(byte ****)"set_parts_csr_02",uVar10,param_4,param_5,
                     param_6,param_7,param_8);
      uVar11 = local_58;
      FUN_7103778300(0x3f800000,local_58,0x7104412fd0);
      local_60 = &PTR_FUN_710523d988;
      local_58 = 0;
      if (uVar11 != 0) {
        uVar7 = *(ulong *)(uVar11 + 0x18);
        *(undefined ***)(uVar11 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar11 + 0x18) = 0;
        if (uVar7 != 0) {
          FUN_710392eb40(uVar7);
        }
        FUN_710392eb40(uVar11);
      }
      FUN_7103776640(&local_60,(long)&local_90,(byte ****)"set_parts_csr_03",uVar10,param_4,param_5,
                     param_6,param_7,param_8);
      uVar11 = local_58;
      FUN_7103778300(0x3f800000,local_58,0x7104412fd0);
      local_60 = &PTR_FUN_710523d988;
      local_58 = 0;
      if (uVar11 != 0) {
        uVar10 = *(ulong *)(uVar11 + 0x18);
        *(undefined ***)(uVar11 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar11 + 0x18) = 0;
        if (uVar10 != 0) {
          FUN_710392eb40(uVar10);
        }
        FUN_710392eb40(uVar11);
      }
      uVar11 = local_88;
      local_90 = &PTR_FUN_710523d988;
      local_88 = 0;
      if (uVar11 != 0) {
        uVar10 = *(ulong *)(uVar11 + 0x18);
        *(undefined ***)(uVar11 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar11 + 0x18) = 0;
        if (uVar10 != 0) {
          FUN_710392eb40(uVar10);
        }
        FUN_710392eb40(uVar11);
      }
      uVar11 = CONCAT44(uStack_dc,CONCAT22(uStack_de,local_e0));
      local_e8 = &PTR_FUN_710523d988;
      local_e0 = 0;
      uStack_de = 0;
      uStack_dc = 0;
      if (uVar11 != 0) {
        uVar10 = *(ulong *)(uVar11 + 0x18);
        *(undefined ***)(uVar11 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar11 + 0x18) = 0;
        if (uVar10 != 0) {
          FUN_710392eb40(uVar10);
        }
        FUN_710392eb40(uVar11);
      }
    }
    *(undefined1 *)((long)param_1 + 0x44e) = 0;
    return;
  }
  if (*(char *)((long)param_1 + 0x44e) != '\0') {
    uVar5 = *(int *)(param_1[0x10] + 0x254) - 0x14;
    FUN_7103776640(&local_60,(long)(param_1 + 10),(byte ****)"set_parts_slot",param_3,param_4,
                   param_5,param_6,param_7,param_8);
    uVar10 = (ulong)uVar5;
    FUN_7103776640(&local_70,(long)&local_60,(byte ****)"set_parts_btn_spter_%02d",uVar10,param_4,
                   param_5,param_6,param_7,param_8);
    uVar11 = local_68;
    lVar14 = *(long *)(local_68 + 8);
    if (lVar14 != 0) {
      plVar6 = (long *)FUN_71037964b0(lVar14,0x710436c90a);
      if (plVar6 != (long *)0x0) {
        uVar7 = (**(code **)(*plVar6 + 0x138))();
        if ((uVar7 & 1) == 0) goto LAB_7101da453c;
        lVar14 = *(long *)(local_68 + 8);
        if (lVar14 == 0) goto LAB_7101da4474;
      }
      plVar6 = (long *)FUN_71037964b0(lVar14,0x710436c90a);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x1a0))(0);
      }
    }
LAB_7101da4474:
    local_90 = &PTR_FUN_71050c0b38;
    local_88 = 0xffffffffffffffff;
    local_7c = 0;
    local_80 = 0;
    local_7a = 0xffff;
    local_76 = 0;
    if (*(uint *)(param_1 + 0x1c) < 4) {
      FUN_7102529a70((long)&local_90,(long)param_1 + (ulong)*(uint *)(param_1 + 0x1c) * 0x54 + 0x268
                    );
      FUN_710252a950((long)&local_90,(byte)uVar5);
      local_a4 = 0xffffffff;
      local_e8 = (undefined **)CONCAT44(local_88._2_4_,CONCAT22((undefined2)local_88,0xffff));
      uStack_dc = 0;
      uStack_d8 = 0;
      local_d4 = 0;
      local_a0 = 0;
      local_9c = 0;
      local_98 = 0;
      local_e0 = local_88._6_2_;
      FUN_7101da9670((long)param_1,&local_e8,uVar10,param_4,param_5,param_6,param_7,param_8);
      FUN_7101da9e30(param_1,*(uint *)(param_1 + 0x1c),(long *********)&local_e8,(byte ****)0x0,
                     param_5,param_6,param_7,param_8);
      *(undefined1 *)((long)param_1 + 0x44e) = 0;
      **(uint **)(DAT_710593b988 + 8) = **(uint **)(DAT_710593b988 + 8) & 0xfffffffd;
LAB_7101da453c:
      local_70 = &PTR_FUN_710523d988;
      local_68 = 0;
      if (uVar11 != 0) {
        uVar10 = *(ulong *)(uVar11 + 0x18);
        *(undefined ***)(uVar11 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar11 + 0x18) = 0;
        if (uVar10 != 0) {
          FUN_710392eb40(uVar10);
        }
        FUN_710392eb40(uVar11);
      }
      uVar11 = local_58;
      local_60 = &PTR_FUN_710523d988;
      local_58 = 0;
      if (uVar11 != 0) {
        uVar10 = *(ulong *)(uVar11 + 0x18);
        *(undefined ***)(uVar11 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar11 + 0x18) = 0;
        if (uVar10 != 0) {
          FUN_710392eb40(uVar10);
        }
        FUN_710392eb40(uVar11);
      }
      return;
    }
    goto LAB_7101da4fb4;
  }
  FUN_7101da5740((long)param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  plVar6 = param_1 + 0xe;
  iVar1 = *(int *)(param_1[0x10] + 0x254);
  if ((*(char *)(*plVar6 + 0x280) == '\0') || (*(int *)(param_1 + 0x85) == 2)) {
    lVar14 = *(long *)(**(long **)param_1[4] + 0x600);
    if (*(char *)(lVar14 + 0x4aa) == '\0') goto LAB_7101da4c08;
    iVar13 = (*(uint *)(lVar14 + 0x1b0) & 2) << 2;
    if (((*(uint *)(lVar14 + 0x1b0) >> 1 & 1) != 0) || (*(char *)(lVar14 + 0x4aa) == '\0'))
    goto LAB_7101da4c0c;
    if ((*(byte *)(lVar14 + 0x1c0) >> 1 & 1) == 0) {
      if ((*(byte *)(lVar14 + 0x1d8) >> 1 & 1) == 0) {
        if ((*(byte *)(lVar14 + 0x1d4) >> 1 & 1) == 0) {
          if ((*(byte *)(lVar14 + 0x1c8) >> 1 & 1) != 0) {
            if (*(int *)(param_1 + 0x85) == 2) {
              pcVar9 = "set_parts_det_key_06";
            }
            else {
              pcVar9 = "set_parts_det_key_04";
            }
            FUN_7103776640(&local_e8,(long)(param_1 + 10),(byte ****)pcVar9,param_3,param_4,param_5,
                           param_6,param_7,param_8);
            uVar11 = CONCAT44(uStack_dc,CONCAT22(uStack_de,local_e0));
            FUN_7103778300(0x3f800000,uVar11,0x71042a357e);
            local_e8 = &PTR_FUN_710523d988;
            local_e0 = 0;
            uStack_de = 0;
            uStack_dc = 0;
            if (uVar11 != 0) {
              uVar10 = *(ulong *)(uVar11 + 0x18);
              *(undefined ***)(uVar11 + 0x10) = &PTR_FUN_710523d9a8;
              *(undefined8 *)(uVar11 + 0x18) = 0;
              if (uVar10 != 0) {
                FUN_710392eb40(uVar10);
              }
              FUN_710392eb40(uVar11);
            }
            FUN_7101dab570(param_1,0,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
          }
        }
        else if ((iVar1 == 0x14) && (*(int *)((long)param_1 + 0xd4) == 0x14)) {
          plVar8 = (long *)param_1[0xf];
          (**(code **)(*plVar8 + 0x70))(plVar8,1);
          param_3 = (long *********)0x0;
          FUN_7103771a80(param_1 + 0xf,0xb,0);
          iVar13 = 10;
          goto LAB_7101da4c0c;
        }
      }
      else if ((iVar1 == *(int *)((long)param_1 + 0xb4) + 0x13) &&
              (*(int *)((long)param_1 + 0xd4) == iVar1)) {
        iVar13 = 6;
        if (*(int *)(param_1 + 0x85) == 2) {
          iVar13 = 7;
        }
        goto LAB_7101da4c0c;
      }
    }
    else {
      if (iVar1 == 0x16) {
        sVar2 = *(short *)((long)param_1 + 0xac);
      }
      else if (iVar1 == 0x15) {
        sVar2 = *(short *)((long)param_1 + 0xaa);
      }
      else {
        if (iVar1 != 0x14) goto LAB_7101da4c08;
        sVar2 = *(short *)(param_1 + 0x15);
      }
      if (sVar2 != -1) {
        lVar14 = *(long *)(DAT_710532f8d0 + 8);
        if ((ulong)(*(long *)(lVar14 + 0x48) - *(long *)(lVar14 + 0x40) >> 3) < 3) {
          uVar11 = 0;
        }
        else {
          uVar11 = *(ulong *)(*(long *)(lVar14 + 0x40) + 0x10);
        }
        if (*(char *)(lVar14 + 0x191) == '\0') {
          param_3 = (long *********)&DAT_00000004;
          uVar10 = FUN_7103313f20(lVar14,uVar11,(long ****)&DAT_00000004,param_4,param_5,param_6,
                                  param_7,param_8);
          if ((uVar10 & 1) == 0) goto LAB_7101da4a54;
          FUN_71024076d0(local_128,uVar11);
          if (((local_118 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_110 == DAT_7106dd53ac)
             ) {
            piVar12 = (int *)(local_118 + 0x38);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar12,0x10);
              if (bVar4) {
                *piVar12 = *piVar12 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
        }
        else {
LAB_7101da4a54:
          local_110 = 0x87650000000000;
          local_100 = 0xffffffffffffffff;
          uStack_f8 = 0;
          local_128[0] = 0;
          local_f0 = 0;
        }
        local_120 = &PTR_FUN_7104f73d50;
        local_118 = 0;
        local_108 = 0;
        FUN_7103776640(&local_e8,(long)(param_1 + 10),(byte ****)"set_parts_det_key_01",param_3,
                       param_4,param_5,param_6,param_7,param_8);
        uVar11 = CONCAT44(uStack_dc,CONCAT22(uStack_de,local_e0));
        FUN_7103778300(0x3f800000,uVar11,0x71042a357e);
        local_e8 = &PTR_FUN_710523d988;
        local_e0 = 0;
        uStack_de = 0;
        uStack_dc = 0;
        if (uVar11 != 0) {
          uVar10 = *(ulong *)(uVar11 + 0x18);
          *(undefined ***)(uVar11 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar11 + 0x18) = 0;
          if (uVar10 != 0) {
            FUN_710392eb40(uVar10);
          }
          FUN_710392eb40(uVar11);
        }
        FUN_7103776640(&local_e8,(long)(param_1 + 10),(byte ****)"set_parts_slot",param_3,param_4,
                       param_5,param_6,param_7,param_8);
        param_3 = (long *********)(ulong)(iVar1 - 0x14);
        FUN_7103776640(&local_90,(long)&local_e8,(byte ****)"set_parts_btn_spter_%02d",param_3,
                       param_4,param_5,param_6,param_7,param_8);
        uVar11 = local_88;
        FUN_7103778300(0x3f800000,local_88,0x710436c90a);
        *(undefined1 *)((long)param_1 + 0x44e) = 1;
        **(uint **)(DAT_710593b988 + 8) = **(uint **)(DAT_710593b988 + 8) | 2;
        local_90 = &PTR_FUN_710523d988;
        local_88 = 0;
        if (uVar11 != 0) {
          uVar10 = *(ulong *)(uVar11 + 0x18);
          *(undefined ***)(uVar11 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar11 + 0x18) = 0;
          if (uVar10 != 0) {
            FUN_710392eb40(uVar10);
          }
          FUN_710392eb40(uVar11);
        }
        uVar11 = CONCAT44(uStack_dc,CONCAT22(uStack_de,local_e0));
        local_e8 = &PTR_FUN_710523d988;
        local_e0 = 0;
        uStack_de = 0;
        uStack_dc = 0;
        if (uVar11 != 0) {
          uVar10 = *(ulong *)(uVar11 + 0x18);
          *(undefined ***)(uVar11 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar11 + 0x18) = 0;
          if (uVar10 != 0) {
            FUN_710392eb40(uVar10);
          }
          FUN_710392eb40(uVar11);
        }
      }
    }
LAB_7101da4c08:
    iVar13 = 0;
  }
  else {
    lVar14 = *(long *)(param_1[1] + 0x80);
    if (*(char *)(lVar14 + 0xc9) == '\0') {
      iVar13 = 4;
    }
    else {
      iVar13 = 0;
    }
    FUN_7103771be0((long *)(lVar14 + 0x2260),iVar13,0);
    *(undefined4 *)(lVar14 + 0x2270) = *(undefined4 *)(*(long *)(lVar14 + 0x2260) + 0x25c);
    (**(code **)(*(long *)*plVar6 + 0x70))((long *)*plVar6,1);
    param_3 = (long *********)0x0;
    FUN_7103771a80(plVar6,1,0);
    iVar13 = 5;
  }
LAB_7101da4c0c:
  if (*(int *)((long)param_1 + 0xd4) != iVar1) {
    FUN_7103776640(&local_e8,(long)(param_1 + 10),(byte ****)"set_parts_slot",param_3,param_4,
                   param_5,param_6,param_7,param_8);
    uVar11 = (ulong)(*(int *)((long)param_1 + 0xd4) - 0x14);
    if (0x13 < *(int *)((long)param_1 + 0xd4)) {
      FUN_7103776640(&local_90,(long)&local_e8,(byte ****)"set_parts_btn_spter_%02d",uVar11,param_4,
                     param_5,param_6,param_7,param_8);
      FUN_7103776640(&local_60,(long)&local_90,(byte ****)"set_parts_csr_01",uVar11,param_4,param_5,
                     param_6,param_7,param_8);
      uVar10 = local_58;
      FUN_7103778300(0x3f800000,local_58,0x710435be3c);
      local_60 = &PTR_FUN_710523d988;
      local_58 = 0;
      if (uVar10 != 0) {
        uVar7 = *(ulong *)(uVar10 + 0x18);
        *(undefined ***)(uVar10 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar10 + 0x18) = 0;
        if (uVar7 != 0) {
          FUN_710392eb40(uVar7);
        }
        FUN_710392eb40(uVar10);
      }
      FUN_7103776640(&local_60,(long)&local_90,(byte ****)"set_parts_csr_02",uVar11,param_4,param_5,
                     param_6,param_7,param_8);
      uVar10 = local_58;
      FUN_7103778300(0x3f800000,local_58,0x710435be3c);
      local_60 = &PTR_FUN_710523d988;
      local_58 = 0;
      if (uVar10 != 0) {
        uVar7 = *(ulong *)(uVar10 + 0x18);
        *(undefined ***)(uVar10 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar10 + 0x18) = 0;
        if (uVar7 != 0) {
          FUN_710392eb40(uVar7);
        }
        FUN_710392eb40(uVar10);
      }
      FUN_7103776640(&local_60,(long)&local_90,(byte ****)"set_parts_csr_03",uVar11,param_4,param_5,
                     param_6,param_7,param_8);
      uVar11 = local_58;
      FUN_7103778300(0x3f800000,local_58,0x710435be3c);
      local_60 = &PTR_FUN_710523d988;
      local_58 = 0;
      if (uVar11 != 0) {
        uVar10 = *(ulong *)(uVar11 + 0x18);
        *(undefined ***)(uVar11 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar11 + 0x18) = 0;
        if (uVar10 != 0) {
          FUN_710392eb40(uVar10);
        }
        FUN_710392eb40(uVar11);
      }
      uVar11 = local_88;
      local_90 = &PTR_FUN_710523d988;
      local_88 = 0;
      if (uVar11 != 0) {
        uVar10 = *(ulong *)(uVar11 + 0x18);
        *(undefined ***)(uVar11 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar11 + 0x18) = 0;
        if (uVar10 != 0) {
          FUN_710392eb40(uVar10);
        }
        FUN_710392eb40(uVar11);
      }
    }
    uVar11 = (ulong)(iVar1 - 0x14);
    if (0x13 < iVar1) {
      FUN_7103776640(&local_90,(long)&local_e8,(byte ****)"set_parts_btn_spter_%02d",uVar11,param_4,
                     param_5,param_6,param_7,param_8);
      FUN_7103776640(&local_60,(long)&local_90,(byte ****)"set_parts_csr_01",uVar11,param_4,param_5,
                     param_6,param_7,param_8);
      uVar10 = local_58;
      FUN_7103778300(0x3f800000,local_58,0x7104412fd0);
      local_60 = &PTR_FUN_710523d988;
      local_58 = 0;
      if (uVar10 != 0) {
        uVar7 = *(ulong *)(uVar10 + 0x18);
        *(undefined ***)(uVar10 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar10 + 0x18) = 0;
        if (uVar7 != 0) {
          FUN_710392eb40(uVar7);
        }
        FUN_710392eb40(uVar10);
      }
      FUN_7103776640(&local_60,(long)&local_90,(byte ****)"set_parts_csr_02",uVar11,param_4,param_5,
                     param_6,param_7,param_8);
      uVar10 = local_58;
      FUN_7103778300(0x3f800000,local_58,0x7104412fd0);
      local_60 = &PTR_FUN_710523d988;
      local_58 = 0;
      if (uVar10 != 0) {
        uVar7 = *(ulong *)(uVar10 + 0x18);
        *(undefined ***)(uVar10 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar10 + 0x18) = 0;
        if (uVar7 != 0) {
          FUN_710392eb40(uVar7);
        }
        FUN_710392eb40(uVar10);
      }
      FUN_7103776640(&local_60,(long)&local_90,(byte ****)"set_parts_csr_03",uVar11,param_4,param_5,
                     param_6,param_7,param_8);
      uVar11 = local_58;
      FUN_7103778300(0x3f800000,local_58,0x7104412fd0);
      local_60 = &PTR_FUN_710523d988;
      local_58 = 0;
      if (uVar11 != 0) {
        uVar10 = *(ulong *)(uVar11 + 0x18);
        *(undefined ***)(uVar11 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar11 + 0x18) = 0;
        if (uVar10 != 0) {
          FUN_710392eb40(uVar10);
        }
        FUN_710392eb40(uVar11);
      }
      uVar11 = local_88;
      local_90 = &PTR_FUN_710523d988;
      local_88 = 0;
      if (uVar11 != 0) {
        uVar10 = *(ulong *)(uVar11 + 0x18);
        *(undefined ***)(uVar11 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar11 + 0x18) = 0;
        if (uVar10 != 0) {
          FUN_710392eb40(uVar10);
        }
        FUN_710392eb40(uVar11);
      }
    }
    *(int *)((long)param_1 + 0xd4) = iVar1;
    uVar11 = CONCAT44(uStack_dc,CONCAT22(uStack_de,local_e0));
    local_e8 = &PTR_FUN_710523d988;
    local_e0 = 0;
    uStack_de = 0;
    uStack_dc = 0;
    if (uVar11 != 0) {
      uVar10 = *(ulong *)(uVar11 + 0x18);
      *(undefined ***)(uVar11 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar11 + 0x18) = 0;
      if (uVar10 != 0) {
        FUN_710392eb40(uVar10);
      }
      FUN_710392eb40(uVar11);
    }
  }
  uVar11 = (**(code **)(*(long *)*plVar6 + 0x78))();
  if ((uVar11 & 1) == 0) {
    uVar11 = (**(code **)(*(long *)param_1[0xf] + 0x78))();
    if ((uVar11 & 1) == 0) {
      uVar11 = (**(code **)(**(long **)(*(long *)(param_1[1] + 0x80) + 0x2268) + 0x78))();
      if ((uVar11 & 1) == 0) {
        if (iVar13 == 0) {
          return;
        }
      }
      else if (*(int *)(param_1 + 0x85) == 2) {
        iVar13 = 7;
      }
      else {
        *(undefined1 *)((long)param_1 + 0x44f) = 1;
        iVar13 = 6;
      }
    }
    else {
      iVar13 = 10;
    }
  }
  else {
    iVar13 = 8;
  }
  FUN_710376b960(param_1[0x10]);
  if (*(uint *)((long)param_1 + 0x76c) < 0x13) {
    *(int *)((long)param_1 + (long)(int)*(uint *)((long)param_1 + 0x76c) * 4 + 0x720) = iVar13;
    return;
  }
LAB_7101da4fb4:
                    /* WARNING: Subroutine does not return */
  abort();
}

